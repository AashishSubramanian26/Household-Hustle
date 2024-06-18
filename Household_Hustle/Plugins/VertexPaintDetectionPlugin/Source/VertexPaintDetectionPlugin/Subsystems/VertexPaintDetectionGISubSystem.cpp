// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 


#include "VertexPaintDetectionGISubSystem.h"

// Engine 
#include "Kismet/KismetMathLibrary.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetRegistry/AssetData.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "Rendering/SkeletalMeshRenderData.h"
#include "Materials/MaterialInstance.h"
#include "Async/Async.h"
#include "Engine/StaticMesh.h"
#include "StaticMeshResources.h"
#include "Components/SkeletalMeshComponent.h"

// Plugin
#include "VertexPaintDetectionTaskQueue.h"
#include "VertexPaintFunctionLibrary.h"
#include "VertexPaintMaterialDataAsset.h"
#include "VertexPaintDetectionInterface.h"
#include "VertexPaintDetectionComponent.h"
#include "VertexPaintDetectionSettings.h"
#include "VertexPaintColorSnippetRefs.h"
#include "VertexPaintOptimizationDataAsset.h"
#include "VertexPaintDetectionLog.h"

// UE5
#if ENGINE_MAJOR_VERSION == 5

#include "Components/DynamicMeshComponent.h"
#include "GeometryScript/MeshVertexColorFunctions.h"

#if ENGINE_MINOR_VERSION >= 2
#include "StaticMeshComponentLODInfo.h"
#endif

#if ENGINE_MINOR_VERSION >= 3
#include "GeometryCollection/GeometryCollectionComponent.h"
#include "GeometryCollection/GeometryCollection.h"
#include "GeometryCollection/GeometryCollectionObject.h"
#endif

#if ENGINE_MINOR_VERSION >= 4
#include "Rendering/RenderCommandPipes.h"
#endif

#endif



//--------------------------------------------------------

// Initialize

void UVertexPaintDetectionGISubSystem::Initialize(FSubsystemCollectionBase& Collection) {


	RVPDP_LOG(FVertexPaintDebugSettings(false, 0, true), FColor::Cyan, "Game Instance Subsystem Initialized");


	// Caches these so they're in memory at all time
	if (auto vertexPaintDetectionSettings_Local = GetDefault<UVertexPaintDetectionSettings>())
		vertexPaintColorSnippetReferenceDataAssetCache = vertexPaintDetectionSettings_Local->vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse.LoadSynchronous();

	if (auto vertexPaintDetectionSettings_Local = GetDefault<UVertexPaintDetectionSettings>())
		vertexPaintOptimizationDataAssetCache = vertexPaintDetectionSettings_Local->vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse.LoadSynchronous();

	if (auto vertexPaintDetectionSettings_Local = GetDefault<UVertexPaintDetectionSettings>())
		vertexPaintMaterialDataAssetCache = vertexPaintDetectionSettings_Local->vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse.LoadSynchronous();


	taskQueue = NewObject<UVertexPaintDetectionTaskQueue>(this, UVertexPaintDetectionTaskQueue::StaticClass());

	if (taskQueue) {

		RVPDP_LOG(FVertexPaintDebugSettings(false, 0, true), FColor::Cyan, "Task Queue Successfully Created");

		taskQueue->vertexPaintTaskSuccessDelegate.BindUObject(this, &UVertexPaintDetectionGISubSystem::CalculateColorsSuccess);
		taskQueue->vertexPaintTaskFailedDelegate.BindUObject(this, &UVertexPaintDetectionGISubSystem::CalculateColorsFailed);
	}


	// Caches All Physical Materials so when we run UVertexPaintFunctionLibrary::GetPhysicalMaterialUsingPhysicsSurface we can just look through these instead of running GetAssetsByClass every time which is very expensive. 

	FAssetRegistryModule& AssetRegistryModule_Local = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	TArray<FAssetData> AssetData_Local;


#if ENGINE_MAJOR_VERSION == 4

	AssetRegistryModule_Local.Get().GetAssetsByClass(UPhysicalMaterial::StaticClass()->GetFName(), AssetData_Local, true);

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

	AssetRegistryModule_Local.Get().GetAssetsByClass(UPhysicalMaterial::StaticClass()->GetFName(), AssetData_Local, true);


#else

	AssetRegistryModule_Local.Get().GetAssetsByClass(UPhysicalMaterial::StaticClass()->GetClassPathName(), AssetData_Local, true);

#endif
#endif


	cachedPhysicalMaterialAssets.Empty();

	for (auto asset_Local : AssetData_Local) {

		if (auto physicalMaterialTemp = Cast<UPhysicalMaterial>(asset_Local.GetAsset())) {

			if (physicalMaterialTemp->SurfaceType != EPhysicalSurface::SurfaceType_Default)
				cachedPhysicalMaterialAssets.Add(physicalMaterialTemp->SurfaceType, physicalMaterialTemp);
		}
	}

	if (cachedPhysicalMaterialAssets.Num() <= 0) {

		RVPDP_LOG(FVertexPaintDebugSettings(false, 0, true), FColor::Cyan, "NOTE The Plugins Plugin Game Instance Subsystem couldn't find any Physical Material Assets that had any physical surface set, so you will not be able to use GetPhysicalMaterialUsingPhysicsSurface function. \nIf you don't have any Physical Materials with physics surfaces set, then you can disregard this, otherwise you can in the Project Settings->Packaging, add Additional Directories to Cook, you can add the folder that has all the Physical Materials, then they will always be included in a Build and be Accessible.");
	}
}


//-------------------------------------------------------

// Calculate Colors Success

