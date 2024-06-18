// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 


#include "VertexPaintFunctionLibrary.h"

// Engine
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Engine/EngineTypes.h"
#include "PhysicsEngine/PhysicsSettings.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "Materials/MaterialInstance.h"
#include "PhysicsEngine/BodySetup.h"
#include "Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Engine/StreamableManager.h"
#include "Engine/AssetManager.h"
#include "Engine/StaticMesh.h"
#include "StaticMeshResources.h"
#include "Engine/SkeletalMesh.h"
#include "Components/SkeletalMeshComponent.h"
#include "Rendering/SkeletalMeshRenderData.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"

// Plugin
#include "ColorsOfEachChannelLatentAction.h"
#include "ColorsOfEachChannelAsyncTask.h"
#include "UpdateClothPhysicsAsyncTask.h"
#include "UpdateClothPhysicsLatentAction.h"
#include "GetColorSnippetColorsLatentAction.h"
#include "VertexPaintDetectionInterface.h"
#include "VertexPaintMaterialDataAsset.h"
#include "VertexPaintDetectionSettings.h"
#include "VertexPaintColorSnippetRefs.h"
#include "VertexPaintColorSnippetDataAsset.h"
#include "VertexPaintOptimizationDataAsset.h"
#include "VertexPaintDetectionTaskQueue.h"
#include "VertexPaintDetectionLog.h"

#include "VertexPaintDetectionGISubSystem.h" // Circular dependency here strictly to make things more user friendly where users can get things from the GI using getters from the function library, rather than having to remember that some things are in the GI and they have to get that first etc. 

// UE5
#if ENGINE_MAJOR_VERSION == 5

#include "Components/DynamicMeshComponent.h"

#include "GeometryCollection/GeometryCollectionComponent.h"
#include "GeometryCollection/GeometryCollection.h"
#include "GeometryCollection/GeometryCollectionObject.h"

#include "ChaosWheeledVehicleMovementComponent.h"
#include "ChaosCloth/ChaosClothingSimulationInteractor.h"
#include "ClothingAsset.h"

#include "PhysicsEngine/PhysicsAsset.h"

#if ENGINE_MINOR_VERSION >= 2
#include "StaticMeshComponentLODInfo.h"
#include "Engine/Level.h"
#endif

#if ENGINE_MINOR_VERSION >= 4
#include "Rendering/RenderCommandPipes.h"
#endif

#endif


//--------------------------------------------------------

// Adjust Box Collision To Fill Area Between Two Locations

void UVertexPaintFunctionLibrary::AdjustBoxCollisionToFillAreaBetweenTwoLocations(UBoxComponent* boxCollision, FVector fromLocation, FVector toLocation, float boxThickness) {

	if (!IsValid(boxCollision)) return;

	float distanceBetweenLocations = (fromLocation - toLocation).Size();

	if (distanceBetweenLocations > boxThickness) {

		FVector middlePointBetweenLocations = (fromLocation + toLocation) / 2;
		FRotator rotationFromLocationToLocation = UKismetMathLibrary::GetDirectionUnitVector(fromLocation, toLocation).ToOrientationRotator();

		boxCollision->SetBoxExtent(FVector(distanceBetweenLocations / 2, boxThickness, boxThickness), true);

		FHitResult hitResultTemp;
		boxCollision->SetWorldLocationAndRotation(middlePointBetweenLocations, rotationFromLocationToLocation, false, &hitResultTemp, ETeleportType::None);
	}
}


//--------------------------------------------------------

// Is World Valid

bool UVertexPaintFunctionLibrary::IsWorldValid(UWorld* world) {

	if (!world) return false;
	if (!IsValid(world)) return false;
	if (!world->IsGameWorld()) return false;
	if (world->bIsTearingDown) return false;

	return true;
}


//--------------------------------------------------------

// Get Vertex Paint Game Instance Subsystem

UVertexPaintDetectionGISubSystem* UVertexPaintFunctionLibrary::GetVertexPaintGameInstanceSubsystem(const UObject* WorldContextObject) {

	if (!IsValid(WorldContextObject)) return nullptr;
	if (!IsValid(UGameplayStatics::GetGameInstance(WorldContextObject))) return nullptr;
	if (!IsValid(UGameplayStatics::GetGameInstance(WorldContextObject)->GetSubsystem<UVertexPaintDetectionGISubSystem>())) return nullptr;


	return UGameplayStatics::GetGameInstance(WorldContextObject)->GetSubsystem<UVertexPaintDetectionGISubSystem>();
}


//-------------------------------------------------------

// Get Calculate Colors Paint Task Amount

TMap<UPrimitiveComponent*, int> UVertexPaintFunctionLibrary::GetCalculateColorsPaintTasksAmount_Wrapper(const UObject* WorldContextObject) {

	if (!IsValid(GetVertexPaintGameInstanceSubsystem(WorldContextObject))) return TMap<UPrimitiveComponent*, int>();


	if (auto paintTaskQueue = GetVertexPaintTaskQueue(WorldContextObject))
		return paintTaskQueue->GetCalculateColorsPaintTasksAmountPerComponent();

	return TMap<UPrimitiveComponent*, int>();
}


//-------------------------------------------------------

// Get Calculate Colors Detection Task Amount

TMap<UPrimitiveComponent*, int> UVertexPaintFunctionLibrary::GetCalculateColorsDetectionTasksAmount_Wrapper(const UObject* WorldContextObject) {

	if (!IsValid(GetVertexPaintGameInstanceSubsystem(WorldContextObject))) return TMap<UPrimitiveComponent*, int>();


	if (auto paintTaskQueue = GetVertexPaintTaskQueue(WorldContextObject))
		return paintTaskQueue->GetCalculateColorsDetectionTasksAmountPerComponent();

	return TMap<UPrimitiveComponent*, int>();
}


//--------------------------------------------------------

// Get All Available Color Snippets on Mesh

void UVertexPaintFunctionLibrary::GetAllMeshColorSnippetsAsString_Wrapper(UPrimitiveComponent* meshComponent, TMap<FString, FVertexDetectStoredColorSnippetInfo>& availableColorSnippetsAndDataAssets) {

	availableColorSnippetsAndDataAssets.Empty();

	if (!IsValid(meshComponent)) return;


	auto colorSnippetReferenceDataAsset = GetColorSnippetReferenceDataAsset(meshComponent);

	if (!colorSnippetReferenceDataAsset) {

		UE_LOG(RuntimeVertexColorPlugin, Warning, TEXT("GetAllAvailableColorSnippetsOnMesh Fail because there's no Color Snippet Reference Data Asset Set in Settings so we can't get color snippet data assets a mesh has!"));

		return;
	}


	TMap<FString, FVertexDetectStoredColorSnippetInfo> colorSnippets_Local;

	if (auto staticMeshComp_Local = Cast<UStaticMeshComponent>(meshComponent)) {

		colorSnippets_Local = colorSnippetReferenceDataAsset->GetAllColorSnippetsAndDataAssetForObject(staticMeshComp_Local->GetStaticMesh());
	}

	else if (auto skeletalMeshComponent_Local = Cast<USkeletalMeshComponent>(meshComponent)) {

		const UObject* meshAsset_Local = UVertexPaintFunctionLibrary::GetMeshComponentSourceMesh(skeletalMeshComponent_Local);

		colorSnippets_Local = colorSnippetReferenceDataAsset->GetAllColorSnippetsAndDataAssetForObject(meshAsset_Local);
	}

	// If is stored on a data asset
	if (colorSnippets_Local.Num() > 0)
		availableColorSnippetsAndDataAssets = colorSnippets_Local;
}


//--------------------------------------------------------

// Get All Mesh Color Snippets As Tags

void UVertexPaintFunctionLibrary::GetAllMeshColorSnippetsAsTags_Wrapper(UPrimitiveComponent* meshComponent, TMap<FGameplayTag, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>>& availableColorSnippetTagsAndDataAssets) {

	availableColorSnippetTagsAndDataAssets.Empty();

	if (!IsValid(meshComponent) || !GetColorSnippetReferenceDataAsset(meshComponent)) return;


	TMap<FString, FVertexDetectStoredColorSnippetInfo> availableColorSnippetsAndDataAssets;
	GetAllMeshColorSnippetsAsString_Wrapper(meshComponent, availableColorSnippetsAndDataAssets);


	if (availableColorSnippetsAndDataAssets.Num() > 0) {

		TArray<FString> availableColorSnippets_Local;
		availableColorSnippetsAndDataAssets.GetKeys(availableColorSnippets_Local);

		TArray<FVertexDetectStoredColorSnippetInfo> colorSnippetDataAssets_Local;
		availableColorSnippetsAndDataAssets.GenerateValueArray(colorSnippetDataAssets_Local);


		FGameplayTag topLevelTag = FGameplayTag::RequestGameplayTag(FName("ColorSnippets"));
		FGameplayTagContainer tagContainerTemp;
		tagContainerTemp.AddTag(FGameplayTag::RequestGameplayTag(topLevelTag.GetTagName(), false));
		FGameplayTagContainer tagContainer_Local = GetColorSnippetReferenceDataAsset(meshComponent)->allAvailableColorSnippets.Filter(tagContainerTemp);


		TArray<FGameplayTag> allAvailableTagsUnderCategory_Local;
		tagContainer_Local.GetGameplayTagArray(allAvailableTagsUnderCategory_Local);


		for (auto tag : allAvailableTagsUnderCategory_Local) {

			// If Mesh has Snippet ID that matches Tag under category 
			if (availableColorSnippets_Local.Contains(tag.GetTagName().ToString())) {

				int arrayIndex = -1;

				availableColorSnippets_Local.Find(tag.GetTagName().ToString(), arrayIndex);

				if (colorSnippetDataAssets_Local.IsValidIndex(arrayIndex))
					availableColorSnippetTagsAndDataAssets.Add(tag, colorSnippetDataAssets_Local[arrayIndex].colorSnippetDataAssetStoredOn);
			}
		}
	}
}


//--------------------------------------------------------

// Get All Tags Under Tag Category

TArray<FGameplayTag> UVertexPaintFunctionLibrary::GetAllTagsUnderTagCategory(const UObject* WorldContextObject, FGameplayTag tagCategory) {

	if (!tagCategory.IsValid() || !WorldContextObject) return TArray<FGameplayTag>();

	FGameplayTagContainer tagContainerTemp;
	tagContainerTemp.AddTag(FGameplayTag::RequestGameplayTag(tagCategory.GetTagName(), false));
	FGameplayTagContainer tagContainer_Local = GetColorSnippetReferenceDataAsset(WorldContextObject)->allAvailableColorSnippets.Filter(tagContainerTemp);

	TArray<FGameplayTag> allAvailableTagsUnderCategory_Local;
	tagContainer_Local.GetGameplayTagArray(allAvailableTagsUnderCategory_Local);

	return allAvailableTagsUnderCategory_Local;
}


//--------------------------------------------------------

// Get All Color Snippets Under Group Snippet As String

TArray<FString> UVertexPaintFunctionLibrary::GetAllColorSnippetsUnderGroupSnippetAsString(const UObject* WorldContextObject, FString groupSnippedID) {

	if (groupSnippedID.IsEmpty() || !WorldContextObject) return TArray<FString>();


	TArray<FString> tagsAsStringTemp;

	for (const FGameplayTag& tagTemp : GetColorSnippetReferenceDataAsset(WorldContextObject)->allAvailableColorSnippets) {

		if (tagTemp.MatchesTag(FGameplayTag::RequestGameplayTag(FName(*groupSnippedID))))
			tagsAsStringTemp.Add(tagTemp.ToString());
	}


	return tagsAsStringTemp;
}


//--------------------------------------------------------

// Get All Mesh Color Snippets Tags Under Tag Category

void UVertexPaintFunctionLibrary::GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper(UPrimitiveComponent* meshComponent, FGameplayTag tagCategory, TMap<FGameplayTag, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>>& availableColorSnippetTagsAndDataAssetsUnderTagCategory) {

	availableColorSnippetTagsAndDataAssetsUnderTagCategory.Empty();

	if (!IsValid(meshComponent) || !GetColorSnippetReferenceDataAsset(meshComponent)) return;


	TMap<FGameplayTag, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>> availableColorSnippetTagsAndDataAssets;
	GetAllMeshColorSnippetsAsTags_Wrapper(meshComponent, availableColorSnippetTagsAndDataAssets);

	TArray<FGameplayTag> availableColorSnippetTags_Local;
	availableColorSnippetTagsAndDataAssets.GetKeys(availableColorSnippetTags_Local);

	TArray<TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>> colorSnippetDataAssets_Local;
	availableColorSnippetTagsAndDataAssets.GenerateValueArray(colorSnippetDataAssets_Local);


	for (auto tag : GetAllTagsUnderTagCategory(meshComponent, tagCategory)) {

		// If Mesh has Snippet Tag that matches Tag under category 
		if (availableColorSnippetTags_Local.Contains(tag)) {

			int arrayIndex = -1;
			availableColorSnippetTags_Local.Find(tag, arrayIndex);

			if (colorSnippetDataAssets_Local.IsValidIndex(arrayIndex))
				availableColorSnippetTagsAndDataAssetsUnderTagCategory.Add(tag, colorSnippetDataAssets_Local[arrayIndex]);
		}
	}
}


//--------------------------------------------------------

// Get Mesh Color Snippets Tags In Tag Category

void UVertexPaintFunctionLibrary::GetMeshColorSnippetsTagsInTagCategory_Wrapper(UPrimitiveComponent* meshComponent, FGameplayTag tagCategory, TMap<FGameplayTag, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>>& availableColorSnippetTagsAndDataAssetsUnderTagCategory) {

	availableColorSnippetTagsAndDataAssetsUnderTagCategory.Empty();

	if (!IsValid(meshComponent) || !GetColorSnippetReferenceDataAsset(meshComponent)) return;


	TMap<FGameplayTag, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>> availableColorSnippetTagsAndDataAssets;
	GetAllMeshColorSnippetsAsTags_Wrapper(meshComponent, availableColorSnippetTagsAndDataAssets);

	TArray<FGameplayTag> availableColorSnippetTags_Local;
	availableColorSnippetTagsAndDataAssets.GetKeys(availableColorSnippetTags_Local);

	TArray<TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>> colorSnippetDataAssets_Local;
	availableColorSnippetTagsAndDataAssets.GenerateValueArray(colorSnippetDataAssets_Local);


	for (auto tag : GetAllTagsUnderTagCategory(meshComponent, tagCategory)) {

		FString tagAsString = tag.GetTagName().ToString();

		// Plus 1 so we don't have the . after the parent category
		FString tagStringWithoutParentCategory = tagAsString.RightChop(tagCategory.GetTagName().ToString().Len() + 1);

		int charIndexWithPeriod = -1;

		// If has a ., i.e. this is not tag that is directly in the tag category but another under that. 
		if (tagStringWithoutParentCategory.FindChar('.', charIndexWithPeriod))
			continue;


		// If Mesh has Snippet Tag that matches Tag under category 
		if (availableColorSnippetTags_Local.Contains(tag)) {

			int arrayIndex = -1;
			availableColorSnippetTags_Local.Find(tag, arrayIndex);

			if (colorSnippetDataAssets_Local.IsValidIndex(arrayIndex))
				availableColorSnippetTagsAndDataAssetsUnderTagCategory.Add(tag, colorSnippetDataAssets_Local[arrayIndex]);
		}
	}
}


//--------------------------------------------------------

// Get Mesh Color Snippet Tag In Group

FGameplayTag UVertexPaintFunctionLibrary::GetMeshColorSnippetTagInGroup(UPrimitiveComponent* meshComponent, FGameplayTag groupSnippet, TArray<UPrimitiveComponent*> groupSnippetMeshes) {

	if (!meshComponent || !groupSnippet.IsValid() || groupSnippetMeshes.Num() <= 0 || !GetColorSnippetReferenceDataAsset(meshComponent)) return FGameplayTag();


	TMap<FString, UPrimitiveComponent*> childSnippetsAndMatchingMeshesTemp;
	if (GetColorSnippetReferenceDataAsset(meshComponent)->CheckAndGetTheComponentsThatMatchGroupChildSnippets(meshComponent, groupSnippet.ToString(), groupSnippetMeshes, childSnippetsAndMatchingMeshesTemp)) {

		TArray<FString> childSnippets;
		childSnippetsAndMatchingMeshesTemp.GetKeys(childSnippets);

		TArray<UPrimitiveComponent*> meshesInGroup;
		childSnippetsAndMatchingMeshesTemp.GenerateValueArray(meshesInGroup);

		int meshGroupIndex = -1;

		if (meshesInGroup.Find(meshComponent, meshGroupIndex))
			return FGameplayTag::RequestGameplayTag((FName)childSnippets[meshGroupIndex], false);
	}

	return FGameplayTag();
}


//--------------------------------------------------------

// Get Color Snippet Reference Data Asset

UVertexPaintColorSnippetRefs* UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset(const UObject* optionalWorldContextObject) {

	if (optionalWorldContextObject) {

		if (auto gameInstanceSubsystem = GetVertexPaintGameInstanceSubsystem(optionalWorldContextObject))
			return gameInstanceSubsystem->GetCachedColorSnippetReferenceDataAsset();
	}

	// If can't provide a valid world we can still get it if in game thread. But if async then we need a valid world so we can get the cached one since it's not safe to run .Get() and ofc. LoadSynchronous in async. 
	if (IsInGameThread()) {

		if (auto vertexPaintDetectionSettings_Local = GetDefault<UVertexPaintDetectionSettings>())
			return vertexPaintDetectionSettings_Local->vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse.LoadSynchronous();
	}

	return nullptr;
}


//--------------------------------------------------------

// Get Optimization Data Asset

UVertexPaintOptimizationDataAsset* UVertexPaintFunctionLibrary::GetOptimizationDataAsset(const UObject* optionalWorldContextObject) {


	if (optionalWorldContextObject) {

		if (auto gameInstanceSubsystem = GetVertexPaintGameInstanceSubsystem(optionalWorldContextObject))
			return gameInstanceSubsystem->GetCachedOptimizationDataAsset();
	}

	// If can't provide a valid world we can still get it if in game thread. But if async then we need a valid world so we can get the cached one since it's not safe to run .Get() and ofc. LoadSynchronous in async. 
	if (IsInGameThread()) {

		if (auto vertexPaintDetectionSettings_Local = GetDefault<UVertexPaintDetectionSettings>())
			return vertexPaintDetectionSettings_Local->vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse.LoadSynchronous();
	}

	return nullptr;
}


//--------------------------------------------------------