void UVertexPaintDetectionGISubSystem::CalculateColorsSuccess(const FCalculateColorsInfo& calculateColorsInfo) {

	if (!calculateColorsInfo.taskResult.taskSuccessfull) return;

	bool colorBuffersCleanedUp = false;

	
	if (!calculateColorsInfo.paintTaskResult.anyVertexColorGotChanged || !calculateColorsInfo.vertexPaintSettings.applyPaintJobToVertexColors) {

		colorBuffersCleanedUp = true;

		// Cleans up the created color buffers that isn't going to be removed so we don't get memory leak
		for (auto createdColorBuffer : calculateColorsInfo.newColorVertexBufferPerLOD)
			AddColorVertexBufferToBufferCleanup(createdColorBuffer);
	}


	// If got Closest Vertex then gets UV as well
	TArray<FVector2D> closestVertexUV_Detection_Local;
	TArray<FVector2D> closestVertexUV_Painting_Local;
	if (calculateColorsInfo.closestVertexFound_Paint >= 0 || calculateColorsInfo.closestVertexFound_Detection >= 0) {

		if (calculateColorsInfo.vertexPaintStaticMeshComponent) {

			// Note that vertex UV is only available if CPU Access is true
			if (calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->bAllowCPUAccess) {

				if (calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[0].VertexBuffers.StaticMeshVertexBuffer.IsInitialized() && calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[0].VertexBuffers.StaticMeshVertexBuffer.TexCoordVertexBuffer.IsInitialized()) {

					// Had to use GetNumTexCoords since GetStaticMesh()->GetNumUVChannels(0); has a #if Editor only data
					for (uint32 i = 0; i < calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[0].VertexBuffers.StaticMeshVertexBuffer.GetNumTexCoords(); i++) {


#if ENGINE_MAJOR_VERSION == 4

						if (calculateColorsInfo.closestVertexFound_Paint >= 0)
							closestVertexUV_Painting_Local.Add(calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[0].VertexBuffers.StaticMeshVertexBuffer.GetVertexUV(calculateColorsInfo.closestVertexFound_Paint, i));

						if (calculateColorsInfo.closestVertexFound_Detection >= 0)
							closestVertexUV_Detection_Local.Add(calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[0].VertexBuffers.StaticMeshVertexBuffer.GetVertexUV(calculateColorsInfo.closestVertexFound_Detection, i));

#elif ENGINE_MAJOR_VERSION == 5

						if (calculateColorsInfo.closestVertexFound_Paint >= 0)
							closestVertexUV_Painting_Local.Add((FVector2D)calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[0].VertexBuffers.StaticMeshVertexBuffer.GetVertexUV(calculateColorsInfo.closestVertexFound_Paint, i));

						if (calculateColorsInfo.closestVertexFound_Detection >= 0)
							closestVertexUV_Detection_Local.Add((FVector2D)calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[0].VertexBuffers.StaticMeshVertexBuffer.GetVertexUV(calculateColorsInfo.closestVertexFound_Detection, i));

#endif

						if (closestVertexUV_Painting_Local.Num() > 0) {

							RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Static Mesh Component Closest Vertex UV at Channel for Painting: %s  -  %i", *closestVertexUV_Painting_Local[i].ToString(), i);
						}

						if (closestVertexUV_Detection_Local.Num() > 0) {

							RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Static Mesh Component Closest Vertex UV at Channel for Detection: %s  -  %i", *closestVertexUV_Detection_Local[i].ToString(), i);
						}
					}
				}
			}

			else {

				RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Can't get Closest Vertex UV since Mesh CPU Access is False");
			}
		}

		else if (calculateColorsInfo.vertexPaintSkelComponent) {

			FSkeletalMeshLODRenderData& LODData = calculateColorsInfo.vertexPaintSkelComponent->GetSkeletalMeshRenderData()->LODRenderData[0];

			if (LODData.StaticVertexBuffers.StaticMeshVertexBuffer.IsInitialized() && LODData.StaticVertexBuffers.StaticMeshVertexBuffer.TexCoordVertexBuffer.IsInitialized()) {

				for (uint32 i = 0; i < LODData.StaticVertexBuffers.StaticMeshVertexBuffer.GetNumTexCoords(); i++) {


#if ENGINE_MAJOR_VERSION == 4

					if (calculateColorsInfo.closestVertexFound_Paint >= 0)
						closestVertexUV_Painting_Local.Add(LODData.StaticVertexBuffers.StaticMeshVertexBuffer.GetVertexUV(calculateColorsInfo.closestVertexFound_Paint, i));

					if (calculateColorsInfo.closestVertexFound_Detection >= 0)
						closestVertexUV_Detection_Local.Add(LODData.StaticVertexBuffers.StaticMeshVertexBuffer.GetVertexUV(calculateColorsInfo.closestVertexFound_Detection, i));

#elif ENGINE_MAJOR_VERSION == 5

					if (calculateColorsInfo.closestVertexFound_Paint >= 0)
						closestVertexUV_Painting_Local.Add((FVector2D)LODData.StaticVertexBuffers.StaticMeshVertexBuffer.GetVertexUV(calculateColorsInfo.closestVertexFound_Paint, i));

					if (calculateColorsInfo.closestVertexFound_Detection >= 0)
						closestVertexUV_Detection_Local.Add((FVector2D)LODData.StaticVertexBuffers.StaticMeshVertexBuffer.GetVertexUV(calculateColorsInfo.closestVertexFound_Detection, i));

#endif

					if (closestVertexUV_Painting_Local.Num() > 0) {

						RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Skeletal Mesh Component Closest Vertex UV at Channel for Painting: %s  -  %i", *closestVertexUV_Painting_Local[i].ToString(), i);
					}

					if (closestVertexUV_Detection_Local.Num() > 0) {

						RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Skeletal Mesh Component Closest Vertex UV at Channel for Detection: %s  -  %i", *closestVertexUV_Detection_Local[i].ToString(), i);
					}
				}
			}
		}

#if ENGINE_MAJOR_VERSION == 5

		else if (calculateColorsInfo.vertexPaintDynamicMeshComponent && calculateColorsInfo.vertexPaintDynamicMeshComponent->GetDynamicMesh()) {


			UE::Geometry::FDynamicMesh3* dynamicMesh3 = nullptr;
			dynamicMesh3 = &calculateColorsInfo.vertexPaintDynamicMeshComponent->GetDynamicMesh()->GetMeshRef();

			if (dynamicMesh3) {

				UE::Geometry::FVertexInfo vertexInfoTemp = UE::Geometry::FVertexInfo();

				if (calculateColorsInfo.closestVertexFound_Paint >= 0) {

					if (dynamicMesh3->IsVertex(calculateColorsInfo.closestVertexFound_Paint)) {


						dynamicMesh3->GetVertex(calculateColorsInfo.closestVertexFound_Paint, vertexInfoTemp, false, false, true);

						if (vertexInfoTemp.bHaveUV)
							closestVertexUV_Painting_Local.Add((FVector2D)vertexInfoTemp.UV);
					}
				}


				if (calculateColorsInfo.closestVertexFound_Detection >= 0) {

					if (dynamicMesh3->IsVertex(calculateColorsInfo.closestVertexFound_Detection)) {

						dynamicMesh3->GetVertex(calculateColorsInfo.closestVertexFound_Detection, vertexInfoTemp, false, false, true);

						if (vertexInfoTemp.bHaveUV)
							closestVertexUV_Detection_Local.Add(FVector2D(vertexInfoTemp.UV));
					}
				}
			}
		}

		// geometryCollectionData.Get()->GetUV didn't exist in 5.0, and since we can't paint or detect on them until 5.3 i added this check here. 



#if ENGINE_MINOR_VERSION >= 3

		else if (calculateColorsInfo.vertexPaintGeometryCollectionComponent && calculateColorsInfo.vertexPaintGeometryCollectionData) {


			for (int i = 0; i < calculateColorsInfo.vertexPaintGeometryCollectionData->NumUVLayers(); i++) {

				if (calculateColorsInfo.closestVertexFound_Paint >= 0) {

					closestVertexUV_Painting_Local.Add(((FVector2D)calculateColorsInfo.vertexPaintGeometryCollectionData->GetUV(calculateColorsInfo.closestVertexFound_Paint, i)));
				}

				if (calculateColorsInfo.closestVertexFound_Detection >= 0) {

					closestVertexUV_Detection_Local.Add(((FVector2D)calculateColorsInfo.vertexPaintGeometryCollectionData->GetUV(calculateColorsInfo.closestVertexFound_Detection, i)));
				}
			}
	}
#endif
#endif

}


	if (IsValid(calculateColorsInfo.paintOnMeshColorSettings.actor) && (calculateColorsInfo.fundementalStruct.debugSettings.printLogsToScreen || calculateColorsInfo.fundementalStruct.debugSettings.printLogsToOutputLog)) {


		if (calculateColorsInfo.paintTaskResult.anyVertexColorGotChanged)
			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Any Vertex Color Got Changed");
		else
			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Any Vertex Color Didn't Get Changed By Paint Job! ");


		// Prints info if we're for instance trying to Add color to an already fully painted mesh, if not painting with physics surface or overriding vertex colors to apply, so we can reliably use the RGBA colors to apply here. If painting with phys surface or overriding then can't in a clean and performant way here check how much that we for instance overrided for every vertex.
		if (IsValid(calculateColorsInfo.paintOnMeshColorSettings.actor)) {

			if (calculateColorsInfo.debugLog_AmountOfPaintedColorsOfEachChannelAboveZeroBeforeApplyingColor.successfullyGotColorChannelResultsAtMinAmount && !calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.applyVertexColorUsingPhysicsSurface && !calculateColorsInfo.overridenVertexColorsMadeChangeToColorsToApply) {


				// Checks if channel was fully painted and we where trying to add to it
				if (calculateColorsInfo.debugLog_AmountOfPaintedColorsOfEachChannelAboveZeroBeforeApplyingColor.redChannelResult.averageColorAmountAtMinAmount == 1 && calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.applyColorsOnRedChannel.amountToApply > 0 && calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.applyColorsOnRedChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) {

					RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Trying to Apply Color to Red with Add on an Already Fully Colored Mesh. So no visual difference will occur. ");
				}

				if (calculateColorsInfo.debugLog_AmountOfPaintedColorsOfEachChannelAboveZeroBeforeApplyingColor.greenChannelResult.averageColorAmountAtMinAmount == 1 && calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.applyColorsOnGreenChannel.amountToApply > 0 && calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.applyColorsOnGreenChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) {

					RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Trying to Apply Color to Green with Add on an Already Fully Colored Mesh. So no visual difference will occur. ");
				}

				if (calculateColorsInfo.debugLog_AmountOfPaintedColorsOfEachChannelAboveZeroBeforeApplyingColor.blueChannelResult.averageColorAmountAtMinAmount == 1 && calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.amountToApply > 0 && calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) {

					RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Trying to Apply Color to Blue with Add on an Already Fully Colored Mesh. So no visual difference will occur. ");
				}

				if (calculateColorsInfo.debugLog_AmountOfPaintedColorsOfEachChannelAboveZeroBeforeApplyingColor.alphaChannelResult.averageColorAmountAtMinAmount == 1 && calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.amountToApply > 0 && calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) {

					RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Trying to Apply Color to Alpha with Add on an Already Fully Colored Mesh. So no visual difference will occur. ");
				}


				// Checks if channel was empty and we where trying to remove from it
				if (calculateColorsInfo.debugLog_AmountOfPaintedColorsOfEachChannelAboveZeroBeforeApplyingColor.redChannelResult.averageColorAmountAtMinAmount == 0 && calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.applyColorsOnRedChannel.amountToApply < 0 && calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.applyColorsOnRedChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) {

					RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Trying to Remove Color to Red with Add on an Already Fully Colored Mesh. So no visual difference will occur. ");
				}

				if (calculateColorsInfo.debugLog_AmountOfPaintedColorsOfEachChannelAboveZeroBeforeApplyingColor.greenChannelResult.averageColorAmountAtMinAmount == 0 && calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.applyColorsOnGreenChannel.amountToApply < 0 && calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.applyColorsOnGreenChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) {

					RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Trying to Remove Color to Green with Add on an Already Fully Colored Mesh. So no visual difference will occur. ");
				}


				if (calculateColorsInfo.debugLog_AmountOfPaintedColorsOfEachChannelAboveZeroBeforeApplyingColor.blueChannelResult.averageColorAmountAtMinAmount == 0 && calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.amountToApply < 0 && calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) {

					RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Trying to Remove Color to Blue with Add on an Already Fully Colored Mesh. So no visual difference will occur. ");
				}

				if (calculateColorsInfo.debugLog_AmountOfPaintedColorsOfEachChannelAboveZeroBeforeApplyingColor.alphaChannelResult.averageColorAmountAtMinAmount == 0 && calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.amountToApply < 0 && calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) {

					RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Trying to Remove Color to Alpha with Add on an Already Fully Colored Mesh. So no visual difference will occur. ");
				}
			}
		}


		// Prints Amount, Percent and Average Color Before Applying any colors, i.e. if Detection Paint job or if ran a Detection before a Paint at Location
		if (calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor.successfullyGotColorChannelResultsAtMinAmount) {

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Before Applying Any Colors - Amount of Vertices with min Red Painted: %f - Amount of Vertices with min Green Painted: %f - Amount of Vertices with min Blue Painted: %f - Amount of Vertices with min Alpha Painted: %f", calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor.redChannelResult.amountOfVerticesPaintedAtMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor.greenChannelResult.amountOfVerticesPaintedAtMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor.blueChannelResult.amountOfVerticesPaintedAtMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor.alphaChannelResult.amountOfVerticesPaintedAtMinAmount);


			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Before Applying Any Colors - Amount of Red Channel Percent Painted: %f - Amount of Green Channel Percent Painted: %f - Amount of Blue Channel Percent Painted: %f - Amount of Alpha Channel Percent Painted: %f", calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor.redChannelResult.percentPaintedAtMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor.greenChannelResult.percentPaintedAtMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor.blueChannelResult.percentPaintedAtMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor.alphaChannelResult.percentPaintedAtMinAmount);


			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Before Applying Any Colors - Average Amount of Red Color: %f - Average Amount of Green Color: %f - Average Amount of Blue Color: %f - Average Amount of Alpha Color: %f", calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor.redChannelResult.averageColorAmountAtMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor.greenChannelResult.averageColorAmountAtMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor.blueChannelResult.averageColorAmountAtMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor.alphaChannelResult.averageColorAmountAtMinAmount);
		}

		if (calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor.successfullyGotPhysicsSurfaceResultsAtMinAmount) {

			for (auto physicsResultTemp : calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor.physicsSurfacesResult) {

				RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Before Applying Any Colors - Got Physics Surface Result at Min Amount for Physics Surface: %s - Amount of Vertices: %f - Amount of Percent: %f - Average Amount: %f", *StaticEnum<EPhysicalSurface>()->GetDisplayNameTextByValue(physicsResultTemp.Key.GetValue()).ToString(), physicsResultTemp.Value.amountOfVerticesPaintedAtMinAmount, physicsResultTemp.Value.percentPaintedAtMinAmount, physicsResultTemp.Value.averageColorAmountAtMinAmount);
			}
		}


		// Prints Amount, Percent and Average Color After Applying any colors, i.e. if it was a Paint Job
		if (calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor.successfullyGotColorChannelResultsAtMinAmount) {

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "After Applying Any Colors - Amount of Vertices with min Red Painted: %f - Amount of Vertices with min Green Painted: %f - Amount of Vertices with min Blue Painted: %f - Amount of Vertices with min Alpha Painted: %f", calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor.redChannelResult.amountOfVerticesPaintedAtMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor.greenChannelResult.amountOfVerticesPaintedAtMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor.blueChannelResult.amountOfVerticesPaintedAtMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor.alphaChannelResult.amountOfVerticesPaintedAtMinAmount);


			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "After Applying Any Colors - Amount of Red Channel Percent Painted: %f - Amount of Green Channel Percent Painted: %f - Amount of Blue Channel Percent Painted: %f - Amount of Alpha Channel Percent Painted: %f", calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor.redChannelResult.percentPaintedAtMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor.greenChannelResult.percentPaintedAtMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor.blueChannelResult.percentPaintedAtMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor.alphaChannelResult.percentPaintedAtMinAmount);


			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "After Applying Any Colors - Average Amount of Red Color: %f - Average Amount of Green Color: %f - Average Amount of Blue Color: %f - Average Amount of Alpha Color: %f", calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor.redChannelResult.averageColorAmountAtMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor.greenChannelResult.averageColorAmountAtMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor.blueChannelResult.averageColorAmountAtMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor.alphaChannelResult.averageColorAmountAtMinAmount);
		}

		if (calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor.successfullyGotPhysicsSurfaceResultsAtMinAmount) {

			for (auto physicsResultTemp : calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor.physicsSurfacesResult) {

				RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "After Applying Any Colors - Got Physics Surface Result at Min Amount for Physics Surface: %s - Amount of Vertices: %f - Amount of Percent: %f - Average Amount: %f", *StaticEnum<EPhysicalSurface>()->GetDisplayNameTextByValue(physicsResultTemp.Key.GetValue()).ToString(), physicsResultTemp.Value.amountOfVerticesPaintedAtMinAmount, physicsResultTemp.Value.percentPaintedAtMinAmount, physicsResultTemp.Value.averageColorAmountAtMinAmount);
			}
		}
	}


	switch (calculateColorsInfo.paintDetectionType) {

		case EVertexPaintDetectionType::GetClosestVertexDataDetection:

			GetClosestVertexDataOnMesh_WrapUp(calculateColorsInfo, calculateColorsInfo.getClosestVertexDataSettings, calculateColorsInfo.closestVertexColor_BeforeApplyingColors_Detect, calculateColorsInfo.avarageColorWithinArea_Detect_BeforeApplyingColor, calculateColorsInfo.estimatedColorAtHitLocation_BeforeApplyingColors_Detect, closestVertexUV_Detection_Local);
			BroadcastFinishedDetectTask(calculateColorsInfo);
			break;

		case EVertexPaintDetectionType::GetAllVertexColorDetection:

			GetAllVertexColorsOnly_WrapUp(calculateColorsInfo);
			BroadcastFinishedDetectTask(calculateColorsInfo);
			break;

		case EVertexPaintDetectionType::GetColorsWithinArea:

			GetColorsWithinArea_WrapUp(calculateColorsInfo);
			BroadcastFinishedDetectTask(calculateColorsInfo);

			break;

		case EVertexPaintDetectionType::PaintAtLocation:

			// Detection Before painting is applied, so you can for instance run proper SFX if a rain drop falls on a dry jacket before it gets wet
			if (calculateColorsInfo.paintOnMeshAtLocationSettings.getClosestVertexDataCombo.runGetClosestVertexDataOnMeshBeforeApplyingPaint) {

				GetClosestVertexDataOnMesh_WrapUp(calculateColorsInfo, calculateColorsInfo.getClosestVertexDataSettings, calculateColorsInfo.closestVertexColor_BeforeApplyingColors_Detect, calculateColorsInfo.avarageColorWithinArea_Detect_BeforeApplyingColor, calculateColorsInfo.estimatedColorAtHitLocation_BeforeApplyingColors_Detect, closestVertexUV_Detection_Local);

				BroadcastFinishedDetectTask(calculateColorsInfo);
			}

			colorBuffersCleanedUp = PaintOnMeshAtLocation_WrapUp(calculateColorsInfo, closestVertexUV_Painting_Local);
			BroadcastFinishedPaintTask(calculateColorsInfo);

			// Detect After
			if (calculateColorsInfo.paintOnMeshAtLocationSettings.getClosestVertexDataCombo.runGetClosestVertexDataOnMeshAfterApplyingPaint) {

				GetClosestVertexDataOnMesh_WrapUp(calculateColorsInfo, calculateColorsInfo.getClosestVertexDataSettings, calculateColorsInfo.closestVertexColor_AfterApplyingColors_Detect, calculateColorsInfo.avarageColorWithinArea_Detect_AfterApplyingColor, calculateColorsInfo.estimatedColorAtHitLocation_AfterApplyingColors_Detect, closestVertexUV_Detection_Local);

				BroadcastFinishedDetectTask(calculateColorsInfo);
			}
			break;

		case EVertexPaintDetectionType::PaintWithinArea:

			if (calculateColorsInfo.paintOnMeshWithinAreaSettings.getColorsWithinAreaCombo) {

				GetColorsWithinArea_WrapUp(calculateColorsInfo);
				BroadcastFinishedDetectTask(calculateColorsInfo);
			}

			colorBuffersCleanedUp = PaintWithinArea_WrapUp(calculateColorsInfo);
			BroadcastFinishedPaintTask(calculateColorsInfo);
			break;

		case EVertexPaintDetectionType::PaintEntireMesh:

			colorBuffersCleanedUp = PaintOnEntireMesh_WrapUp(calculateColorsInfo);
			BroadcastFinishedPaintTask(calculateColorsInfo);
			break;

		case EVertexPaintDetectionType::PaintColorSnippet:

			colorBuffersCleanedUp = PaintColorSnippet_WrapUp(calculateColorsInfo);
			BroadcastFinishedPaintTask(calculateColorsInfo);
			break;

		case EVertexPaintDetectionType::SetMeshVertexColorsDirectly:

			colorBuffersCleanedUp = SetMeshComponentVertexColors_WrapUp(calculateColorsInfo);
			BroadcastFinishedPaintTask(calculateColorsInfo);
			break;

		case EVertexPaintDetectionType::SetMeshVertexColorsDirectlyUsingSerializedString:

			colorBuffersCleanedUp = SetMeshComponentVertexColorsUsingSerializedString_WrapUp(calculateColorsInfo);
			BroadcastFinishedPaintTask(calculateColorsInfo);
			break;

		default:
			break;
	}

	// If Paint Job
	if (IsValid(calculateColorsInfo.paintOnMeshColorSettings.actor)) {

		// Affected Cloth Physics is exclusive to UE5 and ChaosCloth
#if ENGINE_MAJOR_VERSION == 5

		if (IsValid(calculateColorsInfo.vertexPaintSkelComponent) && calculateColorsInfo.vertexPaintSettings.affectClothPhysics) {

			if (calculateColorsInfo.clothPhysicsSettings.Num() > 0) {

				for (auto& clothPhysSettingsTemp : calculateColorsInfo.clothPhysicsSettings) {

					// Sets Chaos Cloth Physics on the Game Thread as it seems it could rarely cause a crash on the Async Thread
					UVertexPaintFunctionLibrary::SetChaosClothPhysics(calculateColorsInfo.vertexPaintSkelComponent, clothPhysSettingsTemp.Key, clothPhysSettingsTemp.Value);
				}
			}

			// If the task run didn't loop through all verts, i.e. didn't set calculateColorsInfo.clothPhysicsSettings but are set to affect cloth physics, then we manually have to run Update Chaos Cloth. This can occur if it's a Paint Entire Mesh, like something that dries a character, where we would still want to update the cloth, if they have any. 
			else {

				// Runs this after we've run Wrap Ups Above, i.e. after colors should've been updated. 
				UVertexPaintFunctionLibrary::UpdateChaosClothPhysicsWithExistingColors(calculateColorsInfo.vertexPaintSkelComponent);
			}
		}

#endif
	}


	

	// If Paintjob there's an additional fail safe in case the task was successful but something else didn't make it apply the colors. Shouldn't occur if colors was changed and applyPaintJobToVertexColors true but just in case. 
	if ((calculateColorsInfo.paintTaskResult.anyVertexColorGotChanged && calculateColorsInfo.vertexPaintSettings.applyPaintJobToVertexColors) && !colorBuffersCleanedUp) {

		// Cleans up the created color buffers that isn't going to be removed so we don't get memory leak
		for (auto createdColorBuffer : calculateColorsInfo.newColorVertexBufferPerLOD)
			AddColorVertexBufferToBufferCleanup(createdColorBuffer);
	}
}