// Get Vertex Paint Material Data Asset

UVertexPaintMaterialDataAsset* UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset(const UObject* optionalWorldContextObject) {


	if (optionalWorldContextObject && IsWorldValid(optionalWorldContextObject->GetWorld())) {

		if (auto gameInstanceSubsystem = GetVertexPaintGameInstanceSubsystem(optionalWorldContextObject))
			return gameInstanceSubsystem->GetCachedMaterialDataAsset();
	}

	// If can't provide a valid world we can still get it if in game thread. But if async then we need a valid world so we can get the cached one since it's not safe to run .Get() and ofc. LoadSynchronous in async. 
	if (IsInGameThread()) {

		if (auto vertexPaintDetectionSettings_Local = GetDefault<UVertexPaintDetectionSettings>())
			return vertexPaintDetectionSettings_Local->vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse.LoadSynchronous();
	}

	return nullptr;
}


//-------------------------------------------------------

// Get Max LOD To Paint On

int UVertexPaintFunctionLibrary::GetAmountOfLODsToPaintOn(UPrimitiveComponent* meshComp, bool overrideLODToPaintUpOn, int overrideUpToLOD) {

	if (!IsValid(meshComp)) return 1;


	int lodsToPaint_Local = 1;
	int maxLODsAvailable_Local = 1;


	if (auto staticMesh_Local = Cast<UStaticMeshComponent>(meshComp)) {

		if (!staticMesh_Local->GetStaticMesh()) return 1;
		if (!staticMesh_Local->GetStaticMesh()->GetRenderData()) return 1;

		maxLODsAvailable_Local = staticMesh_Local->GetStaticMesh()->GetRenderData()->LODResources.Num();

		lodsToPaint_Local = maxLODsAvailable_Local;


		if (auto optimizationDataAssetTemp = GetOptimizationDataAsset(meshComp)) {

			// If the mesh is added to only be painted a certain number of LODs in the Optimization Data Asset 
			if (optimizationDataAssetTemp->GetStaticMeshNumOfLODsToPaint().Contains(staticMesh_Local->GetStaticMesh())) {

				int LODsLimitToPaint_Local = optimizationDataAssetTemp->GetStaticMeshNumOfLODsToPaint().FindRef(staticMesh_Local->GetStaticMesh()).maxAmountOfLODsToPaint;


				if (LODsLimitToPaint_Local <= maxLODsAvailable_Local)
					lodsToPaint_Local = LODsLimitToPaint_Local;
			}
		}


		if (overrideLODToPaintUpOn) {

			if (maxLODsAvailable_Local >= overrideUpToLOD) {

				return overrideUpToLOD;
			}

			else {

				// If lodsToPaint_Local was less than override LOD, then just returns the maximum LODs we have so we get as close to the Override LOD 
				return maxLODsAvailable_Local;
			}
		}

		return lodsToPaint_Local;
	}

	else if (auto skeletalMeshComp_Local = Cast<USkeletalMeshComponent>(meshComp)) {


		USkeletalMesh* skelMesh_Local = nullptr;

#if ENGINE_MAJOR_VERSION == 4

		skelMesh_Local = skeletalMeshComp_Local->SkeletalMesh;

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

		skelMesh_Local = skeletalMeshComp_Local->SkeletalMesh.Get();

#else

		skelMesh_Local = skeletalMeshComp_Local->GetSkeletalMeshAsset();

#endif
#endif

		if (!skelMesh_Local) return 1;
		if (!skeletalMeshComp_Local->GetSkeletalMeshRenderData()) return 1;


		maxLODsAvailable_Local = skeletalMeshComp_Local->GetSkeletalMeshRenderData()->LODRenderData.Num();

		lodsToPaint_Local = maxLODsAvailable_Local;


		if (auto optimizationDataAssetTemp = GetOptimizationDataAsset(meshComp)) {

			if (optimizationDataAssetTemp->GetSkeletalMeshNumOfLODsToPaint().Contains(skelMesh_Local)) {

				int LODsLimitToPaint_Local = optimizationDataAssetTemp->GetSkeletalMeshNumOfLODsToPaint().FindRef(skelMesh_Local).maxAmountOfLODsToPaint;

				if (LODsLimitToPaint_Local <= maxLODsAvailable_Local)
					lodsToPaint_Local = LODsLimitToPaint_Local;
			}
		}


		if (overrideLODToPaintUpOn) {

			if (maxLODsAvailable_Local >= overrideUpToLOD) {

				return overrideUpToLOD;
			}

			else {

				return maxLODsAvailable_Local;
			}
		}

		return lodsToPaint_Local;
	}

	return 1;
}


//--------------------------------------------------------

// Multisphere Trace For Paint At Location

void UVertexPaintFunctionLibrary::MultiCapsuleTraceForClosestUniqueMeshes_Wrapper(const UObject* WorldContextObject, FVector location, float radius, ETraceTypeQuery traceChannel, const TArray<TEnumAsByte<EObjectTypeQuery>>& objectTypesToTraceFor, const TArray<AActor*>& actorsToIgnore, EDrawDebugTrace::Type drawDebugType, TArray<FHitResult>& closestHitsWithUniqueMeshes, float debugDrawTime, bool ignoreSelf, bool traceComplex) {

	closestHitsWithUniqueMeshes.Empty();

	if (!WorldContextObject) return;
	if (!WorldContextObject->GetWorld()) return;
	if (radius <= 0) return;


	// For UE4 it doesn't work to get the face index even if traceComplex is set to True, so turns it off here. 
#if ENGINE_MAJOR_VERSION == 4
	traceComplex = false;
#endif


	TArray<FHitResult> hitResults_Local;

	// Capsule Trace either with objects or visibility so we could get the Face Index. Wasn't posible with Sphere Trace. If we've set object types then traces with that. 
	if (objectTypesToTraceFor.Num() > 0) {

		UKismetSystemLibrary::CapsuleTraceMultiForObjects(WorldContextObject->GetWorld(), location, location * 1.00001f, radius, radius, objectTypesToTraceFor, traceComplex, actorsToIgnore, drawDebugType, hitResults_Local, ignoreSelf, FLinearColor::Red, FLinearColor::Green, debugDrawTime);
	}
	else {

		UKismetSystemLibrary::CapsuleTraceMulti(WorldContextObject->GetWorld(), location, location * 1.00001f, radius, radius, traceChannel, traceComplex, actorsToIgnore, drawDebugType, hitResults_Local, ignoreSelf, FLinearColor::Red, FLinearColor::Green, debugDrawTime);
	}


	if (hitResults_Local.Num() > 0) {

		TMap<UPrimitiveComponent*, FHitResult> hitResultWithUniqueMeshes_Local;
		TMap<UPrimitiveComponent*, float> closestDistances_Local;


		// Makes sure we only get one from each mesh and the closest hit
		for (int i = 0; i < hitResults_Local.Num(); i++) {

			if (IsValid(hitResults_Local[i].Component.Get())) {

				float distance_Local = (hitResults_Local[i].Location - location).Size();


				if (hitResultWithUniqueMeshes_Local.Contains(hitResults_Local[i].Component.Get())) {

					// If mesh already been added, but this hit is closer, then updates it
					if (distance_Local < closestDistances_Local.FindRef(hitResults_Local[i].Component.Get())) {

						closestDistances_Local.Add(hitResults_Local[i].Component.Get(), distance_Local);
						hitResultWithUniqueMeshes_Local.Add(hitResults_Local[i].Component.Get(), hitResults_Local[i]);
					}
				}

				else {

					closestDistances_Local.Add(hitResults_Local[i].Component.Get(), distance_Local);
					hitResultWithUniqueMeshes_Local.Add(hitResults_Local[i].Component.Get(), hitResults_Local[i]);
				}
			}
		}

		hitResultWithUniqueMeshes_Local.GenerateValueArray(closestHitsWithUniqueMeshes);
	}
}


//--------------------------------------------------------

// Set Static Mesh And Release Resources

void UVertexPaintFunctionLibrary::SetStaticMeshAndReleaseResources(UStaticMeshComponent* staticMeshComponent, UStaticMesh* newMesh, bool clearVertexColorsOfChangedMesh) {

	if (!IsValid(staticMeshComponent)) return;
	if (!IsValid(newMesh)) return;


	for (int i = 0; i < staticMeshComponent->LODData.Num(); i++) {

		if (staticMeshComponent->LODData[i].OverrideVertexColors)
			staticMeshComponent->LODData[i].ReleaseOverrideVertexColorsAndBlock();
	}


	// Necessary otherwise it had the same amount of LODs as the previous static mesh
	staticMeshComponent->SetLODDataCount(newMesh->GetNumLODs(), newMesh->GetNumLODs());
	staticMeshComponent->SetStaticMesh(newMesh);


	if (clearVertexColorsOfChangedMesh) {

		for (int i = 0; i < staticMeshComponent->LODData.Num(); i++) {

			int amountOfVertices = newMesh->GetRenderData()->LODResources[i].VertexBuffers.PositionVertexBuffer.GetNumVertices();
			staticMeshComponent->LODData[i].OverrideVertexColors = new FColorVertexBuffer();
			staticMeshComponent->LODData[i].OverrideVertexColors->InitFromSingleColor(FColor(0, 0, 0, 0), amountOfVertices);

			BeginInitResource(staticMeshComponent->LODData[i].OverrideVertexColors);
		}

		staticMeshComponent->MarkRenderStateDirty();
	}
}


//--------------------------------------------------------

// Set Skeletal Mesh And Release Resources

void UVertexPaintFunctionLibrary::SetSkeletalMeshAndReleaseResources(USkeletalMeshComponent* skeletalMeshComponent, USkeletalMesh* newMesh, bool clearVertexColorsOfChangedMesh) {

	if (!IsValid(skeletalMeshComponent)) return;
	if (!IsValid(newMesh)) return;


	FSkelMeshComponentLODInfo* LODInfo_Local = nullptr;

	for (int i = 0; i < skeletalMeshComponent->LODInfo.Num(); i++) {


		LODInfo_Local = &skeletalMeshComponent->LODInfo[i];

		if (LODInfo_Local->OverrideVertexColors)
			LODInfo_Local->ReleaseOverrideVertexColorsAndBlock();
	}



#if ENGINE_MAJOR_VERSION == 4

	skeletalMeshComponent->SetSkeletalMesh(newMesh, false);

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

	skeletalMeshComponent->SetSkeletalMesh(newMesh, false);

#else

	skeletalMeshComponent->SetSkeletalMeshAsset(newMesh);

#endif
#endif


	if (clearVertexColorsOfChangedMesh) {

		for (int i = 0; i < skeletalMeshComponent->LODInfo.Num(); i++) {

			LODInfo_Local = &skeletalMeshComponent->LODInfo[i];

			int amountOfVertices = skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData[i].StaticVertexBuffers.PositionVertexBuffer.GetNumVertices();
			LODInfo_Local->OverrideVertexColors = new FColorVertexBuffer();
			LODInfo_Local->OverrideVertexColors->InitFromSingleColor(FColor(0, 0, 0, 0), amountOfVertices);

#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 4

			BeginInitResource(LODInfo_Local->OverrideVertexColors, &UE::RenderCommandPipe::SkeletalMesh);
#else
			BeginInitResource(LODInfo_Local->OverrideVertexColors);
#endif

		}

		skeletalMeshComponent->MarkRenderStateDirty();
	}
}


//--------------------------------------------------------

// Sort String Array Alphabetically

TArray<FString> UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_SortStringArrayAlphabetically(TArray<FString> strings) {

	FString tempString;

	for (int i = 0; i < strings.Num(); ++i) {

		for (int j = i + 1; j < strings.Num(); ++j) {

			if (strings[i] > strings[j]) {

				tempString = strings[i];
				strings[i] = strings[j];
				strings[j] = tempString;
			}
		}
	}

	return strings;
}


//--------------------------------------------------------

// Sort Assets Names Alphabetically

TMap<int, FString> UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically(TMap<int, FString> assetIndexAndName) {


	FString name_Local;
	TArray<FString> names_Local;
	assetIndexAndName.GenerateValueArray(names_Local);

	int index_Local;
	TArray<int> indexes_Local;
	assetIndexAndName.GetKeys(indexes_Local);


	for (int i = 0; i < names_Local.Num(); ++i) {

		for (int j = i + 1; j < names_Local.Num(); ++j) {

			if (names_Local[i] > names_Local[j]) {

				name_Local = names_Local[i];
				index_Local = indexes_Local[i];

				names_Local[i] = names_Local[j];
				indexes_Local[i] = indexes_Local[j];

				names_Local[j] = name_Local;
				indexes_Local[j] = index_Local;
			}
		}
	}

	TMap<int, FString> indexesAndTheirName_Local;

	for (int i = 0; i < indexes_Local.Num(); i++) {

		indexesAndTheirName_Local.Add(indexes_Local[i], names_Local[i]);
	}

	return indexesAndTheirName_Local;
}


//--------------------------------------------------------

// Draw Primitive Bounds Box

void UVertexPaintFunctionLibrary::DrawPrimitiveComponentBoundsBox(UPrimitiveComponent* component, float lifetime, float thickness, FLinearColor colorToDraw) {

	if (!IsInGameThread()) return;
	if (!IsValid(component)) return;
	if (!IsValid(component->GetWorld())) return;
	if (!component->GetWorld()->IsGameWorld()) return;
	if (component->GetWorld()->bIsTearingDown) return;


	if (Cast<USkeletalMeshComponent>(component)) {

		DrawDebugBox(component->GetWorld(), component->Bounds.GetBox().GetCenter(), component->Bounds.GetBox().GetExtent(), colorToDraw.ToFColor(false), false, lifetime, 0, thickness);
	}

	// In order to take the added collision of static meshes into account we had to get the AggGeom
	else if (Cast<UStaticMeshComponent>(component)) {

		FBoxSphereBounds AggGeomBounds;
		component->GetBodySetup()->AggGeom.CalcBoxSphereBounds(AggGeomBounds, component->GetComponentToWorld());

		DrawDebugBox(component->GetWorld(), component->Bounds.GetBox().GetCenter(), AggGeomBounds.GetBox().GetExtent(), colorToDraw.ToFColor(false), false, lifetime, 0, thickness);
	}
}


//--------------------------------------------------------

// Get Color Snippet Colors Async

void UVertexPaintFunctionLibrary::GetColorSnippetVertexColorsAsync(UObject* WorldContextObject, FGameplayTag colorSnippetTag, FLatentActionInfo LatentInfo, TSoftObjectPtr<UObject>& objectSnippetIsAssociatedWith, TArray<FColor>& colorSnippetVertexColors, bool& success) {

	if (!WorldContextObject) return;
	if (!IsWorldValid(WorldContextObject->GetWorld())) return;
	if (colorSnippetTag.ToString().IsEmpty()) return;


	success = false;
	FSoftObjectPath colorSnippetDataAssetToLoadPath;
	FString colorSnippetID = colorSnippetTag.ToString();

	objectSnippetIsAssociatedWith = GetColorSnippetReferenceDataAsset(WorldContextObject)->GetObjectFromSnippetID(colorSnippetID);

	if (!objectSnippetIsAssociatedWith.IsValid()) {

		UE_LOG(RuntimeVertexColorPlugin, Warning, TEXT("GetColorSnippetVertexColorsAsync: Fail - Couldn't get Valid UObject related to Color Snippet. "));

		return;
	}


	if (GetColorSnippetReferenceDataAsset(WorldContextObject)->skeletalMeshesColorSnippets.Contains(objectSnippetIsAssociatedWith)) {

		if (GetColorSnippetReferenceDataAsset(WorldContextObject)->skeletalMeshesColorSnippets.Find(objectSnippetIsAssociatedWith)->colorSnippetsStorageInfo.Contains(colorSnippetID)) {

			colorSnippetDataAssetToLoadPath = GetColorSnippetReferenceDataAsset(WorldContextObject)->skeletalMeshesColorSnippets.Find(objectSnippetIsAssociatedWith)->colorSnippetsStorageInfo.Find(colorSnippetID)->colorSnippetDataAssetStoredOn.ToSoftObjectPath();
		}
	}

	else if (GetColorSnippetReferenceDataAsset(WorldContextObject)->staticMeshesColorSnippets.Contains(objectSnippetIsAssociatedWith)) {

		if (GetColorSnippetReferenceDataAsset(WorldContextObject)->staticMeshesColorSnippets.Find(objectSnippetIsAssociatedWith)->colorSnippetsStorageInfo.Contains(colorSnippetID)) {

			colorSnippetDataAssetToLoadPath = GetColorSnippetReferenceDataAsset(WorldContextObject)->staticMeshesColorSnippets.Find(objectSnippetIsAssociatedWith)->colorSnippetsStorageInfo.Find(colorSnippetID)->colorSnippetDataAssetStoredOn.ToSoftObjectPath();
		}
	}


	if (colorSnippetDataAssetToLoadPath.ToString().IsEmpty()) {

		UE_LOG(RuntimeVertexColorPlugin, Warning, TEXT("GetColorSnippetVertexColorsAsync: Fail - Couldn't get valid FSoftObjectPath to color snippet data asset to load. "));

		return;
	}


	FGetColorSnippetColorsLatentAction* latentAction = new FGetColorSnippetColorsLatentAction(LatentInfo);
	WorldContextObject->GetWorld()->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, latentAction);

	// Check if already loaded
	if (colorSnippetDataAssetToLoadPath.ResolveObject()) {

		if (UVertexPaintColorSnippetDataAsset* colorSnippetDataAssetTemp = Cast<UVertexPaintColorSnippetDataAsset>(colorSnippetDataAssetToLoadPath.ResolveObject())) {

			if (colorSnippetDataAssetTemp->snippetColorData.Contains(colorSnippetID)) {

				// UE_LOG(LogTemp, Warning, TEXT("Runtime Vertex Paint & Detection Plugin - Already Loaded!"));

				colorSnippetVertexColors = colorSnippetDataAssetTemp->snippetColorData.Find(colorSnippetID)->colorSnippetDataPerLOD[0].meshVertexColorsPerLODArray;
				success = true;
				latentAction->MarkAsCompleted();
				return;
			}
		}
	}


	TArray<FSoftObjectPath> assetsToLoad;
	assetsToLoad.Add(colorSnippetDataAssetToLoadPath);

	FStreamableManager& streamableManager = UAssetManager::GetStreamableManager();

	// Assigning the StreamableHandle first so we can use the streamableHandle in the lambda when completed. 
	TSharedPtr<FStreamableHandle> streamableHandle = streamableManager.RequestAsyncLoad(assetsToLoad, FStreamableDelegate::CreateLambda([]() {
		// 
		}));


	// Update the completion callback with the necessary logic
	streamableHandle->BindCompleteDelegate(FStreamableDelegate::CreateLambda([streamableHandle, latentAction, colorSnippetID, &colorSnippetVertexColors, &success]() mutable {

		if (streamableHandle->HasLoadCompleted()) {

			if (UVertexPaintColorSnippetDataAsset* colorSnippetDataAssetTemp = Cast<UVertexPaintColorSnippetDataAsset>(streamableHandle->GetLoadedAsset())) {

				if (colorSnippetDataAssetTemp->snippetColorData.Contains(colorSnippetID)) {

					colorSnippetVertexColors = colorSnippetDataAssetTemp->snippetColorData.Find(colorSnippetID)->colorSnippetDataPerLOD[0].meshVertexColorsPerLODArray;
					success = true;
				}
			}
		}

		latentAction->MarkAsCompleted();
	}));
}


//--------------------------------------------------------

// Get Amount Of Painted Colors For Each Channel - Async Version

void UVertexPaintFunctionLibrary::GetAmountOfPaintedColorsForEachChannelAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const TArray<FColor>& vertexColors, FVertexDetectAmountOfPaintedColorsOfEachChannel& amountOfColorsOfEachChannel, float minColorAmountToBeConsidered) {

	if (UWorld* World = WorldContextObject->GetWorld()) {


		// Instantiate the AsyncTask
		FColorsOfEachChannelAsyncTask* calculateColorsOfEachChannelAsyncTask = new FColorsOfEachChannelAsyncTask(vertexColors, minColorAmountToBeConsidered);


		// Create our custom latent action and add to manager
		FColorsOfEachChannelLatentAction* LatentAction = new FColorsOfEachChannelLatentAction(LatentInfo, calculateColorsOfEachChannelAsyncTask);
		World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);


		// Bind the delegate and sets the result
		calculateColorsOfEachChannelAsyncTask->OnColorsOfEachChannelAsyncTaskCompleteDelegate.BindLambda([&amountOfColorsOfEachChannel, LatentAction](const FVertexDetectAmountOfPaintedColorsOfEachChannel& amountOfPaintedColorsOfEachChannelResult) {

			amountOfColorsOfEachChannel = amountOfPaintedColorsOfEachChannelResult;
			LatentAction->MarkAsCompleted();
		});


		(new FAutoDeleteAsyncTask<FColorsOfEachChannelAsyncTask>(*calculateColorsOfEachChannelAsyncTask))->StartBackgroundTask();
	}
}


//--------------------------------------------------------

// Get Amount Of Painted Colors For Each Channel

FVertexDetectAmountOfPaintedColorsOfEachChannel UVertexPaintFunctionLibrary::GetAmountOfPaintedColorsForEachChannel(const TArray<FColor>& vertexColors, float minColorAmountToBeConsidered) {

	if (vertexColors.Num() <= 0) return FVertexDetectAmountOfPaintedColorsOfEachChannel();


	FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel_Local;
	FLinearColor linearColor_Local;


	for (auto colorTemp : vertexColors) {

		linearColor_Local = UVertexPaintFunctionLibrary::ReliableFColorToFLinearColor(colorTemp);
		// linearColor_Local = colorTemp.ReinterpretAsLinear();


		// These are used by the async task to check if even the vertex channel was considered, since with paint/detect task you have option to only include those that has a physics surface registered to them, and if they're not, they won't even be considered and if none where considered we didn't run any more logic in FillAmountOfPaintedColorsOfEachChannel()
		amountOfPaintedColorsOfEachChannel_Local.redChannelResult.amountOfVerticesConsidered++;
		amountOfPaintedColorsOfEachChannel_Local.greenChannelResult.amountOfVerticesConsidered++;
		amountOfPaintedColorsOfEachChannel_Local.blueChannelResult.amountOfVerticesConsidered++;
		amountOfPaintedColorsOfEachChannel_Local.alphaChannelResult.amountOfVerticesConsidered++;


		if (linearColor_Local.R >= minColorAmountToBeConsidered) {

			amountOfPaintedColorsOfEachChannel_Local.redChannelResult.amountOfVerticesPaintedAtMinAmount++;
			amountOfPaintedColorsOfEachChannel_Local.redChannelResult.averageColorAmountAtMinAmount += linearColor_Local.R;
		}
		if (linearColor_Local.G >= minColorAmountToBeConsidered) {

			amountOfPaintedColorsOfEachChannel_Local.greenChannelResult.amountOfVerticesPaintedAtMinAmount++;
			amountOfPaintedColorsOfEachChannel_Local.greenChannelResult.averageColorAmountAtMinAmount += linearColor_Local.G;
		}
		if (linearColor_Local.B >= minColorAmountToBeConsidered) {

			amountOfPaintedColorsOfEachChannel_Local.blueChannelResult.amountOfVerticesPaintedAtMinAmount++;
			amountOfPaintedColorsOfEachChannel_Local.blueChannelResult.averageColorAmountAtMinAmount += linearColor_Local.B;
		}
		if (linearColor_Local.A >= minColorAmountToBeConsidered) {

			amountOfPaintedColorsOfEachChannel_Local.alphaChannelResult.amountOfVerticesPaintedAtMinAmount++;
			amountOfPaintedColorsOfEachChannel_Local.alphaChannelResult.averageColorAmountAtMinAmount += linearColor_Local.A;
		}
	}

	// After gotten amount of vertices painted at each color etc., we can use it to set the amounts. This is used by the async task as well
	amountOfPaintedColorsOfEachChannel_Local = ConsolidateColorsOfEachChannel(amountOfPaintedColorsOfEachChannel_Local, vertexColors.Num());


	return amountOfPaintedColorsOfEachChannel_Local;
}


//--------------------------------------------------------

// Set Mesh Constant Vertex Colors and Enables Them

UDynamicMesh* UVertexPaintFunctionLibrary::SetMeshConstantVertexColorsAndEnablesThem(UDynamicMesh* TargetMesh, FLinearColor Color, FGeometryScriptColorFlags Flags, bool bClearExisting, UGeometryScriptDebug* Debug) {

	if (!TargetMesh) return nullptr;


	UE::Geometry::FDynamicMesh3* dynamicMesh3 = nullptr;
	dynamicMesh3 = &TargetMesh->GetMeshRef();

	if (dynamicMesh3) {

		// So we can run EnableVertexColors() again after. Otherwise it would only work once, because it returns if HasVertexColors is true, which created a problem if we painted or detected on the dynamic mesh (which enables colors if there aren't any), then ran this function, because then SetMeshConstantVertexColor() would run but we couldn't actually Set the colors to what SetMeshConstantVertexColor because EnableVertexColors just returned.
		dynamicMesh3->DiscardVertexColors();

		UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshConstantVertexColor(TargetMesh, Color, Flags, bClearExisting, Debug);

		// Converts these like this instead of with .ToFColor since we could get issues where for instance a few vertices out of 10k got their color reset to 0. This fixed the issue.
		FColor colorToApplyTemp;
		colorToApplyTemp.R = (uint8)UKismetMathLibrary::MapRangeClamped(Color.R, 0, 1, 0, 255);
		colorToApplyTemp.G = (uint8)UKismetMathLibrary::MapRangeClamped(Color.G, 0, 1, 0, 255);
		colorToApplyTemp.B = (uint8)UKismetMathLibrary::MapRangeClamped(Color.B, 0, 1, 0, 255);
		colorToApplyTemp.A = 0;

		dynamicMesh3->EnableVertexColors(FVector3f(colorToApplyTemp.R, colorToApplyTemp.G, colorToApplyTemp.B));
	}


	return TargetMesh;
}


//--------------------------------------------------------

// Consolidate Colors Of Each Channel

FVertexDetectAmountOfPaintedColorsOfEachChannel UVertexPaintFunctionLibrary::ConsolidateColorsOfEachChannel(FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfColorsOfEachChannel, int amountOfVertices) {

	if (amountOfVertices <= 0) return amountOfColorsOfEachChannel;

	// If haven't gotten anything on any channel then isn't successfull. 
	if (amountOfColorsOfEachChannel.redChannelResult.amountOfVerticesConsidered <= 0 && amountOfColorsOfEachChannel.greenChannelResult.amountOfVerticesConsidered <= 0 && amountOfColorsOfEachChannel.blueChannelResult.amountOfVerticesConsidered <= 0 && amountOfColorsOfEachChannel.alphaChannelResult.amountOfVerticesConsidered <= 0) return amountOfColorsOfEachChannel;


	amountOfColorsOfEachChannel.redChannelResult.averageColorAmountAtMinAmount = amountOfColorsOfEachChannel.redChannelResult.averageColorAmountAtMinAmount / amountOfVertices;
	amountOfColorsOfEachChannel.greenChannelResult.averageColorAmountAtMinAmount = amountOfColorsOfEachChannel.greenChannelResult.averageColorAmountAtMinAmount / amountOfVertices;
	amountOfColorsOfEachChannel.blueChannelResult.averageColorAmountAtMinAmount = amountOfColorsOfEachChannel.blueChannelResult.averageColorAmountAtMinAmount / amountOfVertices;
	amountOfColorsOfEachChannel.alphaChannelResult.averageColorAmountAtMinAmount = amountOfColorsOfEachChannel.alphaChannelResult.averageColorAmountAtMinAmount / amountOfVertices;


	amountOfColorsOfEachChannel.redChannelResult.percentPaintedAtMinAmount = amountOfColorsOfEachChannel.redChannelResult.amountOfVerticesPaintedAtMinAmount / amountOfVertices;
	amountOfColorsOfEachChannel.greenChannelResult.percentPaintedAtMinAmount = amountOfColorsOfEachChannel.greenChannelResult.amountOfVerticesPaintedAtMinAmount / amountOfVertices;
	amountOfColorsOfEachChannel.blueChannelResult.percentPaintedAtMinAmount = amountOfColorsOfEachChannel.blueChannelResult.amountOfVerticesPaintedAtMinAmount / amountOfVertices;
	amountOfColorsOfEachChannel.alphaChannelResult.percentPaintedAtMinAmount = amountOfColorsOfEachChannel.alphaChannelResult.amountOfVerticesPaintedAtMinAmount / amountOfVertices;

	amountOfColorsOfEachChannel.redChannelResult.percentPaintedAtMinAmount *= 100;
	amountOfColorsOfEachChannel.greenChannelResult.percentPaintedAtMinAmount *= 100;
	amountOfColorsOfEachChannel.blueChannelResult.percentPaintedAtMinAmount *= 100;
	amountOfColorsOfEachChannel.alphaChannelResult.percentPaintedAtMinAmount *= 100;

	amountOfColorsOfEachChannel.successfullyGotColorChannelResultsAtMinAmount = true;

	return amountOfColorsOfEachChannel;
}


//--------------------------------------------------------

// Consolidate Physics Surface Result

FVertexDetectAmountOfPaintedColorsOfEachChannel UVertexPaintFunctionLibrary::ConsolidatePhysicsSurfaceResult(FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfColorsOfEachChannel, int amountOfVertices) {

	if (amountOfVertices <= 0) return amountOfColorsOfEachChannel;
	if (amountOfColorsOfEachChannel.physicsSurfacesResult.Num() <= 0) return amountOfColorsOfEachChannel;


	for (auto& physicsSurfaceResultsTemp : amountOfColorsOfEachChannel.physicsSurfacesResult) {

		if (physicsSurfaceResultsTemp.Value.amountOfVerticesConsidered <= 0) continue;

		physicsSurfaceResultsTemp.Value.averageColorAmountAtMinAmount = physicsSurfaceResultsTemp.Value.averageColorAmountAtMinAmount / amountOfVertices;

		physicsSurfaceResultsTemp.Value.percentPaintedAtMinAmount = physicsSurfaceResultsTemp.Value.amountOfVerticesPaintedAtMinAmount / amountOfVertices;
		physicsSurfaceResultsTemp.Value.percentPaintedAtMinAmount *= 100;
	}


	// Create a TArray of pairs to hold the elements and their float values
	TArray<TPair<TEnumAsByte<EPhysicalSurface>, FVertexDetectAmountOfPaintedColorsOfEachChannel_Results>> SortedArray;
	for (const auto& Pair : amountOfColorsOfEachChannel.physicsSurfacesResult) {

		SortedArray.Add(TPair<TEnumAsByte<EPhysicalSurface>, FVertexDetectAmountOfPaintedColorsOfEachChannel_Results>(Pair.Key, Pair.Value));
	}

	// Sort the array based on painted percent
	SortedArray.Sort([](const TPair<TEnumAsByte<EPhysicalSurface>, FVertexDetectAmountOfPaintedColorsOfEachChannel_Results>& A, const TPair<TEnumAsByte<EPhysicalSurface>, FVertexDetectAmountOfPaintedColorsOfEachChannel_Results>& B) {
		return A.Value.percentPaintedAtMinAmount > B.Value.percentPaintedAtMinAmount;
		});

	TMap<TEnumAsByte<EPhysicalSurface>, FVertexDetectAmountOfPaintedColorsOfEachChannel_Results> sortedPhysicsSurfacesResultTemp;
	for (const auto& Pair : SortedArray) {

		sortedPhysicsSurfacesResultTemp.Add(Pair.Key, Pair.Value);
	}


	amountOfColorsOfEachChannel.physicsSurfacesResult = sortedPhysicsSurfacesResultTemp;
	amountOfColorsOfEachChannel.successfullyGotPhysicsSurfaceResultsAtMinAmount = true;

	return amountOfColorsOfEachChannel;
}


//--------------------------------------------------------

// Get Skeletal Mesh

USkeletalMesh* UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_GetSkeletalMesh(USkeletalMeshComponent* skeletalMeshComp) {

	if (!IsValid(skeletalMeshComp)) return nullptr;


#if ENGINE_MAJOR_VERSION == 4

	return skeletalMeshComp->SkeletalMesh;

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

	return skeletalMeshComp->SkeletalMesh.Get();

#else

	return skeletalMeshComp->GetSkeletalMeshAsset();

#endif
#endif
}


//--------------------------------------------------------

// Get Mesh Component Vertex Colors

FVertexDetectMeshDataStruct UVertexPaintFunctionLibrary::GetMeshComponentVertexColors_Wrapper(UPrimitiveComponent* meshComponent, bool& success, bool getColorsForAllLODs, int getColorsUpToLOD) {

	success = false;
	if (!IsValid(meshComponent)) return FVertexDetectMeshDataStruct();
	if (!getColorsForAllLODs && getColorsUpToLOD < 0) return FVertexDetectMeshDataStruct();


	FVertexDetectMeshDataStruct vertexMeshData_Local;
	TArray<FVertexDetectMeshDataPerLODStruct> meshDataPerLod_Local;
	int amountOfLODsToGet = getColorsUpToLOD + 1;


	if (auto staticMeshComponent = Cast<UStaticMeshComponent>(meshComponent)) {

		if (!IsValid(staticMeshComponent->GetStaticMesh())) return FVertexDetectMeshDataStruct();


		vertexMeshData_Local.meshComp = staticMeshComponent;
		vertexMeshData_Local.meshSource = staticMeshComponent->GetStaticMesh();

		if (getColorsForAllLODs)
			amountOfLODsToGet = staticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources.Num();


		for (int i = 0; i < amountOfLODsToGet; i++) {

			FVertexDetectMeshDataPerLODStruct meshDataPerLodTemp;
			meshDataPerLodTemp.lod = i;
			meshDataPerLodTemp.meshVertexColorsPerLODArray = GetStaticMeshVertexColorsAtLOD(staticMeshComponent, i);

			// If actually got any colors, i.e. the lod was valid
			if (meshDataPerLodTemp.meshVertexColorsPerLODArray.Num() > 0)
				meshDataPerLod_Local.Add(meshDataPerLodTemp);
		}

		vertexMeshData_Local.meshDataPerLOD = meshDataPerLod_Local;
		success = true;

		return vertexMeshData_Local;
	}

	else if (auto skeletalMeshComponent = Cast<USkeletalMeshComponent>(meshComponent)) {

		const UObject* skelMesh = UVertexPaintFunctionLibrary::GetMeshComponentSourceMesh(skeletalMeshComponent);

		if (!IsValid(skelMesh)) return FVertexDetectMeshDataStruct();


		vertexMeshData_Local.meshComp = skeletalMeshComponent;
		vertexMeshData_Local.meshSource = skelMesh;

		if (getColorsForAllLODs)
			amountOfLODsToGet = skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData.Num();


		for (int i = 0; i < amountOfLODsToGet; i++) {

			FVertexDetectMeshDataPerLODStruct meshDataPerLodTemp;
			meshDataPerLodTemp.lod = i;
			meshDataPerLodTemp.meshVertexColorsPerLODArray = GetSkeletalMeshVertexColorsAtLOD(skeletalMeshComponent, i);

			// If actually got any colors, i.e. the lod was valid
			if (meshDataPerLodTemp.meshVertexColorsPerLODArray.Num() > 0)
				meshDataPerLod_Local.Add(meshDataPerLodTemp);
		}

		vertexMeshData_Local.meshDataPerLOD = meshDataPerLod_Local;
		success = true;

		return vertexMeshData_Local;
	}

#if ENGINE_MAJOR_VERSION == 5

	else if (auto dynamicMeshComponent = Cast<UDynamicMeshComponent>(meshComponent)) {

		vertexMeshData_Local.meshComp = dynamicMeshComponent;
		// vertexMeshData_Local.meshSource = ;

		FVertexDetectMeshDataPerLODStruct meshDataPerLodTemp;
		meshDataPerLodTemp.lod = 0;
		meshDataPerLodTemp.meshVertexColorsPerLODArray = GetDynamicMeshVertexColors(dynamicMeshComponent);

		// If actually got any colors, i.e. the lod was valid
		if (meshDataPerLodTemp.meshVertexColorsPerLODArray.Num() > 0)
			meshDataPerLod_Local.Add(meshDataPerLodTemp);

		vertexMeshData_Local.meshDataPerLOD = meshDataPerLod_Local;
		success = true;
	}

	else if (auto geometryCollectionComponent = Cast<UGeometryCollectionComponent>(meshComponent)) {


		vertexMeshData_Local.meshComp = geometryCollectionComponent;
		vertexMeshData_Local.meshSource = geometryCollectionComponent->GetRestCollection();

		FVertexDetectMeshDataPerLODStruct meshDataPerLodTemp;
		meshDataPerLodTemp.lod = 0;
		meshDataPerLodTemp.meshVertexColorsPerLODArray = GetGeometryCollectionVertexColors(geometryCollectionComponent);

		// If actually got any colors, i.e. the lod was valid
		if (meshDataPerLodTemp.meshVertexColorsPerLODArray.Num() > 0)
			meshDataPerLod_Local.Add(meshDataPerLodTemp);

		vertexMeshData_Local.meshDataPerLOD = meshDataPerLod_Local;
		success = true;
	}

#endif

	return FVertexDetectMeshDataStruct();
}