//-------------------------------------------------------

// Calculate Colors Failed

void UVertexPaintDetectionGISubSystem::CalculateColorsFailed(const FCalculateColorsInfo& calculateColorsInfo) {

	if (calculateColorsInfo.taskResult.taskSuccessfull) return;


	// Cleans up the created color buffers that isn't going to be removed so we don't get memory leak
	for (auto createdColorBuffer : calculateColorsInfo.newColorVertexBufferPerLOD)
		AddColorVertexBufferToBufferCleanup(createdColorBuffer);



	switch (calculateColorsInfo.paintDetectionType) {

	case EVertexPaintDetectionType::GetClosestVertexDataDetection:

		RunGetClosestVertexDataCallbacks(calculateColorsInfo, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

		BroadcastFinishedDetectTask(calculateColorsInfo);


		break;

	case EVertexPaintDetectionType::GetAllVertexColorDetection:

		RunGetAllColorsOnlyCallbacks(calculateColorsInfo);
		BroadcastFinishedDetectTask(calculateColorsInfo);
		break;

	case EVertexPaintDetectionType::GetColorsWithinArea:

		RunGetColorsWithinAreaCallbacks(calculateColorsInfo);
		BroadcastFinishedDetectTask(calculateColorsInfo);
		break;

	case EVertexPaintDetectionType::PaintAtLocation:

		// If failed and was set to detect before paint at location
		if (calculateColorsInfo.paintOnMeshAtLocationSettings.getClosestVertexDataCombo.runGetClosestVertexDataOnMeshBeforeApplyingPaint) {

			RunGetClosestVertexDataCallbacks(calculateColorsInfo, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

			BroadcastFinishedDetectTask(calculateColorsInfo);
		}


		RunPaintAtLocationCallbacks(calculateColorsInfo, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());
		BroadcastFinishedPaintTask(calculateColorsInfo);

		if (calculateColorsInfo.paintOnMeshAtLocationSettings.getClosestVertexDataCombo.runGetClosestVertexDataOnMeshAfterApplyingPaint) {

			RunGetClosestVertexDataCallbacks(calculateColorsInfo, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

			BroadcastFinishedDetectTask(calculateColorsInfo);
		}

		break;

	case EVertexPaintDetectionType::PaintWithinArea:

		RunPaintWithinAreaCallbacks(calculateColorsInfo);
		BroadcastFinishedPaintTask(calculateColorsInfo);
		break;

	case EVertexPaintDetectionType::PaintEntireMesh:

		RunPaintEntireMeshCallbacks(calculateColorsInfo);
		BroadcastFinishedPaintTask(calculateColorsInfo);
		break;

	case EVertexPaintDetectionType::PaintColorSnippet:

		RunPaintColorSnippetCallbacks(calculateColorsInfo);
		BroadcastFinishedPaintTask(calculateColorsInfo);
		break;

	case EVertexPaintDetectionType::SetMeshVertexColorsDirectly:

		RunPaintSetMeshColorsCallbacks(calculateColorsInfo);
		BroadcastFinishedPaintTask(calculateColorsInfo);
		break;


	case EVertexPaintDetectionType::SetMeshVertexColorsDirectlyUsingSerializedString:

		RunPaintSetMeshColorsUsingSerializedStringCallbacks(calculateColorsInfo);
		BroadcastFinishedPaintTask(calculateColorsInfo);
		break;

	default:
		break;
	}
}


//-------------------------------------------------------

// Get Closest Vertex Data On Mesh Wrap Up

void UVertexPaintDetectionGISubSystem::GetClosestVertexDataOnMesh_WrapUp(const FCalculateColorsInfo& calculateColorsInfo, const FVertexDetectInfoStruct& detectStruct, const FColor& closestColor, const FColor& avarageColor, const FLinearColor& estimatedColorAtHitLocation, const TArray<FVector2D>& closestVertexUV_Detection) {

	if (!calculateColorsInfo.getClosestVertexDataSettings.actor) return;

	RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Get Closest Vertex Data on Mesh Wrap Up");


	FVertexDetectClosestVertexDataResultStruct closestVertexDataResult_Local;
	FVertexDetectEstimatedColorAtHitLocationResultStruct estimatedColorAtHitLocationResult_Local;
	FVertexDetectAvarageColorInAreaInfo avarageColorInArea_Local;


	if (calculateColorsInfo.estimatedColorAtHitLocationSettings.getEstimatedColorAtHitLocation) {

		if (calculateColorsInfo.estimatedColorAtHitLocation_VertexToLerpToward_Detect >= 0) {
			
			estimatedColorAtHitLocationResult_Local.estimatedColorAtHitLocationDataSuccessfullyAcquired = true;
			estimatedColorAtHitLocationResult_Local.estimatedColorAtHitLocation = estimatedColorAtHitLocation;
			estimatedColorAtHitLocationResult_Local.physicalSurfaceInfo = GetPhysicsSurfaceData(UVertexPaintFunctionLibrary::ReliableFLinearToFColor(estimatedColorAtHitLocation), calculateColorsInfo, calculateColorsInfo.materialAtClosestDetectVertex);
			estimatedColorAtHitLocationResult_Local.worldSpaceLocationWeEstimatedTheColorAt = calculateColorsInfo.estimatedColorAtHitLocation_LocationInWorldSpace_Detect;
		}

		else if (calculateColorsInfo.estimatedColorAtHitLocationSettings.onlyGetIfMeshHasMaxAmountOfVertices && calculateColorsInfo.taskResult.meshVertexData.meshDataPerLOD.IsValidIndex(0) && calculateColorsInfo.estimatedColorAtHitLocationSettings.maxAmountOfVertices < calculateColorsInfo.taskResult.meshVertexData.meshDataPerLOD[0].amountOfVerticesAtLOD) {
			
			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Get Closest Vertex Data - Couldn't get Estimated Color at Hit Location since the Mesh has to many Vertices. You can increase the amount acceptable in the struct settings, however, it's useful when the Mesh has few vertices, if Meshes has high vertex density then you don't need to use this but can use the regular closest vertex data. ");
		}
	}


	// Takes in avarageColor as param since it can be different depending on running a detection before paint at location or after it when the colors have been applied. It also can't use the one paint at location uses, in case we run the detect with custom AoE so it has different area than the paint at location
	avarageColorInArea_Local.avarageVertexColorsWithinAreaOfEffect = UVertexPaintFunctionLibrary::ReliableFColorToFLinearColor(avarageColor);
	// avarageColorInArea_Local.avarageVertexColorsWithinAreaOfEffect = avarageColor.ReinterpretAsLinear();


	// If has it's default value by now then has been unable to get closest vertex data
	if (calculateColorsInfo.closestVertexFound_Detection == -1) {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "Was unable to get Closest Vertex Data for Detection");
	}

	else {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Closest Vertex Index Found for Detection: %i", calculateColorsInfo.closestVertexFound_Detection);

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Average Color in Detection: %s", *avarageColorInArea_Local.avarageVertexColorsWithinAreaOfEffect.ToString());


		closestVertexDataResult_Local.closestVertexDataSuccessfullyAcquired = true;
		closestVertexDataResult_Local.closestVertexGeneralInfo.closestVertexMaterial = calculateColorsInfo.materialAtClosestDetectVertex;
		closestVertexDataResult_Local.closestVertexGeneralInfo.closestSection = calculateColorsInfo.closestSectionFound_Detect;


		// Sets Closest Color, Position in World and Local, Normal in World and Local, Closest Material, Physics Surfaces etc. 
		closestVertexDataResult_Local = GetClosestVertexDataResult(detectStruct.meshComponent, closestVertexDataResult_Local, calculateColorsInfo.closestVertexFound_Detection, closestColor, calculateColorsInfo.closestVertexPositionToHitLocationAtMinLOD_World_Detect, calculateColorsInfo.closestVertexNormalToHitLocationAtMinLOD_World_Detect, calculateColorsInfo);

		closestVertexDataResult_Local.closestVertexGeneralInfo.closestVertexUVAtEachUVChannel = closestVertexUV_Detection;


		// If set to get the Average Color, then gets the Physical Surface using the Avarage Color as well, but based off the closest index and closest index material
		if (calculateColorsInfo.getClosestVertexDataSettings.getAverageColorInAreaSettings.areaRangeToGetAvarageColorFrom > 0 && IsValid(closestVertexDataResult_Local.closestVertexGeneralInfo.closestVertexMaterial)) {

			avarageColorInArea_Local.avaragePhysicalSurfaceInfoBasedOffTheClosestVertexMaterial = GetPhysicsSurfaceData(avarageColor, calculateColorsInfo, calculateColorsInfo.materialAtClosestDetectVertex);
		}

		PrintClosestVertexColorResults(closestVertexDataResult_Local, estimatedColorAtHitLocationResult_Local, detectStruct.getAverageColorInAreaSettings.areaRangeToGetAvarageColorFrom, calculateColorsInfo);
	}


	if (closestVertexDataResult_Local.closestVertexDataSuccessfullyAcquired) {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Successfully Got Closest Mesh Data!");
	}

	else {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Got Mesh Data but NOT the Closest Vertex Data From Hit Mesh which we wanted to get. Check if everything is correctly hooked up in the Detection Node!");
	}


	RunGetClosestVertexDataCallbacks(calculateColorsInfo, closestVertexDataResult_Local, estimatedColorAtHitLocationResult_Local, avarageColorInArea_Local);
}


//-------------------------------------------------------

// Get All Vertex Colors Only Wrap Up

void UVertexPaintDetectionGISubSystem::GetAllVertexColorsOnly_WrapUp(const FCalculateColorsInfo& calculateColorsInfo) {

	if (!calculateColorsInfo.getAllVertexColorsSettings.actor) return;


	RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Get All Vertex Colors Only Wrap Up");

	RunGetAllColorsOnlyCallbacks(calculateColorsInfo);
}


//-------------------------------------------------------

// Get Colors Within Area Wrap Up

void UVertexPaintDetectionGISubSystem::GetColorsWithinArea_WrapUp(const FCalculateColorsInfo& calculateColorsInfo) {

	if (!calculateColorsInfo.getColorsWithinAreaSettings.actor) return;


	RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Get Colors Within Area Wrap Up");

	RunGetColorsWithinAreaCallbacks(calculateColorsInfo);
}



//-------------------------------------------------------

// Paint On Mesh At Location Wrap Up

bool UVertexPaintDetectionGISubSystem::PaintOnMeshAtLocation_WrapUp(const FCalculateColorsInfo& calculateColorsInfo, const TArray<FVector2D>& closestVertexUV_Painting) {

	if (!calculateColorsInfo.paintOnMeshAtLocationSettings.actor) return false;

	RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Paint on Mesh at Location Wrap Up");


	bool appliedVertexColors = false;
	FVertexDetectClosestVertexDataResultStruct closestVertexDataResult_Local;
	FVertexDetectEstimatedColorAtHitLocationResultStruct estimatedColorAtHitLocationResult_Local;


	if (calculateColorsInfo.estimatedColorAtHitLocationSettings.getEstimatedColorAtHitLocation) {

		if (calculateColorsInfo.estimatedColorAtHitLocation_VertexToLerpToward_Paint >= 0) {
			
			estimatedColorAtHitLocationResult_Local.estimatedColorAtHitLocationDataSuccessfullyAcquired = true;
			estimatedColorAtHitLocationResult_Local.estimatedColorAtHitLocation = calculateColorsInfo.estimatedColorAtHitLocation_AfterApplyingColors_Paint;
			estimatedColorAtHitLocationResult_Local.physicalSurfaceInfo = GetPhysicsSurfaceData(UVertexPaintFunctionLibrary::ReliableFLinearToFColor(calculateColorsInfo.estimatedColorAtHitLocation_AfterApplyingColors_Paint), calculateColorsInfo, calculateColorsInfo.materialAtClosestPaintVertex);
			estimatedColorAtHitLocationResult_Local.worldSpaceLocationWeEstimatedTheColorAt = calculateColorsInfo.estimatedColorAtHitLocation_LocationInWorldSpace_Paint;
		}

		else if (calculateColorsInfo.estimatedColorAtHitLocationSettings.onlyGetIfMeshHasMaxAmountOfVertices && calculateColorsInfo.taskResult.meshVertexData.meshDataPerLOD.IsValidIndex(0) && calculateColorsInfo.estimatedColorAtHitLocationSettings.maxAmountOfVertices < calculateColorsInfo.taskResult.meshVertexData.meshDataPerLOD[0].amountOfVerticesAtLOD) {

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Paint at Location - Couldn't get Estimated Color at Hit Location since the Mesh has to many Vertices. You can increase the amount acceptable in the struct settings, however, it's useful when the Mesh has few vertices, if Meshes has high vertex density then you don't need to use this but can use the regular closest vertex data. ");
		}
	}


	if (calculateColorsInfo.closestVertexFound_Paint == -1) {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "Paint at Location - Was unable to get Closest Vertex Index");
	}

	else {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Paint at Location - Closest Vertex Index Found for Painting: %i", calculateColorsInfo.closestVertexFound_Paint);
	}


	closestVertexDataResult_Local.closestVertexDataSuccessfullyAcquired = true;
	closestVertexDataResult_Local.closestVertexGeneralInfo.closestVertexMaterial = calculateColorsInfo.materialAtClosestPaintVertex;
	closestVertexDataResult_Local.closestVertexGeneralInfo.closestSection = calculateColorsInfo.closestSectionFound_Paint;


	// Sets Closest Color, Position in World and Local, Normal in World and Local, Closest Material, Physics Surfaces etc. 
	closestVertexDataResult_Local = GetClosestVertexDataResult(calculateColorsInfo.paintOnMeshAtLocationSettings.meshComponent, closestVertexDataResult_Local, calculateColorsInfo.closestVertexFound_Paint, calculateColorsInfo.closestVertexColor_AfterApplyingColors_Paint, calculateColorsInfo.closestVertexPositionToHitLocationAtMinLOD_World_Paint, calculateColorsInfo.closestVertexNormalToHitLocationAtMinLOD_World_Paint, calculateColorsInfo);
	closestVertexDataResult_Local.closestVertexGeneralInfo.closestVertexUVAtEachUVChannel = closestVertexUV_Painting;

	FVertexDetectAvarageColorInAreaInfo avarageColorInArea_Local;
	avarageColorInArea_Local.avarageVertexColorsWithinAreaOfEffect = UVertexPaintFunctionLibrary::ReliableFColorToFLinearColor(calculateColorsInfo.avarageColorWithinArea_Paint);
	// avarageColorInArea_Local.avarageVertexColorsWithinAreaOfEffect = calculateColorsInfo.avarageColorWithinArea_Paint.ReinterpretAsLinear();

	// If set to get the Average Color, then gets the Physical Surface using the Avarage Color as well, but based off the closest index and closest index material
	if (calculateColorsInfo.paintOnMeshAtLocationSettings.getClosestVertexDataCombo.getAverageColorInAreaSettings.areaRangeToGetAvarageColorFrom > 0 && IsValid(closestVertexDataResult_Local.closestVertexGeneralInfo.closestVertexMaterial)) {

		avarageColorInArea_Local.avaragePhysicalSurfaceInfoBasedOffTheClosestVertexMaterial = GetPhysicsSurfaceData(calculateColorsInfo.avarageColorWithinArea_Paint, calculateColorsInfo, calculateColorsInfo.materialAtClosestPaintVertex);
	}


	RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Average Color in Paint at Location Area: %s", *avarageColorInArea_Local.avarageVertexColorsWithinAreaOfEffect.ToString());


	PrintClosestVertexColorResults(closestVertexDataResult_Local, estimatedColorAtHitLocationResult_Local, calculateColorsInfo.paintOnMeshAtLocationSettings.paintAtAreaSettings.areaOfEffectRangeEnd, calculateColorsInfo);



	if (calculateColorsInfo.paintTaskResult.anyVertexColorGotChanged) {

		if (calculateColorsInfo.vertexPaintSettings.applyPaintJobToVertexColors) {

			ApplyVertexColorsToMeshComponent(calculateColorsInfo.vertexPaintComponent, calculateColorsInfo);

			appliedVertexColors = true;

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Paint on Mesh at Location Success - A change to colors was made. ");
		}

		else {

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Paint on Mesh at Location Success - A change to colors was made, but it's set to Not apply the paint job to vertex colors!");
		}
	}


	else {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Paint on Mesh at Location Success - But there was no change in colors. Perhaps the mesh is already fully colored if you tried to add, or it is already fully removed if you tried to remove.");
	}


	RunPaintAtLocationCallbacks(calculateColorsInfo, closestVertexDataResult_Local, estimatedColorAtHitLocationResult_Local, avarageColorInArea_Local);

	return appliedVertexColors;
}


//-------------------------------------------------------

// Paint Within Area Wrap Up

bool UVertexPaintDetectionGISubSystem::PaintWithinArea_WrapUp(const FCalculateColorsInfo& calculateColorsInfo) {

	if (!calculateColorsInfo.paintOnMeshWithinAreaSettings.actor) return false;


	RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Paint Within Area Wrap Up");


	bool appliedVertexColors = false;


	if (calculateColorsInfo.paintTaskResult.anyVertexColorGotChanged) {

		if (calculateColorsInfo.vertexPaintSettings.applyPaintJobToVertexColors) {

			ApplyVertexColorsToMeshComponent(calculateColorsInfo.vertexPaintComponent, calculateColorsInfo);
			
			appliedVertexColors = true;

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Paint on Mesh Within Area Success - A change to colors was made.");
		}

		else {

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Paint on Mesh Within Area Success - A change to colors was made, but it's set to Not apply the paint job to vertex colors!");
		}
	}

	else {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Paint on Mesh Within Area Success - But no change in colors was made. Perhaps the mesh is already fully colored if you tried to add, or it is already fully removed if you tried to remove.");
	}


	if (!calculateColorsInfo.paintWithinArea_VertexWasWithinArea) {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Paint on Mesh Within Area Success - But no Vertex on the mesh we tried to paint on was inside any of the componentsToCheckIfWithin. If using complex shape, make sure the componentToCheckIfWithin that is set to use the complex shape has some collision. ");
	}


	RunPaintWithinAreaCallbacks(calculateColorsInfo);

	return appliedVertexColors;
}


//-------------------------------------------------------

// Paint Within Area Wrap Up

bool UVertexPaintDetectionGISubSystem::PaintOnEntireMesh_WrapUp(const FCalculateColorsInfo& calculateColorsInfo) {

	if (!calculateColorsInfo.paintOnEntireMeshSettings.actor) return false;


	RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Paint Entire Mesh Wrap Up");


	bool appliedVertexColors = false;


	if (calculateColorsInfo.paintTaskResult.anyVertexColorGotChanged) {

		if (calculateColorsInfo.vertexPaintSettings.applyPaintJobToVertexColors) {

			ApplyVertexColorsToMeshComponent(calculateColorsInfo.vertexPaintComponent, calculateColorsInfo);

			appliedVertexColors = true;

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Paint on Entire Mesh Success - A change to colors was made.");
		}

		else {

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Paint on Entire Mesh Success - A change to colors was made, but it's set to Not apply the paint job to vertex colors!");
		}
	}

	else {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Paint on Entire Mesh Success - But there was no change in colors. Perhaps the mesh is already fully colored if you tried to add, or it is already fully removed if you tried to remove. ");
	}


	RunPaintEntireMeshCallbacks(calculateColorsInfo);

	return appliedVertexColors;
}


//-------------------------------------------------------

// Paint Color Snippet Wrap Up

bool UVertexPaintDetectionGISubSystem::PaintColorSnippet_WrapUp(const FCalculateColorsInfo& calculateColorsInfo) {

	if (!calculateColorsInfo.paintOnColorSnippetSettings.actor) return false;


	RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Paint Color Snippet Wrap Up");

	bool appliedVertexColors = false;


	if (calculateColorsInfo.paintTaskResult.anyVertexColorGotChanged) {

		if (calculateColorsInfo.vertexPaintSettings.applyPaintJobToVertexColors) {

			ApplyVertexColorsToMeshComponent(calculateColorsInfo.vertexPaintComponent, calculateColorsInfo);

			appliedVertexColors = true;

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Paint Color Snippet Success");
		}
		else {

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Paint Color Snippet Success, but it's set to Not apply the paint job to vertex colors!");
		}
	}

	else {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Paint Color Snippet Success but no Colors was Changed, is the same snippet being painted multiple times?");
	}


	RunPaintColorSnippetCallbacks(calculateColorsInfo);

	return appliedVertexColors;
}


//-------------------------------------------------------

// Set Mesh Component Vertex Colors Wrap Up

bool UVertexPaintDetectionGISubSystem::SetMeshComponentVertexColors_WrapUp(const FCalculateColorsInfo& calculateColorsInfo) {

	if (!calculateColorsInfo.setMeshComponentVertexColorsSettings.actor) return false;


	RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Set Mesh Component Vertex Colors Wrap Up");

	bool appliedVertexColors = false;


	if (calculateColorsInfo.paintTaskResult.anyVertexColorGotChanged) {


		if (calculateColorsInfo.vertexPaintSettings.applyPaintJobToVertexColors) {

			ApplyVertexColorsToMeshComponent(calculateColorsInfo.vertexPaintComponent, calculateColorsInfo);

			appliedVertexColors = true;

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Set Mesh Component Vertex Colors Success - A change to colors was made");
		}
		else {

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Set Mesh Component Vertex Colors Success - A change to colors was made, but it's set to Not apply the paint job to vertex colors!");
		}
	}

	else {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Set Mesh Component Vertex Colors Success - But no change in colors was made. Perhaps the mesh is already fully colored if you tried to add, or it is already fully removed if you tried to remove. ");
	}


	RunPaintSetMeshColorsCallbacks(calculateColorsInfo);

	return appliedVertexColors;
}


//-------------------------------------------------------

// Set Mesh Component Vertex Colors Using Serialized String Wrap Up

bool UVertexPaintDetectionGISubSystem::SetMeshComponentVertexColorsUsingSerializedString_WrapUp(const FCalculateColorsInfo& calculateColorsInfo) {

	if (!calculateColorsInfo.setMeshComponentVertexColorsUsingSerializedStringSettings.actor) return false;


	RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Set Mesh Component Vertex Colors Using Serialized String Wrap Up");

	bool appliedVertexColors = false;


	if (calculateColorsInfo.paintTaskResult.anyVertexColorGotChanged) {


		if (calculateColorsInfo.vertexPaintSettings.applyPaintJobToVertexColors) {

			ApplyVertexColorsToMeshComponent(calculateColorsInfo.vertexPaintComponent, calculateColorsInfo);

			appliedVertexColors = true;

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Set Mesh Component Vertex Colors Using Serialized String Success - A change to colors was made");
		}
		else {

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Set Mesh Component Vertex Colors Using Serialized String Success - A change to colors was made, but it's set to Not apply the paint job to vertex colors!");
		}
	}

	else {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Set Mesh Component Vertex Colors Using Serialized String Success - But no change in colors was made. Perhaps the mesh is already fully colored if you tried to add, or it is already fully removed if you tried to remove. ");
	}


	RunPaintSetMeshColorsUsingSerializedStringCallbacks(calculateColorsInfo);

	return appliedVertexColors;
}


//-------------------------------------------------------

// Get Closest Vertex Data

FVertexDetectClosestVertexDataResultStruct UVertexPaintDetectionGISubSystem::GetClosestVertexDataResult(UPrimitiveComponent* meshComp, FVertexDetectClosestVertexDataResultStruct closestVertexDataResult, const int& closestVertexIndex, const FColor& closestVertexColor, const FVector& closestVertexPosition, const FVector& closestVertexNormal, const FCalculateColorsInfo& calculateColorsInfo) {

	if (!closestVertexDataResult.closestVertexDataSuccessfullyAcquired || closestVertexIndex == -1) return closestVertexDataResult;


	// Transforms from component local to world pos
	closestVertexDataResult.closestVertexGeneralInfo.closestVertexPositionInfo.closestVertexPositionWorld = closestVertexPosition;

	// Then from world to actor local
	closestVertexDataResult.closestVertexGeneralInfo.closestVertexPositionInfo.closestVertexPositionActorLocal = UKismetMathLibrary::InverseTransformLocation(meshComp->GetOwner()->GetTransform(), closestVertexDataResult.closestVertexGeneralInfo.closestVertexPositionInfo.closestVertexPositionWorld);

	closestVertexDataResult.closestVertexGeneralInfo.closestVertexColors = UVertexPaintFunctionLibrary::ReliableFColorToFLinearColor(closestVertexColor);
	// closestVertexDataResult.closestVertexGeneralInfo.closestVertexColors = closestVertexColor.ReinterpretAsLinear();


	// Transforms from component local normal to world normal
	closestVertexDataResult.closestVertexGeneralInfo.closestVertexNormalInfo.closestVertexNormal = closestVertexNormal;

	closestVertexDataResult.closestVertexGeneralInfo.closestVertexNormalInfo.closestVertexNormalLocal = UKismetMathLibrary::InverseTransformDirection(meshComp->GetOwner()->GetTransform(), closestVertexNormal);


	closestVertexDataResult.closestVertexGeneralInfo.closestVertexIndex = closestVertexIndex;


	// If got the material then gets physics surface, if it's registered in the material data asset. 
	if (IsValid(closestVertexDataResult.closestVertexGeneralInfo.closestVertexMaterial)) {

		closestVertexDataResult.closestVertexPhysicalSurfaceInfo = GetPhysicsSurfaceData(closestVertexColor, calculateColorsInfo, closestVertexDataResult.closestVertexGeneralInfo.closestVertexMaterial);
	}


	return closestVertexDataResult;
}


//-------------------------------------------------------

// Get Physics Surface Data

FVertexDetectPhysicsSurfaceDataStruct UVertexPaintDetectionGISubSystem::GetPhysicsSurfaceData(const FColor& vertexColor, const FCalculateColorsInfo& calculateColorsInfo, UMaterialInterface* material) {

	FVertexDetectPhysicsSurfaceDataStruct closestVertexDataResult;

	if (!IsValid(material)) {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Couldn't Get Physics Surface Data because couldn't get material at closest vertex to hit location. ");

		return closestVertexDataResult;
	}

	if (!vertexPaintMaterialDataAssetCache) {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Can't get Physics Surface Data because a Vertex Paint Material Data Asset hasn't been set in the Project Settings. ");

		return closestVertexDataResult;
	}



	if (!vertexPaintMaterialDataAssetCache->GetVertexPaintMaterialInterface().Contains(material)) {


		// If not registered, then if it's an instance, then replaces material with the parent and checks that. Makes it possible so you don't have to register every single instance but can if you wish only register the parent
		if (auto materialInstanceTemp = Cast<UMaterialInstance>(material)) {

			material = materialInstanceTemp->Parent;
		}

		if (!vertexPaintMaterialDataAssetCache->GetVertexPaintMaterialInterface().Contains(material)) {

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Can't get Closest Vertex Physics Surface Data because Hit Material isn't added in the Vertex Paint Material Data Asset. If it's an material instance, the parent material isn't registered either. You can register them in the Editor Widget in the Detection Tab. You can still get Vertex Color Values but not what surface is on each color channel. ");

			return closestVertexDataResult;
		}
	}


	FVertexPaintMaterialDataAssetStruct materialDataInfo_Local;
	materialDataInfo_Local = vertexPaintMaterialDataAssetCache->GetVertexPaintMaterialInterface().FindRef(material);

	// Used to make sure that not only did we get the color data, but we could get the surfaces as well, i.e. the material was registered in the data asset. 
	closestVertexDataResult.physicsSurfaceSuccessfullyAcquired = true;

	closestVertexDataResult.materialRegisteredToIncludeDefaultChannel = materialDataInfo_Local.includeDefaultChannelWhenDetecting;

	// Converts closest Color from Byte to float
	closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceValueAtChannel = (float)vertexColor.R;
	closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceValueAtChannel = (float)vertexColor.G;
	closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceValueAtChannel = (float)vertexColor.B;
	closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceValueAtChannel = (float)vertexColor.A;


	// Clamps it from 0-255 to 0-1
	closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceValueAtChannel = UKismetMathLibrary::MapRangeClamped(closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceValueAtChannel, 0, 255, 0, 1);
	closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceValueAtChannel = UKismetMathLibrary::MapRangeClamped(closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceValueAtChannel, 0, 255, 0, 1);
	closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceValueAtChannel = UKismetMathLibrary::MapRangeClamped(closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceValueAtChannel, 0, 255, 0, 1);
	closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceValueAtChannel = UKismetMathLibrary::MapRangeClamped(closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceValueAtChannel, 0, 255, 0, 1);


	closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceAtChannel = materialDataInfo_Local.atDefault;
	closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceAsStringAtChannel = GetPhysicsSurfaceAsString(closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceAtChannel);
	closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceValueAtChannel = 1;


	// Sets EPhysicalSurface - Red
	closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceAtChannel = materialDataInfo_Local.paintedAtRed;
	closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceAsStringAtChannel = GetPhysicsSurfaceAsString(closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceAtChannel); // Sets String that can be used with third party software like wwise and their RTCPs

	if (materialDataInfo_Local.paintedAtRed == EPhysicalSurface::SurfaceType_Default)
		closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceValueAtChannel = 0;


	// Green
	closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceAtChannel = materialDataInfo_Local.paintedAtGreen;
	closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceAsStringAtChannel = GetPhysicsSurfaceAsString(closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceAtChannel);

	if (closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceAtChannel == EPhysicalSurface::SurfaceType_Default)
		closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceValueAtChannel = 0;


	// Blue
	closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceAtChannel = materialDataInfo_Local.paintedAtBlue;
	closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceAsStringAtChannel = GetPhysicsSurfaceAsString(closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceAtChannel);

	if (closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceAtChannel == EPhysicalSurface::SurfaceType_Default)
		closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceValueAtChannel = 0;


	// Alpha
	closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceAtChannel = materialDataInfo_Local.paintedAtAlpha;
	closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceAsStringAtChannel = GetPhysicsSurfaceAsString(closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceAtChannel);

	if (closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceAtChannel == EPhysicalSurface::SurfaceType_Default)
		closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceValueAtChannel = 0;



	// Makes it so all Vertex Colors Returns a number proportionate to all of the channels, between 0-1. For example if 3 channels have painted to 1, they will each return 0.33 instead of each returning 1 like they otherwise would. 


	float retrieveVertexColorData_paintedColorDataTotalTemp = 0;
	float retrieveVertexColorData_clampColorValuesToTemp = 0;


	// Only includes default if material is set to do so. I.e. if nothing is painted at default it will return 1, if fully painted on one other channel, 0.5, 2 channels 0.33 etc. 
	if (materialDataInfo_Local.includeDefaultChannelWhenDetecting)
		retrieveVertexColorData_paintedColorDataTotalTemp = closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceValueAtChannel;


	// If set to clamp into 1 we use this down below. For instance if both puddle and sand i painted fully to 1, then it will return 0.5 on each (unless default is also included then it will return 0.33)
	retrieveVertexColorData_paintedColorDataTotalTemp += (closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceValueAtChannel + closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceValueAtChannel + closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceValueAtChannel + closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceValueAtChannel);

	// Scales up to
	retrieveVertexColorData_clampColorValuesToTemp = UKismetMathLibrary::FClamp(retrieveVertexColorData_paintedColorDataTotalTemp, 0, 1);


	// Only includes default if material is set to do so
	if (materialDataInfo_Local.includeDefaultChannelWhenDetecting) {

		closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceValueAtChannel = UKismetMathLibrary::MapRangeClamped(closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceValueAtChannel, 0, retrieveVertexColorData_paintedColorDataTotalTemp, 0, retrieveVertexColorData_clampColorValuesToTemp);
	}


	// Adds each channels share if set to clamp them into one
	closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceValueAtChannel = UKismetMathLibrary::MapRangeClamped(closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceValueAtChannel, 0, retrieveVertexColorData_paintedColorDataTotalTemp, 0, retrieveVertexColorData_clampColorValuesToTemp);

	closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceValueAtChannel = UKismetMathLibrary::MapRangeClamped(closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceValueAtChannel, 0, retrieveVertexColorData_paintedColorDataTotalTemp, 0, retrieveVertexColorData_clampColorValuesToTemp);

	closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceValueAtChannel = UKismetMathLibrary::MapRangeClamped(closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceValueAtChannel, 0, retrieveVertexColorData_paintedColorDataTotalTemp, 0, retrieveVertexColorData_clampColorValuesToTemp);

	closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceValueAtChannel = UKismetMathLibrary::MapRangeClamped(closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceValueAtChannel, 0, retrieveVertexColorData_paintedColorDataTotalTemp, 0, retrieveVertexColorData_clampColorValuesToTemp);



	// Fills the closest arrays which can be used to more comfortable loop through them without having to make arrays yourself. Note how even if a surface may be default it always get added to the array so it's always 5 in size if we've been able to get any close colors
	closestVertexDataResult.physicalSurfacesAsArray.Add(closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceAtChannel);
	closestVertexDataResult.physicalSurfacesAsArray.Add(closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceAtChannel);
	closestVertexDataResult.physicalSurfacesAsArray.Add(closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceAtChannel);
	closestVertexDataResult.physicalSurfacesAsArray.Add(closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceAtChannel);
	closestVertexDataResult.physicalSurfacesAsArray.Add(closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceAtChannel);

	closestVertexDataResult.surfacesAsStringArray.Add(closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceAsStringAtChannel);
	closestVertexDataResult.surfacesAsStringArray.Add(closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceAsStringAtChannel);
	closestVertexDataResult.surfacesAsStringArray.Add(closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceAsStringAtChannel);
	closestVertexDataResult.surfacesAsStringArray.Add(closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceAsStringAtChannel);
	closestVertexDataResult.surfacesAsStringArray.Add(closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceAsStringAtChannel);

	closestVertexDataResult.surfaceValuesArray.Add(closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceValueAtChannel);
	closestVertexDataResult.surfaceValuesArray.Add(closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceValueAtChannel);
	closestVertexDataResult.surfaceValuesArray.Add(closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceValueAtChannel);
	closestVertexDataResult.surfaceValuesArray.Add(closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceValueAtChannel);
	closestVertexDataResult.surfaceValuesArray.Add(closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceValueAtChannel);




	// If anything is painted then gets the most dominant one out of RGBA, otherwise just sets the default as the dominant one
	if (closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceValueAtChannel > 0 || closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceValueAtChannel > 0 || closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceValueAtChannel > 0 || closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceValueAtChannel > 0) {

		TArray<TEnumAsByte<EPhysicalSurface>> physiccalSurfacesToCheckTemp = closestVertexDataResult.physicalSurfacesAsArray;
		TArray<float> physicalSurfaceValuesToCheckTemp = closestVertexDataResult.surfaceValuesArray;

		// Removes the Default if set Not to include it, so we only check RGBA
		if (!materialDataInfo_Local.includeDefaultChannelWhenDetecting) {

			physiccalSurfacesToCheckTemp.RemoveAt(0);
			physicalSurfaceValuesToCheckTemp.RemoveAt(0);
		}

		TEnumAsByte<EPhysicalSurface> mostDominantSurface_Local;
		float mostDominantSurfaceValue_Local = 0;
		if (UVertexPaintFunctionLibrary::GetTheMostDominantPhysicsSurface_Wrapper(calculateColorsInfo.fundementalStruct.taskWorld, material, physiccalSurfacesToCheckTemp, physicalSurfaceValuesToCheckTemp, mostDominantSurface_Local, mostDominantSurfaceValue_Local)) {

			closestVertexDataResult.mostDominantPhysicsSurfaceInfo.mostDominantPhysicsSurface = mostDominantSurface_Local;
			closestVertexDataResult.mostDominantPhysicsSurfaceInfo.mostDominantPhysicsSurfaceAsString = GetPhysicsSurfaceAsString(mostDominantSurface_Local);
			closestVertexDataResult.mostDominantPhysicsSurfaceInfo.mostDominantPhysicstSurfaceValue = mostDominantSurfaceValue_Local;
		}
	}

	else {

		closestVertexDataResult.mostDominantPhysicsSurfaceInfo.mostDominantPhysicsSurface = closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceAtChannel;
		closestVertexDataResult.mostDominantPhysicsSurfaceInfo.mostDominantPhysicsSurfaceAsString = GetPhysicsSurfaceAsString(closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceAtChannel);
		closestVertexDataResult.mostDominantPhysicsSurfaceInfo.mostDominantPhysicstSurfaceValue = closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceValueAtChannel;
	}


	bool successfullyGotColorChannels_Local = false;
	TArray<Enum_SurfaceAtChannel> surfaceAtChannels_Local = UVertexPaintFunctionLibrary::GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper(calculateColorsInfo.fundementalStruct.taskWorld, material, closestVertexDataResult.mostDominantPhysicsSurfaceInfo.mostDominantPhysicsSurface, successfullyGotColorChannels_Local);

	if (successfullyGotColorChannels_Local) {

		closestVertexDataResult.mostDominantPhysicsSurfaceInfo.mostDominantPhysicsSurfaceAtVertexColorChannels = surfaceAtChannels_Local;
	}


	// Returns Struct Updated with Names of channels from Data Asset
	return closestVertexDataResult;
}


//-------------------------------------------------------

// Print Vertex Color Results

void UVertexPaintDetectionGISubSystem::PrintClosestVertexColorResults(const FVertexDetectClosestVertexDataResultStruct& closestVertexDataResult, const FVertexDetectEstimatedColorAtHitLocationResultStruct& estimatedColorAtHitLocationResult, const float& avarageColorAreaOfEffect, const FCalculateColorsInfo& calculateColorsInfo) {


	// Closest Color
	RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Closest Vertex Color: %s", *closestVertexDataResult.closestVertexGeneralInfo.closestVertexColors.ToString());

	// Estimated Color at Hit Location
	if (estimatedColorAtHitLocationResult.estimatedColorAtHitLocationDataSuccessfullyAcquired)
		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Estimated Hit Location Color: %s", *estimatedColorAtHitLocationResult.estimatedColorAtHitLocation.ToString());

	// Closest Position
	RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Closest Vertex World Position: %s  -   Closest Vertex Local Position: %s", *closestVertexDataResult.closestVertexGeneralInfo.closestVertexPositionInfo.closestVertexPositionWorld.ToString(), *closestVertexDataResult.closestVertexGeneralInfo.closestVertexPositionInfo.closestVertexPositionActorLocal.ToString());

	// Closest Normal
	RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Closest Vertex Normal World: %s  -  Closest Vertex Normal Local: %s", *closestVertexDataResult.closestVertexGeneralInfo.closestVertexNormalInfo.closestVertexNormal.ToString(), *closestVertexDataResult.closestVertexGeneralInfo.closestVertexNormalInfo.closestVertexNormalLocal.ToString());

	// Closest Section
	if (closestVertexDataResult.closestVertexGeneralInfo.closestSection != -1)
		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Closest Vertex Section: %i", closestVertexDataResult.closestVertexGeneralInfo.closestSection);

	// Closest Material
	if (closestVertexDataResult.closestVertexGeneralInfo.closestVertexMaterial)
		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Closest Material: %s", *closestVertexDataResult.closestVertexGeneralInfo.closestVertexMaterial->GetName());

	// Closest Surfaces
	if (closestVertexDataResult.closestVertexPhysicalSurfaceInfo.physicsSurfaceSuccessfullyAcquired) {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Physics Surface and Color Values at Closest Vertex: Default: %s: %f  -  Red: %s: %f  -  Green: %s: %f  -  Blue: %s: %f  -  Alpha: %s: %f", *closestVertexDataResult.closestVertexPhysicalSurfaceInfo.physicsSurface_AtDefault.physicalSurfaceAsStringAtChannel, closestVertexDataResult.closestVertexPhysicalSurfaceInfo.physicsSurface_AtDefault.physicalSurfaceValueAtChannel, *closestVertexDataResult.closestVertexPhysicalSurfaceInfo.physicsSurface_AtRed.physicalSurfaceAsStringAtChannel, closestVertexDataResult.closestVertexPhysicalSurfaceInfo.physicsSurface_AtRed.physicalSurfaceValueAtChannel, *closestVertexDataResult.closestVertexPhysicalSurfaceInfo.physicsSurface_AtGreen.physicalSurfaceAsStringAtChannel, closestVertexDataResult.closestVertexPhysicalSurfaceInfo.physicsSurface_AtGreen.physicalSurfaceValueAtChannel, *closestVertexDataResult.closestVertexPhysicalSurfaceInfo.physicsSurface_AtBlue.physicalSurfaceAsStringAtChannel, closestVertexDataResult.closestVertexPhysicalSurfaceInfo.physicsSurface_AtBlue.physicalSurfaceValueAtChannel, *closestVertexDataResult.closestVertexPhysicalSurfaceInfo.physicsSurface_AtAlpha.physicalSurfaceAsStringAtChannel, closestVertexDataResult.closestVertexPhysicalSurfaceInfo.physicsSurface_AtAlpha.physicalSurfaceValueAtChannel);
	}

	// If couldn't get physical surface but just closest colors
	else {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Couldn't get Physical Surfaces at Closest Vertex, perhaps the Hit Material isn't registered in the Material Data Asset?");
	}

	// Print Debug Box and Directional Arrow
	if (calculateColorsInfo.fundementalStruct.debugSettings.taskSpecificDebugSymbols.drawTaskDebugSymbols) {

		DrawDebugBox(GetWorld(), closestVertexDataResult.closestVertexGeneralInfo.closestVertexPositionInfo.closestVertexPositionWorld, FVector(5, 5, 5), FColor::Red, false, calculateColorsInfo.fundementalStruct.debugSettings.taskSpecificDebugSymbols.drawTaskDebugSymbolsDuration, 0, 3);

		DrawDebugDirectionalArrow(GetWorld(), closestVertexDataResult.closestVertexGeneralInfo.closestVertexPositionInfo.closestVertexPositionWorld, (closestVertexDataResult.closestVertexGeneralInfo.closestVertexPositionInfo.closestVertexPositionWorld + (closestVertexDataResult.closestVertexGeneralInfo.closestVertexNormalInfo.closestVertexNormal * 100)), 50, FColor::Red, false, calculateColorsInfo.fundementalStruct.debugSettings.taskSpecificDebugSymbols.drawTaskDebugSymbolsDuration, 0, 3);

		if (avarageColorAreaOfEffect > 0) {

			DrawDebugSphere(GetWorld(), closestVertexDataResult.closestVertexGeneralInfo.closestVertexPositionInfo.closestVertexPositionWorld, avarageColorAreaOfEffect, 16, FColor::Green, false, calculateColorsInfo.fundementalStruct.debugSettings.taskSpecificDebugSymbols.drawTaskDebugSymbolsDuration, 0, 3);
		}
	}


	// Draw Estimated Color At Hit Location related sebug symbols
	if (estimatedColorAtHitLocationResult.estimatedColorAtHitLocationDataSuccessfullyAcquired) {


		if (calculateColorsInfo.fundementalStruct.debugSettings.taskSpecificDebugSymbols.drawTaskDebugSymbols) {


			DrawDebugBox(calculateColorsInfo.vertexPaintActor->GetWorld(), estimatedColorAtHitLocationResult.worldSpaceLocationWeEstimatedTheColorAt, FVector(5, 5, 5), FQuat::Identity, FColor::Emerald, false, calculateColorsInfo.fundementalStruct.debugSettings.taskSpecificDebugSymbols.drawTaskDebugSymbolsDuration, 0, 3);


			DrawDebugBox(calculateColorsInfo.vertexPaintActor->GetWorld(), closestVertexDataResult.closestVertexGeneralInfo.closestVertexPositionInfo.closestVertexPositionWorld, FVector(5, 5, 5), FQuat::Identity, FColor::Silver, false, calculateColorsInfo.fundementalStruct.debugSettings.taskSpecificDebugSymbols.drawTaskDebugSymbolsDuration, 0, 3);


			if (calculateColorsInfo.estimatedColorAtHitLocation_VertexToLerpToward_Paint >= 0) {

				// Hit Location
				DrawDebugBox(calculateColorsInfo.vertexPaintActor->GetWorld(), calculateColorsInfo.paintOnMeshAtLocationSettings.hitFundementals.hitLocation, FVector(5, 5, 5), FQuat::Identity, FColor::Purple, false, calculateColorsInfo.fundementalStruct.debugSettings.taskSpecificDebugSymbols.drawTaskDebugSymbolsDuration, 0, 3);

				// Vertex we Lerp Toward
				DrawDebugBox(calculateColorsInfo.vertexPaintActor->GetWorld(), calculateColorsInfo.estimatedColorAtHitLocation_VertexToLerpToward_LocationInWorldSpace_Paint, FVector(5, 5, 5), FQuat::Identity, FColor::Yellow, false, calculateColorsInfo.fundementalStruct.debugSettings.taskSpecificDebugSymbols.drawTaskDebugSymbolsDuration, 0, 3);

				// calculateColorsInfo.estimated
				DrawDebugDirectionalArrow(calculateColorsInfo.vertexPaintActor->GetWorld(), calculateColorsInfo.closestVertexPositionToHitLocationAtMinLOD_World_Paint, calculateColorsInfo.paintOnMeshAtLocationSettings.hitFundementals.hitLocation, 10, FColor::Purple, false, calculateColorsInfo.fundementalStruct.debugSettings.taskSpecificDebugSymbols.drawTaskDebugSymbolsDuration, 0, 5);

				// All of the 9 closest vertices Paint
				for (auto vertexWorldLocationTemp : calculateColorsInfo.estimatedColorAtHitLocation_ClosestVertexWorldLocationsToTheHitLocation_Paint) {

					DrawDebugBox(calculateColorsInfo.vertexPaintActor->GetWorld(), vertexWorldLocationTemp, FVector(2.5f, 2.5f, 2.5f), FQuat::Identity, FColor::Blue, false, calculateColorsInfo.fundementalStruct.debugSettings.taskSpecificDebugSymbols.drawTaskDebugSymbolsDuration, 0, 3);
				}
			}

			if (calculateColorsInfo.estimatedColorAtHitLocation_VertexToLerpToward_Detect >= 0) {

				// Hit Location
				DrawDebugBox(calculateColorsInfo.vertexPaintActor->GetWorld(), calculateColorsInfo.getClosestVertexDataSettings.hitFundementals.hitLocation, FVector(5, 5, 5), FQuat::Identity, FColor::Purple, false, calculateColorsInfo.fundementalStruct.debugSettings.taskSpecificDebugSymbols.drawTaskDebugSymbolsDuration, 0, 3);

				// Vertex we Lerp Toward
				DrawDebugBox(calculateColorsInfo.vertexPaintActor->GetWorld(), calculateColorsInfo.estimatedColorAtHitLocation_VertexToLerpToward_LocationInWorldSpace_Detect, FVector(5, 5, 5), FQuat::Identity, FColor::Yellow, false, calculateColorsInfo.fundementalStruct.debugSettings.taskSpecificDebugSymbols.drawTaskDebugSymbolsDuration, 0, 3);

				// Direction from closest vertex to hit location
				DrawDebugDirectionalArrow(calculateColorsInfo.vertexPaintActor->GetWorld(), calculateColorsInfo.closestVertexPositionToHitLocationAtMinLOD_World_Detect, calculateColorsInfo.getClosestVertexDataSettings.hitFundementals.hitLocation, 10, FColor::Purple, false, calculateColorsInfo.fundementalStruct.debugSettings.taskSpecificDebugSymbols.drawTaskDebugSymbolsDuration, 0, 5);


				// All of the 9 closest vertices Paint
				for (auto vertexWorldLocationTemp : calculateColorsInfo.estimatedColorAtHitLocation_ClosestVertexWorldLocationsToTheHitLocation_Detect) {

					DrawDebugBox(calculateColorsInfo.vertexPaintActor->GetWorld(), vertexWorldLocationTemp, FVector(2.5f, 2.5f, 2.5f), FQuat::Identity, FColor::Blue, false, calculateColorsInfo.fundementalStruct.debugSettings.taskSpecificDebugSymbols.drawTaskDebugSymbolsDuration, 0, 3);
				}
			}
		}


		// Estimted Hit Location Surface Value
		if (estimatedColorAtHitLocationResult.physicalSurfaceInfo.physicsSurfaceSuccessfullyAcquired) {


			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Physics Surfaces and Color Values at Estimated Color at Hit Location: Default: %s: %f  -  Red: %s: %f  -  Green: %s: %f  -  Blue: %s: %f  -  Alpha: %s: %f", *estimatedColorAtHitLocationResult.physicalSurfaceInfo.physicsSurface_AtDefault.physicalSurfaceAsStringAtChannel, estimatedColorAtHitLocationResult.physicalSurfaceInfo.physicsSurface_AtDefault.physicalSurfaceValueAtChannel, *estimatedColorAtHitLocationResult.physicalSurfaceInfo.physicsSurface_AtRed.physicalSurfaceAsStringAtChannel, estimatedColorAtHitLocationResult.physicalSurfaceInfo.physicsSurface_AtRed.physicalSurfaceValueAtChannel, *estimatedColorAtHitLocationResult.physicalSurfaceInfo.physicsSurface_AtGreen.physicalSurfaceAsStringAtChannel, estimatedColorAtHitLocationResult.physicalSurfaceInfo.physicsSurface_AtGreen.physicalSurfaceValueAtChannel, *estimatedColorAtHitLocationResult.physicalSurfaceInfo.physicsSurface_AtBlue.physicalSurfaceAsStringAtChannel, estimatedColorAtHitLocationResult.physicalSurfaceInfo.physicsSurface_AtBlue.physicalSurfaceValueAtChannel, *estimatedColorAtHitLocationResult.physicalSurfaceInfo.physicsSurface_AtAlpha.physicalSurfaceAsStringAtChannel, estimatedColorAtHitLocationResult.physicalSurfaceInfo.physicsSurface_AtAlpha.physicalSurfaceValueAtChannel);
		}

		// If couldn't get physical surface but just colors
		else {

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Couldn't get Physical Surfaces at Estimated Color at Hit Location, perhaps the Hit Material isn't registered in the Material Data Asset?");
		}
	}
}


//--------------------------------------------------------

// Apply Vertex Colors To Mesh Component

void UVertexPaintDetectionGISubSystem::ApplyVertexColorsToMeshComponent(UPrimitiveComponent* meshComp, const FCalculateColorsInfo& calculateColorsInfo) {

	
	if (UStaticMeshComponent* staticMeshComponent = Cast<UStaticMeshComponent>(meshComp)) {


		int lodMax_Local = calculateColorsInfo.newColorVertexBufferPerLOD.Num();

		// Had to run this as it seemed spawned meshes with 1 LOD didn't get painted properly otherwise. 
		if (staticMeshComponent->LODData.Num() < lodMax_Local)
			staticMeshComponent->SetLODDataCount(lodMax_Local, lodMax_Local);


		for (int i = 0; i < calculateColorsInfo.newColorVertexBufferPerLOD.Num(); i++) {
			
			// Makes sure to clean up any buffer that for some reason isn't valid
			if (!calculateColorsInfo.newColorVertexBufferPerLOD[i] || calculateColorsInfo.newColorVertexBufferPerLOD[i]->GetNumVertices() <= 0) {

				AddColorVertexBufferToBufferCleanup(calculateColorsInfo.newColorVertexBufferPerLOD[i]);
				continue;
			}


			// If have been overriden before
			if (staticMeshComponent->LODData[i].OverrideVertexColors) {

				// NOTE Causes big FPS drops which is especially noticable for builds in 5.1 and up!
				// LODInfo_Local->ReleaseOverrideVertexColorsAndBlock();

				// Adds it to a array of old color buffers that we .CleanUp after a short delay when it is safe. RenderThread is 1-2 frames behind GameThread
				AddColorVertexBufferToBufferCleanup(staticMeshComponent->LODData[i].OverrideVertexColors);
			}


			staticMeshComponent->LODData[i].OverrideVertexColors = calculateColorsInfo.newColorVertexBufferPerLOD[i];

			// Initialize resource and mark render state of object as dirty in order for the engine to re-render it
			BeginInitResource(staticMeshComponent->LODData[i].OverrideVertexColors);
		}

		staticMeshComponent->MarkRenderStateDirty();
	}

	else if (USkeletalMeshComponent* skeletalMeshComponent = Cast<USkeletalMeshComponent>(meshComp)) {


		for (int i = 0; i < calculateColorsInfo.newColorVertexBufferPerLOD.Num(); i++) {

			if (!calculateColorsInfo.newColorVertexBufferPerLOD[i] || calculateColorsInfo.newColorVertexBufferPerLOD[i]->GetNumVertices() <= 0) {

				AddColorVertexBufferToBufferCleanup(calculateColorsInfo.newColorVertexBufferPerLOD[i]);
				continue;
			}


			if (skeletalMeshComponent->LODInfo[i].OverrideVertexColors) {

				// NOTE Causes big FPS drops which is especially noticable for builds in 5.1 and up!
				// LODInfo_Local->ReleaseOverrideVertexColorsAndBlock();

				// Adds it to a array of old color buffers that we .CleanUp after a short delay when it is safe. RenderThread is 1-2 frames behind GameThread
				AddColorVertexBufferToBufferCleanup(skeletalMeshComponent->LODInfo[i].OverrideVertexColors);
			}

			skeletalMeshComponent->LODInfo[i].OverrideVertexColors = calculateColorsInfo.newColorVertexBufferPerLOD[i];

#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 4

			BeginInitResource(skeletalMeshComponent->LODInfo[i].OverrideVertexColors, &UE::RenderCommandPipe::SkeletalMesh);
#else
			BeginInitResource(skeletalMeshComponent->LODInfo[i].OverrideVertexColors);
#endif
		}

		skeletalMeshComponent->MarkRenderStateDirty();
	}

#if ENGINE_MAJOR_VERSION == 5

	else if (UDynamicMeshComponent* dynamicMeshComponent = Cast<UDynamicMeshComponent>(meshComp)) {


		if (calculateColorsInfo.dynamicMeshComponentVertexColors.Num() > 0) {


			UE::Geometry::FDynamicMesh3* dynamicMesh3 = nullptr;
			dynamicMesh3 = &dynamicMeshComponent->GetDynamicMesh()->GetMeshRef();


			if (dynamicMesh3) {


				// In order to get the Current Color from Vertex Info we couldn't just run SetMeshPerVertexColors(), we had to actually run SetVertexColor with the value as well!
				for (int i = 0; i < dynamicMesh3->MaxVertexID(); i++) {

					if (!dynamicMesh3->IsVertex(i)) continue;
					if (!calculateColorsInfo.dynamicMeshComponentVertexColors.IsValidIndex(i)) continue;


					const FColor vertexColorTemp = calculateColorsInfo.dynamicMeshComponentVertexColors[i];

					dynamicMesh3->SetVertexColor(i, FVector3f(vertexColorTemp.R, vertexColorTemp.G, vertexColorTemp.B));
				}


				FGeometryScriptColorList colorListTemp;
				colorListTemp.List = MakeShared<TArray<FLinearColor>>(calculateColorsInfo.dynamicMeshComponentVertexColors);

				// NOTE Very heavy since we have to run it here on the game thread and it has 2 deep loops. So we can drop like 80 FPS by this if it's a detailed dynamic mesh
				UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshPerVertexColors(dynamicMeshComponent->GetDynamicMesh(), colorListTemp, nullptr);
			}
		}
	}

		
#if WITH_EDITOR

#if ENGINE_MINOR_VERSION >= 3

	// Geometry Collection Components can currently only be painted in Editor time because geometryCollection->RebuildRenderData() is Editor Only

	else if (UGeometryCollectionComponent* geometryCollectionComponent = Cast<UGeometryCollectionComponent>(meshComp)) {

		if (calculateColorsInfo.vertexPaintGeometryCollectionData && calculateColorsInfo.vertexPaintGeometryCollection && calculateColorsInfo.geometryCollectionComponentVertexColors.Num() > 0) {


			calculateColorsInfo.vertexPaintGeometryCollectionData->Color = calculateColorsInfo.geometryCollectionComponentVertexColors;

			// This fixed so RebuildRenderData actually updates the Render Data everytime we run it instead of just once. 
			calculateColorsInfo.vertexPaintGeometryCollection->InvalidateCollection();

			// Unfortunately this is Editor Only
			calculateColorsInfo.vertexPaintGeometryCollection->RebuildRenderData();


			/*
				Unfortunately the proxy mesh (not the actual collision) gets rendered at the default location of the geo collection component after RebuildRenderData.
				I couldn't find a reliable way of resetting it to the correct place which is geometryCollectionComponent->GetRootCurrentTransform() Location.

				Waking it up worked somewhat, but if painting every single frame, it got reset so it looked like it was a different spot. Marking Render State dirty didn't work, if run 1 frame after it sometimes worked, if 2 frames after it never worked.

				But since this feature is very experimental, and we can't even run RebuildRenderData in packaged build but only in Editor, we can return to this later on.
			*/


			// Wonder if a better way is to Reset it from an Updated TManagedArray, with the new colors etc., instead of RebuildRenderData. May get heavy if it has to loop through vertices on the game thread though, and feels like we're just replacing one ugly solution with another ugly one.  
			// geometryCollection->ResetFrom
		}
	}

#endif // UE5.3 or up
#endif // WITH EDITOR

#endif // UE5

}


//--------------------------------------------------------

// Add Color Vertex Buffer To Buffer Cleanup

void UVertexPaintDetectionGISubSystem::AddColorVertexBufferToBufferCleanup(FColorVertexBuffer* colorVertexBuffer) {

	if (!IsValid(GetWorld()) || !colorVertexBuffer) return;

	FColorVertexBuffer* colorVertexBuffer_Local = colorVertexBuffer;

	// Releases Resource on the Render Thread so we can Delete the vertex buffer ptr after a short delay when it isn't used by the render thread. 
	AsyncTask(ENamedThreads::GetRenderThread(), [colorVertexBuffer_Local]() {

		colorVertexBuffer_Local->ReleaseResource();
	});

	oldVertexColorBufferPtrs.Add(colorVertexBuffer_Local);
	cleanupOldVertexColorBufferTimers.Add(FTimerHandle());

	// Cleans up Old Color Vertex Buffer for this LOD after a short delay when it is not used any more (RenderThread is 1-2 frames behind GameThread)
	GetWorld()->GetTimerManager().SetTimer(cleanupOldVertexColorBufferTimers[cleanupOldVertexColorBufferTimers.Num() - 1], this, &UVertexPaintDetectionGISubSystem::CleanUpOldVertexColorBuffer, 1, false);
}


//--------------------------------------------------------

// Clean Up Old Vertex Color Buffer

void UVertexPaintDetectionGISubSystem::CleanUpOldVertexColorBuffer() {

	// Since RenderThreap is 1 - 2 frames behind Game Thread we have to CleanUp old Color Vertex Buffer after a delay to not get the issue where the Mesh looks completely clean if you continously paint it every frame, and to avoid a memory leak where old buffers remain in memory with their data.

	// Without this we get a crash for 5.0 and 5.1 very easily in shipping build compared to if we delete them right away!

	if (oldVertexColorBufferPtrs.IsValidIndex(0)) {

		oldVertexColorBufferPtrs[0]->CleanUp();
		delete oldVertexColorBufferPtrs[0];

		oldVertexColorBufferPtrs.RemoveAt(0);
	}

	if (cleanupOldVertexColorBufferTimers.IsValidIndex(0))
		cleanupOldVertexColorBufferTimers.RemoveAt(0);
}


//-------------------------------------------------------

// Broadcast Finished Task Delegates

void UVertexPaintDetectionGISubSystem::BroadcastFinishedDetectTask(const FCalculateColorsInfo& calculateColorsInfo) {

	vertexDetectTaskFinished.Broadcast(calculateColorsInfo.taskResult, calculateColorsInfo.additionalDataToPassThrough);
}

void UVertexPaintDetectionGISubSystem::BroadcastFinishedPaintTask(const FCalculateColorsInfo& calculateColorsInfo) {

	vertexPaintTaskFinished.Broadcast(calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.additionalDataToPassThrough);
}


void UVertexPaintDetectionGISubSystem::RunGetClosestVertexDataCallbacks(const FCalculateColorsInfo& calculateColorsInfo, const FVertexDetectClosestVertexDataResultStruct& closestVertexColorResult, const FVertexDetectEstimatedColorAtHitLocationResultStruct& estimatedColorAtHitLocationResult, const FVertexDetectAvarageColorInAreaInfo& avarageColor) {


	if (IsValid(calculateColorsInfo.taskResult.associatedPaintComponent))
		calculateColorsInfo.taskResult.associatedPaintComponent->GetClosestVertexDataOnMeshTaskFinished(calculateColorsInfo, closestVertexColorResult, estimatedColorAtHitLocationResult, avarageColor);

	if (IsValid(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn)) {

		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObject && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
			IVertexPaintDetectionInterface::Execute_GetClosestVertexDataOnActor(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn, calculateColorsInfo.taskResult, calculateColorsInfo.getClosestVertexDataSettings, closestVertexColorResult, estimatedColorAtHitLocationResult, avarageColor, calculateColorsInfo.additionalDataToPassThrough);


		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObjectComponents && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn) {

			if (AActor* actorToRunInterface = Cast<AActor>(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn)) {

				// Runs the Interface on any components as well if they're owner got it run, so you can't make cleaner implementations
				for (auto componentTemp : actorToRunInterface->GetComponents()) {

					if (componentTemp->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
						IVertexPaintDetectionInterface::Execute_GetClosestVertexDataOnActor(componentTemp, calculateColorsInfo.taskResult, calculateColorsInfo.getClosestVertexDataSettings, closestVertexColorResult, estimatedColorAtHitLocationResult, avarageColor, calculateColorsInfo.additionalDataToPassThrough);
				}
			}
		}
	}
}

void UVertexPaintDetectionGISubSystem::RunGetAllColorsOnlyCallbacks(const FCalculateColorsInfo& calculateColorsInfo) {


	if (IsValid(calculateColorsInfo.taskResult.associatedPaintComponent))
		calculateColorsInfo.taskResult.associatedPaintComponent->GetAllVertexColorsOnlyTaskFinished(calculateColorsInfo);

	if (IsValid(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn)) {

		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObject && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
			IVertexPaintDetectionInterface::Execute_GetAllVertexColorsOnlyOnActor(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn, calculateColorsInfo.taskResult, calculateColorsInfo.getAllVertexColorsSettings, calculateColorsInfo.additionalDataToPassThrough);


		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObjectComponents && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn) {

			if (AActor* actorToRunInterface = Cast<AActor>(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn)) {

				// Runs the Interface on any components as well if they're owner got it run, so you can't make cleaner implementations
				for (auto componentTemp : actorToRunInterface->GetComponents()) {

					if (componentTemp->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
						IVertexPaintDetectionInterface::Execute_GetAllVertexColorsOnlyOnActor(componentTemp, calculateColorsInfo.taskResult, calculateColorsInfo.getAllVertexColorsSettings, calculateColorsInfo.additionalDataToPassThrough);
				}
			}
		}
	}
}

void UVertexPaintDetectionGISubSystem::RunGetColorsWithinAreaCallbacks(const FCalculateColorsInfo& calculateColorsInfo) {


	if (IsValid(calculateColorsInfo.taskResult.associatedPaintComponent))
		calculateColorsInfo.taskResult.associatedPaintComponent->GetColorsWithinAreaTaskFinished(calculateColorsInfo);

	if (IsValid(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn)) {

		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObject && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
			IVertexPaintDetectionInterface::Execute_GetColorsWithinArea(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn, calculateColorsInfo.taskResult, calculateColorsInfo.getColorsWithinAreaSettings, calculateColorsInfo.withinAreaResults_BeforeApplyingColors, calculateColorsInfo.additionalDataToPassThrough);


		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObjectComponents && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn) {

			if (AActor* actorToRunInterface = Cast<AActor>(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn)) {

				// Runs the Interface on any components as well if they're owner got it run, so you can't make cleaner implementations
				for (auto componentTemp : actorToRunInterface->GetComponents()) {

					if (componentTemp->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
						IVertexPaintDetectionInterface::Execute_GetColorsWithinArea(componentTemp, calculateColorsInfo.taskResult, calculateColorsInfo.getColorsWithinAreaSettings, calculateColorsInfo.withinAreaResults_BeforeApplyingColors, calculateColorsInfo.additionalDataToPassThrough);
				}
			}
		}
	}
}

void UVertexPaintDetectionGISubSystem::RunPaintAtLocationCallbacks(const FCalculateColorsInfo& calculateColorsInfo, const FVertexDetectClosestVertexDataResultStruct& closestVertexColorResult, const FVertexDetectEstimatedColorAtHitLocationResultStruct& estimatedColorAtHitLocationResult, const FVertexDetectAvarageColorInAreaInfo& avarageColor) {


	if (IsValid(calculateColorsInfo.taskResult.associatedPaintComponent))
		calculateColorsInfo.taskResult.associatedPaintComponent->PaintOnMeshAtLocationTaskFinished(calculateColorsInfo, closestVertexColorResult, estimatedColorAtHitLocationResult, avarageColor);

	if (IsValid(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn)) {

		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObject && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
			IVertexPaintDetectionInterface::Execute_PaintedOnActor_AtLocation(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.paintOnMeshAtLocationSettings, closestVertexColorResult, estimatedColorAtHitLocationResult, avarageColor, calculateColorsInfo.additionalDataToPassThrough);

		// Calls interface on the painted actor so they can run custom things if they get painted on
		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObject && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
			IVertexPaintDetectionInterface::Execute_ColorsAppliedOnActor(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.paintOnMeshAtLocationSettings, calculateColorsInfo.additionalDataToPassThrough);


		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObjectComponents && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn) {

			if (AActor* actorToRunInterface = Cast<AActor>(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn)) {

				// Runs the Interface on any components as well if they're owner got it run, so you can't make cleaner implementations
				for (auto componentTemp : actorToRunInterface->GetComponents()) {

					if (componentTemp->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass())) {

						IVertexPaintDetectionInterface::Execute_PaintedOnActor_AtLocation(componentTemp, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.paintOnMeshAtLocationSettings, closestVertexColorResult, estimatedColorAtHitLocationResult, avarageColor, calculateColorsInfo.additionalDataToPassThrough);

						IVertexPaintDetectionInterface::Execute_ColorsAppliedOnActor(componentTemp, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.paintOnMeshAtLocationSettings, calculateColorsInfo.additionalDataToPassThrough);
					}
				}
			}
		}
	}
}

void UVertexPaintDetectionGISubSystem::RunPaintWithinAreaCallbacks(const FCalculateColorsInfo& calculateColorsInfo) {


	if (IsValid(calculateColorsInfo.taskResult.associatedPaintComponent))
		calculateColorsInfo.taskResult.associatedPaintComponent->PaintOnMeshWithinAreaTaskFinished(calculateColorsInfo);

	if (IsValid(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn)) {

		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObject && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
			IVertexPaintDetectionInterface::Execute_PaintedOnActor_WithinArea(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.paintOnMeshWithinAreaSettings, calculateColorsInfo.withinAreaResults, calculateColorsInfo.additionalDataToPassThrough);

		// Calls interface on the painted actor so they can run custom things if they get painted on
		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObject && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
			IVertexPaintDetectionInterface::Execute_ColorsAppliedOnActor(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.paintOnMeshWithinAreaSettings, calculateColorsInfo.additionalDataToPassThrough);


		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObjectComponents && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn) {

			if (AActor* actorToRunInterface = Cast<AActor>(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn)) {

				// Runs the Interface on any components as well if they're owner got it run, so you can't make cleaner implementations
				for (auto componentTemp : actorToRunInterface->GetComponents()) {

					if (componentTemp->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass())) {

						IVertexPaintDetectionInterface::Execute_PaintedOnActor_WithinArea(componentTemp, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.paintOnMeshWithinAreaSettings, calculateColorsInfo.withinAreaResults, calculateColorsInfo.additionalDataToPassThrough);

						IVertexPaintDetectionInterface::Execute_ColorsAppliedOnActor(componentTemp, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.paintOnMeshWithinAreaSettings, calculateColorsInfo.additionalDataToPassThrough);
					}
				}
			}
		}
	}
}