//--------------------------------------------------------

// Get Mesh Component Amount Of Vertices On LOD

int UVertexPaintFunctionLibrary::GetMeshComponentAmountOfVerticesOnLOD(UPrimitiveComponent* meshComponent, int lod) {

	if (!IsValid(meshComponent)) return 0;


	if (auto staticMeshComponent = Cast<UStaticMeshComponent>(meshComponent)) {

		if (!IsValid(staticMeshComponent->GetStaticMesh())) return 0;
		if (!staticMeshComponent->GetStaticMesh()->bAllowCPUAccess) return 0;


		if (staticMeshComponent->LODData.IsValidIndex(lod)) {


			if (staticMeshComponent->LODData[lod].OverrideVertexColors)
				return staticMeshComponent->LODData[lod].OverrideVertexColors->GetNumVertices();

			else if (staticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources.IsValidIndex(lod))
				return staticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[lod].VertexBuffers.PositionVertexBuffer.GetNumVertices();
		}

		else if (staticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources.IsValidIndex(lod)) {

			return staticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[lod].VertexBuffers.PositionVertexBuffer.GetNumVertices();
		}
	}

	else if (auto skeletalMeshComponent = Cast<USkeletalMeshComponent>(meshComponent)) {


		if (skeletalMeshComponent->LODInfo.IsValidIndex(lod)) {

			if (skeletalMeshComponent->LODInfo[lod].OverrideVertexColors)
				return skeletalMeshComponent->LODInfo[lod].OverrideVertexColors->GetNumVertices();

			else if (skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData.IsValidIndex(lod))
				return skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData[lod].StaticVertexBuffers.PositionVertexBuffer.GetNumVertices();
		}

		else if (skeletalMeshComponent->GetSkeletalMeshRenderData()) {

			if (skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData.IsValidIndex(lod))
				return skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData[lod].StaticVertexBuffers.PositionVertexBuffer.GetNumVertices();
		}
	}

#if ENGINE_MAJOR_VERSION == 5

	else if (auto dynamicMeshComponent = Cast<UDynamicMeshComponent>(meshComponent)) {

		if (!dynamicMeshComponent->GetDynamicMesh()) return 0;

		UE::Geometry::FDynamicMesh3* dynamicMesh3 = nullptr;

		dynamicMesh3 = &dynamicMeshComponent->GetDynamicMesh()->GetMeshRef();

		if (!dynamicMesh3) return 0;

		return dynamicMesh3->VertexCount();
	}

	else if (auto geometryCollectionComponent = Cast<UGeometryCollectionComponent>(meshComponent)) {


		if (const UGeometryCollection* geometryCollection = geometryCollectionComponent->GetRestCollection()) {
			if (!geometryCollection) return 0;

			TSharedPtr<FGeometryCollection, ESPMode::ThreadSafe> geometryCollectionData = geometryCollection->GetGeometryCollection();


			// geometryCollectionData->VertexCount // Uses Color.Num() since VertexCount is unreliable. Could return like 15 when we expect 20 000. 
			if (geometryCollectionData.Get() && geometryCollectionData.IsValid())
				return geometryCollectionData->Color.Num();
		}
	}

#endif

	return 0;
}


//--------------------------------------------------------

// Get Mesh Component Vertex Colors At Specific LOD

TArray<FColor> UVertexPaintFunctionLibrary::GetMeshComponentVertexColorsAtLOD_Wrapper(UPrimitiveComponent* meshComponent, int lod) {

	if (!IsValid(meshComponent)) return TArray<FColor>();


	TArray<FColor> vertexColors_Local;


	if (auto staticMeshComponent = Cast<UStaticMeshComponent>(meshComponent)) {

		if (lod < 0) return vertexColors_Local;

		vertexColors_Local = GetStaticMeshVertexColorsAtLOD(staticMeshComponent, lod);
	}

	else if (auto skeletalMeshComponent = Cast<USkeletalMeshComponent>(meshComponent)) {

		if (lod < 0) return vertexColors_Local;

		vertexColors_Local = GetSkeletalMeshVertexColorsAtLOD(skeletalMeshComponent, lod);
	}

#if ENGINE_MAJOR_VERSION == 5

	else if (auto dynamicMeshComponent = Cast<UDynamicMeshComponent>(meshComponent)) {

		vertexColors_Local = GetDynamicMeshVertexColors(dynamicMeshComponent);
	}

	else if (auto geometryCollectionComponent = Cast<UGeometryCollectionComponent>(meshComponent)) {


		vertexColors_Local = GetGeometryCollectionVertexColors(geometryCollectionComponent);
	}

#endif


	return vertexColors_Local;
}


//--------------------------------------------------------

// Get Skeletal Mesh Vertex Colors At LOD

TArray<FColor> UVertexPaintFunctionLibrary::GetSkeletalMeshVertexColorsAtLOD(USkeletalMeshComponent* skeletalMeshComponent, int lod) {

	if (!IsValid(skeletalMeshComponent)) return TArray<FColor>();


	TArray<FColor> colorFromLOD_Local;

	if (skeletalMeshComponent->LODInfo.IsValidIndex(lod)) {

		// If been painted on before then can get the current Instance Color
		if (skeletalMeshComponent->LODInfo[lod].OverrideVertexColors) {

			skeletalMeshComponent->LODInfo[lod].OverrideVertexColors->GetVertexColors(colorFromLOD_Local);
		}
		else {

			if (skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData.IsValidIndex(lod))
				skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData[lod].StaticVertexBuffers.ColorVertexBuffer.GetVertexColors(colorFromLOD_Local);
		}
	}

	else {

		if (skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData.IsValidIndex(lod))
			skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData[lod].StaticVertexBuffers.ColorVertexBuffer.GetVertexColors(colorFromLOD_Local);
	}


	// In one instance when i tested on a side project with a purchased character, it got 0 in Num when first time painting at it, i.e. got vertex colors from SkeletalMeshRenderData. This only occured if the character hadn't gotten any paint on it and was imported with FColor(255,255,255,255) so it was an easy solution to just fill arrays to that color in this rare instance. So unlike the static mesh solution i couldn't initialize colorFromLOD_Local to be a length before running GetVertexColors because then i couldn't detect this rare case. 
	if (colorFromLOD_Local.Num() > 0) {

		// 
	}

	else {

		if (skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData.IsValidIndex(lod))
			colorFromLOD_Local.Init(FColor(255, 255, 255, 255), skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData[lod].GetNumVertices());
	}

	return colorFromLOD_Local;
}


//--------------------------------------------------------

// Get Static Mesh Vertex Colors At LOD

TArray<FColor> UVertexPaintFunctionLibrary::GetStaticMeshVertexColorsAtLOD(UStaticMeshComponent* staticMeshComponent, int lod) {

	if (!IsValid(staticMeshComponent)) return TArray<FColor>();
	if (!IsValid(staticMeshComponent->GetStaticMesh())) return TArray<FColor>();
	if (!staticMeshComponent->GetStaticMesh()->bAllowCPUAccess) return TArray<FColor>();
	if (!staticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources.IsValidIndex(lod)) return TArray<FColor>();


	TArray<FColor> colorFromLOD_Local;
	FColorVertexBuffer* colVertBufferAtLOD_Local = nullptr;
	int totalAmountOfVerticesAtLOD_Local = staticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[lod].VertexBuffers.PositionVertexBuffer.GetNumVertices();

	if (totalAmountOfVerticesAtLOD_Local <= 0) return TArray<FColor>();


	colorFromLOD_Local.SetNum(totalAmountOfVerticesAtLOD_Local, true);

	// Depending if override vertex colors is valid, we get the Vertex Colors from it, i.e. the instanced colors
	if (staticMeshComponent->LODData.IsValidIndex(lod)) {

		if (staticMeshComponent->LODData[lod].OverrideVertexColors) {

			staticMeshComponent->LODData[lod].OverrideVertexColors->GetVertexColors(colorFromLOD_Local);
		}

		else {

			staticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[lod].VertexBuffers.ColorVertexBuffer.GetVertexColors(colorFromLOD_Local);
		}
	}

	else {

		colVertBufferAtLOD_Local = &staticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[lod].VertexBuffers.ColorVertexBuffer;

		// If color buffer isn't initialized it means its default colors are White and it hasn't been painted either in editor or in runtime, if this is the case we init the array with white so even unstored, unpainted cpu meshes with all default white vertex colors can be painted and look as they should. 
		if (colVertBufferAtLOD_Local) {

			if (colVertBufferAtLOD_Local->IsInitialized()) {

				colVertBufferAtLOD_Local->GetVertexColors(colorFromLOD_Local);
			}
			else {

				colorFromLOD_Local.Init(FColor::White, totalAmountOfVerticesAtLOD_Local);
			}
		}

		else {

			colorFromLOD_Local.Init(FColor::White, totalAmountOfVerticesAtLOD_Local);
		}
	}

	return colorFromLOD_Local;
}


//--------------------------------------------------------

// Get Vertex Paint Task Queue

UVertexPaintDetectionTaskQueue* UVertexPaintFunctionLibrary::GetVertexPaintTaskQueue(const UObject* WorldContextObject) {

	if (!WorldContextObject) return nullptr;

	if (auto gameInstanceSubsystemTemp = GetVertexPaintGameInstanceSubsystem(WorldContextObject))
		return gameInstanceSubsystemTemp->GetVertexPaintTaskQueue();

	return nullptr;
}


//--------------------------------------------------------

// Does Paint Task Queue Contain ID

bool UVertexPaintFunctionLibrary::DoesPaintTaskQueueContainID(const UObject* WorldContextObject, int32 taskID) {

	if (!WorldContextObject) return false;

	if (auto paintTaskQueueTemp = GetVertexPaintTaskQueue(WorldContextObject))
		return paintTaskQueueTemp->GetCalculateColorsPaintTasks().Contains(taskID);

	return false;
}


//--------------------------------------------------------

// Does Detect Task Queue Contain ID

bool UVertexPaintFunctionLibrary::DoesDetectTaskQueueContainID(const UObject* WorldContextObject, int32 taskID) {

	if (!WorldContextObject) return false;

	if (auto paintTaskQueueTemp = GetVertexPaintTaskQueue(WorldContextObject))
		return paintTaskQueueTemp->GetCalculateColorsDetectionTasks().Contains(taskID);

	return false;
}


#if ENGINE_MAJOR_VERSION == 5


//--------------------------------------------------------

// Get Dynamic Mesh Vertex Colors

TArray<FColor> UVertexPaintFunctionLibrary::GetDynamicMeshVertexColors(UDynamicMeshComponent* dynamicMeshComponent) {

	TArray<FColor> colorFromLOD_Local;

	if (IsValid(dynamicMeshComponent)) {

		if (dynamicMeshComponent->GetDynamicMesh()) {

			UE::Geometry::FDynamicMesh3* dynamicMesh3 = nullptr;
			dynamicMesh3 = &dynamicMeshComponent->GetDynamicMesh()->GetMeshRef();

			if (dynamicMesh3) {

				UE::Geometry::FVertexInfo vertexInfoTemp;
				colorFromLOD_Local.SetNumUninitialized(dynamicMesh3->MaxVertexID(), false);

				for (int i = 0; i < dynamicMesh3->MaxVertexID(); i++) {

					vertexInfoTemp = UE::Geometry::FVertexInfo();
					vertexInfoTemp = dynamicMesh3->GetVertexInfo(i);

					if (vertexInfoTemp.bHaveC)
						colorFromLOD_Local[i] = (FColor(vertexInfoTemp.Color.X, vertexInfoTemp.Color.Y, vertexInfoTemp.Color.Z, 0));
				}
			}
		}
	}

	return colorFromLOD_Local;
}


//--------------------------------------------------------

// Get Geometry Collection Vertex Colors

TArray<FColor> UVertexPaintFunctionLibrary::GetGeometryCollectionVertexColors(UGeometryCollectionComponent* geometryCollectionComponent) {

	TArray<FColor> colorFromLOD_Local;


	// Geometry Collection Vertex Colors Only available from 5.3 and up

#if ENGINE_MINOR_VERSION >= 3

	if (IsValid(geometryCollectionComponent)) {

		UGeometryCollection* geometryCollection = const_cast<UGeometryCollection*>(geometryCollectionComponent->GetRestCollection());

		if (geometryCollection) {

			TSharedPtr<FGeometryCollection, ESPMode::ThreadSafe> geometryCollectionData = geometryCollection->GetGeometryCollection();

			if (geometryCollectionData.Get()) {

				for (auto colorsTemp : geometryCollectionData->Color)
					colorFromLOD_Local.Add(UVertexPaintFunctionLibrary::ReliableFLinearToFColor(colorsTemp));
			}
		}
	}

#endif

	return colorFromLOD_Local;
}
#endif


//-------------------------------------------------------

// Collision Channel to Object Type

EObjectTypeQuery UVertexPaintFunctionLibrary::CollisionChannelToObjectType(ECollisionChannel channel) {

	// Has this here since i don't want to include UnrealTypes in.h
	return UEngineTypes::ConvertToObjectType(channel);
}


//-------------------------------------------------------

// Object Type to Collision Channel

ECollisionChannel UVertexPaintFunctionLibrary::ObjectTypeToCollisionChannel(EObjectTypeQuery object) {

	// Has this here since i don't want to include UnrealTypes in.h
	return UEngineTypes::ConvertToCollisionChannel(object);
}


//-------------------------------------------------------

// Is In Editor

bool UVertexPaintFunctionLibrary::IsPlayInEditor(const UObject* WorldContextObject) {

	if (!IsValid(WorldContextObject)) return false;
	if (!IsValid(WorldContextObject->GetWorld())) return false;
	if (!IsWorldValid(WorldContextObject->GetWorld())) return false;

	return WorldContextObject->GetWorld()->IsPlayInEditor();
}


//-------------------------------------------------------

// Does Physics Surface Belong To Parent Surface

bool UVertexPaintFunctionLibrary::DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily(const UObject* WorldContextObject, TEnumAsByte<EPhysicalSurface> physicsSurface, TEnumAsByte<EPhysicalSurface> parentOfPhysicsSurfaceFamily) {

	if (physicsSurface == EPhysicalSurface::SurfaceType_Default) return false;
	if (parentOfPhysicsSurfaceFamily == EPhysicalSurface::SurfaceType_Default) return false;

	if (auto materialDataAsset = UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset(WorldContextObject)) {

		if (!materialDataAsset->GetPhysicsSurfaceFamilies().Contains(parentOfPhysicsSurfaceFamily)) return false;

		// If its the parent surface itself. 
		if (physicsSurface == parentOfPhysicsSurfaceFamily) return true;

		if (materialDataAsset->GetPhysicsSurfaceFamilies().FindRef(parentOfPhysicsSurfaceFamily).childSurfaces.Contains(physicsSurface)) return true;
	}

	return false;
}


//-------------------------------------------------------

// Get Vertex Paint Material Interface

TMap<TSoftObjectPtr<UMaterialInterface>, FVertexPaintMaterialDataAssetStruct> UVertexPaintFunctionLibrary::GetVertexPaintMaterialInterface_Wrapper(const UObject* WorldContextObject) {

	if (auto materialDataAsset = UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset(WorldContextObject))
		return materialDataAsset->GetVertexPaintMaterialInterface();

	return TMap<TSoftObjectPtr<UMaterialInterface>, FVertexPaintMaterialDataAssetStruct>();
}


//-------------------------------------------------------

// Is Material Added To Paint On Material Data Asset

bool UVertexPaintFunctionLibrary::IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper(const UObject* WorldContextObject, TSoftObjectPtr<UMaterialInterface> material) {

	if (auto materialDataAsset = UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset(WorldContextObject))
		return materialDataAsset->IsMaterialAddedToPaintOnMaterialDataAsset(material);

	return false;
}


//-------------------------------------------------------

// Get Parents Of Physics Surface

TArray<TEnumAsByte<EPhysicalSurface>> UVertexPaintFunctionLibrary::GetParentsOfPhysicsSurface_Wrapper(const UObject* WorldContextObject, TEnumAsByte<EPhysicalSurface> physicalSurface) {

	if (auto materialDataAsset = UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset(WorldContextObject))
		return materialDataAsset->GetParentsOfPhysicsSurface(physicalSurface);

	return TArray<TEnumAsByte<EPhysicalSurface>>();
}


//-------------------------------------------------------

// Get Physics Surface Families

TMap<TEnumAsByte<EPhysicalSurface>, FVertexPaintParentPhysicsSurfaceStruct> UVertexPaintFunctionLibrary::GetPhysicsSurfaceFamilies_Wrapper(const UObject* WorldContextObject) {

	if (auto materialDataAsset = UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset(WorldContextObject))
		return materialDataAsset->GetPhysicsSurfaceFamilies();

	return TMap<TEnumAsByte<EPhysicalSurface>, FVertexPaintParentPhysicsSurfaceStruct>();
}


//-------------------------------------------------------

// Get Physics Surfaces Registered To Material

TArray<TEnumAsByte<EPhysicalSurface>> UVertexPaintFunctionLibrary::GetPhysicsSurfacesRegisteredToMaterial(const UObject* WorldContextObject, UMaterialInterface* material) {

	if (!IsValid(material)) return TArray<TEnumAsByte<EPhysicalSurface>>();

	if (auto materialDataAsset = UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset(WorldContextObject)) {


		UMaterialInterface* materialToGetPhysicsSurfacesTemp = materialDataAsset->GetRegisteredMaterialInstanceOrParentMaterial(material);

		if (!materialDataAsset->GetVertexPaintMaterialInterface().Contains(materialToGetPhysicsSurfacesTemp)) return TArray<TEnumAsByte<EPhysicalSurface>>();

		TArray<TEnumAsByte<EPhysicalSurface>> physicsSurfacesRegisteredToMaterialTemp;

		// Fills Elements for each channel, even if it may have Default so it will be easier to work with 
		physicsSurfacesRegisteredToMaterialTemp.Add(materialDataAsset->GetVertexPaintMaterialInterface().FindRef(materialToGetPhysicsSurfacesTemp).paintedAtRed);
		physicsSurfacesRegisteredToMaterialTemp.Add(materialDataAsset->GetVertexPaintMaterialInterface().FindRef(materialToGetPhysicsSurfacesTemp).paintedAtGreen);
		physicsSurfacesRegisteredToMaterialTemp.Add(materialDataAsset->GetVertexPaintMaterialInterface().FindRef(materialToGetPhysicsSurfacesTemp).paintedAtBlue);
		physicsSurfacesRegisteredToMaterialTemp.Add(materialDataAsset->GetVertexPaintMaterialInterface().FindRef(materialToGetPhysicsSurfacesTemp).paintedAtAlpha);

		return physicsSurfacesRegisteredToMaterialTemp;
	}

	return TArray<TEnumAsByte<EPhysicalSurface>>();
}