void UVertexPaintDetectionGISubSystem::RunPaintEntireMeshCallbacks(const FCalculateColorsInfo& calculateColorsInfo) {


	if (IsValid(calculateColorsInfo.taskResult.associatedPaintComponent))
		calculateColorsInfo.taskResult.associatedPaintComponent->PaintOnEntireMeshTaskFinished(calculateColorsInfo);

	if (IsValid(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn)) {

		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObject && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
			IVertexPaintDetectionInterface::Execute_PaintedOnActor_EntireMesh(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.paintOnEntireMeshSettings, calculateColorsInfo.additionalDataToPassThrough);

		// Calls interface on the painted actor so they can run custom things if they get painted on
		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObject && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
			IVertexPaintDetectionInterface::Execute_ColorsAppliedOnActor(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.paintOnEntireMeshSettings, calculateColorsInfo.additionalDataToPassThrough);


		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObjectComponents && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn) {

			if (AActor* actorToRunInterface = Cast<AActor>(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn)) {

				// Runs the Interface on any components as well if they're owner got it run, so you can't make cleaner implementations
				for (auto componentTemp : actorToRunInterface->GetComponents()) {

					if (componentTemp->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass())) {

						IVertexPaintDetectionInterface::Execute_PaintedOnActor_EntireMesh(componentTemp, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.paintOnEntireMeshSettings, calculateColorsInfo.additionalDataToPassThrough);

						IVertexPaintDetectionInterface::Execute_ColorsAppliedOnActor(componentTemp, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.paintOnEntireMeshSettings, calculateColorsInfo.additionalDataToPassThrough);
					}
				}
			}
		}
	}
}