//-------------------------------------------------------

// Get Colors To Apply Based Off Detected Physics Material

void UVertexPaintFunctionLibrary::GetColorsToApplyFromPhysicsSurface_Wrapper(const UObject* WorldContextObject, UMaterialInterface* materialToApplyColorsTo, const TEnumAsByte<EPhysicalSurface>& physicalSurface, float& redAmountToApply, bool& redAmountSuccessfullyGot, float& greenAmountToApply, bool& greenAmountSuccessfullyGot, float& blueAmountToApply, bool& blueAmountSuccessfullyGot, float& alphaAmountToApply, bool& alphaAmountSuccessfullyGot, bool& successfullyGotColorsToApplyOnAChannel, float amountToReturnOnChannelsWithPhysicsSurface, float amountToReturnOnChannelsWithoutThePhysicsSurface, bool applyOnChannelsWithSamePhysicsParents, bool applyOnChannelsThatsChildOfPhysicsSurface, bool applyOnChannelsThatResultsInBlendableSurfaces) {

	successfullyGotColorsToApplyOnAChannel = false;

	redAmountToApply = 0;
	redAmountSuccessfullyGot = false;

	greenAmountToApply = 0;
	greenAmountSuccessfullyGot = false;

	blueAmountToApply = 0;
	blueAmountSuccessfullyGot = false;

	alphaAmountToApply = 0;
	alphaAmountSuccessfullyGot = false;


	// if (amountToReturnOnChannelsWithPhysicsSurface == 0) return; // We DON'T want to return if 0, since if we're painting with Set instead of Adding, then 0 may be what we want, or if lerping toward a target. 
	if (physicalSurface == EPhysicalSurface::SurfaceType_Default) return;

	auto materialDataAsset = UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset(WorldContextObject);
	if (!materialDataAsset) return;

	materialToApplyColorsTo = materialDataAsset->GetRegisteredMaterialInstanceOrParentMaterial(materialToApplyColorsTo);
	if (!IsValid(materialToApplyColorsTo)) return;



	TEnumAsByte<EPhysicalSurface> physicsSurfacePaintedAtRed = materialDataAsset->GetVertexPaintMaterialInterface().FindRef(materialToApplyColorsTo).paintedAtRed;
	TEnumAsByte<EPhysicalSurface> physicsSurfacePaintedAtGreen = materialDataAsset->GetVertexPaintMaterialInterface().FindRef(materialToApplyColorsTo).paintedAtGreen;
	TEnumAsByte<EPhysicalSurface> physicsSurfacePaintedAtBlue = materialDataAsset->GetVertexPaintMaterialInterface().FindRef(materialToApplyColorsTo).paintedAtBlue;
	TEnumAsByte<EPhysicalSurface> physicsSurfacePaintedAtAlpha = materialDataAsset->GetVertexPaintMaterialInterface().FindRef(materialToApplyColorsTo).paintedAtAlpha;


	// If Exactly what we're trying to paint is on the channel
	if (physicalSurface == physicsSurfacePaintedAtRed)
		redAmountSuccessfullyGot = true;

	if (physicalSurface == physicsSurfacePaintedAtGreen)
		greenAmountSuccessfullyGot = true;

	if (physicalSurface == physicsSurfacePaintedAtBlue)
		blueAmountSuccessfullyGot = true;

	if (physicalSurface == physicsSurfacePaintedAtAlpha)
		alphaAmountSuccessfullyGot = true;


	TArray<TEnumAsByte<EPhysicalSurface>> parentPhysicsSurfaceTemp = materialDataAsset->GetParentsOfPhysicsSurface(physicalSurface);

	// If we want to Apply on the channel if it has a Parent of what's on the Channel. For instance Cobble-Sand didn't exist on any of the Channels, but Sand which is a Parent does exist, then we want to apply. Useful if for instance Characters that has fundemental Parent Surfaces like Sand, Mud etc. is walking over different types of Sandy/Muddy surfaces and we want them to rub off on the correct channel on the character. 
	if (applyOnChannelsWithSamePhysicsParents) {

		if (!redAmountSuccessfullyGot && parentPhysicsSurfaceTemp.Contains(physicsSurfacePaintedAtRed))
			redAmountSuccessfullyGot = true;

		if (!greenAmountSuccessfullyGot && parentPhysicsSurfaceTemp.Contains(physicsSurfacePaintedAtGreen))
			greenAmountSuccessfullyGot = true;

		if (!blueAmountSuccessfullyGot && parentPhysicsSurfaceTemp.Contains(physicsSurfacePaintedAtBlue))
			blueAmountSuccessfullyGot = true;

		if (!alphaAmountSuccessfullyGot && parentPhysicsSurfaceTemp.Contains(physicsSurfacePaintedAtAlpha))
			alphaAmountSuccessfullyGot = true;
	}


	FVertexPaintParentPhysicsSurfaceStruct physicsSurfaceFamilyTemp;

	// Checks if physics surface we're trying to apply is a parent, and if what's on each of the vertex color channels is a child of that parent. Then we can apply color on that channel as well. This can be useful if for instance you have a Wheel with Parent Surface Sand on it, that is driving over a Material that doesn't have Sand registered, but it has Cobble-Sand which is a child of it. Then the sandy Wheel can Rub off on the correct channel and spread Sand onto the Cobble-Sand. 
	if (applyOnChannelsThatsChildOfPhysicsSurface && materialDataAsset->GetPhysicsSurfaceFamilies().Contains(physicalSurface)) {

		physicsSurfaceFamilyTemp = materialDataAsset->GetPhysicsSurfaceFamilies().FindRef(physicalSurface);

		if (physicsSurfaceFamilyTemp.childSurfaces.Num() > 0) {

			if (!redAmountSuccessfullyGot) {

				if (physicsSurfaceFamilyTemp.childSurfaces.Contains(physicsSurfacePaintedAtRed))
					redAmountSuccessfullyGot = true;
			}

			if (!greenAmountSuccessfullyGot) {

				if (physicsSurfaceFamilyTemp.childSurfaces.Contains(physicsSurfacePaintedAtGreen))
					greenAmountSuccessfullyGot = true;
			}

			if (!blueAmountSuccessfullyGot) {

				if (physicsSurfaceFamilyTemp.childSurfaces.Contains(physicsSurfacePaintedAtBlue))
					blueAmountSuccessfullyGot = true;
			}

			if (!alphaAmountSuccessfullyGot) {

				if (physicsSurfaceFamilyTemp.childSurfaces.Contains(physicsSurfacePaintedAtAlpha))
					alphaAmountSuccessfullyGot = true;
			}
		}
	}



	// Checks Physics Surfaces that it can Blend into as well, if we're trying to apply a blended surface or if we should apply it on parents or childs of it. In the Example Project for instance we have a Cobble Material with Cobble-Sand on Red Channel, and Cobble-Puddle on Blue, which can blend into Cobble-Mud, which is a child of Mud. So if for instance a wheel that has Mud that is driving over the Cobble Material, we can with this get Cobble-Mud if set to applyOnChannelsThatsChildOfPhysicsSurface, and that it's a child of Mud, which means the Wheel with Mud can paint off itself on the channels that formed Cobble-Mud. Same way other way around if applyOnChannelsWithSamePhysicsParents is true, where a clean wheel can get painted with Mud by Cobble-Mud. 
	if (applyOnChannelsThatResultsInBlendableSurfaces) {

		// Gets Physics Surface Blend Settings on the Material we're Applying Colors on, for instance the Cobble Material from the Example Project has some registered 
		for (auto& blendSettingTemp : materialDataAsset->GetVertexPaintMaterialInterface().FindRef(materialToApplyColorsTo).physicsSurfaceBlendingSettings) {

			// If we're trying to apply a Blendable Surface, for instance Cobble-Mud, Or we've set to affect childs of a parent, for instance Mud, and we find the Blendable Cobble-Mud as a child
			if (blendSettingTemp.Key == physicalSurface || (applyOnChannelsThatsChildOfPhysicsSurface && physicsSurfaceFamilyTemp.childSurfaces.Contains(blendSettingTemp.Key)) || (applyOnChannelsWithSamePhysicsParents && parentPhysicsSurfaceTemp.Contains(blendSettingTemp.Key))) {

				TArray<TEnumAsByte<EPhysicalSurface>> blendableParentsPhysicsSurfaceTemp = materialDataAsset->GetParentsOfPhysicsSurface(blendSettingTemp.Key);


				// Now we know that the Blended Surface checks out, and we just need to get which vertex color channels that was the result of that blend, so we can set those channels to return the correct amount. To do this we loop through the physics surfaces that resultet in the blend, and then runs GetVertexColorChannelsPhysicsSurfaceIsRegisteredTo on that physics surface
				for (auto physicsSurfacesThatBlendedIntoEachotherTemp : blendSettingTemp.Value.physicsSurfacesThatCanBlend) {

					bool successfullyGotChannelPhysicsSurfaceIsRegisteredToLocal = false;
					auto channelPhysicsSurfaceIsRegisteredTo_Local = GetVertexColorChannelsPhysicsSurfaceIsRegisteredTo(WorldContextObject, materialToApplyColorsTo, physicsSurfacesThatBlendedIntoEachotherTemp, successfullyGotChannelPhysicsSurfaceIsRegisteredToLocal);

					if (successfullyGotChannelPhysicsSurfaceIsRegisteredToLocal) {

						for (auto vertexColorChannel : channelPhysicsSurfaceIsRegisteredTo_Local) {

							switch (vertexColorChannel) {

							case Enum_SurfaceAtChannel::Default:
								break;

							case Enum_SurfaceAtChannel::RedChannel:

								redAmountSuccessfullyGot = true;
								break;

							case Enum_SurfaceAtChannel::GreenChannel:

								greenAmountSuccessfullyGot = true;
								break;

							case Enum_SurfaceAtChannel::BlueChannel:

								blueAmountSuccessfullyGot = true;
								break;

							case Enum_SurfaceAtChannel::AlphaChannel:

								alphaAmountSuccessfullyGot = true;
								break;

							default:
								break;
							}
						}
					}
				}
			}
		}
	}


	if (redAmountSuccessfullyGot)
		redAmountToApply = amountToReturnOnChannelsWithPhysicsSurface;
	else
		redAmountToApply = amountToReturnOnChannelsWithoutThePhysicsSurface;


	if (greenAmountSuccessfullyGot)
		greenAmountToApply = amountToReturnOnChannelsWithPhysicsSurface;
	else
		greenAmountToApply = amountToReturnOnChannelsWithoutThePhysicsSurface;


	if (blueAmountSuccessfullyGot)
		blueAmountToApply = amountToReturnOnChannelsWithPhysicsSurface;
	else
		blueAmountToApply = amountToReturnOnChannelsWithoutThePhysicsSurface;


	if (alphaAmountSuccessfullyGot)
		alphaAmountToApply = amountToReturnOnChannelsWithPhysicsSurface;
	else
		alphaAmountToApply = amountToReturnOnChannelsWithoutThePhysicsSurface;


	// If managed to get color to apply on any channel at all. 
	if (redAmountSuccessfullyGot || greenAmountSuccessfullyGot || blueAmountSuccessfullyGot || alphaAmountSuccessfullyGot) {

		successfullyGotColorsToApplyOnAChannel = true;
	}

	else {

		redAmountToApply = 0;
		greenAmountToApply = 0;
		blueAmountToApply = 0;
		alphaAmountToApply = 0;
	}
}


//-------------------------------------------------------

// Get The Most Dominant Physics Surface

bool UVertexPaintFunctionLibrary::GetTheMostDominantPhysicsSurface_Wrapper(const UObject* WorldContextObject, UMaterialInterface* optionalMaterialPhysicsSurfaceWasDetectedOn, TArray<TEnumAsByte<EPhysicalSurface>> physicsSurfaces, TArray<float> physicsSurfaceValues, TEnumAsByte<EPhysicalSurface>& mostDominantPhysicsSurfaceFromArray, float& mostDominantPhysicsSurfaceColorValue) {

	mostDominantPhysicsSurfaceFromArray = EPhysicalSurface::SurfaceType_Default;
	mostDominantPhysicsSurfaceColorValue = 0;

	if (physicsSurfaces.Num() <= 0) return false;
	if (physicsSurfaceValues.Num() <= 0) return false;
	if (physicsSurfaces.Num() != physicsSurfaceValues.Num()) return false;

	float strongestSurfaceValue_Local = 0;
	TEnumAsByte<EPhysicalSurface> strongestSurface_Local = EPhysicalSurface::SurfaceType_Default;
	TArray<TEnumAsByte<EPhysicalSurface>> blendedSurfaceResults_Local;
	TArray<float> blendedSurfaceValueResults_Local;


	// First just gets the surface with the strongest value
	for (int i = 0; i < physicsSurfaces.Num(); i++) {

		// Has to have something. So if you send in an array where everything is 0 then you shouldn't be able to get a dominant surface
		if (physicsSurfaceValues[i] > 0) {

			if (physicsSurfaceValues[i] >= strongestSurfaceValue_Local) {

				strongestSurface_Local = physicsSurfaces[i];
				strongestSurfaceValue_Local = physicsSurfaceValues[i];
			}
		}
	}

	auto materialDataAsset = UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset(WorldContextObject);

	// If material is registered then checks if any of the surfaces can blend
	if (materialDataAsset) {


		TArray<FVertexPaintPhysicsSurfaceBlendingSettings> surfaceBlendSettings_Local;


		if (!materialDataAsset->GetVertexPaintMaterialInterface().Contains(optionalMaterialPhysicsSurfaceWasDetectedOn)) {

			// If not registered, then if it's an instance, then replaces material with the parent and checks that. Makes it possible so you don't have to register every single instance but can if you wish only register the parent
			if (auto materialInstanceTemp = Cast<UMaterialInstance>(optionalMaterialPhysicsSurfaceWasDetectedOn)) {

				optionalMaterialPhysicsSurfaceWasDetectedOn = materialInstanceTemp->Parent;
			}
		}


		if (materialDataAsset->GetVertexPaintMaterialInterface().Contains(optionalMaterialPhysicsSurfaceWasDetectedOn)) {

			materialDataAsset->GetVertexPaintMaterialInterface().FindRef(optionalMaterialPhysicsSurfaceWasDetectedOn).physicsSurfaceBlendingSettings.GenerateValueArray(surfaceBlendSettings_Local);


			bool blendedSurfaces_ContainsAll_Local = true;
			bool blendedSurfaces_AllHaveMinAmount_Local = true;
			float blendedSurfaces_TotalAmount_Local = 0;


			// Then checks if any of the surface we got as a parameter can blendand if their value combined allows them to blendand is then the strongest surface
			if (surfaceBlendSettings_Local.Num() > 0) {

				for (auto blendSettingTemp : surfaceBlendSettings_Local) {

					blendedSurfaces_ContainsAll_Local = true;

					// If the phys surface array sent in even has all necessary surfaces for this blend setting
					for (auto physSurfaceThatBlendTemp : blendSettingTemp.physicsSurfacesThatCanBlend) {

						if (!physicsSurfaces.Contains(physSurfaceThatBlendTemp)) {

							blendedSurfaces_ContainsAll_Local = false;
							break;
						}
					}

					if (!blendedSurfaces_ContainsAll_Local) continue;


					blendedSurfaces_AllHaveMinAmount_Local = true;
					blendedSurfaces_TotalAmount_Local = 0;

					// If we know we have all phys surfaces requires, then checks if each has min required color amount that they require to blend
					for (auto physSurfaceThatBlendTemp : blendSettingTemp.physicsSurfacesThatCanBlend) {

						if (physicsSurfaceValues[physicsSurfaces.Find(physSurfaceThatBlendTemp)] >= blendSettingTemp.minAmountOnEachSurfaceToBeAbleToBlend) {

							blendedSurfaces_TotalAmount_Local += physicsSurfaceValues[physicsSurfaces.Find(physSurfaceThatBlendTemp)];
						}
						else {

							blendedSurfaces_AllHaveMinAmount_Local = false;
							break;
						}
					}

					if (!blendedSurfaces_AllHaveMinAmount_Local) continue;


					blendedSurfaceResults_Local.Add(blendSettingTemp.physicsSurfaceToResultIn);
					blendedSurfaceValueResults_Local.Add(blendedSurfaces_TotalAmount_Local);
				}
			}
		}
	}

	// If got any blendes surfaces then checks if they're stronger than the strongest surface we got earlier when we checked them invidiually and updates it. If there are several blendes surfaces, the one that combines has the strongest value will be considered the strongest surface
	if (blendedSurfaceValueResults_Local.Num() > 0) {

		for (int i = 0; i < blendedSurfaceValueResults_Local.Num(); i++) {

			if (blendedSurfaceValueResults_Local[i] > strongestSurfaceValue_Local) {


				strongestSurfaceValue_Local = blendedSurfaceValueResults_Local[i];
				strongestSurface_Local = blendedSurfaceResults_Local[i];
			}
		}
	}

	// Only returns true if we actually got a surface, if they where all 0 so strongest surface is the default 0 then we don't want to return anything surface
	if (strongestSurface_Local != EPhysicalSurface::SurfaceType_Default && strongestSurfaceValue_Local > 0) {

		mostDominantPhysicsSurfaceFromArray = strongestSurface_Local;
		mostDominantPhysicsSurfaceColorValue = strongestSurfaceValue_Local;

		return true;
	}

	return false;
}


//-------------------------------------------------------

// Get Vertex Color Channels Physics Surface Is Registered To Wrapper