void UVertexPaintDetectionGISubSystem::RunPaintColorSnippetCallbacks(const FCalculateColorsInfo& calculateColorsInfo) {


	if (IsValid(calculateColorsInfo.taskResult.associatedPaintComponent))
		calculateColorsInfo.taskResult.associatedPaintComponent->PaintColorSnippetOnMeshTaskFinished(calculateColorsInfo);

	if (IsValid(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn)) {

		// Calls interface on the painted actor so they can run custom things if they get painted on
		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObject && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
			IVertexPaintDetectionInterface::Execute_PaintedOnActor_PaintColorSnippet(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.paintOnColorSnippetSettings, calculateColorsInfo.additionalDataToPassThrough);


		// Has valid actor checks for every one in case one of the callbacks destroys it. 
		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObject && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
			IVertexPaintDetectionInterface::Execute_ColorsAppliedOnActor(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.paintOnColorSnippetSettings, calculateColorsInfo.additionalDataToPassThrough);


		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObjectComponents && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn) {

			if (AActor* actorToRunInterface = Cast<AActor>(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn)) {

				// Runs the Interface on any components as well if they're owner got it run, so you can't make cleaner implementations
				for (auto componentTemp : actorToRunInterface->GetComponents()) {

					if (componentTemp->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass())) {

						IVertexPaintDetectionInterface::Execute_PaintedOnActor_PaintColorSnippet(componentTemp, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.paintOnColorSnippetSettings, calculateColorsInfo.additionalDataToPassThrough);

						IVertexPaintDetectionInterface::Execute_ColorsAppliedOnActor(componentTemp, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.paintOnColorSnippetSettings, calculateColorsInfo.additionalDataToPassThrough);
					}
				}
			}
		}
	}
}