TArray<Enum_SurfaceAtChannel> UVertexPaintFunctionLibrary::GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper(const UObject* WorldContextObject, UMaterialInterface* material, TEnumAsByte<EPhysicalSurface> physicsSurface, bool& successfull) {

	successfull = false;
	TArray< Enum_SurfaceAtChannel> surfaceAtChannels; // Array in case it's a blendable where there are several channels that make up the physics surface

	if (!IsValid(material)) return surfaceAtChannels;

	auto materialDataAsset = UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset(WorldContextObject);
	if (!materialDataAsset) return surfaceAtChannels;


	if (!materialDataAsset->GetVertexPaintMaterialInterface().Contains(material)) {

		// If not registered, then if it's an instance, then replaces material with the parent and checks that. Makes it possible so you don't have to register every single instance but can if you wish only register the parent
		if (auto materialInstanceTemp = Cast<UMaterialInstance>(material)) {

			material = materialInstanceTemp->Parent;

			if (!materialDataAsset->GetVertexPaintMaterialInterface().Contains(material))
				return surfaceAtChannels;
		}
		else {

			return surfaceAtChannels;
		}
	}


	auto materialDataAssetTemp = materialDataAsset->GetVertexPaintMaterialInterface().FindRef(material);

	// Gets if physics surface is registered to R, G, B or A for this Material, if so then returns
	surfaceAtChannels = GetVertexColorChannelsPhysicsSurfaceIsRegisteredTo(WorldContextObject, material, physicsSurface, successfull);

	if (successfull) {

		return surfaceAtChannels;
	}

	// If couldn't find any, then checks if there are several blendables that make up this surface, and get the surface channels for them. 
	for (auto& blendSettingTemp : materialDataAssetTemp.physicsSurfaceBlendingSettings) {

		if (blendSettingTemp.Key == physicsSurface) {

			for (auto blendedPhysSurfacesThatMakeUpThePhysicsSurface : blendSettingTemp.Value.physicsSurfacesThatCanBlend) {

				TArray< Enum_SurfaceAtChannel> blendableChannelsThatMakeUpPhysicsSurfaceTemp = GetVertexColorChannelsPhysicsSurfaceIsRegisteredTo(WorldContextObject, material, blendedPhysSurfacesThatMakeUpThePhysicsSurface, successfull);

				if (successfull)
					surfaceAtChannels.Append(blendableChannelsThatMakeUpPhysicsSurfaceTemp);
			}

			if (successfull)
				return surfaceAtChannels;
		}
	}

	return surfaceAtChannels;
}


//-------------------------------------------------------

// Get Vertex Color Channels Physics Surface Is Registered To - This just checks the RGBA channels and not Blendables like the one above

TArray<Enum_SurfaceAtChannel> UVertexPaintFunctionLibrary::GetVertexColorChannelsPhysicsSurfaceIsRegisteredTo(const UObject* WorldContextObject, UMaterialInterface* material, TEnumAsByte<EPhysicalSurface> physicsSurface, bool& successfull) {

	successfull = false;

	if (!IsValid(material)) return TArray<Enum_SurfaceAtChannel>();

	auto materialDataAsset = UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset(WorldContextObject);
	if (!materialDataAsset) return TArray<Enum_SurfaceAtChannel>();

	if (!materialDataAsset->GetVertexPaintMaterialInterface().Contains(material)) {

		// If not registered, then if it's an instance, then replaces material with the parent and checks that. Makes it possible so you don't have to register every single instance but can if you wish only register the parent
		if (auto materialInstanceTemp = Cast<UMaterialInstance>(material)) {

			material = materialInstanceTemp->Parent;

			if (!materialDataAsset->GetVertexPaintMaterialInterface().Contains(material))
				return TArray<Enum_SurfaceAtChannel>();
		}
		else {

			return TArray<Enum_SurfaceAtChannel>();
		}
	}

	auto materialDataAssetTemp = materialDataAsset->GetVertexPaintMaterialInterface().FindRef(material);

	TArray<Enum_SurfaceAtChannel> atSurfaceChannels_Local;


	if (materialDataAssetTemp.atDefault == physicsSurface) {

		successfull = true;
		atSurfaceChannels_Local.Add(Enum_SurfaceAtChannel::Default);
	}

	if (materialDataAssetTemp.paintedAtRed == physicsSurface) {

		successfull = true;
		atSurfaceChannels_Local.Add(Enum_SurfaceAtChannel::RedChannel);
	}

	if (materialDataAssetTemp.paintedAtGreen == physicsSurface) {

		successfull = true;
		atSurfaceChannels_Local.Add(Enum_SurfaceAtChannel::GreenChannel);
	}

	if (materialDataAssetTemp.paintedAtBlue == physicsSurface) {

		successfull = true;
		atSurfaceChannels_Local.Add(Enum_SurfaceAtChannel::BlueChannel);
	}

	if (materialDataAssetTemp.paintedAtAlpha == physicsSurface) {

		successfull = true;
		atSurfaceChannels_Local.Add(Enum_SurfaceAtChannel::AlphaChannel);
	}

	return atSurfaceChannels_Local;
}


//--------------------------------------------------------

// Get Clothing Assets

TArray<UClothingAssetBase*> UVertexPaintFunctionLibrary::GetClothAssets(USkeletalMesh* skeletalMesh) {

	if (!IsValid(skeletalMesh)) return TArray<UClothingAssetBase*>();

	return skeletalMesh->GetMeshClothingAssets();
}


//-------------------------------------------------------

// Set Cloth Physics

void UVertexPaintFunctionLibrary::SetChaosClothPhysics(USkeletalMeshComponent* skeletalMeshComponent, UClothingAssetBase* clothingAsset, const FVertexDetectChaosClothPhysicsSettings& clothPhysicsSettings) {

	if (!IsValid(skeletalMeshComponent)) return;
	if (!clothingAsset) return;


#if ENGINE_MAJOR_VERSION >= 5

	if (UClothingSimulationInteractor* clothingSimulationInteractorTemp = skeletalMeshComponent->GetClothingSimulationInteractor()) {

		if (UChaosClothingSimulationInteractor* chaosClothingSimilationInteractorTemp = Cast<UChaosClothingSimulationInteractor>(clothingSimulationInteractorTemp)) {

			if (UClothingInteractor* clothingInteractorTemp = chaosClothingSimilationInteractorTemp->GetClothingInteractor(clothingAsset->GetName())) {

				if (UChaosClothingInteractor* chaosClothingInteractorTemp = Cast<UChaosClothingInteractor>(clothingInteractorTemp)) {


					if (clothPhysicsSettings.SetDamping)
						chaosClothingInteractorTemp->SetDamping(clothPhysicsSettings.clothDampingSettings.SetDamping_dampingCoefficient);

					if (clothPhysicsSettings.SetGravity)
						chaosClothingInteractorTemp->SetGravity(clothPhysicsSettings.clothGravitySettings.SetGravity_gravityScale, clothPhysicsSettings.clothGravitySettings.SetGravity_overrideGravity, clothPhysicsSettings.clothGravitySettings.SetGravity_gravityOverride);

					if (clothPhysicsSettings.SetWind)
						chaosClothingInteractorTemp->SetWind(clothPhysicsSettings.clothWindSettings.SetWind_drag, clothPhysicsSettings.clothWindSettings.SetWind_lift, clothPhysicsSettings.clothWindSettings.SetWind_airDensity, clothPhysicsSettings.clothWindSettings.SetWind_windVelocity);

					if (clothPhysicsSettings.SetAnimDrive)
						chaosClothingInteractorTemp->SetAnimDrive(clothPhysicsSettings.clothAnimDriveSettings.SetAnimDrive_Stiffness, clothPhysicsSettings.clothAnimDriveSettings.SetAnimDrive_Damping);

					if (clothPhysicsSettings.SetCollision)
						chaosClothingInteractorTemp->SetCollision(clothPhysicsSettings.clothCollisionSettings.SetCollision_CollisionThickness, clothPhysicsSettings.clothCollisionSettings.SetCollision_FrictionCoefficient, clothPhysicsSettings.clothCollisionSettings.SetCollision_UseCCD, clothPhysicsSettings.clothCollisionSettings.SetCollision_SelfCollisionThickness);

					if (clothPhysicsSettings.SetLongRangeAttachment)
						chaosClothingInteractorTemp->SetLongRangeAttachment(clothPhysicsSettings.clothLongRangeAttachmentSettings.LongRangeAttachment_TetherThickness, clothPhysicsSettings.clothLongRangeAttachmentSettings.LongRangeAttachment_TetherScale);

					if (clothPhysicsSettings.SetMaterial)
						chaosClothingInteractorTemp->SetMaterial(clothPhysicsSettings.clothMaterialSettings.Material_EdgeStiffness, clothPhysicsSettings.clothMaterialSettings.Material_BendingStiffness, clothPhysicsSettings.clothMaterialSettings.Material_AreaStiffness);

					if (clothPhysicsSettings.SetPhysicsVelocityScale)
						chaosClothingInteractorTemp->SetVelocityScale(clothPhysicsSettings.clothPhysicsVelocityScaleSettings.PhysicsVelocityScale_LinearVelocityScale, clothPhysicsSettings.clothPhysicsVelocityScaleSettings.PhysicVelocityScale_AngularVelocityScale, clothPhysicsSettings.clothPhysicsVelocityScaleSettings.PhysicsVelocityScale_FictitiousAngularVelocityScale);

#if ENGINE_MINOR_VERSION >= 1

					if (clothPhysicsSettings.SetAirPressure) {
						chaosClothingInteractorTemp->SetPressure(clothPhysicsSettings.clothPhysicssAirPressureSettings.SetPressure_Pressure);
					}
#endif
				}
			}
		}
	}

#endif
}


//-------------------------------------------------------

// Updated Chaos Cloth Physics With Existing Colors Async

void UVertexPaintFunctionLibrary::UpdateChaosClothPhysicsWithExistingColorsAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, USkeletalMeshComponent* skeletalMeshComponent) {

	// Updating Cloth Physics is a UE5 feature
#if ENGINE_MAJOR_VERSION >= 5

	if (UWorld* World = WorldContextObject->GetWorld()) {


		// Instantiate the AsyncTask
		FUpdateClothPhysicsAsyncTask* updateClothPhysicsAsyncTask = new FUpdateClothPhysicsAsyncTask(skeletalMeshComponent);


		// Create our custom latent action and add to manager
		FUpdateClothPhysicsLatentAction* LatentAction = new FUpdateClothPhysicsLatentAction(LatentInfo, updateClothPhysicsAsyncTask);
		World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);


		// Bind the delegate and sets the result
		updateClothPhysicsAsyncTask->OnUpdateClothPhysicsAsyncTaskCompleteDelegate.BindLambda([skeletalMeshComponent, LatentAction](const TArray<FVertexDetectChaosClothPhysicsSettings>& chaosClothPhysicsSettings) {


			USkeletalMesh* skelMeshTemp = nullptr;

#if ENGINE_MINOR_VERSION == 0
			skelMeshTemp = skeletalMeshComponent->SkeletalMesh.Get();
#else
			skelMeshTemp = skeletalMeshComponent->GetSkeletalMeshAsset();
#endif


			TArray<UClothingAssetBase*> skeletalMeshClothingAssets_Local = skelMeshTemp->GetMeshClothingAssets();

			for (int i = 0; i < skeletalMeshClothingAssets_Local.Num(); i++) {

				if (!chaosClothPhysicsSettings.IsValidIndex(i)) break;


				UVertexPaintFunctionLibrary::SetChaosClothPhysics(skeletalMeshComponent, skeletalMeshClothingAssets_Local[i], chaosClothPhysicsSettings[i]);
			}


			LatentAction->MarkAsCompleted();
		});

		(new FAutoDeleteAsyncTask<FUpdateClothPhysicsAsyncTask>(*updateClothPhysicsAsyncTask))->StartBackgroundTask();
	}
#endif

}


//-------------------------------------------------------

// Updated Chaos Cloth Physics With Existing Colors

void UVertexPaintFunctionLibrary::UpdateChaosClothPhysicsWithExistingColors(USkeletalMeshComponent* skeletalMeshComponent) {

#if ENGINE_MAJOR_VERSION >= 5

	if (!IsValid(skeletalMeshComponent)) return;


	for (auto& clothPhysicsSettings : GetChaosClothPhysicsSettingsBasedOnExistingColors(skeletalMeshComponent)) {

		UVertexPaintFunctionLibrary::SetChaosClothPhysics(skeletalMeshComponent,
			clothPhysicsSettings.Key,
			clothPhysicsSettings.Value);
	}

#endif
}

#if ENGINE_MAJOR_VERSION == 5

//-------------------------------------------------------

// Update Chaos Cloth Physics

TMap<UClothingAssetBase*, FVertexDetectChaosClothPhysicsSettings> UVertexPaintFunctionLibrary::GetChaosClothPhysicsSettingsBasedOnExistingColors(USkeletalMeshComponent* skeletalMeshComponent) {

	TMap<UClothingAssetBase*, FVertexDetectChaosClothPhysicsSettings> clothsPhysicsSetting_Local;

	if (!IsValid(skeletalMeshComponent)) return clothsPhysicsSetting_Local;
	if (!IsWorldValid(skeletalMeshComponent->GetWorld())) return clothsPhysicsSetting_Local;
	if (!skeletalMeshComponent->GetSkeletalMeshRenderData()) return clothsPhysicsSetting_Local;
	if (!skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData.IsValidIndex(skeletalMeshComponent->GetPredictedLODLevel())) return clothsPhysicsSetting_Local;
	if (!skeletalMeshComponent->LODInfo.IsValidIndex(skeletalMeshComponent->GetPredictedLODLevel())) return clothsPhysicsSetting_Local;

	const FSkeletalMeshLODRenderData& skelMeshRenderDataTemp = skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData[skeletalMeshComponent->GetPredictedLODLevel()];
	FSkelMeshComponentLODInfo* skeletalMeshLODInfo = &skeletalMeshComponent->LODInfo[skeletalMeshComponent->GetPredictedLODLevel()];

	if (!skeletalMeshLODInfo) return clothsPhysicsSetting_Local;
	if (!skelMeshRenderDataTemp.HasClothData()) return clothsPhysicsSetting_Local;


	TMap<UClothingAssetBase*, FVertexDetectClothSettingsStruct> clothsAndTheirPhysicsSettings_Local;

	if (UKismetSystemLibrary::DoesImplementInterface(skeletalMeshComponent->GetOwner(), UVertexPaintDetectionInterface::StaticClass()))
		clothsAndTheirPhysicsSettings_Local = IVertexPaintDetectionInterface::Execute_GetSkeletalMeshClothPhysicsSettings(skeletalMeshComponent->GetOwner(), skeletalMeshComponent);

	if (clothsAndTheirPhysicsSettings_Local.Num() <= 0) return clothsPhysicsSetting_Local;


	USkeletalMesh* skelMeshTemp = nullptr;

#if ENGINE_MINOR_VERSION == 0
	skelMeshTemp = skeletalMeshComponent->SkeletalMesh.Get();
#else
	skelMeshTemp = skeletalMeshComponent->GetSkeletalMeshAsset();
#endif


	TArray<UClothingAssetBase*> clothingAssets_Local = skelMeshTemp->GetMeshClothingAssets();

	// Loops through Cloths
	for (int i = 0; i < clothingAssets_Local.Num(); i++) {


		UClothingAssetBase* clothAsset_Local = clothingAssets_Local[i];

		if (!clothsAndTheirPhysicsSettings_Local.Contains(clothAsset_Local)) continue;


		// Loops through Render Sections on current LOD
		for (int j = 0; j < skelMeshRenderDataTemp.RenderSections.Num(); j++) {


			// When on the same section as the Cloth
			if (i == skelMeshRenderDataTemp.RenderSections[j].CorrespondClothAssetIndex) {


				// Gets start and end vertex, which could be for instance 2300-2600 or something. So we get vertex colors below for just these verts
				int sectionStartVertexIndex = skelMeshRenderDataTemp.RenderSections[j].BaseVertexIndex;
				int sectionEndVertexIndex = sectionStartVertexIndex + skelMeshRenderDataTemp.RenderSections[j].GetNumVertices();
				int sectionTotalAmountOfVertices = skelMeshRenderDataTemp.RenderSections[j].GetNumVertices();
				float totalRedColor_Local = 0;
				float totalGreenColor_Local = 0;
				float totalBlueColor_Local = 0;
				float totalAlphaColor_Local = 0;


				FColor sectionsVertexColor_Local;
				FLinearColor sectionsAverageVertexColor_Local;

				for (int32 k = sectionStartVertexIndex; k < sectionEndVertexIndex; k++) {

					// If been painted on before then can get the current Instance Color
					if (skeletalMeshLODInfo->OverrideVertexColors)
						sectionsVertexColor_Local = skeletalMeshLODInfo->OverrideVertexColors->VertexColor(k);

					// If haven't been painted on before then we get the Default Color
					else
						sectionsVertexColor_Local = skelMeshRenderDataTemp.StaticVertexBuffers.ColorVertexBuffer.VertexColor(k);

					totalRedColor_Local += sectionsVertexColor_Local.R;
					totalGreenColor_Local += sectionsVertexColor_Local.G;
					totalBlueColor_Local += sectionsVertexColor_Local.B;
					totalAlphaColor_Local += sectionsVertexColor_Local.A;
				}


				totalRedColor_Local /= sectionTotalAmountOfVertices;
				totalGreenColor_Local /= sectionTotalAmountOfVertices;
				totalBlueColor_Local /= sectionTotalAmountOfVertices;
				totalAlphaColor_Local /= sectionTotalAmountOfVertices;

				sectionsAverageVertexColor_Local.R = UKismetMathLibrary::MapRangeClamped(totalRedColor_Local, 0, 255, 0, 1);
				sectionsAverageVertexColor_Local.G = UKismetMathLibrary::MapRangeClamped(totalGreenColor_Local, 0, 255, 0, 1);
				sectionsAverageVertexColor_Local.B = UKismetMathLibrary::MapRangeClamped(totalBlueColor_Local, 0, 255, 0, 1);
				sectionsAverageVertexColor_Local.A = UKismetMathLibrary::MapRangeClamped(totalAlphaColor_Local, 0, 255, 0, 1);


				clothsPhysicsSetting_Local.Add(clothAsset_Local,
					GetChaosClothPhysicsSettingsBasedOnAverageVertexColor(skeletalMeshComponent, clothAsset_Local, sectionsAverageVertexColor_Local, clothsAndTheirPhysicsSettings_Local.FindRef(clothAsset_Local)
					));
			}
		}
	}

	return clothsPhysicsSetting_Local;
}


//-------------------------------------------------------

// Get Chaos Cloth Physics Settings Based On Vertex Colors