void UVertexPaintDetectionGISubSystem::RunPaintSetMeshColorsCallbacks(const FCalculateColorsInfo& calculateColorsInfo) {


	if (IsValid(calculateColorsInfo.taskResult.associatedPaintComponent))
		calculateColorsInfo.taskResult.associatedPaintComponent->SetMeshComponentVertexColorsTaskFinished(calculateColorsInfo);

	if (IsValid(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn)) {

		// Calls interface on the painted actor so they can run custom things if they get painted on
		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObject && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
			IVertexPaintDetectionInterface::Execute_PaintedOnActor_SetMeshComponentVertexColors(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.setMeshComponentVertexColorsSettings, calculateColorsInfo.additionalDataToPassThrough);

		// Has valid actor checks for every one in case one of the callbacks destroys it. 
		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObject && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
			IVertexPaintDetectionInterface::Execute_ColorsAppliedOnActor(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.setMeshComponentVertexColorsSettings, calculateColorsInfo.additionalDataToPassThrough);


		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObjectComponents && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn) {

			if (AActor* actorToRunInterface = Cast<AActor>(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn)) {

				// Runs the Interface on any components as well if they're owner got it run, so you can't make cleaner implementations
				for (auto componentTemp : actorToRunInterface->GetComponents()) {

					if (componentTemp->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass())) {

						IVertexPaintDetectionInterface::Execute_PaintedOnActor_SetMeshComponentVertexColors(componentTemp, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.setMeshComponentVertexColorsSettings, calculateColorsInfo.additionalDataToPassThrough);

						IVertexPaintDetectionInterface::Execute_ColorsAppliedOnActor(componentTemp, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.setMeshComponentVertexColorsSettings, calculateColorsInfo.additionalDataToPassThrough);
					}
				}
			}
		}
	}
}

void UVertexPaintDetectionGISubSystem::RunPaintSetMeshColorsUsingSerializedStringCallbacks(const FCalculateColorsInfo& calculateColorsInfo) {


	if (IsValid(calculateColorsInfo.taskResult.associatedPaintComponent))
		calculateColorsInfo.taskResult.associatedPaintComponent->SetMeshComponentVertexColorsUsingSerializedStringTaskFinished(calculateColorsInfo);

	if (IsValid(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn)) {

		// Calls interface on the painted actor so they can run custom things if they get painted on
		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObject && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
			IVertexPaintDetectionInterface::Execute_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.setMeshComponentVertexColorsUsingSerializedStringSettings, calculateColorsInfo.additionalDataToPassThrough);


		// Has valid actor checks for every one in case one of the callbacks destroys it. 
		if (calculateColorsInfo.setMeshComponentVertexColorsUsingSerializedStringSettings.callbackSettings.runCallbackInterfacesOnObject && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
			IVertexPaintDetectionInterface::Execute_ColorsAppliedOnActor(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.setMeshComponentVertexColorsUsingSerializedStringSettings, calculateColorsInfo.additionalDataToPassThrough);


		if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackInterfacesOnObjectComponents && calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn) {

			if (AActor* actorToRunInterface = Cast<AActor>(calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn)) {

				// Runs the Interface on any components as well if they're owner got it run, so you can't make cleaner implementations
				for (auto componentTemp : actorToRunInterface->GetComponents()) {

					if (componentTemp->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass())) {

						IVertexPaintDetectionInterface::Execute_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString(componentTemp, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.setMeshComponentVertexColorsUsingSerializedStringSettings, calculateColorsInfo.additionalDataToPassThrough);

						IVertexPaintDetectionInterface::Execute_ColorsAppliedOnActor(componentTemp, calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.setMeshComponentVertexColorsUsingSerializedStringSettings, calculateColorsInfo.additionalDataToPassThrough);
					}
				}
			}
		}
	}
}


//-------------------------------------------------------

// Deinitialize

void UVertexPaintDetectionGISubSystem::Deinitialize() {

	RVPDP_LOG(FVertexPaintDebugSettings(false, 0, true), FColor::Cyan, "Game Instance Subsystem De-Initialized");
}