FVertexDetectChaosClothPhysicsSettings UVertexPaintFunctionLibrary::GetChaosClothPhysicsSettingsBasedOnAverageVertexColor(USkeletalMeshComponent* skeletalMeshComponent, UClothingAssetBase* clothingAsset, FLinearColor avarageColorOnClothingAsset, FVertexDetectClothSettingsStruct clothPhysicsSettings) {

	if (!IsValid(skeletalMeshComponent)) return FVertexDetectChaosClothPhysicsSettings();
	if (!IsValid(clothingAsset)) return FVertexDetectChaosClothPhysicsSettings();

	// https://docs.unrealengine.com/4.27/en-US/API/Plugins/ChaosCloth/ChaosCloth/UChaosClothingInteractor/


	TArray<float> clothPhysicsSettingsAtColorAvarageValue_Local;
	TArray<FVertexDetectClothPhysicsSettingsAtVertexColorStruct> clothPhysicsSettingsAtColor_Local;


	clothPhysicsSettingsAtColorAvarageValue_Local.Add(avarageColorOnClothingAsset.R);
	clothPhysicsSettingsAtColor_Local.Add(clothPhysicsSettings.clothPhysicsSettingsAtRedChannel);

	clothPhysicsSettingsAtColorAvarageValue_Local.Add(avarageColorOnClothingAsset.G);
	clothPhysicsSettingsAtColor_Local.Add(clothPhysicsSettings.clothPhysicsSettingsAtGreenChannel);

	clothPhysicsSettingsAtColorAvarageValue_Local.Add(avarageColorOnClothingAsset.B);
	clothPhysicsSettingsAtColor_Local.Add(clothPhysicsSettings.clothPhysicsSettingsAtBlueChannel);

	clothPhysicsSettingsAtColorAvarageValue_Local.Add(avarageColorOnClothingAsset.A);
	clothPhysicsSettingsAtColor_Local.Add(clothPhysicsSettings.clothPhysicsSettingsAtAlphaChannel);



	// NOTE Removed the minRequiredPaintAmount to affect Gravity or damping etc. because it caused an issue when Removing colors and trying to reset the cloth, since it couldn't do anything if not above 0.25 or something

	FVertexDetectChaosClothPhysicsSettings chaosClothPhysicsSettingsLocal;

	// Resets all the settings so we base wind lift etc. all from 0 and not += onto the default values
	chaosClothPhysicsSettingsLocal.ResetAllClothSettings();

	for (int i = 0; i < clothPhysicsSettingsAtColor_Local.Num(); i++) {


		// Damping
		if (clothPhysicsSettingsAtColor_Local[i].SetDamping) {

			chaosClothPhysicsSettingsLocal.SetDamping = true;

			chaosClothPhysicsSettingsLocal.clothDampingSettings.SetDamping_dampingCoefficient += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothDampingSettingsWithNoColorPaintedAtChannel.SetDamping_dampingCoefficient, clothPhysicsSettingsAtColor_Local[i].clothDampingSettingsWithFullColorPaintedAtChannel.SetDamping_dampingCoefficient, clothPhysicsSettingsAtColorAvarageValue_Local[i]);
		}

		// Gravity
		if (clothPhysicsSettingsAtColor_Local[i].SetGravity) {

			chaosClothPhysicsSettingsLocal.SetGravity = true;

			chaosClothPhysicsSettingsLocal.clothGravitySettings.SetGravity_gravityScale += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothGravitySettingsWithNoColorPaintedAtChannel.SetGravity_gravityScale, clothPhysicsSettingsAtColor_Local[i].clothGravitySettingsWithFullColorPaintedAtChannel.SetGravity_gravityScale, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothGravitySettings.SetGravity_gravityOverride += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothGravitySettingsWithNoColorPaintedAtChannel.SetGravity_gravityOverride, clothPhysicsSettingsAtColor_Local[i].clothGravitySettingsWithFullColorPaintedAtChannel.SetGravity_gravityOverride, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			// If at least 1 color has set it to override gravity then that is what it will do
			if (clothPhysicsSettingsAtColorAvarageValue_Local[i] > 0.5) {

				// If already true then can't set it to false
				if (!chaosClothPhysicsSettingsLocal.clothGravitySettings.SetGravity_overrideGravity)
					chaosClothPhysicsSettingsLocal.clothGravitySettings.SetGravity_overrideGravity = clothPhysicsSettingsAtColor_Local[i].clothGravitySettingsWithFullColorPaintedAtChannel.SetGravity_overrideGravity;
			}

			else {

				if (!chaosClothPhysicsSettingsLocal.clothGravitySettings.SetGravity_overrideGravity)
					chaosClothPhysicsSettingsLocal.clothGravitySettings.SetGravity_overrideGravity = clothPhysicsSettingsAtColor_Local[i].clothGravitySettingsWithNoColorPaintedAtChannel.SetGravity_overrideGravity;
			}
		}

		// Wind
		if (clothPhysicsSettingsAtColor_Local[i].SetWind) {

			chaosClothPhysicsSettingsLocal.SetWind = true;

			chaosClothPhysicsSettingsLocal.clothWindSettings.SetWind_drag += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothWindSettingsWithNoColorPaintedAtChannel.SetWind_drag, clothPhysicsSettingsAtColor_Local[i].clothWindSettingsWithFullColorPaintedAtChannel.SetWind_drag, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothWindSettings.SetWind_lift += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothWindSettingsWithNoColorPaintedAtChannel.SetWind_lift, clothPhysicsSettingsAtColor_Local[i].clothWindSettingsWithFullColorPaintedAtChannel.SetWind_lift, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothWindSettings.SetWind_airDensity += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothWindSettingsWithNoColorPaintedAtChannel.SetWind_airDensity, clothPhysicsSettingsAtColor_Local[i].clothWindSettingsWithFullColorPaintedAtChannel.SetWind_airDensity, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothWindSettings.SetWind_windVelocity += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothWindSettingsWithNoColorPaintedAtChannel.SetWind_windVelocity, clothPhysicsSettingsAtColor_Local[i].clothWindSettingsWithFullColorPaintedAtChannel.SetWind_windVelocity, clothPhysicsSettingsAtColorAvarageValue_Local[i]);
		}

		// Anim Drive
		if (clothPhysicsSettingsAtColor_Local[i].SetAnimDrive) {

			chaosClothPhysicsSettingsLocal.SetAnimDrive = true;

			chaosClothPhysicsSettingsLocal.clothAnimDriveSettings.SetAnimDrive_Stiffness += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothAnimDriveSettingsWithNoColorPaintedAtChannel.SetAnimDrive_Stiffness, clothPhysicsSettingsAtColor_Local[i].clothAnimDriveSettingsWithFullColorPaintedAtChannel.SetAnimDrive_Stiffness, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothAnimDriveSettings.SetAnimDrive_Damping += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothAnimDriveSettingsWithNoColorPaintedAtChannel.SetAnimDrive_Damping, clothPhysicsSettingsAtColor_Local[i].clothAnimDriveSettingsWithFullColorPaintedAtChannel.SetAnimDrive_Damping, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

		}

		// Collision
		if (clothPhysicsSettingsAtColor_Local[i].SetCollision) {

			chaosClothPhysicsSettingsLocal.SetCollision = true;

			chaosClothPhysicsSettingsLocal.clothCollisionSettings.SetCollision_CollisionThickness += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothCollisionSettingsWithNoColorPaintedAtChannel.SetCollision_CollisionThickness, clothPhysicsSettingsAtColor_Local[i].clothCollisionSettingsWithFullColorPaintedAtChannel.SetCollision_CollisionThickness, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothCollisionSettings.SetCollision_FrictionCoefficient += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothCollisionSettingsWithNoColorPaintedAtChannel.SetCollision_FrictionCoefficient, clothPhysicsSettingsAtColor_Local[i].clothCollisionSettingsWithFullColorPaintedAtChannel.SetCollision_FrictionCoefficient, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothCollisionSettings.SetCollision_SelfCollisionThickness += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothCollisionSettingsWithNoColorPaintedAtChannel.SetCollision_SelfCollisionThickness, clothPhysicsSettingsAtColor_Local[i].clothCollisionSettingsWithFullColorPaintedAtChannel.SetCollision_SelfCollisionThickness, clothPhysicsSettingsAtColorAvarageValue_Local[i]);


			// If at least 1 color has set it to use CCD then that is what it will do
			if (clothPhysicsSettingsAtColorAvarageValue_Local[i] > 0.5) {

				if (!chaosClothPhysicsSettingsLocal.clothCollisionSettings.SetCollision_UseCCD)
					chaosClothPhysicsSettingsLocal.clothCollisionSettings.SetCollision_UseCCD = clothPhysicsSettingsAtColor_Local[i].clothCollisionSettingsWithFullColorPaintedAtChannel.SetCollision_UseCCD;
			}

			else {

				if (!chaosClothPhysicsSettingsLocal.clothCollisionSettings.SetCollision_UseCCD)
					chaosClothPhysicsSettingsLocal.clothCollisionSettings.SetCollision_UseCCD = clothPhysicsSettingsAtColor_Local[i].clothCollisionSettingsWithNoColorPaintedAtChannel.SetCollision_UseCCD;
			}
		}

		// Long Range Attachment
		if (clothPhysicsSettingsAtColor_Local[i].SetLongRangeAttachment) {

			chaosClothPhysicsSettingsLocal.SetLongRangeAttachment = true;

			chaosClothPhysicsSettingsLocal.clothLongRangeAttachmentSettings.LongRangeAttachment_TetherThickness += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothLongRangeAttachmentSettingsWithNoColorPaintedAtChannel.LongRangeAttachment_TetherThickness, clothPhysicsSettingsAtColor_Local[i].clothLongRangeAttachmentSettingsWithFullColorPaintedAtChannel.LongRangeAttachment_TetherThickness, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothLongRangeAttachmentSettings.LongRangeAttachment_TetherScale += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothLongRangeAttachmentSettingsWithNoColorPaintedAtChannel.LongRangeAttachment_TetherScale, clothPhysicsSettingsAtColor_Local[i].clothLongRangeAttachmentSettingsWithFullColorPaintedAtChannel.LongRangeAttachment_TetherScale, clothPhysicsSettingsAtColorAvarageValue_Local[i]);
		}

		// Material
		if (clothPhysicsSettingsAtColor_Local[i].SetMaterial) {

			chaosClothPhysicsSettingsLocal.SetMaterial = true;

			chaosClothPhysicsSettingsLocal.clothMaterialSettings.Material_EdgeStiffness += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothMaterialSettingsWithNoColorPaintedAtChannel.Material_EdgeStiffness, clothPhysicsSettingsAtColor_Local[i].clothMaterialSettingsWithFullColorPaintedAtChannel.Material_EdgeStiffness, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothMaterialSettings.Material_BendingStiffness += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothMaterialSettingsWithNoColorPaintedAtChannel.Material_BendingStiffness, clothPhysicsSettingsAtColor_Local[i].clothMaterialSettingsWithFullColorPaintedAtChannel.Material_BendingStiffness, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothMaterialSettings.Material_AreaStiffness += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothMaterialSettingsWithNoColorPaintedAtChannel.Material_AreaStiffness, clothPhysicsSettingsAtColor_Local[i].clothMaterialSettingsWithFullColorPaintedAtChannel.Material_AreaStiffness, clothPhysicsSettingsAtColorAvarageValue_Local[i]);
		}

		// Physics Velocity Scale
		if (clothPhysicsSettingsAtColor_Local[i].SetPhysicsVelocityScale) {

			chaosClothPhysicsSettingsLocal.SetPhysicsVelocityScale = true;

			chaosClothPhysicsSettingsLocal.clothPhysicsVelocityScaleSettings.PhysicsVelocityScale_LinearVelocityScale += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothPhysicsVelocityScaleSettingsWithNoColorPaintedAtChannel.PhysicsVelocityScale_LinearVelocityScale, clothPhysicsSettingsAtColor_Local[i].clothPhysicsVelocityScaleSettingsWithFullColorPaintedAtChannel.PhysicsVelocityScale_LinearVelocityScale, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothPhysicsVelocityScaleSettings.PhysicVelocityScale_AngularVelocityScale += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothPhysicsVelocityScaleSettingsWithNoColorPaintedAtChannel.PhysicVelocityScale_AngularVelocityScale, clothPhysicsSettingsAtColor_Local[i].clothPhysicsVelocityScaleSettingsWithFullColorPaintedAtChannel.PhysicVelocityScale_AngularVelocityScale, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothPhysicsVelocityScaleSettings.PhysicsVelocityScale_FictitiousAngularVelocityScale += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothPhysicsVelocityScaleSettingsWithNoColorPaintedAtChannel.PhysicsVelocityScale_FictitiousAngularVelocityScale, clothPhysicsSettingsAtColor_Local[i].clothPhysicsVelocityScaleSettingsWithFullColorPaintedAtChannel.PhysicsVelocityScale_FictitiousAngularVelocityScale, clothPhysicsSettingsAtColorAvarageValue_Local[i]);
		}

		// Air Pressure
		if (clothPhysicsSettingsAtColor_Local[i].SetAirPressure) {

			chaosClothPhysicsSettingsLocal.SetAirPressure = true;

			chaosClothPhysicsSettingsLocal.clothPhysicssAirPressureSettings.SetPressure_Pressure += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothPhysicssAirPressureWithNoColorPaintedAtChannel.SetPressure_Pressure, clothPhysicsSettingsAtColor_Local[i].clothPhysicssAirPressureWithFullColorPaintedAtChannel.SetPressure_Pressure, clothPhysicsSettingsAtColorAvarageValue_Local[i]);
		}
	}

	return chaosClothPhysicsSettingsLocal;
}

#endif


//-------------------------------------------------------

// Set Chaos Wheeled Vehicle Friction Multiplier - Made this into a wrapper since in UE4 the function doesn't exist so couldn't have it in BP

void UVertexPaintFunctionLibrary::SetChaosWheeledVehicleFrictionMultiplier_Wrapper(UChaosWheeledVehicleMovementComponent* chaosWheeledVehicleMovementComponent, int wheelIndex, float friction) {

#if ENGINE_MAJOR_VERSION >= 5

	if (!IsValid(chaosWheeledVehicleMovementComponent) || wheelIndex < 0) return;

	chaosWheeledVehicleMovementComponent->SetWheelFrictionMultiplier(wheelIndex, friction);

#endif
}


//-------------------------------------------------------

// Get Physical Material Using Physics Surface

UPhysicalMaterial* UVertexPaintFunctionLibrary::GetPhysicalMaterialUsingPhysicsSurface_Wrapper(const UObject* WorldContextObject, TSubclassOf<UPhysicalMaterial> physicalMaterialClass, TEnumAsByte<EPhysicalSurface> physicsSurface) {

	if (physicsSurface == EPhysicalSurface::SurfaceType_Default) return nullptr;
	if (!physicalMaterialClass) return nullptr;
	if (!IsValid(WorldContextObject)) return nullptr;
	if (!IsValid(GetVertexPaintGameInstanceSubsystem(WorldContextObject))) return nullptr;


	if (auto physicsMaterialTemp = GetVertexPaintGameInstanceSubsystem(WorldContextObject)->GetAllCachedPhysicsMaterialAssetss().FindRef(physicsSurface)) {

		// If set to only check in specific class then makes sure that the physical material is that class
		if (physicalMaterialClass->GetClass() && physicsMaterialTemp->GetClass() == physicalMaterialClass) {

			return physicsMaterialTemp;
		}
		else {

			return physicsMaterialTemp;
		}
	}

	return nullptr;
}


//-------------------------------------------------------

// Remove Component From Paint Task Queue

void UVertexPaintFunctionLibrary::RemoveComponentFromPaintTaskQueue(UPrimitiveComponent* component) {

	if (!IsValid(component)) return;
	if (!IsWorldValid(component->GetWorld())) return;
	if (!IsValid(GetVertexPaintGameInstanceSubsystem(component->GetWorld()))) return;


	if (auto paintTaskQueue = GetVertexPaintTaskQueue(component->GetWorld()))
		return paintTaskQueue->RemoveMeshComponentFromPaintTaskQueue(component);
}


//-------------------------------------------------------

// Remove Component From Detect Queue

void UVertexPaintFunctionLibrary::RemoveComponentFromDetectTaskQueue(UPrimitiveComponent* component) {

	if (!IsValid(component)) return;
	if (!IsWorldValid(component->GetWorld())) return;
	if (!IsValid(GetVertexPaintGameInstanceSubsystem(component->GetWorld()))) return;


	if (auto paintTaskQueue = GetVertexPaintTaskQueue(component->GetWorld()))
		return paintTaskQueue->RemoveMeshComponentFromDetectionTaskQueue(component);
}


//-------------------------------------------------------

// Get Mesh Component Source Mesh

const UObject* UVertexPaintFunctionLibrary::GetMeshComponentSourceMesh(UPrimitiveComponent* meshComponent) {

	if (!IsValid(meshComponent)) return nullptr;


	const UObject* sourceMeshTemp = nullptr;

	if (auto staticMeshComp = Cast<UStaticMeshComponent>(meshComponent)) {

		sourceMeshTemp = staticMeshComp->GetStaticMesh();
	}

	else if (auto skelMeshComp = Cast<USkeletalMeshComponent>(meshComponent)) {

#if ENGINE_MAJOR_VERSION == 4

		sourceMeshTemp = skelMeshComp->SkeletalMesh;

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

		sourceMeshTemp = skelMeshComp->SkeletalMesh.Get();

#else

		sourceMeshTemp = skelMeshComp->GetSkeletalMeshAsset();

#endif
#endif
	}

#if ENGINE_MAJOR_VERSION == 5

	else if (auto dynamicMeshComponent = Cast<UDynamicMeshComponent>(meshComponent)) {

		// Dynamic Mesh Comps doesn't have a source mesh
	}

	else if (auto geometryCollectionComponent = Cast<UGeometryCollectionComponent>(meshComponent)) {

		sourceMeshTemp = geometryCollectionComponent->GetRestCollection();
	}
#endif

	return sourceMeshTemp;
}


//--------------------------------------------------------

// CalcAABB Without Uniform Check

FBox UVertexPaintFunctionLibrary::CalcAABBWithoutUniformCheck(const USkinnedMeshComponent* MeshComp, const FTransform& LocalToWorld) {

	// This got copied from UPhysicsAsset::CalcAABB on 1Dec 2023 UE5.0 with just the IsUniform check commented out, since we couldn't use it with Paint Within Area if either X, Y, Z had different scale from one another. 

	FBox Box(ForceInit);

#if ENGINE_MAJOR_VERSION == 5

	if (!MeshComp)
	{
		return Box;
	}

	FVector Scale3D = LocalToWorld.GetScale3D();
	// if (Scale3D.IsUniform())
	// {
	const TArray<int32>* BodyIndexRefs = NULL;
	TArray<int32> AllBodies;
	// If we want to consider all bodies, make array with all body indices in
	if (MeshComp->bConsiderAllBodiesForBounds)
	{
		AllBodies.AddUninitialized(MeshComp->GetPhysicsAsset()->SkeletalBodySetups.Num());
		for (int32 i = 0; i < MeshComp->GetPhysicsAsset()->SkeletalBodySetups.Num(); i++)
		{
			AllBodies[i] = i;
		}
		BodyIndexRefs = &AllBodies;
	}
	// Otherwise, use the cached shortlist of bodies to consider
	else
	{
		BodyIndexRefs = &MeshComp->GetPhysicsAsset()->BoundsBodies;
	}

	// Then iterate over bodies we want to consider, calculating bounding box for each
	const int32 BodySetupNum = (*BodyIndexRefs).Num();

	for (int32 i = 0; i < BodySetupNum; i++)
	{
		const int32 BodyIndex = (*BodyIndexRefs)[i];
		UBodySetup* bs = MeshComp->GetPhysicsAsset()->SkeletalBodySetups[BodyIndex].Get();

		// Check if setup should be considered for bounds, or if all bodies should be considered anyhow
		if (bs->bConsiderForBounds || MeshComp->bConsiderAllBodiesForBounds)
		{
			if (i + 1 < BodySetupNum)
			{
				int32 NextIndex = (*BodyIndexRefs)[i + 1];
				FPlatformMisc::Prefetch(MeshComp->GetPhysicsAsset()->SkeletalBodySetups[NextIndex]);
				FPlatformMisc::Prefetch(MeshComp->GetPhysicsAsset()->SkeletalBodySetups[NextIndex], PLATFORM_CACHE_LINE_SIZE);
			}

			int32 BoneIndex = MeshComp->GetBoneIndex(bs->BoneName);
			if (BoneIndex != INDEX_NONE)
			{
				const FTransform WorldBoneTransform = MeshComp->GetBoneTransform(BoneIndex, LocalToWorld);
				FBox BodySetupBounds = bs->AggGeom.CalcAABB(WorldBoneTransform);

				// When the transform contains a negative scale CalcAABB could return a invalid FBox that has Min and Max reversed
				// @TODO: Maybe CalcAABB should handle that inside and never return a reversed FBox
				if (BodySetupBounds.Min.X > BodySetupBounds.Max.X)
				{
					Swap(BodySetupBounds.Min.X, BodySetupBounds.Max.X);
				}

				if (BodySetupBounds.Min.Y > BodySetupBounds.Max.Y)
				{
					Swap(BodySetupBounds.Min.Y, BodySetupBounds.Max.Y);
				}

				if (BodySetupBounds.Min.Z > BodySetupBounds.Max.Z)
				{
					Swap(BodySetupBounds.Min.Z, BodySetupBounds.Max.Z);
				}

				Box += BodySetupBounds;
			}
		}
	}
	//}
	// else
	//{
	//	UE_LOG(LogPhysics, Log, TEXT("UPhysicsAsset::CalcAABB : Non-uniform scale factor. You will not be able to collide with it.  Turn off collision and wrap it with a blocking volume.  MeshComp: %s  SkelMesh: %s"), *MeshComp->GetFullName(), MeshComp->SkeletalMesh ? *MeshComp->SkeletalMesh->GetFullName() : TEXT("NULL"));
	//}

	if (!Box.IsValid)
	{
		Box = FBox(LocalToWorld.GetLocation(), LocalToWorld.GetLocation());
	}

	const float MinBoundSize = 1.f;
	const FVector BoxSize = Box.GetSize();

	if (BoxSize.GetMin() < MinBoundSize)
	{
		const FVector ExpandByDelta(FMath::Max<FVector::FReal>(0, MinBoundSize - BoxSize.X), FMath::Max<FVector::FReal>(0, MinBoundSize - BoxSize.Y), FMath::Max<FVector::FReal>(0, MinBoundSize - BoxSize.Z));
		Box = Box.ExpandBy(ExpandByDelta * 0.5f);	//expand by applies to both directions with GetSize applies to total size so divide by 2
	}

#elif ENGINE_MAJOR_VERSION == 4

	if (!MeshComp)
	{
		return Box;
	}

	FVector Scale3D = LocalToWorld.GetScale3D();
	// if (Scale3D.IsUniform())
	// {
	const TArray<int32>* BodyIndexRefs = NULL;
	TArray<int32> AllBodies;
	// If we want to consider all bodies, make array with all body indices in
	if (MeshComp->bConsiderAllBodiesForBounds)
	{
		AllBodies.AddUninitialized(MeshComp->GetPhysicsAsset()->SkeletalBodySetups.Num());
		for (int32 i = 0; i < MeshComp->GetPhysicsAsset()->SkeletalBodySetups.Num(); i++)
		{
			AllBodies[i] = i;
		}
		BodyIndexRefs = &AllBodies;
	}
	// Otherwise, use the cached shortlist of bodies to consider
	else
	{
		BodyIndexRefs = &MeshComp->GetPhysicsAsset()->BoundsBodies;
	}

	// Then iterate over bodies we want to consider, calculating bounding box for each
	const int32 BodySetupNum = (*BodyIndexRefs).Num();

	for (int32 i = 0; i < BodySetupNum; i++)
	{
		const int32 BodyIndex = (*BodyIndexRefs)[i];
		UBodySetup* bs = MeshComp->GetPhysicsAsset()->SkeletalBodySetups[BodyIndex];

		// Check if setup should be considered for bounds, or if all bodies should be considered anyhow
		if (bs->bConsiderForBounds || MeshComp->bConsiderAllBodiesForBounds)
		{
			if (i + 1 < BodySetupNum)
			{
				int32 NextIndex = (*BodyIndexRefs)[i + 1];
				FPlatformMisc::Prefetch(MeshComp->GetPhysicsAsset()->SkeletalBodySetups[NextIndex]);
				FPlatformMisc::Prefetch(MeshComp->GetPhysicsAsset()->SkeletalBodySetups[NextIndex], PLATFORM_CACHE_LINE_SIZE);
			}

			int32 BoneIndex = MeshComp->GetBoneIndex(bs->BoneName);
			if (BoneIndex != INDEX_NONE)
			{
				const FTransform WorldBoneTransform = MeshComp->GetBoneTransform(BoneIndex, LocalToWorld);
				FBox BodySetupBounds = bs->AggGeom.CalcAABB(WorldBoneTransform);

				// When the transform contains a negative scale CalcAABB could return a invalid FBox that has Min and Max reversed
				// @TODO: Maybe CalcAABB should handle that inside and never return a reversed FBox
				if (BodySetupBounds.Min.X > BodySetupBounds.Max.X)
				{
					Swap<float>(BodySetupBounds.Min.X, BodySetupBounds.Max.X);
				}

				if (BodySetupBounds.Min.Y > BodySetupBounds.Max.Y)
				{
					Swap<float>(BodySetupBounds.Min.Y, BodySetupBounds.Max.Y);
				}

				if (BodySetupBounds.Min.Z > BodySetupBounds.Max.Z)
				{
					Swap<float>(BodySetupBounds.Min.Z, BodySetupBounds.Max.Z);
				}

				Box += BodySetupBounds;
			}
		}
	}
	// }
	// else
	//{
	//	UE_LOG(LogPhysics, Log, TEXT("UPhysicsAsset::CalcAABB : Non-uniform scale factor. You will not be able to collide with it.  Turn off collision and wrap it with a blocking volume.  MeshComp: %s  SkelMesh: %s"), *MeshComp->GetFullName(), MeshComp->SkeletalMesh ? *MeshComp->SkeletalMesh->GetFullName() : TEXT("NULL"));
	//}

	if (!Box.IsValid)
	{
		Box = FBox(LocalToWorld.GetLocation(), LocalToWorld.GetLocation());
	}

	const float MinBoundSize = 1.f;
	const FVector BoxSize = Box.GetSize();

	if (BoxSize.GetMin() < MinBoundSize)
	{
		const FVector ExpandByDelta(FMath::Max(0.f, MinBoundSize - BoxSize.X), FMath::Max(0.f, MinBoundSize - BoxSize.Y), FMath::Max(0.f, MinBoundSize - BoxSize.Z));
		Box = Box.ExpandBy(ExpandByDelta * 0.5f);	//expand by applies to both directions with GetSize applies to total size so divide by 2
	}

#endif

	return Box;
}


//--------------------------------------------------------

// Get Substring After Last Character

FString UVertexPaintFunctionLibrary::GetSubstringAfterLastCharacter(const FString& string, const FString& character) {

	if (string.IsEmpty() || character.IsEmpty()) return FString();

	const TCHAR CharToFind = character[0];

	int32 LastCharPos;
	if (string.FindLastChar(CharToFind, LastCharPos)) {
		return string.Mid(LastCharPos + 1);
	}

	return string;
}


//--------------------------------------------------------

// Get All Physics Surfaces

TArray<TEnumAsByte<EPhysicalSurface>> UVertexPaintFunctionLibrary::GetAllPhysicsSurfaces() {

	TArray<TEnumAsByte<EPhysicalSurface>> physicalSurfaces_Local;

	TEnumAsByte<EPhysicalSurface> cachedPhysicalSurface = EPhysicalSurface::SurfaceType1;

	for (int i = 0; i < GetDefault<UPhysicsSettings>()->PhysicalSurfaces.Num(); i++) {

		auto physSurfaceNameTemp = GetDefault<UPhysicsSettings>()->PhysicalSurfaces[i];


		/*
		Checks if the first elements, or if any elements in between physics surfaces are None, if so, we have to Add whatever Surface Type is meant to be there, so filling surfaces to choose from in the Editor Widget, they match what actual surface type we can select.

		For example if there is a Gap between Surface type 12 and 14, where 13 is None, then it won't be apart of GetDefault<UPhysicsSettings>()->PhysicalSurfaces, so if we fill a drop down list without it, and select a physics surface that comes After 13, then the selected index from the drop down list will not match the actual physics surface we selected because the amount is different. The total amount up to the last registered physics surface may be 18, but we only get 17 because 13 is None, which means we may think we select 17 but actually getting 16, meaning the wrong thing was registered at the vertex color channel than the user intended.

		So to fix this we simply Add onto the list we return with the missing physics surface, so we actually return the complete list up until the very last registered physics surface.

		This should be a pretty rare edge case but better to safeguard so no one runs into this issue.
		*/


		// If at the first element
		if (i == 0) {

			// but first registered physics surface is more than 1, then we manually add SurfaceType1, 2 etc. until we reach whatever element the first actually registered phys surface is. 
			if (physSurfaceNameTemp.Type.GetValue() > 1) {

				// UE_LOG(LogTemp, Warning, TEXT("First Element - the first registered physics starts later so have to add each default surface type until we reach it. %i"), physSurfaceNameTemp.Type.GetValue());

				for (int j = 1; j < physSurfaceNameTemp.Type.GetValue(); j++) {

					cachedPhysicalSurface = static_cast<EPhysicalSurface>(j);
					physicalSurfaces_Local.Add(cachedPhysicalSurface);

					// UE_LOG(LogTemp, Warning, TEXT("Adding missing first elements: %i"), cachedPhysicalSurface.GetValue());
				}


				// When finished filling in default physics surfaces, then we add the actually first registered physics surface
				physicalSurfaces_Local.Add(physSurfaceNameTemp.Type);
			}


			else {

				physicalSurfaces_Local.Add(physSurfaceNameTemp.Type);
			}
		}

		// If it has skipped a element, for example jumped from 12 to 15, indicating that 13 and 14 is None, then we add the missing surface
		else if (cachedPhysicalSurface.GetValue() + 1 != physSurfaceNameTemp.Type.GetValue()) {


			int differentTemp = physSurfaceNameTemp.Type.GetValue() - (cachedPhysicalSurface.GetValue() + 1);

			// UE_LOG(LogTemp, Warning, TEXT("Missmatch: %i  -  %i  -  diff: %i"), (test.GetValue() + 1), physSurfaceNameTemp.Type.GetValue(), differentTemp);

			for (int j = 0; j < differentTemp; j++) {

				cachedPhysicalSurface = static_cast<EPhysicalSurface>(cachedPhysicalSurface.GetValue() + 1);
				physicalSurfaces_Local.Add(cachedPhysicalSurface);

				// UE_LOG(LogTemp, Warning, TEXT("Adding missing elements: %i"), (test.GetValue() + 1));
			}


			// When finished filling in physics surfaces in between where there where Nones, then we add the registered physics surface
			physicalSurfaces_Local.Add(physSurfaceNameTemp.Type);
		}


		// If the next physics surface is the expected value then just adds it
		else if (cachedPhysicalSurface.GetValue() + 1 == physSurfaceNameTemp.Type.GetValue()) {

			physicalSurfaces_Local.Add(physSurfaceNameTemp.Type);
		}


		// Caches the latest one so we can check against it the next loop if there is a diff to what we expect
		cachedPhysicalSurface = physSurfaceNameTemp.Type;
	}

	return physicalSurfaces_Local;
}


//--------------------------------------------------------

// Reliable FLinear To FColor

FColor UVertexPaintFunctionLibrary::ReliableFLinearToFColor(FLinearColor linearColor) {

	return FColor((uint8)UKismetMathLibrary::MapRangeClamped(linearColor.R, 0, 1, 0, 255),
		(uint8)UKismetMathLibrary::MapRangeClamped(linearColor.G, 0, 1, 0, 255),
		(uint8)UKismetMathLibrary::MapRangeClamped(linearColor.B, 0, 1, 0, 255),
		(uint8)UKismetMathLibrary::MapRangeClamped(linearColor.A, 0, 1, 0, 255));
}


//--------------------------------------------------------

// Reliable FColor To FLinearColor

FLinearColor UVertexPaintFunctionLibrary::ReliableFColorToFLinearColor(FColor color) {

	return FLinearColor(UKismetMathLibrary::MapRangeClamped((float)color.R, 0, 255, 0, 1),
		UKismetMathLibrary::MapRangeClamped((float)color.G, 0, 255, 0, 1),
		UKismetMathLibrary::MapRangeClamped((float)color.B, 0, 255, 0, 1),
		UKismetMathLibrary::MapRangeClamped((float)color.A, 0, 255, 0, 1));
}


//--------------------------------------------------------

// Get Component Bounds Top World Z

float UVertexPaintFunctionLibrary::GetComponentBoundsTopWorldZ(UPrimitiveComponent* component) {

	if (!IsValid(component)) return 0;


	if (auto boxComp = Cast<UBoxComponent>(component)) {

		return component->GetComponentLocation().Z + boxComp->GetScaledBoxExtent().Z;
	}

	else if (auto sphereComp = Cast<USphereComponent>(component)) {

		return component->GetComponentLocation().Z + sphereComp->GetScaledSphereRadius();
	}

	else if (auto staticMeshComp = Cast<UStaticMeshComponent>(component)) {

		FBoxSphereBounds boundsTemp;

		component->GetBodySetup()->AggGeom.CalcBoxSphereBounds(boundsTemp, component->GetComponentTransform());

		return boundsTemp.GetBox().GetCenter().Z + (boundsTemp.GetBox().GetExtent().Z * component->GetComponentTransform().GetScale3D().Z);
	}

	else if (auto skeletalMeshComp = Cast<USkeletalMeshComponent>(component)) {

		FBoxSphereBounds boundsTemp;

		// The Engines own CalcAABB has a requirement that the scale has to be uniform for some reason, so it doesn't work if for instance the characters scale is 1, 1, 0.5. So we only run it if uniform, otherwise we fall back to a custom one where i've copied over the exact same logic but commented out the uniform check, which works as intended despite the scale not being uniform..
		if (skeletalMeshComp->GetComponentTransform().GetScale3D().IsUniform()) {

			boundsTemp = skeletalMeshComp->GetPhysicsAsset()->CalcAABB(skeletalMeshComp, skeletalMeshComp->GetComponentTransform());
		}
		else {

			boundsTemp = UVertexPaintFunctionLibrary::CalcAABBWithoutUniformCheck(skeletalMeshComp, skeletalMeshComp->GetComponentTransform());
		}

		return boundsTemp.GetBox().GetCenter().Z + (boundsTemp.GetBox().GetExtent().Z * component->GetComponentTransform().GetScale3D().Z);
	}

	return 0;
}


//--------------------------------------------------------

// Get Component Bounds Bottom World Z

float UVertexPaintFunctionLibrary::GetComponentBoundsBottomWorldZ(UPrimitiveComponent* component) {

	if (!IsValid(component)) return 0;


	if (auto boxComp = Cast<UBoxComponent>(component)) {

		return component->GetComponentLocation().Z - boxComp->GetScaledBoxExtent().Z;
	}

	else if (auto sphereComp = Cast<USphereComponent>(component)) {

		return component->GetComponentLocation().Z - sphereComp->GetScaledSphereRadius();
	}

	else if (auto staticMeshComp = Cast<UStaticMeshComponent>(component)) {

		FBoxSphereBounds boundsTemp;

		component->GetBodySetup()->AggGeom.CalcBoxSphereBounds(boundsTemp, component->GetComponentTransform());

		return boundsTemp.GetBox().GetCenter().Z - (boundsTemp.GetBox().GetExtent().Z * component->GetComponentTransform().GetScale3D().Z);
	}

	else if (auto skeletalMeshComp = Cast<USkeletalMeshComponent>(component)) {

		FBoxSphereBounds boundsTemp;

		// The Engines own CalcAABB has a requirement that the scale has to be uniform for some reason, so it doesn't work if for instance the characters scale is 1, 1, 0.5. So we only run it if uniform, otherwise we fall back to a custom one where i've copied over the exact same logic but commented out the uniform check, which works as intended despite the scale not being uniform..
		if (skeletalMeshComp->GetComponentTransform().GetScale3D().IsUniform()) {

			boundsTemp = skeletalMeshComp->GetPhysicsAsset()->CalcAABB(skeletalMeshComp, skeletalMeshComp->GetComponentTransform());
		}
		else {

			boundsTemp = UVertexPaintFunctionLibrary::CalcAABBWithoutUniformCheck(skeletalMeshComp, skeletalMeshComp->GetComponentTransform());
		}

		return boundsTemp.GetBox().GetCenter().Z - (boundsTemp.GetBox().GetExtent().Z * component->GetComponentTransform().GetScale3D().Z);
	}

	return 0;
}
