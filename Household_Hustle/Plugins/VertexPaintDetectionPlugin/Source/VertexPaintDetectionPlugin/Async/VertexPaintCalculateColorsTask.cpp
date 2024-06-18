// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 


#include "VertexPaintCalculateColorsTask.h"
#include "Async/Async.h"

// Engine
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "DrawDebugHelpers.h"
#include "Math/GenericOctree.h"
#include "Engine/GameInstance.h"
#include "Rendering/ColorVertexBuffer.h"
#include "Animation/Skeleton.h"
#include "Engine/SkeletalMesh.h"
#include "Components/SkeletalMeshComponent.h"
#include "Rendering/SkeletalMeshRenderData.h"
#include "Engine/StaticMesh.h"
#include "StaticMeshResources.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "ClothingAsset.h"
#include "ClothingAssetBase.h"
#include "Math/UnrealMathUtility.h"
#include "Math/Matrix.h"
#include "Math/Transform.h"

// Plugin
#include "RVPDPRapidJsonFunctionLibrary.h" 
#include "VertexPaintFunctionLibrary.h"
#include "VertexPaintDetectionInterface.h"
#include "VertexPaintColorSnippetDataAsset.h"
#include "VertexPaintMaterialDataAsset.h"
#include "VertexPaintDetectionLog.h"

// UE5
#if ENGINE_MAJOR_VERSION == 5

#include "GeometryCollection/GeometryCollectionComponent.h"
#include "GeometryCollection/GeometryCollection.h"

#if ENGINE_MINOR_VERSION >= 2
#include "BoneWeights.h"
#endif

#endif


//-------------------------------------------------------

// Set Calculate Colors Info

void FVertexPaintCalculateColorsTask::SetCalculateColorsInfo(const FCalculateColorsInfo& calculateColorsInfo) {

	calculateColorsInfo_Global = calculateColorsInfo;
	vertexDetectMeshData_Global = calculateColorsInfo.initialMeshVertexData;
}


//-------------------------------------------------------

// Do Work

void FVertexPaintCalculateColorsTask::DoWork() {


	inGameThread_Global = IsInGameThread(); // Caches this so we don't have to go out of scope more than we need to. 
	bool paintTasResultTemp = false;


	//-----------  CALCULATE COLORS TO APPLY/DETECT ----------- //

	if (IsTaskValid()) {

		
		// If Paint job that makes use of color buffers
		if (DoesPaintJobUseVertexColorBuffer(calculateColorsInfo_Global)) {

			newColorVertexBufferPerLOD_Global.SetNum(calculateColorsInfo_Global.lodsToLoopThrough, false);
		}


		// If set to Compare Colors with a color snippet then sets the colorArrayToCompareWith here so everything works just as expected when looping through the vertices
		if (calculateColorsInfo_Global.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.compareMeshColorsToStoredColorSnippet && calculateColorsInfo_Global.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.compareWithColorsSnippetDataAssetInfo.colorSnippetDataAssetSnippetIsStoredIn) {

			calculateColorsInfo_Global.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.colorArrayToCompareWith = calculateColorsInfo_Global.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.compareWithColorsSnippetDataAssetInfo.colorSnippetDataAssetSnippetIsStoredIn->snippetColorData.FindRef(calculateColorsInfo_Global.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.compareWithColorsSnippetDataAssetInfo.colorSnippetID).colorSnippetDataPerLOD[0].meshVertexColorsPerLODArray;
		}


		if (IsValid(calculateColorsInfo_Global.getAllVertexColorsSettings.actor)) {

			if (ShouldLoopThroughVerticesAndLODs(calculateColorsInfo_Global.fundementalStruct.callbackSettings, calculateColorsInfo_Global.vertexPaintComponent, calculateColorsInfo_Global.vertexPaintSettings.overrideVertexColorsToApplySettings)) {

				paintTasResultTemp = CalculateColorToApply();
			}

			else {


				TArray<FColor> colorFromLOD_Local;

				for (int i = 0; i < calculateColorsInfo_Global.lodsToLoopThrough; i++) {

					if (!vertexDetectMeshData_Global.meshDataPerLOD.IsValidIndex(i)) break;


					vertexDetectMeshData_Global.meshDataPerLOD[i].lod = i;

					// If doesn't already have gotten vertex colors previously
					if (vertexDetectMeshData_Global.meshDataPerLOD[i].meshVertexColorsPerLODArray.Num() <= 0)
						vertexDetectMeshData_Global.meshDataPerLOD[i].meshVertexColorsPerLODArray = UVertexPaintFunctionLibrary::GetMeshComponentVertexColorsAtLOD_Wrapper(calculateColorsInfo_Global.vertexPaintComponent, i);


					vertexDetectMeshData_Global.meshDataPerLOD[i].amountOfVerticesAtLOD = vertexDetectMeshData_Global.meshDataPerLOD[i].meshVertexColorsPerLODArray.Num();

					// Gets the total one which is the one we use to check if we've fully painted or fully removed a mesh etc. so we don't override vertex colors if there's not gonna be any difference
					if (i == 0) {

						if (calculateColorsInfo_Global.fundementalStruct.debugSettings.printLogsToScreen || calculateColorsInfo_Global.fundementalStruct.debugSettings.printLogsToOutputLog)
							debugLog_AmountOfPaintedColorsOfEachChannelAbove0BeforeApplyingColors_Global = UVertexPaintFunctionLibrary::GetAmountOfPaintedColorsForEachChannel(vertexDetectMeshData_Global.meshDataPerLOD[0].meshVertexColorsPerLODArray, 0);
					}
				}


				paintTasResultTemp = true;


				if (calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeVertexColorChannelResultOfEachChannel && vertexDetectMeshData_Global.meshDataPerLOD.IsValidIndex(0)) {

					amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor_Global = UVertexPaintFunctionLibrary::GetAmountOfPaintedColorsForEachChannel(vertexDetectMeshData_Global.meshDataPerLOD[0].meshVertexColorsPerLODArray, calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeIfMinColorAmountIs);
				}
			}
		}

		else if (IsValid(calculateColorsInfo_Global.paintOnColorSnippetSettings.actor) && calculateColorsInfo_Global.paintOnColorSnippetSettings.colorSnippetDataAssetInfo.colorSnippetDataAssetSnippetIsStoredIn) {

			if (calculateColorsInfo_Global.paintOnColorSnippetSettings.colorSnippetDataAssetInfo.colorSnippetDataAssetSnippetIsStoredIn->snippetColorData.Contains(calculateColorsInfo_Global.paintOnColorSnippetSettings.colorSnippetDataAssetInfo.colorSnippetID)) {

				if (calculateColorsInfo_Global.paintOnColorSnippetSettings.colorSnippetDataAssetInfo.colorSnippetDataAssetSnippetIsStoredIn->snippetColorData.FindRef(calculateColorsInfo_Global.paintOnColorSnippetSettings.colorSnippetDataAssetInfo.colorSnippetID).colorSnippetDataPerLOD.IsValidIndex(0)) {


					int amountOfVerticesAtLOD0 = UVertexPaintFunctionLibrary::GetMeshComponentAmountOfVerticesOnLOD(calculateColorsInfo_Global.vertexPaintComponent, 0);

					colorSnippetColors.SetNumZeroed(amountOfVerticesAtLOD0);
					colorSnippetColors = calculateColorsInfo_Global.paintOnColorSnippetSettings.colorSnippetDataAssetInfo.colorSnippetDataAssetSnippetIsStoredIn->snippetColorData.FindRef(calculateColorsInfo_Global.paintOnColorSnippetSettings.colorSnippetDataAssetInfo.colorSnippetID).colorSnippetDataPerLOD[0].meshVertexColorsPerLODArray;


					// If the Color snippet colors, matches the original LOD0 colors amount, i.e. it's safe to proceed
					if (colorSnippetColors.Num() == amountOfVerticesAtLOD0) {

						if ((vertexDetectMeshData_Global.meshDataPerLOD.Num() > 1 && calculateColorsInfo_Global.propogateLOD0ToAllLODs) || PaintJobShouldLoopThroughVerticesAndLODS(calculateColorsInfo_Global.paintOnMeshColorSettings, calculateColorsInfo_Global.vertexPaintSettings, calculateColorsInfo_Global.paintOnColorSnippetSettings)) {

							// If we're going to loop through all of the vertices, and is set to override vertex colors to apply (and the actor implements the interface etc.) then we set shouldApplyVertexColors_Global to false, so depending on the result of the override, it will decide whether we should apply vertex colors or not. So if we override and not a single vertex returns that it should apply the color, then we shouldn't apply the paint job. This is a bit of a rare case for color snippets and paint jobs that sets the colors directly. 
							if (IsSetToOverrideVertexColorsAndImplementsInterface(calculateColorsInfo_Global.vertexPaintSettings))
								anyVertexColorsGotChanged_Global = false;

							paintTasResultTemp = CalculateColorToApply();
						}

						else {

							vertexDetectMeshData_Global.meshDataPerLOD[0].lod = 0;
							vertexDetectMeshData_Global.meshDataPerLOD[0].meshVertexColorsPerLODArray = colorSnippetColors;
							vertexDetectMeshData_Global.meshDataPerLOD[0].amountOfVerticesAtLOD = colorSnippetColors.Num();


							// Can only create color snippets for skeletal and static meshes
							if (DoesPaintJobUseVertexColorBuffer(calculateColorsInfo_Global)) {

								newColorVertexBufferPerLOD_Global[0] = new FColorVertexBuffer();
								newColorVertexBufferPerLOD_Global[0]->InitFromColorArray(vertexDetectMeshData_Global.meshDataPerLOD[0].meshVertexColorsPerLODArray);
							}


							// If Paint Job like SetMeshComponentColors, Paint Color Snippet or Paint Entire Mesh then all Bones get affected. 
							if (calculateColorsInfo_Global.vertexPaintSkelComponent)
								calculateColorsInfo_Global.vertexPaintSkelComponent->GetBoneNames(vertexColorAppliedToBones_Global);


							anyVertexColorsGotChanged_Global = true;

							// If not looping through colors but setting them all right away then we can't determine which channels that got painted so adds them all
							SetAllColorChannelsToHaveBeenChanged();

							if (calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeVertexColorChannelResultOfEachChannel) {

								amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor_Global = UVertexPaintFunctionLibrary::GetAmountOfPaintedColorsForEachChannel(vertexDetectMeshData_Global.meshDataPerLOD[0].meshVertexColorsPerLODArray, calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeIfMinColorAmountIs);
							}


							paintTasResultTemp = true;
						}
					}

					else {

						calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Paint Color Snippet Task Fail as the Color Array didn't match the amount of Vertices the Mesh has at LOD0! ")), FColor::Red));
					}
				}

				else {

					calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Paint Color Snippet Task Fail as there is Color Array stored for LOD0")), FColor::Red));
				}
			}

			else {

				calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Paint Color Snippet Task Fail as the Color Snippet Data Asset doesn't contain the Snippet. ")), FColor::Red));
			}
		}

		else if (IsValid(calculateColorsInfo_Global.setMeshComponentVertexColorsSettings.actor)) {

			if (calculateColorsInfo_Global.setMeshComponentVertexColorsSettings.vertexColorsAtLOD0ToSet.Num() > 0) {


				int amountOfVerticesAtLOD0 = UVertexPaintFunctionLibrary::GetMeshComponentAmountOfVerticesOnLOD(calculateColorsInfo_Global.vertexPaintComponent, 0);


				if (amountOfVerticesAtLOD0 == calculateColorsInfo_Global.setMeshComponentVertexColorsSettings.vertexColorsAtLOD0ToSet.Num()) {

					// If should Propogate LOD0 to other LODs or if should loop through vertices because of other reasons. 
					if ((vertexDetectMeshData_Global.meshDataPerLOD.Num() > 1 && calculateColorsInfo_Global.propogateLOD0ToAllLODs) || PaintJobShouldLoopThroughVerticesAndLODS(calculateColorsInfo_Global.paintOnMeshColorSettings, calculateColorsInfo_Global.vertexPaintSettings, calculateColorsInfo_Global.setMeshComponentVertexColorsSettings)) {


						// Sets this to true already since we can't be dependent on the loop setting this to true since we're not applying color per vertex or anything and checking if it made any difference but sets all of them. 
						// anyVertexColorsGotChanged_Global = true;

						// If we're going to loop through all of the vertices, and is set to override vertex colors to apply (and the actor implements the interface etc.) then we set shouldApplyVertexColors_Global to false, so depending on the result of the override, it will decide whether we should apply vertex colors or not. So if we override and not a single vertex returns that it should apply the color, then we shouldn't apply the paint job. This is a bit of a rare case for color snippets and paint jobs that sets the colors directly. 
						if (IsSetToOverrideVertexColorsAndImplementsInterface(calculateColorsInfo_Global.vertexPaintSettings))
							anyVertexColorsGotChanged_Global = false;


						// True since SetMeshVertexColors has to Propogate LOD0 to other LODs
						paintTasResultTemp = CalculateColorToApply();
					}

					else {

						vertexDetectMeshData_Global.meshDataPerLOD[0].lod = 0;
						vertexDetectMeshData_Global.meshDataPerLOD[0].meshVertexColorsPerLODArray = calculateColorsInfo_Global.setMeshComponentVertexColorsSettings.vertexColorsAtLOD0ToSet;
						vertexDetectMeshData_Global.meshDataPerLOD[0].amountOfVerticesAtLOD = calculateColorsInfo_Global.setMeshComponentVertexColorsSettings.vertexColorsAtLOD0ToSet.Num();


						if (DoesPaintJobUseVertexColorBuffer(calculateColorsInfo_Global)) {

							newColorVertexBufferPerLOD_Global[0] = new FColorVertexBuffer();
							newColorVertexBufferPerLOD_Global[0]->InitFromColorArray(vertexDetectMeshData_Global.meshDataPerLOD[0].meshVertexColorsPerLODArray);
						}

#if ENGINE_MAJOR_VERSION == 5

						else if (calculateColorsInfo_Global.vertexPaintDynamicMeshComponent) {

							dynamicMeshComponentVertexColors_Global = vertexDetectMeshData_Global.meshDataPerLOD[0].meshVertexColorsPerLODArray;
						}

						else if (calculateColorsInfo_Global.vertexPaintGeometryCollectionComponent) {

							TArray<FLinearColor> colorsAsLinear;
							colorsAsLinear.SetNum(vertexDetectMeshData_Global.meshDataPerLOD[0].amountOfVerticesAtLOD);

							for (int i = 0; i < calculateColorsInfo_Global.setMeshComponentVertexColorsSettings.vertexColorsAtLOD0ToSet.Num(); i++)
								colorsAsLinear[i] = calculateColorsInfo_Global.setMeshComponentVertexColorsSettings.vertexColorsAtLOD0ToSet[i];

							geometryCollectionVertexColors_Global = colorsAsLinear;
						}

#endif


						anyVertexColorsGotChanged_Global = true;

						// If not looping through colors but setting them all right away then we can't determine which channels that got painted so adds them all
						SetAllColorChannelsToHaveBeenChanged();

						// If Paint Job like SetMeshComponentColors, Paint Color Snippet or Paint Entire Mesh then all Bones get affected. 
						if (calculateColorsInfo_Global.vertexPaintSkelComponent)
							calculateColorsInfo_Global.vertexPaintSkelComponent->GetBoneNames(vertexColorAppliedToBones_Global);


						if (calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeVertexColorChannelResultOfEachChannel) {

							amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor_Global = UVertexPaintFunctionLibrary::GetAmountOfPaintedColorsForEachChannel(vertexDetectMeshData_Global.meshDataPerLOD[0].meshVertexColorsPerLODArray, calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeIfMinColorAmountIs);
						}

						paintTasResultTemp = true;
					}
				}

				else {

					calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Set Mesh Component Colors Task Fail as the vertexColorsAtLOD0ToSet didn't match the amount of Vertices the Mesh has at LOD0!")), FColor::Red));
				}
			}

			else {

				calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Set Mesh Component Colors Task Fail as the vertexColorsAtLOD0ToSet is 0 in length. ")), FColor::Red));
			}
		}

		else if (IsValid(calculateColorsInfo_Global.setMeshComponentVertexColorsUsingSerializedStringSettings.actor)) {

			if (calculateColorsInfo_Global.setMeshComponentVertexColorsUsingSerializedStringSettings.serializedColorDataAtLOD0.Len() > 0) {


				int amountOfVerticesAtLOD0 = UVertexPaintFunctionLibrary::GetMeshComponentAmountOfVerticesOnLOD(calculateColorsInfo_Global.vertexPaintComponent, 0);

				deserializedVertexColors.SetNumZeroed(amountOfVerticesAtLOD0);

				// De-Serializes the colors to apply
				deserializedVertexColors = URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFColor_Wrapper(calculateColorsInfo_Global.setMeshComponentVertexColorsUsingSerializedStringSettings.serializedColorDataAtLOD0);

				if (deserializedVertexColors.Num() > 0) {

					if (amountOfVerticesAtLOD0 == deserializedVertexColors.Num()) {

						// If should Propogate LOD0 to other LODs or if should loop through vertices because of other reasons. 
						if ((vertexDetectMeshData_Global.meshDataPerLOD.Num() > 1 && calculateColorsInfo_Global.propogateLOD0ToAllLODs) || PaintJobShouldLoopThroughVerticesAndLODS(calculateColorsInfo_Global.paintOnMeshColorSettings, calculateColorsInfo_Global.vertexPaintSettings, calculateColorsInfo_Global.setMeshComponentVertexColorsUsingSerializedStringSettings)) {

							// If we're going to loop through all of the vertices, and is set to override vertex colors to apply (and the actor implements the interface etc.) then we set shouldApplyVertexColors_Global to false, so depending on the result of the override, it will decide whether we should apply vertex colors or not. So if we override and not a single vertex returns that it should apply the color, then we shouldn't apply the paint job. This is a bit of a rare case for color snippets and paint jobs that sets the colors directly. 
							if (IsSetToOverrideVertexColorsAndImplementsInterface(calculateColorsInfo_Global.vertexPaintSettings))
								anyVertexColorsGotChanged_Global = false;

							paintTasResultTemp = CalculateColorToApply();
						}

						else {


							vertexDetectMeshData_Global.meshDataPerLOD[0].lod = 0;
							vertexDetectMeshData_Global.meshDataPerLOD[0].meshVertexColorsPerLODArray = deserializedVertexColors;
							vertexDetectMeshData_Global.meshDataPerLOD[0].amountOfVerticesAtLOD = deserializedVertexColors.Num();


							if (DoesPaintJobUseVertexColorBuffer(calculateColorsInfo_Global)) {

								newColorVertexBufferPerLOD_Global[0] = new FColorVertexBuffer();
								newColorVertexBufferPerLOD_Global[0]->InitFromColorArray(vertexDetectMeshData_Global.meshDataPerLOD[0].meshVertexColorsPerLODArray);
							}

#if ENGINE_MAJOR_VERSION == 5

							else if (calculateColorsInfo_Global.vertexPaintDynamicMeshComponent) {

								dynamicMeshComponentVertexColors_Global = deserializedVertexColors;
							}

							else if (calculateColorsInfo_Global.vertexPaintGeometryCollectionComponent) {

								TArray<FLinearColor> colorsAsLinear;
								colorsAsLinear.SetNum(vertexDetectMeshData_Global.meshDataPerLOD[0].amountOfVerticesAtLOD);

								for (int i = 0; i < deserializedVertexColors.Num(); i++)
									colorsAsLinear[i] = deserializedVertexColors[i];

								geometryCollectionVertexColors_Global = colorsAsLinear;
							}

#endif


							anyVertexColorsGotChanged_Global = true;

							// If not looping through colors but setting them all right away then we can't determine which channels that got painted so adds them all
							SetAllColorChannelsToHaveBeenChanged();

							// If Paint Job like SetMeshComponentColors, Paint Color Snippet or Paint Entire Mesh then all Bones get affected. 
							if (calculateColorsInfo_Global.vertexPaintSkelComponent)
								calculateColorsInfo_Global.vertexPaintSkelComponent->GetBoneNames(vertexColorAppliedToBones_Global);


							if (calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeVertexColorChannelResultOfEachChannel) {

								amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor_Global = UVertexPaintFunctionLibrary::GetAmountOfPaintedColorsForEachChannel(vertexDetectMeshData_Global.meshDataPerLOD[0].meshVertexColorsPerLODArray, calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeIfMinColorAmountIs);
							}

							paintTasResultTemp = true;
						}
					}

					else {

						calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Set Component Mesh Colors with Serialized String Task Fail as the De-Serailized Color Array didn't match the amount of Vertices the Mesh has at LOD0!")), FColor::Red));
					}
				}

				else {

					calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Set Mesh Component Colors with Serialized String Task Fail as the De-Serialized Color Array was 0 in length!")), FColor::Red));
				}
			}

			else {

				calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Set Mesh Component Colors with Serialized String Task Fail as the String to De-Serialize is 0 in Length!")), FColor::Red));
			}
		}

		else if (IsValid(calculateColorsInfo_Global.paintOnEntireMeshSettings.actor)) {


			if (!calculateColorsInfo_Global.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.onlyRandomizeWithinAreaOfEffectAtLocation && !calculateColorsInfo_Global.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh && calculateColorsInfo_Global.paintOnMeshColorSettings.applyVertexColorSettings.IsAnyColorChannelSetToSetColor() && !calculateColorsInfo_Global.paintOnMeshColorSettings.applyVertexColorSettings.IsAnyColorChannelSetToAddColorAndIsNotZero()) {

				if (calculateColorsInfo_Global.paintOnMeshColorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.applyVertexColorUsingPhysicsSurface || PaintJobShouldLoopThroughVerticesAndLODS(calculateColorsInfo_Global.paintOnEntireMeshSettings, calculateColorsInfo_Global.vertexPaintSettings, calculateColorsInfo_Global.paintOnColorSnippetSettings) || IsThereAnyPaintConditions(calculateColorsInfo_Global.paintOnMeshColorSettings.applyVertexColorSettings)) {

					paintTasResultTemp = CalculateColorToApply();
				}

				// If there's no reason to loop through all the vertices then initializes the color buffer right away. Checks if set to apply vertex colors using physics surface as well, because if so, then we need to loop through the vertices since we need to get the sections to get the material of each section and thus the physics surface registered at RGBA at each section and if they have the physics surface we're trying to paint. 
				else {

					for (int i = 0; i < calculateColorsInfo_Global.lodsToLoopThrough; i++) {

						if (!vertexDetectMeshData_Global.meshDataPerLOD.IsValidIndex(i)) break;


						// Gets the total one which is the one we use to check if we've fully painted or fully removed a mesh etc. so we don't override vertex colors if there's not gonna be any difference
						if (i == 0) {

							if (calculateColorsInfo_Global.fundementalStruct.debugSettings.printLogsToScreen || calculateColorsInfo_Global.fundementalStruct.debugSettings.printLogsToOutputLog)
								debugLog_AmountOfPaintedColorsOfEachChannelAbove0BeforeApplyingColors_Global = UVertexPaintFunctionLibrary::GetAmountOfPaintedColorsForEachChannel(UVertexPaintFunctionLibrary::GetMeshComponentVertexColorsAtLOD_Wrapper(calculateColorsInfo_Global.vertexPaintComponent, i), 0);
						}


						const int amountOfVerticesAtLOD_Local = UVertexPaintFunctionLibrary::GetMeshComponentAmountOfVerticesOnLOD(calculateColorsInfo_Global.vertexPaintComponent, i);

						if (amountOfVerticesAtLOD_Local <= 0) 
							continue;


						FLinearColor linearColorToInitialize_Local = FLinearColor();
						linearColorToInitialize_Local.R = calculateColorsInfo_Global.paintOnMeshColorSettings.applyVertexColorSettings.applyColorsOnRedChannel.amountToApply;
						linearColorToInitialize_Local.G = calculateColorsInfo_Global.paintOnMeshColorSettings.applyVertexColorSettings.applyColorsOnRedChannel.amountToApply;
						linearColorToInitialize_Local.B = calculateColorsInfo_Global.paintOnMeshColorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.amountToApply;
						linearColorToInitialize_Local.A = calculateColorsInfo_Global.paintOnMeshColorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.amountToApply;
						const FColor colorToInitialize_Local = UVertexPaintFunctionLibrary::ReliableFLinearToFColor(linearColorToInitialize_Local);


						vertexDetectMeshData_Global.meshDataPerLOD[i].lod = i;
						vertexDetectMeshData_Global.meshDataPerLOD[i].amountOfVerticesAtLOD = amountOfVerticesAtLOD_Local;
						vertexDetectMeshData_Global.meshDataPerLOD[i].meshVertexColorsPerLODArray.Init(colorToInitialize_Local, amountOfVerticesAtLOD_Local);


						if (DoesPaintJobUseVertexColorBuffer(calculateColorsInfo_Global)) {

							newColorVertexBufferPerLOD_Global[i] = new FColorVertexBuffer();
							newColorVertexBufferPerLOD_Global[i]->InitFromSingleColor(colorToInitialize_Local, amountOfVerticesAtLOD_Local);
						}

#if ENGINE_MAJOR_VERSION == 5

						else if (calculateColorsInfo_Global.vertexPaintDynamicMeshComponent) {

							dynamicMeshComponentVertexColors_Global = vertexDetectMeshData_Global.meshDataPerLOD[i].meshVertexColorsPerLODArray;
						}

						else if (calculateColorsInfo_Global.vertexPaintGeometryCollectionComponent) {

							const FLinearColor linearColorToInitialize = UVertexPaintFunctionLibrary::ReliableFColorToFLinearColor(colorToInitialize_Local);

							geometryCollectionVertexColors_Global.Init(linearColorToInitialize, amountOfVerticesAtLOD_Local);
						}

#endif
					}

					// If Setting the Entire Mesh Color, always result in change since we have no way of way of checking if they did without looping through verts, which would make the task take longer.
					anyVertexColorsGotChanged_Global = true;

					// If not looping through colors but setting them all right away then we can't determine which channels that got painted so adds them all
					SetAllColorChannelsToHaveBeenChanged();

					// If Paint Job like SetMeshComponentColors, Paint Color Snippet or Paint Entire Mesh then all Bones get affected. 
					if (calculateColorsInfo_Global.vertexPaintSkelComponent)
						calculateColorsInfo_Global.vertexPaintSkelComponent->GetBoneNames(vertexColorAppliedToBones_Global);

					paintTasResultTemp = true;
				}
			}

			else {

				paintTasResultTemp = CalculateColorToApply();
			}

		}

		else {

			paintTasResultTemp = CalculateColorToApply();

		}
	}

	else {

		calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Failed because IsTaskValid() Check failed right away, perhaps world, actor or component got destroyed between task creation and actual start. ")), FColor::Red));
	}



	//-----------  SETS CALCULATE COLORS INFO ----------- //

	// So far only Async Task Globals has been Set, since we don't want to set calculateColorsInfo_Global when we run the calculations. So here we set the calculateColorsInfo_Global global with their settings. It is what the actual result will be and what will be sent back to the game thread
	calculateColorsInfo_Global.paintTaskResult.anyVertexColorGotChanged = anyVertexColorsGotChanged_Global;


	// Color Buffer
	calculateColorsInfo_Global.newColorVertexBufferPerLOD = newColorVertexBufferPerLOD_Global;

	// Closest Vertex
	calculateColorsInfo_Global.closestVertexFound_Paint = closestVertexFound_Paint_Global;
	calculateColorsInfo_Global.closestSectionFound_Paint = closestSectionFound_Paint_Global;
	calculateColorsInfo_Global.materialAtClosestPaintVertex = materialAtClosestPaintVertex_Global;

	calculateColorsInfo_Global.closestVertexFound_Detection = closestVertexFound_Detection_Global;
	calculateColorsInfo_Global.closestSectionFound_Detect = closestSectionFound_Detection_Global;
	calculateColorsInfo_Global.materialAtClosestDetectVertex = materialAtClosestDetectVertex_Global;


	calculateColorsInfo_Global.closestVertexColor_BeforeApplyingColors_Detect = closestVertexColor_BeforeApplyingColors_Detect_Global;
	calculateColorsInfo_Global.closestVertexColor_AfterApplyingColors_Detect = closestVertexColor_AfterApplyingColors_Detect_Global;
	calculateColorsInfo_Global.closestVertexColor_AfterApplyingColors_Paint = closestVertexColor_AfterApplyingColors_Paint_Global;


	calculateColorsInfo_Global.closestVertexPositionToHitLocationAtMinLOD_World_Paint = closestVertexPositionToHitLocationAtMinLOD_World_Paint_Global;
	calculateColorsInfo_Global.closestVertexNormalToHitLocationAtMinLOD_World_Paint = closestVertexNormalToHitLocationAtMinLOD_World_Paint_Global;

	calculateColorsInfo_Global.closestVertexPositionToHitLocationAtMinLOD_World_Detect = closestVertexPositionToHitLocationAtMinLOD_World_Detect_Global;
	calculateColorsInfo_Global.closestVertexNormalToHitLocationAtMinLOD_World_Detect = closestVertexNormalToHitLocationAtMinLOD_World_Detect_Global;


	// Estimated Color at Hit Location
	calculateColorsInfo_Global.estimatedColorAtHitLocation_VertexToLerpToward_Paint = estimatedColorAtHitLocation_VertexToLerpToward_Paint_Global;
	calculateColorsInfo_Global.estimatedColorAtHitLocation_VertexToLerpToward_Detect = estimatedColorAtHitLocation_VertexToLerpToward_Detect_Global;

	calculateColorsInfo_Global.estimatedColorAtHitLocation_LocationInWorldSpace_Paint = estimatedColorAtHitLocation_LocationInWorldSpace_Paint_Global;
	calculateColorsInfo_Global.estimatedColorAtHitLocation_LocationInWorldSpace_Detect = estimatedColorAtHitLocation_LocationInWorldSpace_Detect_Global;

	calculateColorsInfo_Global.estimatedColorAtHitLocation_VertexToLerpToward_LocationInWorldSpace_Paint = estimatedColorAtHitLocation_VertexToLerpToward_LocationInWorldSpace_Paint_Global;
	calculateColorsInfo_Global.estimatedColorAtHitLocation_VertexToLerpToward_LocationInWorldSpace_Detect = estimatedColorAtHitLocation_VertexToLerpToward_LocationInWorldSpace_Detect_Global;

	calculateColorsInfo_Global.estimatedColorAtHitLocation_BeforeApplyingColors_Detect = estimatedColorAtHitLocation_BeforeApplyingColors_Detect_Global;
	calculateColorsInfo_Global.estimatedColorAtHitLocation_AfterApplyingColors_Detect = estimatedColorAtHitLocation_AfterApplyingColors_Detect_Global;
	calculateColorsInfo_Global.estimatedColorAtHitLocation_AfterApplyingColors_Paint = estimatedColorAtHitLocation_AfterApplyingColors_Paint_Global;

	calculateColorsInfo_Global.estimatedColorAtHitLocation_ClosestVertexWorldLocationsToTheHitLocation_Paint = estimatedColorAtHitLocation_ClosestVerticesToTheHitLocation_Paint_Global;
	calculateColorsInfo_Global.estimatedColorAtHitLocation_ClosestVertexWorldLocationsToTheHitLocation_Detect = estimatedColorAtHitLocation_ClosestVerticesToTheHitLocation_Detect_Global;


	// Amount of Colors of Each Channel
	calculateColorsInfo_Global.debugLog_AmountOfPaintedColorsOfEachChannelAboveZeroBeforeApplyingColor = debugLog_AmountOfPaintedColorsOfEachChannelAbove0BeforeApplyingColors_Global;
	calculateColorsInfo_Global.amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor = amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor_Global;
	calculateColorsInfo_Global.amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor = amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor_Global;

	// Within Area
	calculateColorsInfo_Global.withinAreaResults_BeforeApplyingColors = withinAreaResults_BeforeApplyingColors_Global;
	calculateColorsInfo_Global.withinAreaResults = withinAreaResults_AfterApplyingColors_Global;
	calculateColorsInfo_Global.paintWithinArea_VertexWasWithinArea = paintWithinArea_VertexWasWithinArea_Global;


	// Average Color
	calculateColorsInfo_Global.avarageColorWithinArea_Detect_BeforeApplyingColor = FColor(avarageColorWithinArea_Global_Detect_Before_Red / amountOfVerticesWithinArea_Detect, avarageColorWithinArea_Global_Detect_Before_Green / amountOfVerticesWithinArea_Detect, avarageColorWithinArea_Global_Detect_Before_Blue / amountOfVerticesWithinArea_Detect, avarageColorWithinArea_Global_Detect_Before_Alpha / amountOfVerticesWithinArea_Detect);

	calculateColorsInfo_Global.avarageColorWithinArea_Detect_AfterApplyingColor = FColor(getClosestVertexData_AvarageColorWithinArea_AfterApplyingColors_Red_Global / getClosestVertexData_AmountOfVerticesWithinArea_AfterApplyingColors_Global, getClosestVertexData_AvarageColorWithinArea_AfterApplyingColors_Green_Global / getClosestVertexData_AmountOfVerticesWithinArea_AfterApplyingColors_Global, getClosestVertexData_AvarageColorWithinArea_AfterApplyingColors_Blue_Global / getClosestVertexData_AmountOfVerticesWithinArea_AfterApplyingColors_Global, getClosestVertexData_AvarageColorWithinArea_AfterApplyingColors_Alpha_Global / getClosestVertexData_AmountOfVerticesWithinArea_AfterApplyingColors_Global);

	calculateColorsInfo_Global.avarageColorWithinArea_Paint = FColor(paintAtLocation_AvarageColorWithinArea_Global_Red / paintAtLocation_AmountOfVerticesWithinArea_Global, paintAtLocation_AvarageColorWithinArea_Global_Green / paintAtLocation_AmountOfVerticesWithinArea_Global, paintAtLocation_AvarageColorWithinArea_Global_Blue / paintAtLocation_AmountOfVerticesWithinArea_Global, paintAtLocation_AvarageColorWithinArea_Global_Alpha / paintAtLocation_AmountOfVerticesWithinArea_Global);


	// Cloth
	if (calculateColorsInfo_Global.vertexPaintSettings.affectClothPhysics)
		calculateColorsInfo_Global.clothPhysicsSettings = clothPhysicsSettings_Global;


	calculateColorsInfo_Global.overridenVertexColorsMadeChangeToColorsToApply = overridenVertexColorsMadeChangeToColorsToApply_Global;


	// Dynamic Mesh & Geometry Collection Component
#if ENGINE_MAJOR_VERSION == 5
	calculateColorsInfo_Global.dynamicMeshComponentVertexColors = dynamicMeshComponentVertexColors_Global;
	calculateColorsInfo_Global.geometryCollectionComponentVertexColors = geometryCollectionVertexColors_Global;
#endif


	// Paint Task specific Results
	if (calculateColorsInfo_Global.vertexPaintSettings.actor) {

		calculateColorsInfo_Global.paintTaskResult.vertexColorAppliedToBones = vertexColorAppliedToBones_Global;
		calculateColorsInfo_Global.paintTaskResult.colorAppliedToVertexColorChannels = appliedToVertexColorChannels_Global;
	}


	// General Task Result

	calculateColorsInfo_Global.taskResult.vertexColorsOnEachBone.nameAndColorOfEachBone = nameAndColorOfEachBone_Global;
	calculateColorsInfo_Global.taskResult.vertexColorsOnEachBone.successFullyGotColorsForEachBone = successFullyGotColorsForEachBone_Global;

	calculateColorsInfo_Global.taskResult.compareMeshColorsToColorArrayResult = compareMeshColorsToColorArrayResult_Global;
	calculateColorsInfo_Global.taskResult.meshVertexData = vertexDetectMeshData_Global;

	if (calculateColorsInfo_Global.vertexDetectSettings.actor)
		calculateColorsInfo_Global.taskResult.amountOfPaintedColorsOfEachChannel = amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor_Global;

	else
		calculateColorsInfo_Global.taskResult.amountOfPaintedColorsOfEachChannel = amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor_Global;


	if (calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeVertexDataOnlyForLOD0 && calculateColorsInfo_Global.taskResult.meshVertexData.meshDataPerLOD.Num() > 1) {

		calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Adjusting Amount of Mesh Data LODs as the Callback Settings is set to only Include Vertex Data for LOD0. ")), FColor::Cyan));
	}



	//----------- ADJUSTS CALLBACK DATA ----------- //

	// So we don't send things back to game thread that we don't need. Was a noticeable performance difference if painting on extremely heavy meshes like 1 Million vertices if you didn't include colors, position or normal data. 

	if (!calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeColorsOfEachBone)
		calculateColorsInfo_Global.taskResult.vertexColorsOnEachBone = FVertexDetectVertexColorsOnEachBone();


	if (calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeVertexDataOnlyForLOD0 && calculateColorsInfo_Global.taskResult.meshVertexData.meshDataPerLOD.Num() > 1)
		calculateColorsInfo_Global.taskResult.meshVertexData.meshDataPerLOD.SetNum(1, true);


	// Clears it on each element that's left if not set to include it
	for (int i = 0; i < calculateColorsInfo_Global.taskResult.meshVertexData.meshDataPerLOD.Num(); i++) {

		// No point in keeping the data if it's not going to be used by any callbacks. 
		if (!calculateColorsInfo_Global.fundementalStruct.callbackSettings.runCallbackDelegate && calculateColorsInfo_Global.fundementalStruct.callbackSettings.runCallbackInterfacesOnObject && calculateColorsInfo_Global.fundementalStruct.callbackSettings.runCallbackInterfacesOnObjectComponents) {

			calculateColorsInfo_Global.taskResult.meshVertexData.meshDataPerLOD[i].meshVertexColorsPerLODArray.Empty();
			calculateColorsInfo_Global.taskResult.meshVertexData.meshDataPerLOD[i].meshVertexPositionsInComponentSpacePerLODArray.Empty();
			calculateColorsInfo_Global.taskResult.meshVertexData.meshDataPerLOD[i].meshVertexNormalsPerLODArray.Empty();
			calculateColorsInfo_Global.taskResult.meshVertexData.meshDataPerLOD[i].serializedVertexColorsData.colorsAtLODAsJSonString = "";
		}

		else {

			if (!calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeVertexColorData)
				calculateColorsInfo_Global.taskResult.meshVertexData.meshDataPerLOD[i].meshVertexColorsPerLODArray.Empty();

			if (!calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeVertexPositionData)
				calculateColorsInfo_Global.taskResult.meshVertexData.meshDataPerLOD[i].meshVertexPositionsInComponentSpacePerLODArray.Empty();

			if (!calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeVertexNormalData)
				calculateColorsInfo_Global.taskResult.meshVertexData.meshDataPerLOD[i].meshVertexNormalsPerLODArray.Empty();

			if (!calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeSerializedVertexColorData)
				calculateColorsInfo_Global.taskResult.meshVertexData.meshDataPerLOD[i].serializedVertexColorsData.colorsAtLODAsJSonString = "";
		}
	}



	//-----------  TASK FINISHED ----------- //

	isTaskFinished_Global = true;

	if (inGameThread_Global) {

		calculateColorsInfo_Global.taskResult.taskDuration = calculateColorsInfo_Global.fundementalStruct.taskWorld->RealTimeSeconds - calculateColorsInfo_Global.taskStartedTimeStamp;


		calculateColorsInfo_Global.taskResult.taskSuccessfull = WasTaskSuccessfull(isTaskFinished_Global, calculateColorsInfo_Global);


		for (auto message : calculateColorsResultMessage_Global)
			VertexPaintDetectionLog::PrintVertexPaintDetectionLog(calculateColorsInfo_Global.fundementalStruct.debugSettings, message.messageColor, message.debugMessage);


		if (asyncTaskFinishedDelegate.IsBound())
			asyncTaskFinishedDelegate.Execute(calculateColorsInfo_Global);
	}

	else {

		FVertexPaintAsyncTaskFinished asyncTaskFinishedDelegate_Local = asyncTaskFinishedDelegate;
		FCalculateColorsInfo calculateColorsInfo_Local = calculateColorsInfo_Global;
		TArray<FAsyncTaskDebugMessages> calculateColorsResultMessage_Local = calculateColorsResultMessage_Global;
		bool taskFinished_Local = isTaskFinished_Global;

		// Broadcasts on Game Thread so the actual Applying of colors happens there
		AsyncTask(ENamedThreads::GameThread, [this, taskFinished_Local, asyncTaskFinishedDelegate_Local, calculateColorsInfo_Local, paintTasResultTemp, calculateColorsResultMessage_Local]() mutable {

			// Sets Duration and Task Success here, so when task queue and game instance use it they can use use const & refs of it
			if (calculateColorsInfo_Local.fundementalStruct.taskWorld)
				calculateColorsInfo_Local.taskResult.taskDuration = calculateColorsInfo_Local.fundementalStruct.taskWorld->RealTimeSeconds - calculateColorsInfo_Local.taskStartedTimeStamp;

			calculateColorsInfo_Local.taskResult.taskSuccessfull = this->WasTaskSuccessfull(taskFinished_Local, calculateColorsInfo_Local);


			// Got a crash very rarely when printing with PrintString in async so moved it so we print them all here when in game thread.
			for (auto message : calculateColorsResultMessage_Local)
				VertexPaintDetectionLog::PrintVertexPaintDetectionLog(calculateColorsInfo_Local.fundementalStruct.debugSettings, message.messageColor, message.debugMessage);


			if (asyncTaskFinishedDelegate_Local.IsBound())
				asyncTaskFinishedDelegate_Local.Execute(calculateColorsInfo_Local);
			});
	}
}


//-------------------------------------------------------

// Calculate Color To Apply

bool FVertexPaintCalculateColorsTask::CalculateColorToApply() {


	calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: For Actor %s and Mesh: %s with %i LODs!"), *calculateColorsInfo_Global.vertexPaintActor->GetName(), *calculateColorsInfo_Global.vertexPaintComponent->GetName(), calculateColorsInfo_Global.lodsToLoopThrough), FColor::Cyan));


	// Paint Job
	bool applyColorsPrimarilyOnRedChannel_Local = true;
	bool applyColorsPrimarilyOnGreenChannel_Local = true;
	bool applyColorsPrimarilyOnBlueChannel_Local = true;
	bool applyColorsPrimarilyOnAlphaChannel_Local = true;

	// Paint at Location / Get Closest Vertex Data
	FVector paintAtLocation_HitLocationInWorldSpace_Local = FVector(ForceInitToZero);
	float paintAtLocation_VertexNormalMinDotToHitNormalToGetColored_MinDot_Local = 0;

	// Get Closest Vertex Data
	FVector getClosestVertexData_HitLocationInWorldSpace_Local = FVector(ForceInitToZero);
	FVector getClosestVertexData_HitNormal_Local = FVector(ForceInitToZero);
	FVertexDetectGetAverageColorStruct getClosestVertexData_GetAverageColor_Local;

	// Skeletal Mesh
	FSkeletalMeshRenderData* skeletalMeshRenderData_Local = nullptr;

	// FallOff
	FVertexDetectFallOffSettings fallOffSettings_Local;

	// Amount of Colors of Each Channel
	FVertexDetectAmountOfPaintedColorsOfEachChannel debugLog_AmountOfPaintedColorsOfEachChannelAbove0BeforeApplyingAnyColor_Local;
	FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel_BeforeApplyingColor_Local;
	FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel_AfterApplyingColors_Local;

	// Within Area Amount of Colors of Each Channel
	FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel_WithinArea_BeforeApplyingColors_Local;
	FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel_WithinArea_AfterApplyingColors_Local;

	// Propogate Colors to other LODs
	TArray<FBox> propogateToLODs_CompleteLODsBaseBounds_Local;
	TArray<FPaintedVertex> propogateToLODs_PaintedVerticesAtLOD0_Local;

	// Cloth
	TArray<UClothingAssetBase*> cloth_ClothingAssets_Local;
	TMap<UClothingAssetBase*, FVertexDetectClothSettingsStruct> cloth_PhysicsSettings_Local;
	TArray<FVector> cloth_BoneLocationInComponentSpace_Local;
	TArray<FQuat> cloth_BoneQuaternionsInComponentSpace_Local;

#if ENGINE_MAJOR_VERSION == 4

	TMap<int32, TArray<FVector>> cloth_VertexPositions_Local;
	TMap<int32, TArray<FVector>> cloth_VertexNormals_Local;

#elif ENGINE_MAJOR_VERSION == 5

	TMap<int32, TArray<FVector3f>> cloth_VertexPositions_Local;
	TMap<int32, TArray<FVector3f>> cloth_VertexNormals_Local;


	// Dynamic Mesh
	UE::Geometry::FDynamicMesh3* dynamicMesh_3_Local = nullptr;

#endif


	if (calculateColorsInfo_Global.vertexPaintSkelComponent) {


		skeletalMeshRenderData_Local = calculateColorsInfo_Global.vertexPaintSkelComponent->GetSkeletalMeshRenderData();

		if (!IsValidSkeletalMesh(calculateColorsInfo_Global.vertexPaintSkelComponentsSkeletalMesh, calculateColorsInfo_Global.vertexPaintSkelComponent, skeletalMeshRenderData_Local, 0)) return false;


		GetSkeletalMeshClothInfo(calculateColorsInfo_Global, cloth_PhysicsSettings_Local, cloth_ClothingAssets_Local, cloth_VertexPositions_Local, cloth_VertexNormals_Local, cloth_BoneLocationInComponentSpace_Local, cloth_BoneQuaternionsInComponentSpace_Local);
	}


	if (calculateColorsInfo_Global.getClosestVertexDataSettings.actor) {

		GetClosestVertexDataInfo(calculateColorsInfo_Global, getClosestVertexData_GetAverageColor_Local, getClosestVertexData_HitLocationInWorldSpace_Local, getClosestVertexData_HitNormal_Local);
	}

	if (calculateColorsInfo_Global.paintOnMeshAtLocationSettings.actor) {

		GetPaintAtLocationInfo(calculateColorsInfo_Global, paintAtLocation_VertexNormalMinDotToHitNormalToGetColored_MinDot_Local, paintAtLocation_HitLocationInWorldSpace_Local);

		fallOffSettings_Local = calculateColorsInfo_Global.paintOnMeshAtLocationSettings.paintAtAreaSettings.fallOffSettings;
	}

	if (calculateColorsInfo_Global.paintOnMeshWithinAreaSettings.actor || calculateColorsInfo_Global.getColorsWithinAreaSettings.actor) {

		if (!GetWithinAreaInfo(calculateColorsInfo_Global, calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin, isVertexWithinArea_ComplexShape_TraceParams_Global)) return false;

		fallOffSettings_Local = calculateColorsInfo_Global.paintOnMeshWithinAreaSettings.fallOffSettings;

		withinAreaResults_BeforeApplyingColors_Global.meshVertexDataWithinArea.SetNum(calculateColorsInfo_Global.lodsToLoopThrough, true);
		withinAreaResults_AfterApplyingColors_Global.meshVertexDataWithinArea.SetNum(calculateColorsInfo_Global.lodsToLoopThrough, true);
	}

	if (calculateColorsInfo_Global.vertexPaintSettings.actor) {

		if (calculateColorsInfo_Global.vertexPaintSettings.overrideVertexColorsToApplySettings.overrideVertexColorsToApply) {

			if (IsValid(calculateColorsInfo_Global.vertexPaintSettings.overrideVertexColorsToApplySettings.objectToRunOverrideVertexColorsInterface)) {

				if (calculateColorsInfo_Global.vertexPaintSettings.overrideVertexColorsToApplySettings.objectToRunOverrideVertexColorsInterface->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass())) {

					overrideVertexColors_ObjectToRunInterfaceOn_Global = calculateColorsInfo_Global.vertexPaintSettings.overrideVertexColorsToApplySettings.objectToRunOverrideVertexColorsInterface;
				}
			}
		}
	}

	if (calculateColorsInfo_Global.propogateLOD0ToAllLODs)
		propogateToLODs_CompleteLODsBaseBounds_Local.SetNum(calculateColorsInfo_Global.lodsToLoopThrough, false);


	// Sets it to be the amount of loops we've run through, in case it was stored with 8 loops, but was overriden to only run 2 loops, then we don't want it to be 8 loops after this but only 2 so only 2 gets changed in the subsystem. 
	vertexDetectMeshData_Global.meshDataPerLOD.SetNum(calculateColorsInfo_Global.lodsToLoopThrough, true);


	// LOD Loop
	for (int currentLOD_Local = 0; currentLOD_Local < calculateColorsInfo_Global.lodsToLoopThrough; currentLOD_Local++) {

		if (!IsTaskValid()) return false;


		// Fundementals
		TArray<int32> sectionsToLoopThrough_Local;
		TArray<FColor> defaultColorFromLOD_Local;
		TArray<FColor> colorFromLOD_Local;

		// Vertices
		int currentLODVertex_Local = 0;
		int totalAmountOfVertsAtLOD_Local = 0;
		TArray<FVector> positionsInWorldSpaceFromLOD_Local;
		TArray<FVector> positionsInComponentLocalSpaceFromLOD_Local;
		TArray<FVector> normalsFromLOD_Local;
		FPositionVertexBuffer* posVertBufferAtLOD_Local = nullptr;
		FStaticMeshVertexBuffer* meshVertBufferAtLOD_Local = nullptr;

		// Paint at Location
		float paintAtLocation_ClosestDistanceToClosestVertex_Local = 1000000000;

		// Closest Vertex Data
		float getClosestVertexData_ClosestDistanceToClosestVertex_Local = 1000000000;

		// Skeletal Mesh
		FSkeletalMeshLODRenderData* skelMeshLODRenderData_Local = nullptr;
		FSkinWeightVertexBuffer* skinWeightVertexBuffer_Local = nullptr;
		TArray<TArray<FColor>> boneIndexColors_Local;

		// Within Area
		int withinArea_AmountOfVerticesWithinArea_Local = 0;
		TArray<FColor> withinArea_ColorFromLOD_BeforeApplyingColors_Local;
		TArray<FColor> withinArea_ColorFromLOD_AfterApplyingColors_Local;
		TArray<FVector> withinArea_PositionsInComponentLocalSpaceFromLOD_Local;
		TArray<FVector> withinArea_NormalsFromLOD_Local;

		// Paint Entire Mesh at Random Vertices
		FRandomStream paintEntireMesh_Random_Stream_Local;
		float paintEntireMesh_Random_AmountOfVerticesLeftToRandomize_Local = 0;
		TMap<FVector, FColor> paintEntireMesh_Random_VerticesDoublettesPaintedAtLOD0_Local;

		// Propogating to LODs 
		FBox currentLODBaseBounds_Local;

		// Serialized Color Data
		FString serializedColorData_Local = "";

		// Compare Colors
		bool compareColorsToArray_Local = false;
		int compareColorsToArray_AmountOfVertices_Local = 0;

		// Cloth
		TMap<int16, FLinearColor> clothsAverageColor_Local;

		// Estimated Color to Hit Location
		FVector estimatedColorToHitLocation_DirectionToClosestVertex_Paint_Local;
		FVector estimatedColorToHitLocation_DirectionToClosestVertex_Detect_Local;
		float estimatedColorToHitLocation_DirectionFromHitToClosestVerticesInfo_LongestDistanceTemp_Paint = 10000000;
		int estimatedColorToHitLocation_DirectionFromHitToClosestVerticesInfo_LongestDistanceIndexTemp_Paint = -1;
		TMap<int, FDirectionFromHitLocationToClosestVerticesInfo> estimatedColorToHitLocation_DirectionFromHitToClosestVerticesInfo_Paint;

		float stimatedColorToHitLocation_DirectionFromHitToClosestVerticesInfo_LongestDistanceTemp_Detect = 10000000;
		int stimatedColorToHitLocation_DirectionFromHitToClosestVerticesInfo_LongestDistanceIndexTemp_Detect = -1;
		TMap<int, FDirectionFromHitLocationToClosestVerticesInfo> stimatedColorToHitLocation_DirectionFromHitToClosestVerticesInfo_Detect;


		if (IsValid(calculateColorsInfo_Global.vertexPaintStaticMeshComponent)) {

			GetStaticMeshLODInfo(calculateColorsInfo_Global, currentLOD_Local, sectionsToLoopThrough_Local, posVertBufferAtLOD_Local, meshVertBufferAtLOD_Local, totalAmountOfVertsAtLOD_Local, vertexDetectMeshData_Global, colorFromLOD_Local);
		}

		if (IsValid(calculateColorsInfo_Global.vertexPaintSkelComponent)) {

			if (!GetSkeletalMeshLODInfo(calculateColorsInfo_Global, skeletalMeshRenderData_Local, skelMeshLODRenderData_Local, currentLOD_Local, skinWeightVertexBuffer_Local, sectionsToLoopThrough_Local, totalAmountOfVertsAtLOD_Local, vertexDetectMeshData_Global, colorFromLOD_Local, currentLODVertex_Local, boneIndexColors_Local)) return false;
		}


#if ENGINE_MAJOR_VERSION == 5

		if (IsValid(calculateColorsInfo_Global.vertexPaintDynamicMeshComponent) && IsValid(calculateColorsInfo_Global.vertexPaintDynamicMeshComponent->GetDynamicMesh())) {

			GetDynamicMeshLODInfo(calculateColorsInfo_Global, dynamicMesh_3_Local, currentLOD_Local, sectionsToLoopThrough_Local, totalAmountOfVertsAtLOD_Local, colorFromLOD_Local, defaultColorFromLOD_Local, dynamicMeshComponentVertexColors_Global);
		}

		if (IsValid(calculateColorsInfo_Global.vertexPaintGeometryCollectionComponent) && calculateColorsInfo_Global.vertexPaintGeometryCollectionData) {

			GetGeometryCollectionMeshLODInfo(calculateColorsInfo_Global, currentLOD_Local, sectionsToLoopThrough_Local, totalAmountOfVertsAtLOD_Local, colorFromLOD_Local, defaultColorFromLOD_Local, geometryCollectionVertexColors_Global);
		}

#endif


		if (totalAmountOfVertsAtLOD_Local <= 0) {

			calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Fail - Vertex Amount we got for Actor: %s and Mesh: %s on LOD: %i is 0!"), *calculateColorsInfo_Global.vertexPaintActor->GetName(), *calculateColorsInfo_Global.vertexPaintComponent->GetName(), currentLOD_Local), FColor::Red));


			if (currentLOD_Local == 0)
				return false;
			else
				continue;
		}


		// If Static or Skeletal Mesh, then should've filled the colors array by now. Dynamic Meshes and Geometry Collections has to convert while looping the vertices and fill them then. 
		if (IsValid(calculateColorsInfo_Global.vertexPaintStaticMeshComponent) || IsValid(calculateColorsInfo_Global.vertexPaintSkelComponent)) {

			defaultColorFromLOD_Local = colorFromLOD_Local;

			if (colorFromLOD_Local.Num() <= 0) {

				calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Fail - Couldn't get colors for Actor: %s and Mesh: %s on LOD: %i!"), *calculateColorsInfo_Global.vertexPaintActor->GetName(), *calculateColorsInfo_Global.vertexPaintComponent->GetName(), currentLOD_Local), FColor::Red));


				// If couldn't even get the colors on LOD 0 then something has gone wrong, then we shouldn't be in this function in the first place
				if (currentLOD_Local == 0)
					return false;
				else
					continue;
			}


			if (colorFromLOD_Local.Num() != totalAmountOfVertsAtLOD_Local) {

				calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Fail - Colors Vertex Amount we got for Actor: %s and Mesh: %s on LOD: %i wasn't the same amount as the Position Vertex Amount. Most likely we're somehow painting on a Mesh component that got it's mesh changed but still has the old color buffer. "), *calculateColorsInfo_Global.vertexPaintActor->GetName(), *calculateColorsInfo_Global.vertexPaintComponent->GetName(), currentLOD_Local), FColor::Red));


				// If colors doesn't match the amount on the LOD then something has gone wrong
				if (currentLOD_Local == 0)
					return false;
				else
					continue;
			}
		}


		vertexDetectMeshData_Global.meshDataPerLOD[currentLOD_Local].amountOfVerticesAtLOD = totalAmountOfVertsAtLOD_Local;
		normalsFromLOD_Local.SetNum(totalAmountOfVertsAtLOD_Local, true);
		positionsInWorldSpaceFromLOD_Local.SetNum(totalAmountOfVertsAtLOD_Local, true);
		positionsInComponentLocalSpaceFromLOD_Local.SetNum(totalAmountOfVertsAtLOD_Local, true);


		if (IsValid(calculateColorsInfo_Global.vertexPaintSettings.actor)) {

			if (newColorVertexBufferPerLOD_Global.IsValidIndex(currentLOD_Local)) {

				// If haven't been init earlier
				if (!newColorVertexBufferPerLOD_Global[currentLOD_Local]) {

					newColorVertexBufferPerLOD_Global[currentLOD_Local] = new FColorVertexBuffer();

					// newColorVertexBufferPerLOD_Global[currentLOD_Local]->Init(meshLODTotalAmountOfVerts_Local, true);

					// Will have to InitFromColorArray in case we Skip a Section, which can happen if Paint using physics surface fails to get any colors, and there's no reason for us to loop through all the vertices. The Tasks seem to take the same amount of time with InitFromColorArray vs Init anyways so. 
					newColorVertexBufferPerLOD_Global[currentLOD_Local]->InitFromColorArray(colorFromLOD_Local);
				}
			}
		}


		if (calculateColorsInfo_Global.paintOnEntireMeshSettings.actor) {

			// If set to Randomize over entire mesh, or only within AoE
			if ((calculateColorsInfo_Global.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.onlyRandomizeWithinAreaOfEffectAtLocation && calculateColorsInfo_Global.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.onlyRandomizeWithinAreaOfEffectAtLocation_ProbabilityFactor > 0) || (calculateColorsInfo_Global.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh && calculateColorsInfo_Global.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint > 0)) {


				GetPaintEntireMeshRandomLODInfo(calculateColorsInfo_Global, currentLOD_Local, totalAmountOfVertsAtLOD_Local, paintEntireMesh_Random_Stream_Local, paintEntireMesh_Random_AmountOfVerticesLeftToRandomize_Local);

				if (currentLOD_Local == 0)
					calculateColorsInfo_Global.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.randomSeedsUsedInPaintJob = paintEntireMesh_Random_Stream_Local;

				calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Paint Entire Mesh Set to Randomize %i Amount of Vertices over the Mesh on LOD: %i"), (int)paintEntireMesh_Random_AmountOfVerticesLeftToRandomize_Local, currentLOD_Local), FColor::Cyan));
			}
		}


		if (currentLOD_Local == 0) {

			// If should compare colors and has filled an array to compare with, either by directly setting it or getting it from a color snippet
			if (calculateColorsInfo_Global.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.colorArrayToCompareWith.Num() == colorFromLOD_Local.Num())
				compareColorsToArray_Local = true;
		}


		calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: LOD: %i - Amount of Sections to Loop Through in LOD: %i"), currentLOD_Local, sectionsToLoopThrough_Local.Num()), FColor::Cyan));


		// Sections Loop
		for (int32 currentSection_Local : sectionsToLoopThrough_Local) {

			// Necessary in case you stopped playing while tasks being calculated, got crash otherwise on Merged Skeletal Meshes otherwise. 
			if (!IsTaskValid()) return false;


			// Fundemental
			bool shouldApplyVertexColors_Local = true;
			int sectionMaxAmountOfVerts_Local = 0;

			// Paint Job
			FVertexPaintColorSettingStruct paintOnMeshColorSettingsForSection_Local = calculateColorsInfo_Global.paintOnMeshColorSettings; // Resets apply vertex color settings after each section to make sure we're basing this of the original and not something from the previous section

			// Skeletal Mesh
			FSkelMeshRenderSection* skeletalMeshRenderSection_Local = nullptr;

			// Paint Limits
			FVertexPaintingLimitRGBA paintLimitRGBA_Local;

			// Materials
			UMaterialInterface* materialAtSection_Local = nullptr;
			UMaterialInterface* materialToGetSurfacesFrom_Local = nullptr;
			TArray<TEnumAsByte<EPhysicalSurface>> registeredPhysicsSurfacesAtMaterial_Local;

			// Cloth
			bool shouldAffectPhysicsOnSectionsCloth_Local = false;
			float clothSectionTotalRedVertexColor_Local = 0;
			float clothSectionTotalGreenVertexColor_Local = 0;
			float clothSectionTotalBlueVertexColor_Local = 0;
			float clothSectionTotalAlphaVertexColor_Local = 0;

#if ENGINE_MAJOR_VERSION == 4

			TArray<FVector> currentClothSectionVertexPositions_Local;
			TArray<FVector> currentClothSectionVertexNormals_Local;

#elif ENGINE_MAJOR_VERSION == 5

			TArray<FVector3f> currentClothSectionVertexPositions_Local;
			TArray<FVector3f> currentClothSectionVertexNormals_Local;

#endif


			// One for each Color channel that May have physics surface registered. 
			TArray<FVertexDetectAmountOfPaintedColorsOfEachChannel_Results> physicsSurfaceResultForSection_BeforeAddingColors_Local;
			physicsSurfaceResultForSection_BeforeAddingColors_Local.SetNum(4);

			TArray<FVertexDetectAmountOfPaintedColorsOfEachChannel_Results> physicsSurfaceResultForSection_AfterApplyingColors_Local;
			physicsSurfaceResultForSection_AfterApplyingColors_Local.SetNum(4);

			// If Detect/Paint Within Area and want to get physics surface result of each channel
			TArray<FVertexDetectAmountOfPaintedColorsOfEachChannel_Results> physicsSurfaceResultForSection_WithinArea_BeforeApplyingColors_Local;
			TArray<FVertexDetectAmountOfPaintedColorsOfEachChannel_Results> physicsSurfaceResultForSection_WithinArea_AfterApplyingColors_Local;

			if (calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin.Num() > 0 && calculateColorsInfo_Global.withinAreaSettings.includeAmountOfColorsOfEachChannelWithinArea.includePhysicsSurfaceResultOfEachChannel) {

				physicsSurfaceResultForSection_WithinArea_BeforeApplyingColors_Local.SetNum(4);
				physicsSurfaceResultForSection_WithinArea_AfterApplyingColors_Local.SetNum(4);
			}


			if (IsValid(calculateColorsInfo_Global.vertexPaintStaticMeshComponent)) {

				GetStaticMeshComponentSectionInfo(calculateColorsInfo_Global, currentLOD_Local, currentSection_Local, sectionMaxAmountOfVerts_Local, currentLODVertex_Local, materialAtSection_Local);
			}

			else if (calculateColorsInfo_Global.vertexPaintSkelComponent) {

				if (!GetSkeletalMeshComponentSectionInfo(calculateColorsInfo_Global, currentLOD_Local, currentSection_Local, skeletalMeshRenderData_Local, skelMeshLODRenderData_Local, cloth_VertexPositions_Local, cloth_VertexNormals_Local, cloth_PhysicsSettings_Local, cloth_ClothingAssets_Local, sectionMaxAmountOfVerts_Local, currentLODVertex_Local, materialAtSection_Local, skeletalMeshRenderSection_Local, shouldAffectPhysicsOnSectionsCloth_Local, currentClothSectionVertexPositions_Local, currentClothSectionVertexNormals_Local)) return false;
			}

#if ENGINE_MAJOR_VERSION == 5

			else if (IsValid(calculateColorsInfo_Global.vertexPaintDynamicMeshComponent)) {

				GetDynamicMeshComponentSectionInfo(calculateColorsInfo_Global, totalAmountOfVertsAtLOD_Local, currentSection_Local, sectionMaxAmountOfVerts_Local, currentLODVertex_Local, materialAtSection_Local);
			}

			else if (IsValid(calculateColorsInfo_Global.vertexPaintGeometryCollectionComponent) && calculateColorsInfo_Global.vertexPaintGeometryCollectionData) {

				GetGeometryCollectionMeshComponentSectionInfo(calculateColorsInfo_Global, currentSection_Local, sectionMaxAmountOfVerts_Local, currentLODVertex_Local, materialAtSection_Local);
			}
#endif


			GetMaterialToGetSurfacesFrom(calculateColorsInfo_Global, materialAtSection_Local, materialToGetSurfacesFrom_Local, registeredPhysicsSurfacesAtMaterial_Local);


			// If paint job that uses apply colors on channels, whether we get them using physics surface or set them manually. 
			if (paintOnMeshColorSettingsForSection_Local.actor) {


				GetColorChannelsToPrimarilyApply(paintOnMeshColorSettingsForSection_Local, applyColorsPrimarilyOnRedChannel_Local, applyColorsPrimarilyOnGreenChannel_Local, applyColorsPrimarilyOnBlueChannel_Local, applyColorsPrimarilyOnAlphaChannel_Local);
				

				// If set to Paint Using Physics Surface, and we was successfull at getting the Material, then we Get the Colors to Apply based on what's Registered in the Editor Widget. 
				if (paintOnMeshColorSettingsForSection_Local.applyVertexColorSettings.applyColorsUsingPhysicsSurface.applyVertexColorUsingPhysicsSurface) {

					if (GetPaintOnMeshColorSettingsFromPhysicsSurface(calculateColorsInfo_Global, currentSection_Local, materialToGetSurfacesFrom_Local, paintOnMeshColorSettingsForSection_Local, paintLimitRGBA_Local, applyColorsPrimarilyOnRedChannel_Local, applyColorsPrimarilyOnGreenChannel_Local, applyColorsPrimarilyOnBlueChannel_Local, applyColorsPrimarilyOnAlphaChannel_Local)) {

						// 
					}

					// If couldn't get color to apply from physics surface, and that it shouldn't fallback to whatvers set to RGBA, then we don't apply any colors. 
					else if (!paintOnMeshColorSettingsForSection_Local.applyVertexColorSettings.applyColorsUsingPhysicsSurface.fallbackToRGBAColorsIfFailedToApplyColorsUsingPhysicsSurface) {

						shouldApplyVertexColors_Local = false;

						if (materialToGetSurfacesFrom_Local) {

							calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Set to Apply Colors using Physics Surface but GetColorsToApplyFromPhysicsSurface Failed on Material: %s. Make sure Physics Surface Parent/Childs are Setup Correctly, as well as correct Physics Surfaces on the Vertex Colors Channels for the Material if you want to apply colors on it with this physics surface. onlyApplyColorsIfPhysicsSurfaceIsRegistered is True so no colors will be changed. "), *materialToGetSurfacesFrom_Local->GetName()), FColor::Red));
						}
					}

					// If it's not successfull at getting colors, i.e. not registered and onlyApplyColorsIfPhysicsSurfaceIsRegistered is False, then we Fall Back to the original RGBA colors that the user set as well as whatever conditions that was there!
					else {

						paintOnMeshColorSettingsForSection_Local = calculateColorsInfo_Global.paintOnMeshColorSettings;
					}
				}

				else {

					paintLimitRGBA_Local = paintOnMeshColorSettingsForSection_Local.applyVertexColorSettings.vertexColorChannelsPaintLimit;

					// If not set to paint using physics surface, then we adjust each RGBA Condition based on their own condition and not the condition from the Paint Using Physics Surface Settings.
					paintOnMeshColorSettingsForSection_Local.applyVertexColorSettings.applyColorsOnRedChannel.paintConditions = GetPaintConditionAdjustedIfSetToUsePhysicsSurface(paintOnMeshColorSettingsForSection_Local.applyVertexColorSettings.applyColorsOnRedChannel.paintConditions, materialToGetSurfacesFrom_Local);

					paintOnMeshColorSettingsForSection_Local.applyVertexColorSettings.applyColorsOnRedChannel.paintConditions = GetPaintConditionAdjustedIfSetToUsePhysicsSurface(paintOnMeshColorSettingsForSection_Local.applyVertexColorSettings.applyColorsOnRedChannel.paintConditions, materialToGetSurfacesFrom_Local);

					paintOnMeshColorSettingsForSection_Local.applyVertexColorSettings.applyColorsOnBlueChannel.paintConditions = GetPaintConditionAdjustedIfSetToUsePhysicsSurface(paintOnMeshColorSettingsForSection_Local.applyVertexColorSettings.applyColorsOnBlueChannel.paintConditions, materialToGetSurfacesFrom_Local);

					paintOnMeshColorSettingsForSection_Local.applyVertexColorSettings.applyColorsOnAlphaChannel.paintConditions = GetPaintConditionAdjustedIfSetToUsePhysicsSurface(paintOnMeshColorSettingsForSection_Local.applyVertexColorSettings.applyColorsOnAlphaChannel.paintConditions, materialToGetSurfacesFrom_Local);
				}


				// If Regular Paint Job, i.e. not a color snippet and shouldApplyVertexColors_Local is false, maybe because we didn't get any colors to apply from physics surface, and there is no need for us to loop through all of the vertices then we can skip this section.
				if (!shouldApplyVertexColors_Local && !PaintJobShouldLoopThroughVerticesAndLODS(paintOnMeshColorSettingsForSection_Local, calculateColorsInfo_Global.vertexPaintSettings, calculateColorsInfo_Global.paintOnColorSnippetSettings))
					continue;
			}

			else if (calculateColorsInfo_Global.paintColorsDirectlySettings.actor) {

				paintLimitRGBA_Local = calculateColorsInfo_Global.paintColorsDirectlySettings.vertexColorChannelsLimitWhenDirectlySettingColors;
			}


			bool containsPhysicsSurfaceOnRedChannel = false;
			bool containsPhysicsSurfaceOnGreenChannel = false;
			bool containsPhysicsSurfaceOnBlueChannel = false;
			bool containsPhysicsSurfaceOnAlphaChannel = false;

			bool withinArea_ContainsPhysicsSurfaceOnRedChannel = false;
			bool withinArea_ContainsPhysicsSurfaceOnGreenChannel = false;
			bool withinArea_ContainsPhysicsSurfaceOnBlueChannel = false;
			bool withinArea_ContainsPhysicsSurfaceOnAlphaChannel = false;


			if (calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel.Num() > 0)
				GetChannelsThatContainsPhysicsSurface(calculateColorsInfo_Global, registeredPhysicsSurfacesAtMaterial_Local, containsPhysicsSurfaceOnRedChannel, containsPhysicsSurfaceOnGreenChannel, containsPhysicsSurfaceOnBlueChannel, containsPhysicsSurfaceOnAlphaChannel);


			if (calculateColorsInfo_Global.withinAreaSettings.includeAmountOfColorsOfEachChannelWithinArea.includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel.Num() > 0 && calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin.Num() > 0)
				GetChannelsThatContainsPhysicsSurface(calculateColorsInfo_Global, registeredPhysicsSurfacesAtMaterial_Local, withinArea_ContainsPhysicsSurfaceOnRedChannel, withinArea_ContainsPhysicsSurfaceOnGreenChannel, withinArea_ContainsPhysicsSurfaceOnBlueChannel, withinArea_ContainsPhysicsSurfaceOnAlphaChannel);
			

			// Vertices in Section Loop
			for (uint32 currentSectionVertex_Local = 0; currentSectionVertex_Local < (uint32)sectionMaxAmountOfVerts_Local; currentSectionVertex_Local++) {

				// currentLODVertex_Local gets ++ at the end of the vert loop


				// Necessary in case you stopped playing while tasks being calculated, got crash otherwise on Merged Skeletal Meshes otherwise
				if (!IsTaskValid()) return false;
				if (!colorFromLOD_Local.IsValidIndex(currentLODVertex_Local)) return false;


				// Fundementals
				shouldApplyColorOnAnyChannel_Global = false;
				bool vertexColorGotChanged_Local = false;
				haveRunOverrideInterface_Global = false;
				bool triedToApplyColorOnVertex_Local = false;
				bool gotVertexNormal_Local = false;
				bool isVertexOnCloth_Local = false;
				FLinearColor colorFromLODAsLinear = UVertexPaintFunctionLibrary::ReliableFColorToFLinearColor(colorFromLOD_Local[currentLODVertex_Local]);
				FVector currentVertexActorSpace = FVector(ForceInitToZero);
				FVector currentVertexComponentSpace = FVector(ForceInitToZero);
				FVector currentVertexWorldSpace = FVector(ForceInitToZero);
				FLinearColor colorFromLODAsLinear_BeforeApplyingColors;

				// Skeletal Mesh
				uint32 currentBoneIndex_Local = 0;
				FName currentBoneName_Local;

				// Closest Vertex Data / Paint at Location
				float distanceFromVertexToHitLocation_PaintAtLocation_Local = 0;
				float distanceFromVertexToHitLocation_GetClosestVertexData_Local = 0;

				// Falloff
				float distanceFromFalloffBase_Local = 0;

				// Estimated Color at Hit Location
				bool getEstimatedColorAtHitLocation_Local = false;

				// Paint Within Area
				float paintWithinArea_AreaEdgeZInWorldSpace_Local = 0;

				// Within Area
				bool withinArea_VertexWasWithinArea = false;

				// Override Vertex Colors
				overrideVertexColors_ColorToApply_Global = FColor(ForceInitToZero);
				overrideVertexColorsToApply_Global = false;
				overrideVertexColors_MostDominantPhysicsSurfaceAtVertexBeforeApplyingColors_Global = EPhysicalSurface::SurfaceType_Default;
				overrideVertexColors_MostDominantPhysicsSurfaceValueAtVertexBeforeApplyingColors_Global = 0;
				overrideVertexColors_DefaultVertexColors_Global.Empty();

				// 1 so if we where unable to get the vertex normal, and can't use it to properly check what this is used for, the check will just pass. 
				float cureentVertexNormalToHitNormalDot_Paint = 1;
				float cureentVertexNormalToHitNormalDot_Detect = 1;

				// Paint Entire Mesh at Random Vertices
				float paintEntireMesh_Random_Probability_Local = 0;
				bool paintEntireMesh_PaintCurrentVertex_Local = false;

				// Propogating to LODs 
				FPaintedVertex paintedVertex_Local;


#if ENGINE_MAJOR_VERSION == 5

				// Dynamic Mesh
				UE::Geometry::FVertexInfo dynamicMesh_VertexInfo_Local;
				int dynamicMesh_MaxVertID_Local = 0;
				int dynamicMesh_VerticesBufferMax_Local = 0;

#endif


				if (calculateColorsInfo_Global.vertexPaintStaticMeshComponent) {

					if (!GetStaticMeshComponentVertexInfo(calculateColorsInfo_Global, posVertBufferAtLOD_Local, meshVertBufferAtLOD_Local, currentLODVertex_Local, positionsInComponentLocalSpaceFromLOD_Local[currentLODVertex_Local], currentVertexActorSpace, normalsFromLOD_Local[currentLODVertex_Local], gotVertexNormal_Local)) return false;
				}

				else if (calculateColorsInfo_Global.vertexPaintSkelComponent) {

					if (!GetSkeletalMeshComponentVertexInfo(calculateColorsInfo_Global, skeletalMeshRenderData_Local, skelMeshLODRenderData_Local, skeletalMeshRenderSection_Local, skinWeightVertexBuffer_Local, currentClothSectionVertexPositions_Local, currentClothSectionVertexNormals_Local, cloth_BoneQuaternionsInComponentSpace_Local, cloth_BoneLocationInComponentSpace_Local, currentLOD_Local, currentSection_Local, currentSectionVertex_Local, currentLODVertex_Local, positionsInComponentLocalSpaceFromLOD_Local[currentLODVertex_Local], currentVertexActorSpace, normalsFromLOD_Local[currentLODVertex_Local], gotVertexNormal_Local, isVertexOnCloth_Local, currentBoneIndex_Local, currentBoneName_Local)) return false;
				}

#if ENGINE_MAJOR_VERSION == 5

				else if (IsValid(calculateColorsInfo_Global.vertexPaintDynamicMeshComponent) && IsValid(calculateColorsInfo_Global.vertexPaintDynamicMeshComponent->GetDynamicMesh()) && dynamicMesh_3_Local) {


					bool skipDynamicMeshVertex_Local = false;
					if (!GetDynamicMeshComponentVertexInfo(calculateColorsInfo_Global, dynamicMesh_3_Local, totalAmountOfVertsAtLOD_Local, currentLODVertex_Local, colorFromLOD_Local[currentLODVertex_Local], positionsInComponentLocalSpaceFromLOD_Local[currentLODVertex_Local], currentVertexActorSpace, normalsFromLOD_Local[currentLODVertex_Local], gotVertexNormal_Local, dynamicMesh_VertexInfo_Local, dynamicMesh_MaxVertID_Local, dynamicMesh_VerticesBufferMax_Local, skipDynamicMeshVertex_Local)) return false;


					if (skipDynamicMeshVertex_Local) {

						currentLODVertex_Local++;
						continue;
					}


					dynamicMeshComponentVertexColors_Global[currentLODVertex_Local] = colorFromLOD_Local[currentLODVertex_Local];

					// Since we can't get all of the colors without looping through them, we fill the defaultColorFromLOD_Local here while looping through the verts
					defaultColorFromLOD_Local[currentLODVertex_Local] = colorFromLOD_Local[currentLODVertex_Local];
				}

#if ENGINE_MINOR_VERSION >= 3

				else if (IsValid(calculateColorsInfo_Global.vertexPaintGeometryCollectionComponent) && calculateColorsInfo_Global.vertexPaintGeometryCollectionData) {


					if (!GetGeometryCollectionComponentVertexInfo(calculateColorsInfo_Global, currentLODVertex_Local, colorFromLOD_Local[currentLODVertex_Local], positionsInComponentLocalSpaceFromLOD_Local[currentLODVertex_Local], currentVertexActorSpace, normalsFromLOD_Local[currentLODVertex_Local], gotVertexNormal_Local)) return false;


					// Since we can't get all of the colors without looping through them, we fill the defaultColorFromLOD_Local here while looping through the verts
					defaultColorFromLOD_Local[currentLODVertex_Local] = colorFromLOD_Local[currentLODVertex_Local];


					// Geometry Collection TManagedArray<FLinearColor> requires FLinearColor, so to avoid looping through all the colors on game thread to build a FLinearColor array for geo collection comps we update one here. 
					geometryCollectionVertexColors_Global[currentLODVertex_Local] = UVertexPaintFunctionLibrary::ReliableFColorToFLinearColor(colorFromLOD_Local[currentLODVertex_Local]);
				}
#endif
#endif


				// For Dynamic Mesh and Geometry Collection we don't get the color until this point so sets this here
				colorFromLODAsLinear_BeforeApplyingColors = colorFromLODAsLinear;

				currentVertexComponentSpace = positionsInComponentLocalSpaceFromLOD_Local[currentLODVertex_Local];
				currentVertexWorldSpace = UKismetMathLibrary::TransformLocation(calculateColorsInfo_Global.vertexPaintActor->GetActorTransform(), currentVertexActorSpace);
				positionsInWorldSpaceFromLOD_Local[currentLODVertex_Local] = currentVertexWorldSpace;

				if (gotVertexNormal_Local)
					normalsFromLOD_Local[currentLODVertex_Local] = UKismetMathLibrary::TransformDirection(calculateColorsInfo_Global.vertexPaintComponent->GetComponentTransform(), normalsFromLOD_Local[currentLODVertex_Local]);


				// Caches the vertex normal to hit normal dots so it's more comfortable to use later on
				if (calculateColorsInfo_Global.paintOnMeshAtLocationSettings.actor) {

					distanceFromVertexToHitLocation_PaintAtLocation_Local = (paintAtLocation_HitLocationInWorldSpace_Local - currentVertexWorldSpace).Size();

					// If didn't get normal then this doesn't get set, so any checks using it will just get passed since it should be at default value. Dynamic Mesh Component for instance is not 100% when getting the normal so we don't want it not to get painted because of this 
					if (gotVertexNormal_Local)
						cureentVertexNormalToHitNormalDot_Paint = FMath::Clamp(FVector::DotProduct(calculateColorsInfo_Global.paintOnMeshAtLocationSettings.hitFundementals.hitNormal, normalsFromLOD_Local[currentLODVertex_Local]), -1.0f, 1.0f);
				}


				if (calculateColorsInfo_Global.getClosestVertexDataSettings.actor) {

					distanceFromVertexToHitLocation_GetClosestVertexData_Local = (getClosestVertexData_HitLocationInWorldSpace_Local - currentVertexWorldSpace).Size();

					if (gotVertexNormal_Local)
						cureentVertexNormalToHitNormalDot_Detect = FMath::Clamp(FVector::DotProduct(getClosestVertexData_HitNormal_Local, normalsFromLOD_Local[currentLODVertex_Local]), -1.0f, 1.0f);
				}


				if (calculateColorsInfo_Global.propogateLOD0ToAllLODs && currentLOD_Local == 0 && vertexDetectMeshData_Global.meshDataPerLOD.Num() > 1) {

					paintedVertex_Local.Position = positionsInComponentLocalSpaceFromLOD_Local[currentLODVertex_Local];
					paintedVertex_Local.Normal = normalsFromLOD_Local[currentLODVertex_Local];

					currentLODBaseBounds_Local += positionsInComponentLocalSpaceFromLOD_Local[currentLODVertex_Local];
				}


				if (calculateColorsInfo_Global.paintOnEntireMeshSettings.actor) {

					GetPaintEntireMeshVertexInfo(calculateColorsInfo_Global, currentVertexWorldSpace, currentVertexComponentSpace, totalAmountOfVertsAtLOD_Local, currentLOD_Local, currentLODVertex_Local, paintEntireMesh_Random_VerticesDoublettesPaintedAtLOD0_Local, paintEntireMesh_Random_Stream_Local, paintEntireMesh_PaintCurrentVertex_Local, paintEntireMesh_Random_AmountOfVerticesLeftToRandomize_Local, paintEntireMesh_Random_Probability_Local);
				}



				if (calculateColorsInfo_Global.fundementalStruct.debugSettings.gameThreadSpecificDebugSymbols.drawVertexNormalDebugArrow && inGameThread_Global)
					DrawDebugLine(calculateColorsInfo_Global.vertexPaintActor->GetWorld(), currentVertexWorldSpace, currentVertexWorldSpace + (normalsFromLOD_Local[currentLODVertex_Local] * 25), FColor::Red, false, calculateColorsInfo_Global.fundementalStruct.debugSettings.gameThreadSpecificDebugSymbols.drawGameThreadSpecificDebugSymbolsDuration, 0, .5);

				if (calculateColorsInfo_Global.fundementalStruct.debugSettings.gameThreadSpecificDebugSymbols.drawVertexPositionDebugPoint && inGameThread_Global)
					DrawDebugPoint(calculateColorsInfo_Global.vertexPaintActor->GetWorld(), currentVertexWorldSpace, 5, FColor::Red, false, calculateColorsInfo_Global.fundementalStruct.debugSettings.gameThreadSpecificDebugSymbols.drawGameThreadSpecificDebugSymbolsDuration, 0);



				// LOD 0 Related Before Applying Colors
				if (currentLOD_Local == 0) {


					GetPaintAtLocationVertexInfoAtLODZeroBeforeApplyingColors(calculateColorsInfo_Global, currentVertexWorldSpace, paintAtLocation_HitLocationInWorldSpace_Local, currentLOD_Local, currentLODVertex_Local, currentSection_Local, totalAmountOfVertsAtLOD_Local, distanceFromVertexToHitLocation_PaintAtLocation_Local, paintAtLocation_ClosestDistanceToClosestVertex_Local, closestVertexFound_Paint_Global, closestSectionFound_Paint_Global, estimatedColorToHitLocation_DirectionToClosestVertex_Paint_Local, estimatedColorToHitLocation_DirectionFromHitToClosestVerticesInfo_LongestDistanceTemp_Paint, estimatedColorToHitLocation_DirectionFromHitToClosestVerticesInfo_LongestDistanceIndexTemp_Paint, estimatedColorToHitLocation_DirectionFromHitToClosestVerticesInfo_Paint);


					GetClosestVertexDataVertexInfoAtLODZeroBeforeApplyingColors(calculateColorsInfo_Global, getClosestVertexData_GetAverageColor_Local, colorFromLOD_Local[currentLODVertex_Local], currentVertexWorldSpace, getClosestVertexData_HitLocationInWorldSpace_Local, currentLOD_Local, currentLODVertex_Local, currentSection_Local, totalAmountOfVertsAtLOD_Local, cureentVertexNormalToHitNormalDot_Detect, distanceFromVertexToHitLocation_GetClosestVertexData_Local, getClosestVertexData_ClosestDistanceToClosestVertex_Local, closestVertexFound_Detection_Global, closestSectionFound_Detection_Global, estimatedColorToHitLocation_DirectionToClosestVertex_Detect_Local, stimatedColorToHitLocation_DirectionFromHitToClosestVerticesInfo_LongestDistanceTemp_Detect, stimatedColorToHitLocation_DirectionFromHitToClosestVerticesInfo_LongestDistanceIndexTemp_Detect, stimatedColorToHitLocation_DirectionFromHitToClosestVerticesInfo_Detect, amountOfVerticesWithinArea_Detect, avarageColorWithinArea_Global_Detect_Before_Red, avarageColorWithinArea_Global_Detect_Before_Green, avarageColorWithinArea_Global_Detect_Before_Blue, avarageColorWithinArea_Global_Detect_Before_Alpha);


					if (GetWithinAreaVertexInfoAtLODZeroBeforeApplyingColors(calculateColorsInfo_Global, currentLOD_Local, currentVertexWorldSpace, withinArea_VertexWasWithinArea)) {

						if (withinArea_VertexWasWithinArea && calculateColorsInfo_Global.withinAreaSettings.includeVertexColorsWithinArea)
							withinArea_ColorFromLOD_BeforeApplyingColors_Local.Add(colorFromLOD_Local[currentLODVertex_Local]);
					}

					else {

						return false;
					}


					if (calculateColorsInfo_Global.fundementalStruct.debugSettings.printLogsToScreen || calculateColorsInfo_Global.fundementalStruct.debugSettings.printLogsToOutputLog)
						UpdateColorsOfEachChannelAbove0BeforeApplyingColors(colorFromLODAsLinear_BeforeApplyingColors, currentLOD_Local, debugLog_AmountOfPaintedColorsOfEachChannelAbove0BeforeApplyingAnyColor_Local);



					// If Detect task like Get Closest Vertex Data, Get Colors Only or Get Colors Within Area
					if (calculateColorsInfo_Global.vertexDetectSettings.actor) {

						if (calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeVertexColorChannelResultOfEachChannel) {

							// Gets the amount and % etc. of each color channel before applying any colors
							GetColorsOfEachChannelForVertex(colorFromLODAsLinear_BeforeApplyingColors, calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel, containsPhysicsSurfaceOnRedChannel, containsPhysicsSurfaceOnGreenChannel, containsPhysicsSurfaceOnBlueChannel, containsPhysicsSurfaceOnAlphaChannel, amountOfPaintedColorsOfEachChannel_BeforeApplyingColor_Local.redChannelResult, amountOfPaintedColorsOfEachChannel_BeforeApplyingColor_Local.greenChannelResult, amountOfPaintedColorsOfEachChannel_BeforeApplyingColor_Local.blueChannelResult, amountOfPaintedColorsOfEachChannel_BeforeApplyingColor_Local.alphaChannelResult);
						}

						if (calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includePhysicsSurfaceResultOfEachChannel) {

							// Gets the amount and % etc. of each physics channel before applying any colors
							if (registeredPhysicsSurfacesAtMaterial_Local.Num() > 0)
								GetColorsOfEachPhysicsSurfaceForVertex(registeredPhysicsSurfacesAtMaterial_Local, colorFromLODAsLinear_BeforeApplyingColors, calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel, containsPhysicsSurfaceOnRedChannel, containsPhysicsSurfaceOnGreenChannel, containsPhysicsSurfaceOnBlueChannel, containsPhysicsSurfaceOnAlphaChannel, physicsSurfaceResultForSection_BeforeAddingColors_Local);
						}
					}
				}



				// If Painting
				if (calculateColorsInfo_Global.vertexPaintSettings.actor) {


					if (shouldApplyVertexColors_Local) {


						// If Color Snippet, Set Mesh Component Colors, Set Mesh Component Colors Using Serialized string. i.e. paint jobs that doesn't paint with RGBA or Physics Surface
						if (calculateColorsInfo_Global.paintColorsDirectlySettings.actor) {


							if (calculateColorsInfo_Global.paintOnColorSnippetSettings.actor) {

								if (colorSnippetColors.IsValidIndex(currentLODVertex_Local)) {

									colorFromLOD_Local[currentLODVertex_Local] = colorSnippetColors[currentLODVertex_Local];
									vertexColorGotChanged_Local = true;
								}
							}

							else if (calculateColorsInfo_Global.setMeshComponentVertexColorsSettings.actor) {

								if (calculateColorsInfo_Global.setMeshComponentVertexColorsSettings.vertexColorsAtLOD0ToSet.IsValidIndex(currentLODVertex_Local)) {

									colorFromLOD_Local[currentLODVertex_Local] = calculateColorsInfo_Global.setMeshComponentVertexColorsSettings.vertexColorsAtLOD0ToSet[currentLODVertex_Local];
									vertexColorGotChanged_Local = true;
								}
							}

							else if (calculateColorsInfo_Global.setMeshComponentVertexColorsUsingSerializedStringSettings.actor) {

								if (deserializedVertexColors.IsValidIndex(currentLODVertex_Local)) {

									colorFromLOD_Local[currentLODVertex_Local] = deserializedVertexColors[currentLODVertex_Local];
									vertexColorGotChanged_Local = true;
								}
							}


							triedToApplyColorOnVertex_Local = true;

							// If we're looping through vertcies and it's a color snippet or SetMeshComponentVertexColor Job, it means the callback settings is set to return the positions, or that we want to run an override interface. If override interface then this is useful since it sends a bool wether the vertex will apply color, and for these paint jobs they all do since we're setting all vertex colors to be something. 
							shouldApplyColorOnAnyChannel_Global = true;

							// Color Snippets doesn't apply colors using RGBA or Physics Surface so doesn't run the same logic as the others that has paint condition checks etc.
							if (paintLimitRGBA_Local.usePaintLimits) {


								GetVertexColorAfterAnyLimitation(paintLimitRGBA_Local.limitColorIfTheColorWasAlreadyOverTheLimit, (float)colorFromLOD_Local[currentLODVertex_Local].R, (float)colorFromLOD_Local[currentLODVertex_Local].R, paintLimitRGBA_Local.paintLimitOnRedChannel, (float)colorFromLOD_Local[currentLODVertex_Local].G, (float)colorFromLOD_Local[currentLODVertex_Local].G, paintLimitRGBA_Local.paintLimitOnGreenChannel, (float)colorFromLOD_Local[currentLODVertex_Local].B, (float)colorFromLOD_Local[currentLODVertex_Local].B, paintLimitRGBA_Local.paintLimitOnBlueChannel, (float)colorFromLOD_Local[currentLODVertex_Local].A, (float)colorFromLOD_Local[currentLODVertex_Local].A, paintLimitRGBA_Local.paintLimitOnAlphaChannel, getColorToApplyOnVertex_ColorRed_Global, getColorToApplyOnVertex_ColorGreen_Global, getColorToApplyOnVertex_ColorBlue_Global, getColorToApplyOnVertex_ColorAlpha_Global);

								colorFromLOD_Local[currentLODVertex_Local].R = (uint8)UKismetMathLibrary::FClamp(getColorToApplyOnVertex_ColorRed_Global, 0, 255);
								colorFromLOD_Local[currentLODVertex_Local].G = (uint8)UKismetMathLibrary::FClamp(getColorToApplyOnVertex_ColorGreen_Global, 0, 255);
								colorFromLOD_Local[currentLODVertex_Local].B = (uint8)UKismetMathLibrary::FClamp(getColorToApplyOnVertex_ColorBlue_Global, 0, 255);
								colorFromLOD_Local[currentLODVertex_Local].A = (uint8)UKismetMathLibrary::FClamp(getColorToApplyOnVertex_ColorAlpha_Global, 0, 255);
							}
						}

						else if (WillAppliedColorMakeChangeOnVertex(colorFromLOD_Local[currentLODVertex_Local], currentVertexWorldSpace, normalsFromLOD_Local[currentLODVertex_Local], calculateColorsInfo_Global.fundementalStruct, paintOnMeshColorSettingsForSection_Local)) {


							if (calculateColorsInfo_Global.paintOnMeshAtLocationSettings.actor) {

								// If distance from hit and the vertex is within the paint area off effect then gets the color updated with strength, falloffs etc. 
								if (distanceFromVertexToHitLocation_PaintAtLocation_Local >= calculateColorsInfo_Global.paintOnMeshAtLocationSettings.paintAtAreaSettings.areaOfEffectRangeStart && distanceFromVertexToHitLocation_PaintAtLocation_Local <= calculateColorsInfo_Global.paintOnMeshAtLocationSettings.paintAtAreaSettings.areaOfEffectRangeEnd) {

									// Vertex World Normal is within Dot to Hit Normal, so the othersides of a house wall etc. doesn't get painted. Can get set to -1 if everything within area should be painted. 
									if (cureentVertexNormalToHitNormalDot_Paint >= paintAtLocation_VertexNormalMinDotToHitNormalToGetColored_MinDot_Local) {


										distanceFromFalloffBase_Local = 0;

										switch (calculateColorsInfo_Global.paintOnMeshAtLocationSettings.paintAtAreaSettings.fallOffSettings.paintAtLocationFallOffType) {

										case EVertexPaintAtLocationFallOffType::InwardFallOff:

											distanceFromFalloffBase_Local = distanceFromVertexToHitLocation_PaintAtLocation_Local;
											break;

										case EVertexPaintAtLocationFallOffType::OutwardFallOff:

											distanceFromFalloffBase_Local = distanceFromVertexToHitLocation_PaintAtLocation_Local;
											break;

										case EVertexPaintAtLocationFallOffType::SphericalFallOff:

											if (distanceFromVertexToHitLocation_PaintAtLocation_Local > calculateColorsInfo_Global.paintOnMeshAtLocationSettings.paintAtAreaSettings.fallOffSettings.distanceToStartFallOffFrom) {

												distanceFromFalloffBase_Local = calculateColorsInfo_Global.paintOnMeshAtLocationSettings.paintAtAreaSettings.fallOffSettings.distanceToStartFallOffFrom - distanceFromVertexToHitLocation_PaintAtLocation_Local;
											}

											else if (distanceFromVertexToHitLocation_PaintAtLocation_Local < calculateColorsInfo_Global.paintOnMeshAtLocationSettings.paintAtAreaSettings.fallOffSettings.distanceToStartFallOffFrom) {

												distanceFromFalloffBase_Local = distanceFromVertexToHitLocation_PaintAtLocation_Local - calculateColorsInfo_Global.paintOnMeshAtLocationSettings.paintAtAreaSettings.fallOffSettings.distanceToStartFallOffFrom;
											}

											break;

										default:
											break;
										}


										colorFromLOD_Local[currentLODVertex_Local] = GetColorToApplyOnVertex(calculateColorsInfo_Global.taskResult.associatedPaintComponent, calculateColorsInfo_Global.vertexPaintComponent, currentLOD_Local, currentLODVertex_Local, materialToGetSurfacesFrom_Local, registeredPhysicsSurfacesAtMaterial_Local, isVertexOnCloth_Local, colorFromLODAsLinear_BeforeApplyingColors, colorFromLOD_Local[currentLODVertex_Local], currentVertexWorldSpace, normalsFromLOD_Local[currentLODVertex_Local], currentBoneName_Local, vertexTotalBoneWeight_Global, fallOffSettings_Local, calculateColorsInfo_Global.paintOnMeshAtLocationSettings.paintAtAreaSettings.paintAtLocationFallOffMaxRange, calculateColorsInfo_Global.paintOnMeshAtLocationSettings.paintAtAreaSettings.paintAtLocationScaleFallOffFrom, distanceFromFalloffBase_Local, paintOnMeshColorSettingsForSection_Local, vertexColorGotChanged_Local, applyColorsPrimarilyOnRedChannel_Local, applyColorsPrimarilyOnGreenChannel_Local, applyColorsPrimarilyOnBlueChannel_Local, applyColorsPrimarilyOnAlphaChannel_Local, paintLimitRGBA_Local);

										triedToApplyColorOnVertex_Local = true;
									}
								}
							}


							else if (calculateColorsInfo_Global.paintOnMeshWithinAreaSettings.actor) {

								for (int i = 0; i < calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin.Num(); i++) {


									// If Complex shape then requires that the component is still valid as we trace for it
									if (calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin[i].paintWithinAreaShape == Enum_PaintWithinAreaShape::isComplexShape)
										if (!IsValid(calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin[i].componentToCheckIfIsWithin)) return false;


									if (IsVertexWithinArea(currentVertexWorldSpace, calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin[i])) {


										distanceFromFalloffBase_Local = 0;

										if (fallOffSettings_Local.fallOffStrength > 0) {


											switch (calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin[i].paintWithinAreaShape) {

											case Enum_PaintWithinAreaShape::isSquareOrRectangleShape:


												switch (calculateColorsInfo_Global.paintOnMeshWithinAreaSettings.fallOffSettings.paintWithinAreaFallOffType) {

												case EVertexPaintWithinAreaFallOffType::SphericalFromCenter:

													distanceFromFalloffBase_Local = (calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin[i].componentWorldTransform.GetLocation() - currentVertexWorldSpace).Size();

													break;

												case EVertexPaintWithinAreaFallOffType::GradiantUpward:

													// Bottom Edge Z
													paintWithinArea_AreaEdgeZInWorldSpace_Local = calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin[i].componentWorldTransform.GetLocation().Z - calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin[i].isVertexWithinArea_CubeOrRectangle_SquareZHalfSize;

													// Distance diff to the lowest point, the closer to it the stronger
													distanceFromFalloffBase_Local = FMath::Abs(currentVertexWorldSpace.Z - paintWithinArea_AreaEdgeZInWorldSpace_Local);

													break;

												case EVertexPaintWithinAreaFallOffType::GradiantDownward:

													// Top Edge Z
													paintWithinArea_AreaEdgeZInWorldSpace_Local = calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin[i].componentWorldTransform.GetLocation().Z + calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin[i].isVertexWithinArea_CubeOrRectangle_SquareZHalfSize;

													// Distance diff to the Highest point, the closer to it the stronger
													distanceFromFalloffBase_Local = FMath::Abs(currentVertexWorldSpace.Z - paintWithinArea_AreaEdgeZInWorldSpace_Local);

													break;

												default:
													break;
												}

												break;


											case Enum_PaintWithinAreaShape::isSphereShape:

												switch (calculateColorsInfo_Global.paintOnMeshWithinAreaSettings.fallOffSettings.paintWithinAreaFallOffType) {

												case EVertexPaintWithinAreaFallOffType::SphericalFromCenter:

													distanceFromFalloffBase_Local = (calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin[i].componentWorldTransform.GetLocation() - currentVertexWorldSpace).Size();

													break;

												case EVertexPaintWithinAreaFallOffType::GradiantUpward:

													// If Gradiant FallOffTypes for sphere, then the range because double since we should now fade from the very bottom of the sphere, to the very top, i.e. x2 of the radie. 
													// fallOffRange_Local *= 2;

													// Bottom Edge Z
													paintWithinArea_AreaEdgeZInWorldSpace_Local = calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin[i].componentWorldTransform.GetLocation().Z - calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin[i].isVertexWithinArea_Sphere_Radius;
													distanceFromFalloffBase_Local = FMath::Abs(currentVertexWorldSpace.Z - paintWithinArea_AreaEdgeZInWorldSpace_Local);

													break;

												case EVertexPaintWithinAreaFallOffType::GradiantDownward:

													// fallOffRange_Local *= 2;

													// Top Edge Z
													paintWithinArea_AreaEdgeZInWorldSpace_Local = calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin[i].componentWorldTransform.GetLocation().Z + calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin[i].isVertexWithinArea_Sphere_Radius;
													distanceFromFalloffBase_Local = FMath::Abs(currentVertexWorldSpace.Z - paintWithinArea_AreaEdgeZInWorldSpace_Local);

													break;

												default:
													break;
												}

												break;


											case Enum_PaintWithinAreaShape::isComplexShape:

												switch (calculateColorsInfo_Global.paintOnMeshWithinAreaSettings.fallOffSettings.paintWithinAreaFallOffType) {

												case EVertexPaintWithinAreaFallOffType::SphericalFromCenter:

													distanceFromFalloffBase_Local = (calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin[i].actorBounds_Origin - currentVertexWorldSpace).Size();

													break;

												case EVertexPaintWithinAreaFallOffType::GradiantUpward:

													// Bottom Edge Z
													paintWithinArea_AreaEdgeZInWorldSpace_Local = calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin[i].actorBounds_Origin.Z - calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin[i].actorBounds_Extent.Z / 2;

													distanceFromFalloffBase_Local = FMath::Abs(currentVertexWorldSpace.Z - paintWithinArea_AreaEdgeZInWorldSpace_Local);


													break;

												case EVertexPaintWithinAreaFallOffType::GradiantDownward:

													// Top Edge Z
													paintWithinArea_AreaEdgeZInWorldSpace_Local = calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin[i].actorBounds_Origin.Z + calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin[i].actorBounds_Extent.Z / 2;

													distanceFromFalloffBase_Local = FMath::Abs(currentVertexWorldSpace.Z - paintWithinArea_AreaEdgeZInWorldSpace_Local);

													break;

												default:
													break;
												}

												break;
											default:
												break;
											}
										}


										withinArea_VertexWasWithinArea = true;

										// If set to get colors before paint job, then gets the colors before applying it 
										if (calculateColorsInfo_Global.getColorsWithinAreaSettings.actor)
											withinArea_ColorFromLOD_BeforeApplyingColors_Local.Add(colorFromLOD_Local[currentLODVertex_Local]);

										
										colorFromLOD_Local[currentLODVertex_Local] = GetColorToApplyOnVertex(calculateColorsInfo_Global.taskResult.associatedPaintComponent, calculateColorsInfo_Global.vertexPaintComponent, currentLOD_Local, currentLODVertex_Local, materialToGetSurfacesFrom_Local, registeredPhysicsSurfacesAtMaterial_Local, isVertexOnCloth_Local, colorFromLODAsLinear_BeforeApplyingColors, colorFromLOD_Local[currentLODVertex_Local], currentVertexWorldSpace, normalsFromLOD_Local[currentLODVertex_Local], currentBoneName_Local, vertexTotalBoneWeight_Global, fallOffSettings_Local, calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin[i].withinAreaOfEffect, calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin[i].paintWithinAreaScaleFallOffFrom, distanceFromFalloffBase_Local, paintOnMeshColorSettingsForSection_Local, vertexColorGotChanged_Local, applyColorsPrimarilyOnRedChannel_Local, applyColorsPrimarilyOnGreenChannel_Local, applyColorsPrimarilyOnBlueChannel_Local, applyColorsPrimarilyOnAlphaChannel_Local, paintLimitRGBA_Local);


										if (calculateColorsInfo_Global.withinAreaSettings.includeVertexColorsWithinArea)
											withinArea_ColorFromLOD_AfterApplyingColors_Local.Add(colorFromLOD_Local[currentLODVertex_Local]);


										triedToApplyColorOnVertex_Local = true;

										// Caches if a vertex was within area so we can print debug related logs in case Any wasn't in the area when finish. 
										if (!paintWithinArea_VertexWasWithinArea_Global)
											paintWithinArea_VertexWasWithinArea_Global = triedToApplyColorOnVertex_Local;

										break;
									}
								}
							}


							else if (calculateColorsInfo_Global.paintOnEntireMeshSettings.actor) {

								if (paintEntireMesh_PaintCurrentVertex_Local) {

									colorFromLOD_Local[currentLODVertex_Local] = GetColorToApplyOnVertex(calculateColorsInfo_Global.taskResult.associatedPaintComponent, calculateColorsInfo_Global.vertexPaintComponent, currentLOD_Local, currentLODVertex_Local, materialToGetSurfacesFrom_Local, registeredPhysicsSurfacesAtMaterial_Local, isVertexOnCloth_Local, colorFromLODAsLinear_BeforeApplyingColors, colorFromLOD_Local[currentLODVertex_Local], currentVertexWorldSpace, normalsFromLOD_Local[currentLODVertex_Local], currentBoneName_Local, vertexTotalBoneWeight_Global, fallOffSettings_Local, 0, 0, 0, paintOnMeshColorSettingsForSection_Local, vertexColorGotChanged_Local, applyColorsPrimarilyOnRedChannel_Local, applyColorsPrimarilyOnGreenChannel_Local, applyColorsPrimarilyOnBlueChannel_Local, applyColorsPrimarilyOnAlphaChannel_Local, paintLimitRGBA_Local);

									triedToApplyColorOnVertex_Local = true;
								}
							}
						}


						// To make sure we haven't tried running this before, in case we did try to apply paint on a vertex earlier either successfully or unsuccessfully
						if (!haveRunOverrideInterface_Global) {

							// Since we can get here with triedToApplyColorOnVertex_Local either true or false, we need to check if the users has set the requirement that we should only override it if its  true 
							if (calculateColorsInfo_Global.vertexPaintSettings.overrideVertexColorsToApplySettings.overrideVertexColorsToApply && (!calculateColorsInfo_Global.vertexPaintSettings.overrideVertexColorsToApplySettings.onlyRunOverrideInterfaceIfTryingToApplyColorToVertex || (calculateColorsInfo_Global.vertexPaintSettings.overrideVertexColorsToApplySettings.onlyRunOverrideInterfaceIfTryingToApplyColorToVertex && triedToApplyColorOnVertex_Local))) {


								if (overrideVertexColors_ObjectToRunInterfaceOn_Global) {

									if (calculateColorsInfo_Global.vertexPaintSettings.overrideVertexColorsToApplySettings.includeMostDominantPhysicsSurface) {


										overrideVertexColors_DefaultVertexColors_Global.Add(UVertexPaintFunctionLibrary::ReliableFColorToFLinearColor(defaultColorFromLOD_Local[currentLODVertex_Local]).R);
										overrideVertexColors_DefaultVertexColors_Global.Add(UVertexPaintFunctionLibrary::ReliableFColorToFLinearColor(defaultColorFromLOD_Local[currentLODVertex_Local]).G);
										overrideVertexColors_DefaultVertexColors_Global.Add(UVertexPaintFunctionLibrary::ReliableFColorToFLinearColor(defaultColorFromLOD_Local[currentLODVertex_Local]).B);
										overrideVertexColors_DefaultVertexColors_Global.Add(UVertexPaintFunctionLibrary::ReliableFColorToFLinearColor(defaultColorFromLOD_Local[currentLODVertex_Local]).A);
										/*
										overrideVertexColors_DefaultVertexColors_Global.Add(defaultColorFromLOD_Local[currentLODVertex_Local].ReinterpretAsLinear().R);
										overrideVertexColors_DefaultVertexColors_Global.Add(defaultColorFromLOD_Local[currentLODVertex_Local].ReinterpretAsLinear().G);
										overrideVertexColors_DefaultVertexColors_Global.Add(defaultColorFromLOD_Local[currentLODVertex_Local].ReinterpretAsLinear().B);
										overrideVertexColors_DefaultVertexColors_Global.Add(defaultColorFromLOD_Local[currentLODVertex_Local].ReinterpretAsLinear().A);
										*/

										UVertexPaintFunctionLibrary::GetTheMostDominantPhysicsSurface_Wrapper(calculateColorsInfo_Global.fundementalStruct.taskWorld, materialToGetSurfacesFrom_Local, registeredPhysicsSurfacesAtMaterial_Local, overrideVertexColors_DefaultVertexColors_Global, overrideVertexColors_MostDominantPhysicsSurfaceAtVertexBeforeApplyingColors_Global, overrideVertexColors_MostDominantPhysicsSurfaceValueAtVertexBeforeApplyingColors_Global);
									}

									haveRunOverrideInterface_Global = true;

									IVertexPaintDetectionInterface::Execute_OverrideVertexColorToApply(overrideVertexColors_ObjectToRunInterfaceOn_Global, calculateColorsInfo_Global.taskResult.associatedPaintComponent, calculateColorsInfo_Global.vertexPaintComponent, currentLOD_Local, currentLODVertex_Local, materialToGetSurfacesFrom_Local, isVertexOnCloth_Local, currentBoneName_Local, currentVertexWorldSpace, normalsFromLOD_Local[currentLODVertex_Local], defaultColorFromLOD_Local[currentLODVertex_Local], overrideVertexColors_MostDominantPhysicsSurfaceAtVertexBeforeApplyingColors_Global, overrideVertexColors_MostDominantPhysicsSurfaceValueAtVertexBeforeApplyingColors_Global, colorFromLOD_Local[currentLODVertex_Local], shouldApplyColorOnAnyChannel_Global, shouldApplyColorOnAnyChannel_Global, overrideVertexColorsToApply_Global, overrideVertexColors_ColorToApply_Global);

									if (overrideVertexColorsToApply_Global) {

										overridenVertexColorsMadeChangeToColorsToApply_Global = true;
										getColorToApplyOnVertex_ColorToApply_Global = overrideVertexColors_ColorToApply_Global;
									}
								}


								// If overriden then we can use the result from the interface
								if (shouldApplyColorOnAnyChannel_Global) {

									colorFromLOD_Local[currentLODVertex_Local] = getColorToApplyOnVertex_ColorToApply_Global;
									triedToApplyColorOnVertex_Local = true;
									vertexColorGotChanged_Local = true;
								}

								// If returned to Not apply vertex color then resets some bools so shouldApplyVertexColors_Global gets set accordingly
								else {

									triedToApplyColorOnVertex_Local = false;
									vertexColorGotChanged_Local = false;
								}
							}
						}


						if (triedToApplyColorOnVertex_Local) {

							if (calculateColorsInfo_Global.vertexPaintSkelComponent) {

								if (!vertexColorAppliedToBones_Global.Contains(currentBoneName_Local))
									vertexColorAppliedToBones_Global.Add(currentBoneName_Local);
							}


#if ENGINE_MAJOR_VERSION == 5


							// Geometry Collection TManagedArray<FLinearColor> requires FLinearColor, so to avoid looping through all the colors on game thread to build a FLinearColor array for geo collection comps we update one here. 
							if (IsValid(calculateColorsInfo_Global.vertexPaintGeometryCollectionComponent)) {

								geometryCollectionVertexColors_Global[currentLODVertex_Local] = UVertexPaintFunctionLibrary::ReliableFColorToFLinearColor(colorFromLOD_Local[currentLODVertex_Local]);
								// calculateColorsInfo_Global.geometryCollectionComponentVertexColors[currentLODVertex_Local] = colorFromLOD_Local[currentLODVertex_Local].ReinterpretAsLinear();
							}
#endif


							if (calculateColorsInfo_Global.fundementalStruct.debugSettings.gameThreadSpecificDebugSymbols.drawVertexPositionDebugPointIfGotPaintApplied && inGameThread_Global) {

								DrawDebugPoint(calculateColorsInfo_Global.vertexPaintActor->GetWorld(), currentVertexWorldSpace, 7, FColor::Green, false, calculateColorsInfo_Global.fundementalStruct.debugSettings.gameThreadSpecificDebugSymbols.drawGameThreadSpecificDebugSymbolsDuration, 0);
							}
						}


						if (!anyVertexColorsGotChanged_Global)
							anyVertexColorsGotChanged_Global = vertexColorGotChanged_Local;


						colorFromLODAsLinear = UVertexPaintFunctionLibrary::ReliableFColorToFLinearColor(colorFromLOD_Local[currentLODVertex_Local]);
						// linearColor_Local = colorFromLOD_Local[currentLODVertex_Local].ReinterpretAsLinear();


						if (vertexColorGotChanged_Local) {

							if (!redColorChannelChanged_Global && colorFromLODAsLinear_BeforeApplyingColors.R != colorFromLODAsLinear.R) {

								redColorChannelChanged_Global = true;

								if (!appliedToVertexColorChannels_Global.Contains(EVertexColorChannel::RedChannel))
									appliedToVertexColorChannels_Global.Add(EVertexColorChannel::RedChannel);
							}

							if (!greenColorChannelChanged_Global && colorFromLODAsLinear_BeforeApplyingColors.G != colorFromLODAsLinear.G) {

								greenColorChannelChanged_Global = true;

								if (!appliedToVertexColorChannels_Global.Contains(EVertexColorChannel::GreenChannel))
									appliedToVertexColorChannels_Global.Add(EVertexColorChannel::GreenChannel);
							}

							if (!blueColorChannelChanged_Global && colorFromLODAsLinear_BeforeApplyingColors.B != colorFromLODAsLinear.B) {

								blueColorChannelChanged_Global = true;

								if (!appliedToVertexColorChannels_Global.Contains(EVertexColorChannel::BlueChannel))
									appliedToVertexColorChannels_Global.Add(EVertexColorChannel::BlueChannel);
							}

							if (!alphaColorChannelChanged_Global && colorFromLODAsLinear_BeforeApplyingColors.A != colorFromLODAsLinear.A) {

								alphaColorChannelChanged_Global = true;

								if (!appliedToVertexColorChannels_Global.Contains(EVertexColorChannel::AlphaChannel))
									appliedToVertexColorChannels_Global.Add(EVertexColorChannel::AlphaChannel);
							}
						}
					}


					// Updates color buffer vertex color, so when we apply the colors we can just set to use the new buffer and don't have to run InitFromColorArray which loops through all of the verts. Runs this even if shouldApplyVertexColors_Local is false, since the newColorBuffer still has be set with the current color, otherwise the sections that we're not applying color on will look weird. 
					if (newColorVertexBufferPerLOD_Global.IsValidIndex(currentLOD_Local))
						newColorVertexBufferPerLOD_Global[currentLOD_Local]->VertexColor(currentLODVertex_Local) = colorFromLOD_Local[currentLODVertex_Local];
				}


				// These are the things both Get Colors Within Area, and Paint Within Area can share if the vertex was within area
				if (withinArea_VertexWasWithinArea) {

					withinArea_AmountOfVerticesWithinArea_Local++;

					// If set to default include vertex data for LOD0 then only gets it for that, otherwise if false then gets it for All LODs. 
					if (!calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeVertexDataOnlyForLOD0 || (calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeVertexDataOnlyForLOD0 && currentLOD_Local == 0)) {

						if (calculateColorsInfo_Global.withinAreaSettings.includeVertexPositionsWithinrea)
							withinArea_PositionsInComponentLocalSpaceFromLOD_Local.Add(positionsInComponentLocalSpaceFromLOD_Local[currentLODVertex_Local]);

						if (calculateColorsInfo_Global.withinAreaSettings.includeVertexNormalsWithinArea)
							withinArea_NormalsFromLOD_Local.Add(normalsFromLOD_Local[currentLODVertex_Local]);
					}


					GetWithinAreaVertexInfoAfterApplyingColorsAtLODZero(calculateColorsInfo_Global, registeredPhysicsSurfacesAtMaterial_Local, colorFromLODAsLinear_BeforeApplyingColors, colorFromLODAsLinear, currentLOD_Local, withinArea_VertexWasWithinArea, withinArea_ContainsPhysicsSurfaceOnRedChannel, withinArea_ContainsPhysicsSurfaceOnGreenChannel, withinArea_ContainsPhysicsSurfaceOnBlueChannel, withinArea_ContainsPhysicsSurfaceOnAlphaChannel, amountOfPaintedColorsOfEachChannel_WithinArea_BeforeApplyingColors_Local, physicsSurfaceResultForSection_WithinArea_BeforeApplyingColors_Local, amountOfPaintedColorsOfEachChannel_WithinArea_AfterApplyingColors_Local, physicsSurfaceResultForSection_WithinArea_AfterApplyingColors_Local);
				}



				// LOD 0 Related After Applying Colors
				if (currentLOD_Local == 0) {


					if (calculateColorsInfo_Global.vertexPaintSkelComponent) {

						// Had to have an array of a color array that i add to instead of adding directly to the TMap since then i had to use .Contain and .FindRef which made it so each task took longer to finish
						if (boneIndexColors_Local.IsValidIndex(currentBoneIndex_Local) && calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeColorsOfEachBone) {

							boneIndexColors_Local[currentBoneIndex_Local].Add(colorFromLOD_Local[currentLODVertex_Local]);
						}
					}


					// LOD 0 Paint Job
					if (calculateColorsInfo_Global.vertexPaintSettings.actor) {


						if (calculateColorsInfo_Global.paintOnMeshAtLocationSettings.actor) {

							GetPaintAtLocationAverageColorWithinAreaAtLODZero(calculateColorsInfo_Global, colorFromLOD_Local[currentLODVertex_Local], distanceFromVertexToHitLocation_PaintAtLocation_Local, cureentVertexNormalToHitNormalDot_Paint, paintAtLocation_VertexNormalMinDotToHitNormalToGetColored_MinDot_Local, paintAtLocation_AmountOfVerticesWithinArea_Global, paintAtLocation_AvarageColorWithinArea_Global_Red, paintAtLocation_AvarageColorWithinArea_Global_Green, paintAtLocation_AvarageColorWithinArea_Global_Blue, paintAtLocation_AvarageColorWithinArea_Global_Alpha, distanceFromVertexToHitLocation_GetClosestVertexData_Local, getClosestVertexData_GetAverageColor_Local, cureentVertexNormalToHitNormalDot_Detect, getClosestVertexData_AvarageColorWithinArea_AfterApplyingColors_Red_Global, getClosestVertexData_AvarageColorWithinArea_AfterApplyingColors_Green_Global, getClosestVertexData_AvarageColorWithinArea_AfterApplyingColors_Blue_Global, getClosestVertexData_AvarageColorWithinArea_AfterApplyingColors_Alpha_Global, getClosestVertexData_AmountOfVerticesWithinArea_AfterApplyingColors_Global);
						}

						if (calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeVertexColorChannelResultOfEachChannel) {

							// Gets the amount and % etc. of each color channel after applying any colors. Lost quite a lot of performance if sending in and returning the parent struct rather than the individual results with &, as well as if we used a TArray<bool> rather than individual. 
							GetColorsOfEachChannelForVertex(colorFromLODAsLinear, calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel, containsPhysicsSurfaceOnRedChannel, containsPhysicsSurfaceOnGreenChannel, containsPhysicsSurfaceOnBlueChannel, containsPhysicsSurfaceOnAlphaChannel, amountOfPaintedColorsOfEachChannel_AfterApplyingColors_Local.redChannelResult, amountOfPaintedColorsOfEachChannel_AfterApplyingColors_Local.greenChannelResult, amountOfPaintedColorsOfEachChannel_AfterApplyingColors_Local.blueChannelResult, amountOfPaintedColorsOfEachChannel_AfterApplyingColors_Local.alphaChannelResult);
						}

						if (calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includePhysicsSurfaceResultOfEachChannel) {

							// Gets the amount and % etc. of each physics channel after applied any colors
							if (registeredPhysicsSurfacesAtMaterial_Local.Num() > 0)
								GetColorsOfEachPhysicsSurfaceForVertex(registeredPhysicsSurfacesAtMaterial_Local, colorFromLODAsLinear, calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel, containsPhysicsSurfaceOnRedChannel, containsPhysicsSurfaceOnGreenChannel, containsPhysicsSurfaceOnBlueChannel, containsPhysicsSurfaceOnAlphaChannel, physicsSurfaceResultForSection_AfterApplyingColors_Local);
						}


						// If set to randomize over the entire mesh, and to use Modified Engine Method, then we get the things it requires. If this vertex is a doublette of another that is on the Exact same position, then we want it to also get painted, so all doublettes at a position have the same color. This is so when we run our calculation so LOD1, 2 vertices get the same color as their closest and best LOD0 vertex, it shouldn't matter which of the doublettes the calculation chooses to be the best, as they all have the same color. Otherwise we had an issue where other LODs wouldn't get LOD0 color if using modified engine method since the result of it can be that the closest LOD0 vertex color to use for a LOD1 vertex could be a doublette of the randomized one that was on the exact same location

						if (vertexDetectMeshData_Global.meshDataPerLOD.Num() > 1 && calculateColorsInfo_Global.propogateLOD0ToAllLODs) {

							paintedVertex_Local.Color = colorFromLOD_Local[currentLODVertex_Local];
							propogateToLODs_PaintedVerticesAtLOD0_Local.Add(paintedVertex_Local);

							if (paintEntireMesh_PaintCurrentVertex_Local)
								paintEntireMesh_Random_VerticesDoublettesPaintedAtLOD0_Local.Add(positionsInComponentLocalSpaceFromLOD_Local[currentLODVertex_Local], colorFromLOD_Local[currentLODVertex_Local]);
						}
					}


					if (compareColorsToArray_Local) {

						if (calculateColorsInfo_Global.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.skipEmptyVertices && calculateColorsInfo_Global.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.colorArrayToCompareWith[currentLODVertex_Local].R <= 0 && calculateColorsInfo_Global.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.colorArrayToCompareWith[currentLODVertex_Local].G <= 0 && calculateColorsInfo_Global.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.colorArrayToCompareWith[currentLODVertex_Local].B <= 0 && calculateColorsInfo_Global.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.colorArrayToCompareWith[currentLODVertex_Local].A <= 0) {

							// If skipping vertices the we don't take them into account in compareColors_AmountOfVertices, so for instance if only 100 / 1000 vertices wasn't empty, you can still get 100% matching percent if you fill those 100

							// UE_LOG(LogTemp, Warning, TEXT("Skipping Vertex: %i"), currentLODVertex_Local);
						}

						else {

							compareColorsToArray_AmountOfVertices_Local++;

							if (DoesVertexColorsMatch(colorFromLOD_Local[currentLODVertex_Local], calculateColorsInfo_Global.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.colorArrayToCompareWith[currentLODVertex_Local], calculateColorsInfo_Global.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.comparisonErrorTolerance)) {

								compareMeshColorsToColorArrayResult_Global.matchingPercent++;
							}
						}
					}
				}


				if (calculateColorsInfo_Global.vertexPaintSkelComponent && shouldAffectPhysicsOnSectionsCloth_Local) {

					GetClothSectionTotalColorsAfterApplyingColor(calculateColorsInfo_Global.vertexPaintSkelComponent, shouldAffectPhysicsOnSectionsCloth_Local, colorFromLOD_Local[currentLODVertex_Local], clothSectionTotalRedVertexColor_Local, clothSectionTotalGreenVertexColor_Local, clothSectionTotalBlueVertexColor_Local, clothSectionTotalAlphaVertexColor_Local);
				}


				// Serializes each element while we're looping through the verts, so we don't have to loop through them again for the LOD after
				if (calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeSerializedVertexColorData) {

					GetSerializedVertexColor(calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeSerializedVertexColorData, calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeVertexDataOnlyForLOD0, totalAmountOfVertsAtLOD_Local, colorFromLOD_Local[currentLODVertex_Local], currentLOD_Local, currentLODVertex_Local, serializedColorData_Local);
				}


				// Finished Sections Vertex Loop
				currentLODVertex_Local++;
			}


			// Finished Looping Through Section


			// Cloth Physics
			if (calculateColorsInfo_Global.vertexPaintSkelComponent && shouldAffectPhysicsOnSectionsCloth_Local) {

				GetClothSectionAverageColor(calculateColorsInfo_Global.vertexPaintSkelComponent, skeletalMeshRenderSection_Local, shouldAffectPhysicsOnSectionsCloth_Local, sectionMaxAmountOfVerts_Local, clothSectionTotalRedVertexColor_Local, clothSectionTotalGreenVertexColor_Local, clothSectionTotalBlueVertexColor_Local, clothSectionTotalAlphaVertexColor_Local, clothsAverageColor_Local);
			}


			// When Finished looping through section we go through the physics surface result for this section, if we've gotten it earlier in a previous section, or perhaps several vertex color channels has the same physics surface registered, then we add them up. 
			if (calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includePhysicsSurfaceResultOfEachChannel || calculateColorsInfo_Global.withinAreaSettings.includeAmountOfColorsOfEachChannelWithinArea.includePhysicsSurfaceResultOfEachChannel) {

				ResolveAmountOfColorsOfEachChannelForSection(calculateColorsInfo_Global, registeredPhysicsSurfacesAtMaterial_Local, physicsSurfaceResultForSection_BeforeAddingColors_Local, amountOfPaintedColorsOfEachChannel_BeforeApplyingColor_Local, physicsSurfaceResultForSection_AfterApplyingColors_Local, amountOfPaintedColorsOfEachChannel_AfterApplyingColors_Local, physicsSurfaceResultForSection_WithinArea_BeforeApplyingColors_Local, amountOfPaintedColorsOfEachChannel_WithinArea_BeforeApplyingColors_Local, physicsSurfaceResultForSection_WithinArea_AfterApplyingColors_Local, amountOfPaintedColorsOfEachChannel_WithinArea_AfterApplyingColors_Local);
			}
		}


		// Finished Looping Through Sections

		// End of LOD Loop


		if (calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeSerializedVertexColorData) {

			bool serializeLOD_Local = (calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeVertexDataOnlyForLOD0 && currentLOD_Local != 0) ? false : true;

			if (serializeLOD_Local) {

				FVertexDetectSerializedColorsPerLODStruct serializedColors;
				serializedColors.lod = currentLOD_Local;
				serializedColors.colorsAtLODAsJSonString = serializedColorData_Local;

				vertexDetectMeshData_Global.meshDataPerLOD[currentLOD_Local].serializedVertexColorsData = serializedColors;
			}
		}


		if (currentLOD_Local == 0) {


			if (compareColorsToArray_Local) {

				compareMeshColorsToColorArrayResult_Global.successfullyComparedMeshColorsToColorArray = true;

				if (compareMeshColorsToColorArrayResult_Global.matchingPercent > 0) {

					compareMeshColorsToColorArrayResult_Global.matchingPercent = compareMeshColorsToColorArrayResult_Global.matchingPercent / compareColorsToArray_AmountOfVertices_Local;
					compareMeshColorsToColorArrayResult_Global.matchingPercent *= 100; // So it goes from 0-100 instead of 0-1
				}
			}



			if (closestVertexFound_Paint_Global >= 0) {

				closestVertexColor_AfterApplyingColors_Paint_Global = colorFromLOD_Local[closestVertexFound_Paint_Global];
				closestVertexPositionToHitLocationAtMinLOD_World_Paint_Global = positionsInWorldSpaceFromLOD_Local[closestVertexFound_Paint_Global];
				closestVertexNormalToHitLocationAtMinLOD_World_Paint_Global = normalsFromLOD_Local[closestVertexFound_Paint_Global];

				materialAtClosestPaintVertex_Global = GetMaterialAtSection(calculateColorsInfo_Global, closestSectionFound_Paint_Global, skelMeshLODRenderData_Local);


				// Estimated Color at Hit Location
				int closestVertexToLerpTowardIndex_Paint_Temp = -1;

				if (estimatedColorToHitLocation_DirectionFromHitToClosestVerticesInfo_Paint.Num() > 0) {

					closestVertexToLerpTowardIndex_Paint_Temp = GetEstimatedColorToHitLocationVertexToLerpColorToward(estimatedColorToHitLocation_DirectionFromHitToClosestVerticesInfo_Paint, estimatedColorAtHitLocation_ClosestVerticesToTheHitLocation_Paint_Global, estimatedColorToHitLocation_DirectionToClosestVertex_Paint_Local, closestVertexFound_Paint_Global, 0.2f);

					if (closestVertexToLerpTowardIndex_Paint_Temp >= 0) {

						estimatedColorAtHitLocation_VertexToLerpToward_Paint_Global = closestVertexToLerpTowardIndex_Paint_Temp;


						estimatedColorAtHitLocation_VertexToLerpToward_LocationInWorldSpace_Paint_Global = positionsInWorldSpaceFromLOD_Local[closestVertexToLerpTowardIndex_Paint_Temp];

						GetEstimatedColorToHitLocationValues(closestVertexToLerpTowardIndex_Paint_Temp, colorFromLOD_Local[closestVertexFound_Paint_Global], closestVertexPositionToHitLocationAtMinLOD_World_Paint_Global, paintAtLocation_HitLocationInWorldSpace_Local, colorFromLOD_Local[closestVertexToLerpTowardIndex_Paint_Temp], estimatedColorAtHitLocation_VertexToLerpToward_LocationInWorldSpace_Paint_Global, estimatedColorAtHitLocation_AfterApplyingColors_Paint_Global, estimatedColorAtHitLocation_LocationInWorldSpace_Paint_Global);

						// Also sets a estimatedColorAtHitLocation_BeforeApplyingColors_Paint_Global which is used if we're also running a detection before applying colors but not on custom hit result but based on the same hit location as the paint job. 
						GetEstimatedColorToHitLocationValues(closestVertexToLerpTowardIndex_Paint_Temp, defaultColorFromLOD_Local[closestVertexFound_Paint_Global], closestVertexPositionToHitLocationAtMinLOD_World_Paint_Global, paintAtLocation_HitLocationInWorldSpace_Local, defaultColorFromLOD_Local[closestVertexToLerpTowardIndex_Paint_Temp], estimatedColorAtHitLocation_VertexToLerpToward_LocationInWorldSpace_Paint_Global, estimatedColorAtHitLocation_BeforeApplyingColors_Paint_Global, estimatedColorAtHitLocation_LocationInWorldSpace_Paint_Global);
					}
				}
			}


			if (closestVertexFound_Detection_Global >= 0) {

				closestVertexColor_BeforeApplyingColors_Detect_Global = defaultColorFromLOD_Local[closestVertexFound_Detection_Global];
				closestVertexColor_AfterApplyingColors_Detect_Global = colorFromLOD_Local[closestVertexFound_Detection_Global];

				closestVertexPositionToHitLocationAtMinLOD_World_Detect_Global = positionsInWorldSpaceFromLOD_Local[closestVertexFound_Detection_Global];
				closestVertexNormalToHitLocationAtMinLOD_World_Detect_Global = normalsFromLOD_Local[closestVertexFound_Detection_Global];


				materialAtClosestDetectVertex_Global = GetMaterialAtSection(calculateColorsInfo_Global, closestSectionFound_Detection_Global, skelMeshLODRenderData_Local);


				// Estimated Color at Hit Location. If just a Get Closest Vertex Data, or a paint at location with detection at a custom hit location, then uses the results of the detection directionFromHitToClosestVerticesInfo_Detect TMap, since it can have a different nearby vertices than the paint hit location
				if ((calculateColorsInfo_Global.getClosestVertexDataSettings.actor && !calculateColorsInfo_Global.paintOnMeshAtLocationSettings.actor) || (calculateColorsInfo_Global.paintOnMeshAtLocationSettings.actor && calculateColorsInfo_Global.paintOnMeshAtLocationSettings.getClosestVertexDataCombo.useCustomHitFundementalsForDetection)) {

					int closestVertexToLerpTowardIndex_Detect_Temp = -1;

					if (stimatedColorToHitLocation_DirectionFromHitToClosestVerticesInfo_Detect.Num() > 0) {

						closestVertexToLerpTowardIndex_Detect_Temp = GetEstimatedColorToHitLocationVertexToLerpColorToward(stimatedColorToHitLocation_DirectionFromHitToClosestVerticesInfo_Detect, estimatedColorAtHitLocation_ClosestVerticesToTheHitLocation_Detect_Global, estimatedColorToHitLocation_DirectionToClosestVertex_Detect_Local, closestVertexFound_Detection_Global, 0.2f);


						if (closestVertexToLerpTowardIndex_Detect_Temp >= 0) {

							estimatedColorAtHitLocation_VertexToLerpToward_Detect_Global = closestVertexToLerpTowardIndex_Detect_Temp;

							estimatedColorAtHitLocation_VertexToLerpToward_LocationInWorldSpace_Detect_Global = positionsInWorldSpaceFromLOD_Local[closestVertexToLerpTowardIndex_Detect_Temp];

							// If just a detection, or a paint at location with detection set to run before it, then bases the colors on defaultColorFromLOD_Local
							if (calculateColorsInfo_Global.paintOnMeshAtLocationSettings.getClosestVertexDataCombo.runGetClosestVertexDataOnMeshBeforeApplyingPaint || calculateColorsInfo_Global.getClosestVertexDataSettings.actor)
								GetEstimatedColorToHitLocationValues(closestVertexToLerpTowardIndex_Detect_Temp, defaultColorFromLOD_Local[closestVertexFound_Detection_Global], closestVertexPositionToHitLocationAtMinLOD_World_Detect_Global, getClosestVertexData_HitLocationInWorldSpace_Local, defaultColorFromLOD_Local[closestVertexToLerpTowardIndex_Detect_Temp], estimatedColorAtHitLocation_VertexToLerpToward_LocationInWorldSpace_Detect_Global, estimatedColorAtHitLocation_BeforeApplyingColors_Detect_Global, estimatedColorAtHitLocation_LocationInWorldSpace_Detect_Global);


							// If paint at location with set to run detection after colors have been changed, then uses colorFromLOD_Local instead defaultColorFromLOD_Local
							if (calculateColorsInfo_Global.paintOnMeshAtLocationSettings.getClosestVertexDataCombo.runGetClosestVertexDataOnMeshAfterApplyingPaint)
								GetEstimatedColorToHitLocationValues(closestVertexToLerpTowardIndex_Detect_Temp, colorFromLOD_Local[closestVertexFound_Detection_Global], closestVertexPositionToHitLocationAtMinLOD_World_Detect_Global, getClosestVertexData_HitLocationInWorldSpace_Local, colorFromLOD_Local[closestVertexToLerpTowardIndex_Detect_Temp], estimatedColorAtHitLocation_VertexToLerpToward_LocationInWorldSpace_Detect_Global, estimatedColorAtHitLocation_AfterApplyingColors_Detect_Global, estimatedColorAtHitLocation_LocationInWorldSpace_Detect_Global);
						}
					}
				}

				// If it's a paint at location with detect before/after, at getEstimatedColorAtHitLocation, but at the same hit location the paint at location is run on, then we can just use its estimatedColorAtHitLocation result
				else if (estimatedColorToHitLocation_DirectionFromHitToClosestVerticesInfo_Paint.Num() > 0) {


					estimatedColorAtHitLocation_LocationInWorldSpace_Detect_Global = estimatedColorAtHitLocation_LocationInWorldSpace_Paint_Global;
					estimatedColorAtHitLocation_ClosestVerticesToTheHitLocation_Detect_Global = estimatedColorAtHitLocation_ClosestVerticesToTheHitLocation_Paint_Global;

					if (calculateColorsInfo_Global.paintOnMeshAtLocationSettings.getClosestVertexDataCombo.runGetClosestVertexDataOnMeshBeforeApplyingPaint)
						estimatedColorAtHitLocation_BeforeApplyingColors_Detect_Global = estimatedColorAtHitLocation_BeforeApplyingColors_Paint_Global;

					else if (calculateColorsInfo_Global.paintOnMeshAtLocationSettings.getClosestVertexDataCombo.runGetClosestVertexDataOnMeshAfterApplyingPaint)
						estimatedColorAtHitLocation_AfterApplyingColors_Detect_Global = estimatedColorAtHitLocation_AfterApplyingColors_Paint_Global;
				}
			}


#if ENGINE_MAJOR_VERSION == 5

			if (calculateColorsInfo_Global.vertexPaintDynamicMeshComponent) {

				dynamicMeshComponentVertexColors_Global = colorFromLOD_Local;
			}

#endif


			if (calculateColorsInfo_Global.fundementalStruct.debugSettings.printLogsToScreen || calculateColorsInfo_Global.fundementalStruct.debugSettings.printLogsToOutputLog)
				debugLog_AmountOfPaintedColorsOfEachChannelAbove0BeforeApplyingColors_Global = UVertexPaintFunctionLibrary::ConsolidateColorsOfEachChannel(debugLog_AmountOfPaintedColorsOfEachChannelAbove0BeforeApplyingAnyColor_Local, colorFromLOD_Local.Num());



			// Consolidates colors of each channel
			if (calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeVertexColorChannelResultOfEachChannel) {

				amountOfPaintedColorsOfEachChannel_BeforeApplyingColor_Local = UVertexPaintFunctionLibrary::ConsolidateColorsOfEachChannel(amountOfPaintedColorsOfEachChannel_BeforeApplyingColor_Local, colorFromLOD_Local.Num());

				amountOfPaintedColorsOfEachChannel_AfterApplyingColors_Local = UVertexPaintFunctionLibrary::ConsolidateColorsOfEachChannel(amountOfPaintedColorsOfEachChannel_AfterApplyingColors_Local, colorFromLOD_Local.Num());
			}

			// Consolidates colors of each physics surface
			if (calculateColorsInfo_Global.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includePhysicsSurfaceResultOfEachChannel) {

				amountOfPaintedColorsOfEachChannel_BeforeApplyingColor_Local = UVertexPaintFunctionLibrary::ConsolidatePhysicsSurfaceResult(amountOfPaintedColorsOfEachChannel_BeforeApplyingColor_Local, colorFromLOD_Local.Num());

				amountOfPaintedColorsOfEachChannel_AfterApplyingColors_Local = UVertexPaintFunctionLibrary::ConsolidatePhysicsSurfaceResult(amountOfPaintedColorsOfEachChannel_AfterApplyingColors_Local, colorFromLOD_Local.Num());
			}

			amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor_Global = amountOfPaintedColorsOfEachChannel_BeforeApplyingColor_Local;
			amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor_Global = amountOfPaintedColorsOfEachChannel_AfterApplyingColors_Local;
		}


		// Setting meshVertexData colors, position and normal arrays
		vertexDetectMeshData_Global.meshDataPerLOD[currentLOD_Local].lod = currentLOD_Local;
		vertexDetectMeshData_Global.meshDataPerLOD[currentLOD_Local].meshVertexColorsPerLODArray = colorFromLOD_Local;
		vertexDetectMeshData_Global.meshDataPerLOD[currentLOD_Local].meshVertexPositionsInComponentSpacePerLODArray = positionsInComponentLocalSpaceFromLOD_Local;
		vertexDetectMeshData_Global.meshDataPerLOD[currentLOD_Local].meshVertexNormalsPerLODArray = normalsFromLOD_Local;


		ResolveWithinAreaResults(calculateColorsInfo_Global, currentLOD_Local, withinArea_AmountOfVerticesWithinArea_Local, withinArea_ColorFromLOD_BeforeApplyingColors_Local, withinArea_ColorFromLOD_AfterApplyingColors_Local, withinArea_PositionsInComponentLocalSpaceFromLOD_Local, withinArea_NormalsFromLOD_Local, amountOfPaintedColorsOfEachChannel_WithinArea_BeforeApplyingColors_Local, amountOfPaintedColorsOfEachChannel_WithinArea_AfterApplyingColors_Local, withinAreaResults_BeforeApplyingColors_Global, withinAreaResults_AfterApplyingColors_Global);


		if (calculateColorsInfo_Global.vertexPaintSkelComponent) {

			ResolveSkeletalMeshBoneColors(calculateColorsInfo_Global, currentLOD_Local, boneIndexColors_Local, nameAndColorOfEachBone_Global, successFullyGotColorsForEachBone_Global);

			ResolveChaosClothPhysics(calculateColorsInfo_Global, anyVertexColorsGotChanged_Global, skelMeshLODRenderData_Local, currentLOD_Local, cloth_PhysicsSettings_Local, clothsAverageColor_Local, clothPhysicsSettings_Global);
		}


		if (vertexDetectMeshData_Global.meshDataPerLOD.Num() > 1 && calculateColorsInfo_Global.propogateLOD0ToAllLODs) {

			propogateToLODs_CompleteLODsBaseBounds_Local[currentLOD_Local] = currentLODBaseBounds_Local;
		}
	}


	// Finished Looping Through All LODs


	calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Finished Looping through all LODs")), FColor::Cyan));


	// If > 0 LODs and paint entire mesh at random vertices we can propogate LOD0 Colors to the rest of the LODs so the random vertices that was selected gets the closest LOD1 colors painted as well etc. so they match. 
	if (vertexDetectMeshData_Global.meshDataPerLOD.Num() > 1 && calculateColorsInfo_Global.propogateLOD0ToAllLODs) {


		calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Propogating LOD0 Colors to LODs using Modified Engine Method on Mesh Component: %s"), *calculateColorsInfo_Global.vertexPaintComponent->GetName()), FColor::Cyan));

		PropogateLOD0VertexColorsToLODs(propogateToLODs_PaintedVerticesAtLOD0_Local, vertexDetectMeshData_Global, propogateToLODs_CompleteLODsBaseBounds_Local, newColorVertexBufferPerLOD_Global, calculateColorsInfo_Global.vertexPaintComponent);
	}


	// Another final check 
	if (!IsTaskValid()) return false;


	return true;
}


//-------------------------------------------------------

// Was Task Successfull

bool FVertexPaintCalculateColorsTask::WasTaskSuccessfull(const bool& isTaskFinished, const FCalculateColorsInfo & calculateColorsInfo) {

	// Check should run on the game thread so we can check correct task queues etc. 
	if (!IsInGameThread()) return false;
	if (!isTaskFinished) return false;
	if (!UVertexPaintFunctionLibrary::IsWorldValid(calculateColorsInfo.fundementalStruct.taskWorld)) return false;
	if (!IsValid(calculateColorsInfo.vertexPaintComponent)) return false;



	if (calculateColorsInfo.vertexPaintSettings.actor) {

		if (!UVertexPaintFunctionLibrary::DoesPaintTaskQueueContainID(calculateColorsInfo.fundementalStruct.taskWorld, calculateColorsInfo.taskID))
			return false;
	}

	else if (calculateColorsInfo.vertexDetectSettings.actor) {

		if (!UVertexPaintFunctionLibrary::DoesDetectTaskQueueContainID(calculateColorsInfo.fundementalStruct.taskWorld, calculateColorsInfo.taskID))
			return false;
	}


	// If still has the same mesh
#if ENGINE_MAJOR_VERSION == 4

	if (calculateColorsInfo.vertexPaintSourceMesh != UVertexPaintFunctionLibrary::GetMeshComponentSourceMesh(calculateColorsInfo.vertexPaintComponent))
		return false;

#elif ENGINE_MAJOR_VERSION == 5

	if (calculateColorsInfo.vertexPaintSourceMesh != UVertexPaintFunctionLibrary::GetMeshComponentSourceMesh(calculateColorsInfo.vertexPaintComponent) && !calculateColorsInfo.vertexPaintDynamicMeshComponent)
		return false;

#endif

	return true;
}


//-------------------------------------------------------

// Should Run Calculate Colors To Apply

bool FVertexPaintCalculateColorsTask::ShouldLoopThroughVerticesAndLODs(FVertexDetectEventSettings callbackSettings, UPrimitiveComponent * component, FVertexPaintOverrideColorsToApply overrideColorsToApplySettings) {

	// If set to include includePhysicsSurfaceResultOfEachChannel, then we also have to loop through the vertices and sections to check the phys surface of each section
	return ((overrideColorsToApplySettings.overrideVertexColorsToApply && overrideColorsToApplySettings.objectToRunOverrideVertexColorsInterface) || callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includePhysicsSurfaceResultOfEachChannel || callbackSettings.compareMeshColorsToColorArray.compareMeshColorsToColorArrayAtLOD0 || callbackSettings.compareMeshColorsToColorArray.compareMeshColorsToStoredColorSnippet || callbackSettings.includeSerializedVertexColorData || callbackSettings.includeVertexPositionData || callbackSettings.includeVertexNormalData || (callbackSettings.includeColorsOfEachBone && Cast<USkeletalMeshComponent>(component)));
}


//-------------------------------------------------------

// Paint Job Should Run Calculate Colors To Apply

bool FVertexPaintCalculateColorsTask::PaintJobShouldLoopThroughVerticesAndLODS(FVertexPaintColorSettingStruct paintColorSettings, FVertexPaintStruct paintSettings, FVertexPaintPaintColorsDirectlyStruct paintColorsDirectlySettings) {

	return (paintColorSettings.applyVertexColorSettings.vertexColorChannelsPaintLimit.usePaintLimits || paintColorsDirectlySettings.vertexColorChannelsLimitWhenDirectlySettingColors.usePaintLimits || paintColorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.applyVertexColorUsingPhysicsSurface || ShouldLoopThroughVerticesAndLODs(paintSettings.callbackSettings, paintSettings.meshComponent, paintSettings.overrideVertexColorsToApplySettings));
}


//-------------------------------------------------------

// Modified Get Typed Skinned Vertex Position - If no clothing then gets the position in component space using our own GetTypedSkinnedVertexPosition, which is otherwise called on each vertex if running ComputeSkinnedPositions. The reason why we've made our own here is so we only have to loop through a mesh sections and vertices once, instead of atleast twice if running ComputeSkinnedPositions, since it also loops through sections and vertices, then if we where to use that here we would have to loop through it again. 


#if ENGINE_MAJOR_VERSION == 4

FVector FVertexPaintCalculateColorsTask::Modified_GetTypedSkinnedVertexPosition(FSkelMeshRenderSection * Section, const FPositionVertexBuffer & PositionVertexBuffer, const FSkinWeightVertexBuffer * SkinWeightVertexBuffer, const int32 VertIndex, const TArray<FMatrix>&RefToLocals, uint32 & boneIndex) {

	boneIndex = 0;

#elif ENGINE_MAJOR_VERSION == 5

FVector FVertexPaintCalculateColorsTask::Modified_GetTypedSkinnedVertexPosition(FSkelMeshRenderSection * Section, const FPositionVertexBuffer & PositionVertexBuffer, const FSkinWeightVertexBuffer * SkinWeightVertexBuffer, const int32 VertIndex, const TArray<FMatrix44f>&RefToLocals, uint32 & boneIndex) {

#endif

	getTypedSkinnedVertexPosition_SkinnedPos_Global = FVector(ForceInitToZero);
	vertexTotalBoneWeight_Global = 0;

	// Do soft skinning for this vertex.
	getTypedSkinnedVertexPosition_BufferVertIndex_Global = Section->GetVertexBufferIndex() + VertIndex;
	getTypedSkinnedVertexPosition_MaxBoneInfluences_Global = SkinWeightVertexBuffer->GetMaxBoneInfluences();


#if !PLATFORM_LITTLE_ENDIAN
	// uint8[] elements in LOD.VertexBufferGPUSkin have been swapped for VET_UBYTE4 vertex stream use
	for (int32 InfluenceIndex = MAX_INFLUENCES - 1; InfluenceIndex >= MAX_INFLUENCES - MaxBoneInfluences; InfluenceIndex--)
#else
	for (int32 InfluenceIndex = 0; InfluenceIndex < getTypedSkinnedVertexPosition_MaxBoneInfluences_Global; InfluenceIndex++)
#endif
	{

		getTypedSkinnedVertexPosition_MeshBoneIndex_Global = 0;

		if (Section->BoneMap.IsValidIndex(SkinWeightVertexBuffer->GetBoneIndex(getTypedSkinnedVertexPosition_BufferVertIndex_Global, InfluenceIndex)))
			getTypedSkinnedVertexPosition_MeshBoneIndex_Global = Section->BoneMap[SkinWeightVertexBuffer->GetBoneIndex(getTypedSkinnedVertexPosition_BufferVertIndex_Global, InfluenceIndex)];

		if (InfluenceIndex == 0)
			boneIndex = getTypedSkinnedVertexPosition_MeshBoneIndex_Global;

		getTypedSkinnedVertexPosition_Weight_Global = (float)(SkinWeightVertexBuffer->GetBoneWeight(getTypedSkinnedVertexPosition_BufferVertIndex_Global, InfluenceIndex) / 255.0f);


#if ENGINE_MAJOR_VERSION == 5 
#if ENGINE_MINOR_VERSION >= 2

		// From 5.2 it seems it uses AnimationCore::InvMaxRawBoneWeightFloat to calculate the weight
		getTypedSkinnedVertexPosition_Weight_Global = (float)SkinWeightVertexBuffer->GetBoneWeight(getTypedSkinnedVertexPosition_BufferVertIndex_Global, InfluenceIndex) * UE::AnimationCore::InvMaxRawBoneWeightFloat;

#endif
#endif


		vertexTotalBoneWeight_Global += getTypedSkinnedVertexPosition_Weight_Global;


		// Could get a crash here very rarely if i painted like crazy while switching meshes, skeletal meshes, this seems to have fixed that issue!
		if (getTypedSkinnedVertexPosition_BufferVertIndex_Global < (int32)PositionVertexBuffer.GetNumVertices() && getTypedSkinnedVertexPosition_MeshBoneIndex_Global < RefToLocals.Num()) {

			getTypedSkinnedVertexPosition_SkinnedPos_Global += (FVector)RefToLocals[getTypedSkinnedVertexPosition_MeshBoneIndex_Global].TransformPosition(PositionVertexBuffer.VertexPosition(getTypedSkinnedVertexPosition_BufferVertIndex_Global)) * getTypedSkinnedVertexPosition_Weight_Global;
		}
	}


	return getTypedSkinnedVertexPosition_SkinnedPos_Global;
}


//-------------------------------------------------------

// Is Vertex Within Area

bool FVertexPaintCalculateColorsTask::IsVertexWithinArea(const FVector & vertexWorldPosition, const FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo & componentToCheckIfIsWithinInfo) {


	switch (componentToCheckIfIsWithinInfo.paintWithinAreaShape) {

	case Enum_PaintWithinAreaShape::isSquareOrRectangleShape:

		// Gets Mesh Local Position to the mesh we're checking if within
		isVertexWithinArea_Vertex_LocalPos_Global = UKismetMathLibrary::InverseTransformLocation(componentToCheckIfIsWithinInfo.componentWorldTransform, vertexWorldPosition);

		// Checks each side so even if it's a tilted rectangle we can still know if within area

		// Forward
		isVertexWithinArea_Square_ForwardPosWorld_Global = componentToCheckIfIsWithinInfo.componentWorldTransform.GetLocation() + componentToCheckIfIsWithinInfo.componentForwardVector * componentToCheckIfIsWithinInfo.isVertexWithinArea_CubeOrRectangle_SquareXHalfSize;
		isVertexWithinArea_Square_ForwardPosLocal_Global = UKismetMathLibrary::InverseTransformLocation(componentToCheckIfIsWithinInfo.componentWorldTransform, isVertexWithinArea_Square_ForwardPosWorld_Global);

		// Back
		isVertexWithinArea_Square_BackPosWorld_Global = componentToCheckIfIsWithinInfo.componentWorldTransform.GetLocation() + (componentToCheckIfIsWithinInfo.componentForwardVector * -1) * componentToCheckIfIsWithinInfo.isVertexWithinArea_CubeOrRectangle_SquareXHalfSize;
		isVertexWithinArea_Square_BackPosLocal_Global = UKismetMathLibrary::InverseTransformLocation(componentToCheckIfIsWithinInfo.componentWorldTransform, isVertexWithinArea_Square_BackPosWorld_Global);

		// Left
		isVertexWithinArea_Square_LeftPosWorld_Global = componentToCheckIfIsWithinInfo.componentWorldTransform.GetLocation() + (componentToCheckIfIsWithinInfo.componentRightVector * -1) * componentToCheckIfIsWithinInfo.isVertexWithinArea_CubeOrRectangle_SquareYHalfSize;
		isVertexWithinArea_Square_LeftPosLocal_Global = UKismetMathLibrary::InverseTransformLocation(componentToCheckIfIsWithinInfo.componentWorldTransform, isVertexWithinArea_Square_LeftPosWorld_Global);

		// Right
		isVertexWithinArea_Square_RightPosWorld_Global = componentToCheckIfIsWithinInfo.componentWorldTransform.GetLocation() + componentToCheckIfIsWithinInfo.componentRightVector * componentToCheckIfIsWithinInfo.isVertexWithinArea_CubeOrRectangle_SquareYHalfSize;
		isVertexWithinArea_Square_RightPosLocal_Global = UKismetMathLibrary::InverseTransformLocation(componentToCheckIfIsWithinInfo.componentWorldTransform, isVertexWithinArea_Square_RightPosWorld_Global);

		// Down
		isVertexWithinArea_Square_DownPosWorld_Global = componentToCheckIfIsWithinInfo.componentWorldTransform.GetLocation() + (componentToCheckIfIsWithinInfo.componentUpVector * -1) * componentToCheckIfIsWithinInfo.isVertexWithinArea_CubeOrRectangle_SquareZHalfSize;
		isVertexWithinArea_Square_DownPosLocal_Global = UKismetMathLibrary::InverseTransformLocation(componentToCheckIfIsWithinInfo.componentWorldTransform, isVertexWithinArea_Square_DownPosWorld_Global);

		// Up
		isVertexWithinArea_Square_UpPosWorld_Global = componentToCheckIfIsWithinInfo.componentWorldTransform.GetLocation() + componentToCheckIfIsWithinInfo.componentUpVector * componentToCheckIfIsWithinInfo.isVertexWithinArea_CubeOrRectangle_SquareZHalfSize;
		isVertexWithinArea_Square_UpPosLocal_Global = UKismetMathLibrary::InverseTransformLocation(componentToCheckIfIsWithinInfo.componentWorldTransform, isVertexWithinArea_Square_UpPosWorld_Global);


		// Is within X, Y and Z Relative Limits of the Shape
		if (isVertexWithinArea_Vertex_LocalPos_Global.X >= isVertexWithinArea_Square_BackPosLocal_Global.X && isVertexWithinArea_Vertex_LocalPos_Global.X <= isVertexWithinArea_Square_ForwardPosLocal_Global.X) {

			if (isVertexWithinArea_Vertex_LocalPos_Global.Y >= isVertexWithinArea_Square_LeftPosLocal_Global.Y && isVertexWithinArea_Vertex_LocalPos_Global.Y <= isVertexWithinArea_Square_RightPosLocal_Global.Y) {

				if (isVertexWithinArea_Vertex_LocalPos_Global.Z >= isVertexWithinArea_Square_DownPosLocal_Global.Z && isVertexWithinArea_Vertex_LocalPos_Global.Z <= isVertexWithinArea_Square_UpPosLocal_Global.Z) {

					return true;
				}
			}
		}

		break;

	case Enum_PaintWithinAreaShape::isSphereShape:

		// If within Radius
		if ((componentToCheckIfIsWithinInfo.componentWorldTransform.GetLocation() - vertexWorldPosition).Size() <= componentToCheckIfIsWithinInfo.isVertexWithinArea_Sphere_Radius) {

			return true;
		}

		break;

		// Note this is very expensive, it will give a 100% check and work on meshes on any shapes unlike the simple Cube and Spheres below. 
	case Enum_PaintWithinAreaShape::isComplexShape:

		if (componentToCheckIfIsWithinInfo.componentToCheckIfIsWithin) {

			isVertexWithinArea_ShouldTrace = false;
			isVertexWithinArea_TraceEndLocation = vertexWorldPosition + FVector(0.001f, 0.001f, 0.001f);


			// If lansdcape then we also run the trace. This was necessary because the landscape bounds on the flat part didn't start until 50cm above it and it became difficult to make sure that the entire mesh got painted if it was below a flat part of the landscape. This just makes everything so much easier UX wise because otherwise we had to require the user to make a hole somewhere on the landscape to extend the bounds etc. 
			if (componentToCheckIfIsWithinInfo.isLandscape) {

				// To check if we're within the landscape, we trace upwards, so if the vertex is underneath it, it can get a hit on the opposite side. 
				isVertexWithinArea_TraceEndLocation = (componentToCheckIfIsWithinInfo.componentToCheckIfIsWithin->GetUpVector() * 100000.0f) + vertexWorldPosition;
				isVertexWithinArea_ShouldTrace = true;
			}

			// If not a landscape we only run a trace if the vertex is within the bounds. Unlike Cube/Rectangle that has to be Exactly where the mesh is even when rotated, we can use this here even when rotated. Should save some performance so we don't run unnecessary traces. 
			else if (componentToCheckIfIsWithinInfo.componentBounds.GetBox().IsInsideOrOn(vertexWorldPosition)) {

				isVertexWithinArea_ShouldTrace = true;
			}

			// NOTE it was very expensive if for instance spline meshes that also demand complex shapes Always traced if you for instance ran a paint within area with spline on a expensive mesh. So any further changes has to make sure that logic works, otherwise a task can take a really long time to finish


			if (isVertexWithinArea_ShouldTrace) {

				// DrawDebugLine(calculateColorsInfo_Global.vertexPaintDetectionHitActor->GetWorld(), vertexWorldPosition, isVertexWithinArea_TraceEndLocation, FColor::Red, false, 1, 0, .5);

				isVertexWithinArea_HitResults_Global.Empty();

				// If the vertex is inside the component. Multi trace in case there's something else inside where we're doing the trace
				calculateColorsInfo_Global.fundementalStruct.taskWorld->LineTraceMultiByObjectType(isVertexWithinArea_HitResults_Global, vertexWorldPosition, isVertexWithinArea_TraceEndLocation, componentToCheckIfIsWithinInfo.componentToCheckIfIsWithin->GetCollisionObjectType(), isVertexWithinArea_ComplexShape_TraceParams_Global);

				for (auto hitResultTemp : isVertexWithinArea_HitResults_Global) {

					if (componentToCheckIfIsWithinInfo.componentToCheckIfIsWithin == hitResultTemp.Component.Get()) {

						return true;
					}
				}
			}
		}

		break;

	default:
		break;
	}

	return false;
}


//-------------------------------------------------------

// Is Task Valid

bool FVertexPaintCalculateColorsTask::IsTaskValid() {

	if (!UVertexPaintFunctionLibrary::IsWorldValid(calculateColorsInfo_Global.fundementalStruct.taskWorld)) return false;
	if (!IsValid(calculateColorsInfo_Global.vertexPaintActor)) return false;
	if (!IsValid(calculateColorsInfo_Global.vertexPaintComponent)) return false;


	// If the mesh has been changed mid task to something else then abort the calculation immediately
	if (IsValid(calculateColorsInfo_Global.vertexPaintStaticMeshComponent)) {

		if (calculateColorsInfo_Global.vertexPaintSourceMesh != UVertexPaintFunctionLibrary::GetMeshComponentSourceMesh(calculateColorsInfo_Global.vertexPaintComponent)) {

			return false;
		}
	}

	else if (calculateColorsInfo_Global.vertexPaintSkelComponent) {

		// We don't want to run GetMeshComponentSourceMesh here for skel meshes as it's not thread safe because for ue5 it .Get() a soft ptr
		if (calculateColorsInfo_Global.vertexPaintSourceMesh != calculateColorsInfo_Global.vertexPaintSkelComponentsSkeletalMesh) {

			return false;
		}
	}

#if ENGINE_MAJOR_VERSION == 5

	else if (IsValid(calculateColorsInfo_Global.vertexPaintDynamicMeshComponent)) {

		if (!IsValid(calculateColorsInfo_Global.vertexPaintDynamicMeshComponent->GetDynamicMesh()))
			return false;
	}

	if (IsValid(calculateColorsInfo_Global.vertexPaintGeometryCollectionComponent)) {

		if (calculateColorsInfo_Global.vertexPaintGeometryCollection != calculateColorsInfo_Global.vertexPaintGeometryCollectionComponent->GetRestCollection()) {

			return false;
		}
	}

#endif

	return true;
}


//-------------------------------------------------------

// Is Valid Skeletal Mesh

bool FVertexPaintCalculateColorsTask::IsValidSkeletalMesh(USkeletalMesh * skeletalMesh, USkeletalMeshComponent * skeletalMeshComponent, FSkeletalMeshRenderData * skeletalMeshRenderData, int lod) {


	if (!IsValid(skeletalMesh)) {

		calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Failed for Skeletal Mesh Component as it's Skeletal Mesh isn't valid")), FColor::Red));

		return false;
	}

	if (!IsValid(skeletalMeshComponent)) {

		calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Failed for Skeletal Mesh Component as it's Skeletal Mesh Component isn't valid")), FColor::Red));

		return false;
	}

	if (!skeletalMeshRenderData) {

		calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Failed for Skeletal Mesh Component as it's SkeletalMeshRenderData isn't valid. ")), FColor::Red));

		return false;
	}

	if (!skeletalMeshRenderData->IsInitialized()) {

		calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Failed for Skeletal Mesh Component as it's SkeletalMeshRenderData isn't initialized. ")), FColor::Red));

		return false;
	}

	if (!skeletalMeshRenderData->LODRenderData.IsValidIndex(lod)) {

		calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Failed for Skeletal Mesh Component as it's SkeletalMeshRenderData's LodRenderData isn't valid for the current LOD we're looping through. ")), FColor::Red));

		return false;
	}

	return true;
}


//-------------------------------------------------------

// Is Vertex Close To Estimated Color To Hit Location

void FVertexPaintCalculateColorsTask::IsVertexCloseToEstimatedColorToHitLocation(float& currentLongestDistance, int& currentLongestDistanceIndex, TMap<int, FDirectionFromHitLocationToClosestVerticesInfo>&directionFromHitToClosestVertices, const FVector & hitLocationInWorldSpace, const FVector & vertexInWorldSpace, int vertexLODIndex) {

	if (vertexLODIndex < 0) return;


	int directionFromHitToClosestVerticesInfo_IndexAddedTemp = -1;

	// If less than 9 then always adds then and doesn't require a distance check
	if (directionFromHitToClosestVertices.Num() < 9) {

		directionFromHitToClosestVerticesInfo_IndexAddedTemp = directionFromHitToClosestVertices.Num();
	}

	// If we've already filled up 9 closest verts then we require that the current vertex has to be at least shorter than the longest in the TMap for it to replace it. 
	else if ((hitLocationInWorldSpace - vertexInWorldSpace).Size() < currentLongestDistance) {

		// Replaces the index where the longest distance used to be, so it's not a part of the TMap
		directionFromHitToClosestVerticesInfo_IndexAddedTemp = currentLongestDistanceIndex;
	}


	// If we should replace any index because we either had < 9 in the TMap, or the current vertex had shorter distance than the longest in the TMap
	if (directionFromHitToClosestVerticesInfo_IndexAddedTemp != -1) {


		FDirectionFromHitLocationToClosestVerticesInfo directionFromHitToClosestVerticesInfo_NewEntry;
		directionFromHitToClosestVerticesInfo_NewEntry.lodVertexIndex = vertexLODIndex;
		directionFromHitToClosestVerticesInfo_NewEntry.vertexWorldPosition = vertexInWorldSpace;
		directionFromHitToClosestVerticesInfo_NewEntry.directionFromHitDirectionToVertex = UKismetMathLibrary::GetDirectionUnitVector(hitLocationInWorldSpace, vertexInWorldSpace);
		directionFromHitToClosestVerticesInfo_NewEntry.distanceFromHitLocation = (hitLocationInWorldSpace - vertexInWorldSpace).Size();


		directionFromHitToClosestVertices.Add(directionFromHitToClosestVerticesInfo_IndexAddedTemp, directionFromHitToClosestVerticesInfo_NewEntry);

		// Loops through the current in the TMap when a new one gets added so we can update which is of them has the longest distance, so we can compare against that the next loop
		TArray<FDirectionFromHitLocationToClosestVerticesInfo> directionFromHitToClosestVerticesInfo_ValuesTemp;
		directionFromHitToClosestVertices.GenerateValueArray(directionFromHitToClosestVerticesInfo_ValuesTemp);

		int indexWithLongestDistanceTemp = 0;
		float longestDistanceToVertexTemp = directionFromHitToClosestVerticesInfo_ValuesTemp[0].distanceFromHitLocation;

		for (int i = 0; i < directionFromHitToClosestVerticesInfo_ValuesTemp.Num(); i++) {


			if (directionFromHitToClosestVerticesInfo_ValuesTemp[i].distanceFromHitLocation > longestDistanceToVertexTemp) {

				indexWithLongestDistanceTemp = i;
				longestDistanceToVertexTemp = directionFromHitToClosestVerticesInfo_ValuesTemp[i].distanceFromHitLocation;
			}
		}

		// Updates the cached values so these are the new longestDistance and index, so we can check against the distance the next loop
		currentLongestDistanceIndex = indexWithLongestDistanceTemp;
		currentLongestDistance = longestDistanceToVertexTemp;
	}
}


//-------------------------------------------------------

// Get Estimated Color To Hit Location Vertex To Lerp Color Toward

int FVertexPaintCalculateColorsTask::GetEstimatedColorToHitLocationVertexToLerpColorToward(const TMap<int, FDirectionFromHitLocationToClosestVerticesInfo>&directionFromHitToClosestVertices, TArray<FVector>&closestVerticesToTheHitLocationInWorldLocation, const FVector & directionToClosestVertex, const int& closestVertexBased, const float& dotGraceRange) {

	if (closestVertexBased <= 0) return -1;
	if (directionFromHitToClosestVertices.Num() <= 0) return -1;


	int closestVertexToLerpTowardIndex_Temp = -1;
	float closestVertexToLerpTowardDistance_Temp = 1000000;
	float closestVertexToLerpTowardDot_Temp = -1;

	float currentDotTemp = -1;
	float currentDistanceTemp = 0;

	// The direction from the hit location to the closest vertex * -1, i.e the direction we want to get the vertex to scale to
	FVector directionFromClosestVertexToHitLocation_Temp = directionToClosestVertex * -1;

	TArray< FDirectionFromHitLocationToClosestVerticesInfo> directionFromHitLocInfoTemp;
	directionFromHitToClosestVertices.GenerateValueArray(directionFromHitLocInfoTemp);


	for (int i = 0; i < directionFromHitLocInfoTemp.Num(); i++) {


		closestVerticesToTheHitLocationInWorldLocation.Add(directionFromHitLocInfoTemp[i].vertexWorldPosition);

		currentDotTemp = FVector::DotProduct(directionFromClosestVertexToHitLocation_Temp, directionFromHitLocInfoTemp[i].directionFromHitDirectionToVertex);
		currentDistanceTemp = directionFromHitLocInfoTemp[i].distanceFromHitLocation;


		if (currentDotTemp > closestVertexToLerpTowardDot_Temp) {

			// If has better dot than the current best dot, but the current best with added grace range is equal or better, and has shorter range, then we keep it since short distance is high prio
			if ((closestVertexToLerpTowardDot_Temp + dotGraceRange) >= currentDotTemp && closestVertexToLerpTowardDistance_Temp < currentDistanceTemp) {

				//
			}
			else {

				closestVertexToLerpTowardDot_Temp = currentDotTemp;
				closestVertexToLerpTowardDistance_Temp = currentDistanceTemp;
				closestVertexToLerpTowardIndex_Temp = directionFromHitLocInfoTemp[i].lodVertexIndex;
			}
		}

		// If doesn't have better dot, but with added grace period is better or equal, and has shorter range. So if something is closer, but has slightly worse dot, then it may still be choosen since distance has high prio
		else if ((currentDotTemp + dotGraceRange) >= closestVertexToLerpTowardDot_Temp && currentDistanceTemp < closestVertexToLerpTowardDistance_Temp) {

			closestVertexToLerpTowardDot_Temp = currentDotTemp;
			closestVertexToLerpTowardDistance_Temp = currentDistanceTemp;
			closestVertexToLerpTowardIndex_Temp = directionFromHitLocInfoTemp[i].lodVertexIndex;
		}
	}

	return closestVertexToLerpTowardIndex_Temp;
}


//-------------------------------------------------------

// Get Estimated Color To Hit Location Values

void FVertexPaintCalculateColorsTask::GetEstimatedColorToHitLocationValues(const int& vertexToLerpToward, const FColor & closestVertexColor, const FVector & closestVertexInWorldSpace, const FVector & hitLocationInWorldSpace, const FColor & vertexToLerpTowardColor, const FVector & vertexToLerpTowardPositionInWorldSpace, FLinearColor & estimatedColorAtHitLocation, FVector & estimatedHitLocation) {


	// If got vertex to lerp toward, then sets colorToHitLocation_AfterApplyingColors_Paint_Global 
	if (vertexToLerpToward >= 0) {

		// Distance from Closest Paint to Hit Location
		float distanceFromClosestVertexToHitLocationTemp = (hitLocationInWorldSpace - closestVertexInWorldSpace).Size();

		// Distance to from closest vertex paint to vertex to lerp toward
		float distanceFromClosestVertexToVertexWeLerpTowardTemp = (closestVertexInWorldSpace - vertexToLerpTowardPositionInWorldSpace).Size();


		// Depending on the distance from the closest vertex position to the vertex we lerp toward position, we convert to Linear and scale the color so it should pretty accurate to what the actual Hit Location Color Should be. 

		estimatedColorAtHitLocation = UKismetMathLibrary::LinearColorLerp(UVertexPaintFunctionLibrary::ReliableFColorToFLinearColor(closestVertexColor), UVertexPaintFunctionLibrary::ReliableFColorToFLinearColor(vertexToLerpTowardColor), UKismetMathLibrary::MapRangeClamped(distanceFromClosestVertexToHitLocationTemp, 0, distanceFromClosestVertexToVertexWeLerpTowardTemp, 0, 1));
		// estimatedColorAtHitLocation = UKismetMathLibrary::LinearColorLerp(closestVertexColor.ReinterpretAsLinear(), vertexToLerpTowardColor.ReinterpretAsLinear(), UKismetMathLibrary::MapRangeClamped(distanceFromClosestVertexToHitLocationTemp, 0, distanceFromClosestVertexToVertexWeLerpTowardTemp, 0, 1));

		estimatedHitLocation = UKismetMathLibrary::VLerp(closestVertexInWorldSpace, vertexToLerpTowardPositionInWorldSpace, UKismetMathLibrary::MapRangeClamped(distanceFromClosestVertexToHitLocationTemp, 0, distanceFromClosestVertexToVertexWeLerpTowardTemp, 0, 1));
	}
}


//-------------------------------------------------------

// Get Spline Mesh Vertex Position In Mesh Space

FVector FVertexPaintCalculateColorsTask::GetSplineMeshVertexPositionInMeshSpace(const FVector & vertexPos, USplineMeshComponent * splineMeshComponent) {

	if (!IsValid(splineMeshComponent)) return FVector(0, 0, 0);

	FVector slicePos = vertexPos;
	slicePos[splineMeshComponent->ForwardAxis] = 0;
	const FVector SplineMeshSpaceVector = splineMeshComponent->CalcSliceTransform(vertexPos[splineMeshComponent->ForwardAxis]).TransformPosition(slicePos);

	return SplineMeshSpaceVector;
}


//-------------------------------------------------------

// Get Spline Mesh Vertex Normal In Mesh Space

FVector FVertexPaintCalculateColorsTask::GetSplineMeshVertexNormalInMeshSpace(const FVector & normal, USplineMeshComponent * splineMeshComponent) {

	if (!IsValid(splineMeshComponent)) return FVector(0, 0, 0);

	FVector sliceNormal = normal;
	sliceNormal[splineMeshComponent->ForwardAxis] = 0;
	const FVector SplineMeshSpaceVector = splineMeshComponent->CalcSliceTransform(sliceNormal[splineMeshComponent->ForwardAxis]).TransformVector(sliceNormal);

	return SplineMeshSpaceVector;
}


//-------------------------------------------------------

// Is Current Vertex Color Within Conditions

bool FVertexPaintCalculateColorsTask::IsCurrentVertexWithinPaintColorConditions(const FColor & currentVertexColor, const FVector & currentVertexPosition, const FVector & currentVertexNormal, const FName & currentBoneName, float boneWeight, const FVertexDetectPaintColorConditionStruct & paintConditions, bool& hasToHaveConditionsMetToApplyColors, float& colorStrengthIfConditionsIsNotMet) {

	hasToHaveConditionsMetToApplyColors = false;
	colorStrengthIfConditionsIsNotMet = 0;


	for (FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation onlyIncludeVerticesWithDirectionToActorOrLocation : paintConditions.onlyAffectVerticesWithDirectionToActorOrLocation) {


		if (UKismetMathLibrary::Dot_VectorVector(currentVertexNormal, UKismetMathLibrary::GetDirectionUnitVector(currentVertexPosition, onlyIncludeVerticesWithDirectionToActorOrLocation.location)) > onlyIncludeVerticesWithDirectionToActorOrLocation.minDotProductToActorOrLocation) {

			// return true;
		}

		else {

			hasToHaveConditionsMetToApplyColors = onlyIncludeVerticesWithDirectionToActorOrLocation.hasToHaveConditionMetToApplyAnyColorsAtAll;

			// If didn't reach it's condition and has it as a requirement for Any colors to be applied then reset whatever been set earlier. 
			if (onlyIncludeVerticesWithDirectionToActorOrLocation.hasToHaveConditionMetToApplyAnyColorsAtAll)
				colorStrengthIfConditionsIsNotMet = 0;

			else
				colorStrengthIfConditionsIsNotMet = onlyIncludeVerticesWithDirectionToActorOrLocation.colorStrengthIfThisConditionIsNotMet;


			return false;
		}
	}

	for (FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation onlyIncludeVerticesWithinDirection : paintConditions.onlyAffectVerticesWithinDirectionFromActorOrLocation) {


		if (UKismetMathLibrary::Dot_VectorVector(onlyIncludeVerticesWithinDirection.direction, UKismetMathLibrary::GetDirectionUnitVector(onlyIncludeVerticesWithinDirection.location, currentVertexPosition)) > onlyIncludeVerticesWithinDirection.minDotProductToDirection) {

			// If meet condition, then continues by checking the rest of the conditions
		}

		else {

			hasToHaveConditionsMetToApplyColors = onlyIncludeVerticesWithinDirection.hasToHaveConditionMetToApplyAnyColorsAtAll;

			// If didn't reach it's condition and has it as a requirement for Any colors to be applied then reset whatever been set earlier. 
			if (onlyIncludeVerticesWithinDirection.hasToHaveConditionMetToApplyAnyColorsAtAll)
				colorStrengthIfConditionsIsNotMet = 0;

			else 
				colorStrengthIfConditionsIsNotMet = onlyIncludeVerticesWithinDirection.colorStrengthIfThisConditionIsNotMet;


			return false;
		}
	}

	for (FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ aboveOrBelowZCondition : paintConditions.ifVertexIsAboveOrBelowWorldZ) {

		// If set to check if the position Z is above or equal to the the Z value then returns false if it's below it
		if (aboveOrBelowZCondition.checkIfAboveInsteadOfBelowZ) {

			if (currentVertexPosition.Z < aboveOrBelowZCondition.ifVertexIsAboveOrBelowWorldZ) {

				hasToHaveConditionsMetToApplyColors = aboveOrBelowZCondition.hasToHaveConditionMetToApplyAnyColorsAtAll;

				// If didn't reach it's condition and has it as a requirement for Any colors to be applied then reset whatever been set earlier. 
				if (aboveOrBelowZCondition.hasToHaveConditionMetToApplyAnyColorsAtAll)
					colorStrengthIfConditionsIsNotMet = 0;

				else
					colorStrengthIfConditionsIsNotMet = aboveOrBelowZCondition.colorStrengthIfThisConditionIsNotMet;

				return false;
			}
		}

		// If requires that the vertex position should be equal or below then fails if above it. 
		else {

			if (currentVertexPosition.Z > aboveOrBelowZCondition.ifVertexIsAboveOrBelowWorldZ) {

				hasToHaveConditionsMetToApplyColors = aboveOrBelowZCondition.hasToHaveConditionMetToApplyAnyColorsAtAll;

				if (aboveOrBelowZCondition.hasToHaveConditionMetToApplyAnyColorsAtAll)
					colorStrengthIfConditionsIsNotMet = 0;

				else
					colorStrengthIfConditionsIsNotMet = aboveOrBelowZCondition.colorStrengthIfThisConditionIsNotMet;

				return false;
			}
		}
	}

	for (FVertexDetectPaintColorCondition_IsWithinColorRangeStruct withinRangeCondition : paintConditions.ifVertexColorIsWithinRange) {

		switch (withinRangeCondition.ifVertexColorChannelWithinColorRange) {

		case Enum_SurfaceAtChannel::RedChannel:

			if (currentVertexColor.R >= UKismetMathLibrary::MapRangeClamped(withinRangeCondition.ifCurrentVertexColorValueIsHigherOrEqualThan, 0, 1, 0, 255) && currentVertexColor.R <= UKismetMathLibrary::MapRangeClamped(withinRangeCondition.ifCurrentVertexColorValueIsLessOrEqualThan, 0, 1, 0, 255)) {

				// UE_LOG(LogTemp, Warning, TEXT("If Red Channel is Within Color Range! Higher or EqualThan: %f  -   ifCurrentVertexColorValueIsLessOrEqualThan: %f"), withinRangeCondition.ifCurrentVertexColorValueIsHigherOrEqualThan, withinRangeCondition.ifCurrentVertexColorValueIsLessOrEqualThan);
			}
			else {

				hasToHaveConditionsMetToApplyColors = withinRangeCondition.hasToHaveConditionMetToApplyAnyColorsAtAll;

				if (withinRangeCondition.hasToHaveConditionMetToApplyAnyColorsAtAll)
					colorStrengthIfConditionsIsNotMet = 0;

				else
					colorStrengthIfConditionsIsNotMet = withinRangeCondition.colorStrengthIfThisConditionIsNotMet;


				return false;
			}

			break;

		case Enum_SurfaceAtChannel::GreenChannel:

			if (currentVertexColor.G >= UKismetMathLibrary::MapRangeClamped(withinRangeCondition.ifCurrentVertexColorValueIsHigherOrEqualThan, 0, 1, 0, 255) && currentVertexColor.G <= UKismetMathLibrary::MapRangeClamped(withinRangeCondition.ifCurrentVertexColorValueIsLessOrEqualThan, 0, 1, 0, 255)) {

				// UE_LOG(LogTemp, Warning, TEXT("If Green Channel is Within Color Range! Higher or EqualThan: %f  -   ifCurrentVertexColorValueIsLessOrEqualThan: %f"), withinRangeCondition.ifCurrentVertexColorValueIsHigherOrEqualThan, withinRangeCondition.ifCurrentVertexColorValueIsLessOrEqualThan);
			}
			else {

				hasToHaveConditionsMetToApplyColors = withinRangeCondition.hasToHaveConditionMetToApplyAnyColorsAtAll;

				if (withinRangeCondition.hasToHaveConditionMetToApplyAnyColorsAtAll)
					colorStrengthIfConditionsIsNotMet = 0;

				else
					colorStrengthIfConditionsIsNotMet = withinRangeCondition.colorStrengthIfThisConditionIsNotMet;


				return false;
			}

			break;

		case Enum_SurfaceAtChannel::BlueChannel:

			if (currentVertexColor.B >= UKismetMathLibrary::MapRangeClamped(withinRangeCondition.ifCurrentVertexColorValueIsHigherOrEqualThan, 0, 1, 0, 255) && currentVertexColor.B <= UKismetMathLibrary::MapRangeClamped(withinRangeCondition.ifCurrentVertexColorValueIsLessOrEqualThan, 0, 1, 0, 255)) {

				// UE_LOG(LogTemp, Warning, TEXT("If Blue Channel is Within Color Range! Higher or EqualThan: %f  -   ifCurrentVertexColorValueIsLessOrEqualThan: %f"), withinRangeCondition.ifCurrentVertexColorValueIsHigherOrEqualThan, withinRangeCondition.ifCurrentVertexColorValueIsLessOrEqualThan);
			}
			else {

				hasToHaveConditionsMetToApplyColors = withinRangeCondition.hasToHaveConditionMetToApplyAnyColorsAtAll;

				if (withinRangeCondition.hasToHaveConditionMetToApplyAnyColorsAtAll)
					colorStrengthIfConditionsIsNotMet = 0;

				else
					colorStrengthIfConditionsIsNotMet = withinRangeCondition.colorStrengthIfThisConditionIsNotMet;


				return false;
			}

			break;

		case Enum_SurfaceAtChannel::AlphaChannel:

			if (currentVertexColor.A >= UKismetMathLibrary::MapRangeClamped(withinRangeCondition.ifCurrentVertexColorValueIsHigherOrEqualThan, 0, 1, 0, 255) && currentVertexColor.A <= UKismetMathLibrary::MapRangeClamped(withinRangeCondition.ifCurrentVertexColorValueIsLessOrEqualThan, 0, 1, 0, 255)) {

				// UE_LOG(LogTemp, Warning, TEXT("If Alpha Channel is Within Color Range! Higher or EqualThan: %f  -   ifCurrentVertexColorValueIsLessOrEqualThan: %f"), withinRangeCondition.ifCurrentVertexColorValueIsHigherOrEqualThan, withinRangeCondition.ifCurrentVertexColorValueIsLessOrEqualThan);
			}
			else {

				hasToHaveConditionsMetToApplyColors = withinRangeCondition.hasToHaveConditionMetToApplyAnyColorsAtAll;

				if (withinRangeCondition.hasToHaveConditionMetToApplyAnyColorsAtAll)
					colorStrengthIfConditionsIsNotMet = 0;

				else
					colorStrengthIfConditionsIsNotMet = withinRangeCondition.colorStrengthIfThisConditionIsNotMet;

				return false;
			}

			break;

		default:
			break;
		}
	}

	if (paintConditions.ifVertexIsOnBone.Num() > 0 && currentBoneName.GetStringLength() > 0) {

		paintCondition_AtAnyBone_Global = false;
		paintConditions_VertexOnBone_HasToHaveConditionMeet_Global = false;
		paintConditions_VertexOnBone_ColorToApplyIfFailed_Global = 0;

		for (const FVertexDetectPaintColorCondition_IsBoneStruct& onBoneCondition : paintConditions.ifVertexIsOnBone) {

			if (boneWeight >= onBoneCondition.minBoneWeight && onBoneCondition.ifVertexIsAtBone == currentBoneName) {

				paintCondition_AtAnyBone_Global = true;
				paintConditions_VertexOnBone_HasToHaveConditionMeet_Global = onBoneCondition.hasToHaveConditionMetToApplyAnyColorsAtAll;
				paintConditions_VertexOnBone_ColorToApplyIfFailed_Global = onBoneCondition.colorStrengthIfThisConditionIsNotMet;

				break;
			}
		}

		// If still false if we had bone conditions it means that we're not on the right bone
		if (!paintCondition_AtAnyBone_Global) {

			hasToHaveConditionsMetToApplyColors = paintConditions_VertexOnBone_HasToHaveConditionMeet_Global;

			if (paintConditions_VertexOnBone_HasToHaveConditionMeet_Global)
				colorStrengthIfConditionsIsNotMet = 0;

			else
				colorStrengthIfConditionsIsNotMet = paintConditions_VertexOnBone_ColorToApplyIfFailed_Global;

			return false;
		}
	}

	// Does the Line of Sight last as it takes the longest to finish and don't want to run it if any other condition should make it fail
	for (FVertexDetectPaintColorCondition_HasLineOfSightStruct withinLineOfSightCondition : paintConditions.ifVertexHasLineOfSightTo) {


		EDrawDebugTrace::Type debugTrace_Local = EDrawDebugTrace::None;
		if (calculateColorsInfo_Global.fundementalStruct.debugSettings.gameThreadSpecificDebugSymbols.drawPaintConditionsDebugSymbols && inGameThread_Global)
			debugTrace_Local = EDrawDebugTrace::ForDuration;


		if (UKismetSystemLibrary::LineTraceSingleForObjects(calculateColorsInfo_Global.vertexPaintComponent, currentVertexPosition + (currentVertexNormal * withinLineOfSightCondition.distanceFromVertexPositionToStartTrace), withinLineOfSightCondition.ifVertexHasLineOfSightToPosition, withinLineOfSightCondition.checkLineOfSightAgainstObjectTypes, withinLineOfSightCondition.traceForComplex, withinLineOfSightCondition.lineOfSightTraceActorsToIgnore, debugTrace_Local, paintConditions_LineOfSightHitResult_Global, withinLineOfSightCondition.ignoreMeshActorTryingToApplyPaintOn, FLinearColor::Green, FLinearColor::Red, calculateColorsInfo_Global.fundementalStruct.debugSettings.gameThreadSpecificDebugSymbols.drawGameThreadSpecificDebugSymbolsDuration)) {


			hasToHaveConditionsMetToApplyColors = withinLineOfSightCondition.hasToHaveConditionMetToApplyAnyColorsAtAll;

			if (withinLineOfSightCondition.hasToHaveConditionMetToApplyAnyColorsAtAll)
				colorStrengthIfConditionsIsNotMet = 0;

			else
				colorStrengthIfConditionsIsNotMet = withinLineOfSightCondition.colorStrengthIfThisConditionIsNotMet;


			// If something is blocking, i.e. the vertex doesn't have line of sight
			return false;
		}
	}


	// If haven't returned false by now, i.e. haven't failed a condition, then we return true.
	return true;
}


//-------------------------------------------------------

// Will Applied Paint Make Change

bool FVertexPaintCalculateColorsTask::WillAppliedColorMakeChangeOnVertex(const FColor& currentColorOnVertex, const FVector& currentLocationOnVertex, const FVector& currentNormalOnVertex, const FVertexDetectFundementalStruct& fundementalSettings, const FVertexPaintColorSettingStruct& paintColorSettings) {


	if (paintColorSettings.applyVertexColorSettings.IsAnyColorChannelSetToSetColor()) {

		return true;
	}

	else if (paintColorSettings.applyVertexColorSettings.IsAnyColorChannelSetToSetToLerpToTarget()) {

		return true;
	}

	else if (paintColorSettings.applyVertexColorSettings.IsAnyColorChannelSetToAddColorAndIsNotZero()) {

		// If color is maxed then the strength has to be -, i.e. the player has to try to remove it. If the color is at 0, then the player has to add to it. 

		// Red
		if (paintColorSettings.applyVertexColorSettings.applyColorsOnRedChannel.amountToApply > 0 || paintColorSettings.applyVertexColorSettings.applyColorsOnRedChannel.amountToApply < 0) {


			// If in between min and max and we're trying to Add/Remove
			if (currentColorOnVertex.R > 0 || currentColorOnVertex.R < 255) {

				return true;
			}

			// If 0 and trying to Add, or 255 and trying to Remove
			else if ((currentColorOnVertex.R <= 0 && paintColorSettings.applyVertexColorSettings.applyColorsOnRedChannel.amountToApply > 0) || (currentColorOnVertex.R >= 255 && paintColorSettings.applyVertexColorSettings.applyColorsOnRedChannel.amountToApply < 0)) {

				return true;
			}
		}

		// Green
		if (paintColorSettings.applyVertexColorSettings.applyColorsOnGreenChannel.amountToApply > 0 || paintColorSettings.applyVertexColorSettings.applyColorsOnGreenChannel.amountToApply < 0) {


			// If in between min and max and we're trying to Add/Remove
			if (currentColorOnVertex.G > 0 || currentColorOnVertex.G < 255) {

				return true;
			}

			// If 0 and trying to Add, or 255 and trying to Remove
			else if ((currentColorOnVertex.G <= 0 && paintColorSettings.applyVertexColorSettings.applyColorsOnGreenChannel.amountToApply > 0) || (currentColorOnVertex.G >= 255 && paintColorSettings.applyVertexColorSettings.applyColorsOnGreenChannel.amountToApply < 0)) {

				return true;
			}
		}

		// Blue
		if (paintColorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.amountToApply > 0 || paintColorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.amountToApply < 0) {


			// If in between min and max and we're trying to Add/Remove
			if (currentColorOnVertex.B > 0 || currentColorOnVertex.B < 255) {

				return true;
			}

			// If 0 and trying to Add, or 255 and trying to Remove
			else if ((currentColorOnVertex.B <= 0 && paintColorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.amountToApply > 0) || (currentColorOnVertex.B >= 255 && paintColorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.amountToApply < 0)) {

				return true;
			}
		}

		// Alpha
		if (paintColorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.amountToApply > 0 || paintColorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.amountToApply < 0) {


			// If in between min and max and we're trying to Add/Remove
			if (currentColorOnVertex.A > 0 || currentColorOnVertex.A < 255) {

				return true;
			}

			// If 0 and trying to Add, or 255 and trying to Remove
			else if ((currentColorOnVertex.A <= 0 && paintColorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.amountToApply > 0) || (currentColorOnVertex.A >= 255 && paintColorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.amountToApply < 0)) {

				return true;
			}
		}

	}


	return false;
}


//-------------------------------------------------------

// Get Vertex Color After Any Limitation

void FVertexPaintCalculateColorsTask::GetVertexColorAfterAnyLimitation(bool limitIfColorWasAlreadyOverLimit, float originalRedVertexColor, float newRedVertexColorToApply, float redVertexColorLimit, float originalGreenVertexColor, float newGreenVertexColorToApply, float greenVertexColorLimit, float originalBlueVertexColor, float newBlueVertexColorToApply, float blueVertexColorLimit, float originalAlphaVertexColor, float newAlphaVertexColorToApply, float alphaVertexColorLimit, float& finalRedVertexColorToApply, float& finalGreenVertexColorToApply, float& finalBlueVertexColorToApply, float& finalAlphaVertexColorToApply) {

	redVertexColorLimit_Global = UKismetMathLibrary::MapRangeClamped(redVertexColorLimit, 0, 1, 0, 255);
	greenVertexColorLimit_Global = UKismetMathLibrary::MapRangeClamped(greenVertexColorLimit, 0, 1, 0, 255);
	blueVertexColorLimit_Global = UKismetMathLibrary::MapRangeClamped(blueVertexColorLimit, 0, 1, 0, 255);
	alphaVertexColorLimit_Global = UKismetMathLibrary::MapRangeClamped(alphaVertexColorLimit, 0, 1, 0, 255);


	// Red

	// If set to limit color if already over it, then if either the original or the new vertex color is over the limit, we limit it. 
	if (limitIfColorWasAlreadyOverLimit && (originalRedVertexColor > redVertexColorLimit_Global || newRedVertexColorToApply > redVertexColorLimit_Global))
		newRedVertexColorToApply = redVertexColorLimit_Global;
	else if (originalRedVertexColor <= redVertexColorLimit_Global && newRedVertexColorToApply >= redVertexColorLimit_Global)
		newRedVertexColorToApply = redVertexColorLimit_Global; // If we originally was below, but with the added colors we're now at or above the limit


	// Green
	if (limitIfColorWasAlreadyOverLimit && (originalGreenVertexColor > greenVertexColorLimit_Global || newGreenVertexColorToApply > greenVertexColorLimit_Global))
		newGreenVertexColorToApply = greenVertexColorLimit_Global;
	else if (originalGreenVertexColor <= greenVertexColorLimit_Global && newGreenVertexColorToApply >= greenVertexColorLimit_Global)
		newGreenVertexColorToApply = greenVertexColorLimit_Global;


	// Blue
	if (limitIfColorWasAlreadyOverLimit && (originalBlueVertexColor > blueVertexColorLimit_Global || newBlueVertexColorToApply > blueVertexColorLimit_Global))
		newBlueVertexColorToApply = blueVertexColorLimit_Global;
	else if (originalBlueVertexColor <= blueVertexColorLimit_Global && newBlueVertexColorToApply >= blueVertexColorLimit_Global)
		newBlueVertexColorToApply = blueVertexColorLimit_Global;


	// Alpha
	if (limitIfColorWasAlreadyOverLimit && (originalAlphaVertexColor > alphaVertexColorLimit_Global || newAlphaVertexColorToApply > alphaVertexColorLimit_Global))
		newAlphaVertexColorToApply = alphaVertexColorLimit_Global;
	else if (originalAlphaVertexColor <= alphaVertexColorLimit_Global && newAlphaVertexColorToApply >= alphaVertexColorLimit_Global)
		newAlphaVertexColorToApply = alphaVertexColorLimit_Global;


	finalRedVertexColorToApply = newRedVertexColorToApply;
	finalGreenVertexColorToApply = newGreenVertexColorToApply;
	finalBlueVertexColorToApply = newBlueVertexColorToApply;
	finalAlphaVertexColorToApply = newAlphaVertexColorToApply;
}


//-------------------------------------------------------

// Get Color To Apply On Vertex - Calculates strength depending on distance and falloff etc. 

FColor FVertexPaintCalculateColorsTask::GetColorToApplyOnVertex(UVertexPaintDetectionComponent* associatedPaintComponent, UPrimitiveComponent* meshComponentToApplyColorsTo, int currentLOD, int currentVertexIndex, UMaterialInterface* materialVertexIsOn, const TArray<TEnumAsByte<EPhysicalSurface>>& registeredPhysicsSurfacesAtMaterialVertexIsOn, bool isVertexOnCloth, const FLinearColor& currentLinearVertexColor, const FColor& currentVertexColor, const FVector& currentVertexWorldPosition, const FVector& currentVertexNormal, const FName& currentBoneName, float boneWeight, const FVertexDetectFallOffSettings& fallOffSettings, float fallOffRange, float scaleFallOffFrom, float distanceFromFalloffBaseToVertexLocation, const FVertexPaintColorSettingStruct& paintOnMeshColorSetting, bool& vertexGotColorChanged, bool applyColorOnRedChannel, bool applyColorOnGreenChannel, bool applyColorOnBlueChannel, bool applyColorOnAlphaChannel, const FVertexPaintingLimitRGBA& paintLimitOnRGBA) {
	
	vertexGotColorChanged = false;

	// Resets these globalvars here as they're only used here. Using globals as this runs for each vertex, which can be thousands of times
	tryingToApplyColor_Red_Global = 0;
	tryingToApplyColor_Green_Global = 0;
	tryingToApplyColor_Blue_Global = 0;
	tryingToApplyColor_Alpha_Global = 0;
	paintCondition_HasToHaveConditionMetToApplyAnyColorsAtAll_Global = false;
	paintCondition_ColorStrengthIfConditionIsNotMet_Global = 0;

	getColorToApplyOnVertex_Distance_Global = 0;
	getColorToApplyOnVertex_FallOffClamped_Global = 0;
	getColorToApplyOnVertex_Falloff_Global = 0;
	getColorToApplyOnVertex_StrengthAfterFalloff_Global = 1;

	lerpToTargetValue_Global = 0;


	// Takes in bools whether to even change the channel at all. This was necessary because if Painting with Set and using Physics Surface, then we Don't want to change any of the other channels that doesn't have the physics surface, unlike if we Paint with Set with just the values set in RGBA. 
	if (applyColorOnRedChannel) {

		if (IsCurrentVertexWithinPaintColorConditions(currentVertexColor, currentVertexWorldPosition, currentVertexNormal, currentBoneName, boneWeight, paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnRedChannel.paintConditions, paintCondition_HasToHaveConditionMetToApplyAnyColorsAtAll_Global, paintCondition_ColorStrengthIfConditionIsNotMet_Global)) {

			shouldApplyColorOnAnyChannel_Global = true;
			tryingToApplyColor_Red_Global = paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnRedChannel.amountToApply;
		}

		// So if Not supposed to apply anything if no condition is set we set the bool to false so it doesn't try to apply anything at all with the default value of 0. 
		else if (paintCondition_HasToHaveConditionMetToApplyAnyColorsAtAll_Global) {

			applyColorOnRedChannel = false;
		}

		// Otherwise we can fall back to another color strength
		else {

			shouldApplyColorOnAnyChannel_Global = true;
			tryingToApplyColor_Red_Global = paintCondition_ColorStrengthIfConditionIsNotMet_Global;
		}
	}

	if (applyColorOnGreenChannel) {

		if (IsCurrentVertexWithinPaintColorConditions(currentVertexColor, currentVertexWorldPosition, currentVertexNormal, currentBoneName, boneWeight, paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnGreenChannel.paintConditions, paintCondition_HasToHaveConditionMetToApplyAnyColorsAtAll_Global, paintCondition_ColorStrengthIfConditionIsNotMet_Global)) {

			shouldApplyColorOnAnyChannel_Global = true;
			tryingToApplyColor_Green_Global = paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnGreenChannel.amountToApply;
		}
		else if (paintCondition_HasToHaveConditionMetToApplyAnyColorsAtAll_Global) {

			applyColorOnGreenChannel = false;
		}

		else {

			shouldApplyColorOnAnyChannel_Global = true;
			tryingToApplyColor_Green_Global = paintCondition_ColorStrengthIfConditionIsNotMet_Global;
		}
	}

	if (applyColorOnBlueChannel) {

		if (IsCurrentVertexWithinPaintColorConditions(currentVertexColor, currentVertexWorldPosition, currentVertexNormal, currentBoneName, boneWeight, paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnBlueChannel.paintConditions, paintCondition_HasToHaveConditionMetToApplyAnyColorsAtAll_Global, paintCondition_ColorStrengthIfConditionIsNotMet_Global)) {

			shouldApplyColorOnAnyChannel_Global = true;
			tryingToApplyColor_Blue_Global = paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnBlueChannel.amountToApply;
		}
		else if (paintCondition_HasToHaveConditionMetToApplyAnyColorsAtAll_Global) {

			applyColorOnBlueChannel = false;
		}

		else {

			shouldApplyColorOnAnyChannel_Global = true;
			tryingToApplyColor_Blue_Global = paintCondition_ColorStrengthIfConditionIsNotMet_Global;
		}
	}

	if (applyColorOnAlphaChannel) {

		if (IsCurrentVertexWithinPaintColorConditions(currentVertexColor, currentVertexWorldPosition, currentVertexNormal, currentBoneName, boneWeight, paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnAlphaChannel.paintConditions, paintCondition_HasToHaveConditionMetToApplyAnyColorsAtAll_Global, paintCondition_ColorStrengthIfConditionIsNotMet_Global)) {

			shouldApplyColorOnAnyChannel_Global = true;
			tryingToApplyColor_Alpha_Global = paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnAlphaChannel.amountToApply;
		}
		else if (paintCondition_HasToHaveConditionMetToApplyAnyColorsAtAll_Global) {

			applyColorOnAlphaChannel = false;
		}

		else {

			shouldApplyColorOnAnyChannel_Global = true;
			tryingToApplyColor_Alpha_Global = paintCondition_ColorStrengthIfConditionIsNotMet_Global;
		}
	}


	getColorToApplyOnVertex_ColorToApply_Global = currentVertexColor;
	getColorToApplyOnVertex_ColorRed_Global = (float)currentVertexColor.R;
	getColorToApplyOnVertex_ColorGreen_Global = (float)currentVertexColor.G;
	getColorToApplyOnVertex_ColorBlue_Global = (float)currentVertexColor.B;
	getColorToApplyOnVertex_ColorAlpha_Global = (float)currentVertexColor.A;



	if (fallOffSettings.fallOffStrength > 0) {

		// Depending on the vertex pos, sets a distance temp between 0-1. Starts the falloff where the full area effect ends
		getColorToApplyOnVertex_Distance_Global = UKismetMathLibrary::MapRangeClamped(distanceFromFalloffBaseToVertexLocation, scaleFallOffFrom, fallOffRange, 0, 1);


		/* Usedful Debug to check the falloff strength visually

		FColor colorTemp = FColor::Purple;
		colorTemp = UKismetMathLibrary::LinearColorLerp(FLinearColor::Red, FLinearColor::Green, getColorToApplyOnVertex_Distance_Global).ToFColor(false);

		if (!calculateColorsInfo_Global.fundementalStruct.multiThreadSettings.useMultithreadingForCalculations)
			DrawDebugPoint(calculateColorsInfo_Global.vertexPaintDetectionHitActor->GetWorld(), currentVertexWorldPosition, 5, colorTemp, false, calculateColorsInfo_Global.drawVertexesDebugPointsDuration, 0);
		*/

		// Clamps falloff to 0-1 in case user has set something else
		getColorToApplyOnVertex_FallOffClamped_Global = UKismetMathLibrary::FClamp(fallOffSettings.fallOffStrength, 0, 1);

		// Converts to 1-0
		getColorToApplyOnVertex_Falloff_Global = UKismetMathLibrary::MapRangeClamped(getColorToApplyOnVertex_FallOffClamped_Global, 0, 1, 1, 0);

		// If falloff is 0, then it gives 1 even at the longest distance, if falloff is 1, then it scales to 0 at longest distance. 
		getColorToApplyOnVertex_StrengthAfterFalloff_Global = UKismetMathLibrary::MapRangeClamped(getColorToApplyOnVertex_Distance_Global, 0, 1, 1, getColorToApplyOnVertex_Falloff_Global);
	}


	if (applyColorOnRedChannel)
		tryingToApplyColor_Red_Global *= getColorToApplyOnVertex_StrengthAfterFalloff_Global;

	if (applyColorOnGreenChannel)
		tryingToApplyColor_Green_Global *= getColorToApplyOnVertex_StrengthAfterFalloff_Global;

	if (applyColorOnBlueChannel)
		tryingToApplyColor_Blue_Global *= getColorToApplyOnVertex_StrengthAfterFalloff_Global;

	if (applyColorOnAlphaChannel)
		tryingToApplyColor_Alpha_Global *= getColorToApplyOnVertex_StrengthAfterFalloff_Global;

	// If set to limit colors at edge and falloff is less than one and have begun
	if (fallOffSettings.limitFallOffColor && getColorToApplyOnVertex_StrengthAfterFalloff_Global < 1) {


		fallOffLimit_MaxAmountAtEdge_Adding_Global = UKismetMathLibrary::MapRangeClamped(getColorToApplyOnVertex_StrengthAfterFalloff_Global, 1, 0, 1, fallOffSettings.colorLimitAtFallOffEdge);
		fallOffLimit_MaxAmountAtEdge_Removing_Global = UKismetMathLibrary::MapRangeClamped(getColorToApplyOnVertex_StrengthAfterFalloff_Global, 0, 1, 1, fallOffSettings.colorLimitAtFallOffEdge);


		// If set to limit the max paint strength at the falloff edge, then we check if we will get over that limit, depending on where on the falloff the vertex is. If at 1, i.e. the very edge of it, then we check using what we've set as the max allowed amount. If we're gonna be over it, then limits the paint we're trying to apply. 
		if (applyColorOnRedChannel) {

			fallOffLimit_TotalColorAmountIfApplying = UKismetMathLibrary::FClamp((currentLinearVertexColor.R + tryingToApplyColor_Red_Global), 0, 1);

			// If trying to Add but isn't already full
			if (tryingToApplyColor_Red_Global > 0 && currentLinearVertexColor.R < 1) {

				if (fallOffLimit_TotalColorAmountIfApplying > fallOffLimit_MaxAmountAtEdge_Adding_Global) {

					// If going to go past the limit, then only removes the diff up until the limit and not past it. If already past the limit then just 0 so we don't refill places if the falloff source is moving away. 
					if (currentLinearVertexColor.R < fallOffLimit_MaxAmountAtEdge_Adding_Global)
						tryingToApplyColor_Red_Global = UKismetMathLibrary::FClamp(fallOffLimit_MaxAmountAtEdge_Adding_Global - currentLinearVertexColor.R, -1, 1);
					else
						tryingToApplyColor_Red_Global = 0;
				}
			}

			// If trying to remove and there is anything to remove
			else if (tryingToApplyColor_Red_Global < 0 && currentLinearVertexColor.R > 0) {

				if (fallOffLimit_TotalColorAmountIfApplying < fallOffLimit_MaxAmountAtEdge_Removing_Global) {

					if (currentLinearVertexColor.R > fallOffLimit_MaxAmountAtEdge_Removing_Global)
						tryingToApplyColor_Red_Global = UKismetMathLibrary::FClamp(fallOffLimit_MaxAmountAtEdge_Removing_Global - currentLinearVertexColor.R, -1, 1);
					else
						tryingToApplyColor_Red_Global = 0;
				}
			}
		}

		if (applyColorOnGreenChannel) {

			fallOffLimit_TotalColorAmountIfApplying = UKismetMathLibrary::FClamp((currentLinearVertexColor.G + tryingToApplyColor_Green_Global), 0, 1);

			if (tryingToApplyColor_Green_Global > 0 && currentLinearVertexColor.G < 1) {

				if (fallOffLimit_TotalColorAmountIfApplying > fallOffLimit_MaxAmountAtEdge_Adding_Global) {


					if (currentLinearVertexColor.G < fallOffLimit_MaxAmountAtEdge_Adding_Global)
						tryingToApplyColor_Green_Global = UKismetMathLibrary::FClamp(fallOffLimit_MaxAmountAtEdge_Adding_Global - currentLinearVertexColor.G, -1, 1);
					else
						tryingToApplyColor_Green_Global = 0;
				}
			}

			else if (tryingToApplyColor_Green_Global < 0 && currentLinearVertexColor.G > 0) {

				if (fallOffLimit_TotalColorAmountIfApplying < fallOffLimit_MaxAmountAtEdge_Removing_Global) {


					if (currentLinearVertexColor.G > fallOffLimit_MaxAmountAtEdge_Removing_Global)
						tryingToApplyColor_Green_Global = UKismetMathLibrary::FClamp(fallOffLimit_MaxAmountAtEdge_Removing_Global - currentLinearVertexColor.G, -1, 1);
					else
						tryingToApplyColor_Green_Global = 0;
				}
			}
		}

		if (applyColorOnBlueChannel) {


			fallOffLimit_TotalColorAmountIfApplying = UKismetMathLibrary::FClamp((currentLinearVertexColor.B + tryingToApplyColor_Blue_Global), 0, 1);


			if (tryingToApplyColor_Blue_Global > 0 && currentLinearVertexColor.B < 1) {

				if (fallOffLimit_TotalColorAmountIfApplying > fallOffLimit_MaxAmountAtEdge_Adding_Global) {


					if (currentLinearVertexColor.B < fallOffLimit_MaxAmountAtEdge_Adding_Global)
						tryingToApplyColor_Blue_Global = UKismetMathLibrary::FClamp(fallOffLimit_MaxAmountAtEdge_Adding_Global - currentLinearVertexColor.B, -1, 1);
					else
						tryingToApplyColor_Blue_Global = 0;
				}
			}

			else if (tryingToApplyColor_Blue_Global < 0 && currentLinearVertexColor.B > 0) {

				if (fallOffLimit_TotalColorAmountIfApplying < fallOffLimit_MaxAmountAtEdge_Removing_Global) {


					if (currentLinearVertexColor.B > fallOffLimit_MaxAmountAtEdge_Removing_Global)
						tryingToApplyColor_Blue_Global = UKismetMathLibrary::FClamp(fallOffLimit_MaxAmountAtEdge_Removing_Global - currentLinearVertexColor.B, -1, 1);
					else
						tryingToApplyColor_Blue_Global = 0;
				}
			}
		}

		if (applyColorOnAlphaChannel) {

			fallOffLimit_TotalColorAmountIfApplying = UKismetMathLibrary::FClamp((currentLinearVertexColor.A + tryingToApplyColor_Alpha_Global), 0, 1);

			if (tryingToApplyColor_Alpha_Global > 0 && currentLinearVertexColor.A < 1) {

				if (fallOffLimit_TotalColorAmountIfApplying > fallOffLimit_MaxAmountAtEdge_Adding_Global) {

					if (currentLinearVertexColor.A < fallOffLimit_MaxAmountAtEdge_Adding_Global)
						tryingToApplyColor_Alpha_Global = UKismetMathLibrary::FClamp(fallOffLimit_MaxAmountAtEdge_Adding_Global - currentLinearVertexColor.A, -1, 1);
					else
						tryingToApplyColor_Alpha_Global = 0;
				}
			}

			else if (tryingToApplyColor_Alpha_Global < 0 && currentLinearVertexColor.A > 0) {

				if (fallOffLimit_TotalColorAmountIfApplying < fallOffLimit_MaxAmountAtEdge_Removing_Global) {


					if (currentLinearVertexColor.A > fallOffLimit_MaxAmountAtEdge_Removing_Global)
						tryingToApplyColor_Alpha_Global = UKismetMathLibrary::FClamp(fallOffLimit_MaxAmountAtEdge_Removing_Global - currentLinearVertexColor.A, -1, 1);
					else
						tryingToApplyColor_Alpha_Global = 0;
				}
			}
		}
	}


	if (applyColorOnRedChannel) {


		if (paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnRedChannel.lerpVertexColorToTarget.lerpToTarget) {

			lerpToTargetValue_Global = UKismetMathLibrary::MapRangeClamped(paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnRedChannel.lerpVertexColorToTarget.targetValue, 0, 1, 0, 255);

			getColorToApplyOnVertex_ColorRed_Global = FMath::Lerp(getColorToApplyOnVertex_ColorRed_Global, lerpToTargetValue_Global, paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnRedChannel.lerpVertexColorToTarget.lerpStrength);
		}

		else if (paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnRedChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) {

			tryingToApplyColor_Red_Global = UKismetMathLibrary::MapRangeClamped(tryingToApplyColor_Red_Global, -1, 1, -255, 255);
			getColorToApplyOnVertex_ColorRed_Global += tryingToApplyColor_Red_Global;
		}

		else if (paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnRedChannel.applyWithSetting == EApplyVertexColorSetting::ESetVertexColor) {

			getColorToApplyOnVertex_ColorRed_Global = UKismetMathLibrary::MapRangeClamped(tryingToApplyColor_Red_Global, 0, 1, 0, 255) * getColorToApplyOnVertex_StrengthAfterFalloff_Global;
		}
	}

	if (applyColorOnGreenChannel) {


		if (paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnGreenChannel.lerpVertexColorToTarget.lerpToTarget) {

			lerpToTargetValue_Global = UKismetMathLibrary::MapRangeClamped(paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnGreenChannel.lerpVertexColorToTarget.targetValue, 0, 1, 0, 255);

			getColorToApplyOnVertex_ColorGreen_Global = FMath::Lerp(getColorToApplyOnVertex_ColorGreen_Global, lerpToTargetValue_Global, paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnGreenChannel.lerpVertexColorToTarget.lerpStrength);
		}

		else if (paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnGreenChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) {

			tryingToApplyColor_Green_Global = UKismetMathLibrary::MapRangeClamped(tryingToApplyColor_Green_Global, -1, 1, -255, 255);
			getColorToApplyOnVertex_ColorGreen_Global += tryingToApplyColor_Green_Global;
		}

		else if (paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnGreenChannel.applyWithSetting == EApplyVertexColorSetting::ESetVertexColor) {

			getColorToApplyOnVertex_ColorGreen_Global = UKismetMathLibrary::MapRangeClamped(tryingToApplyColor_Green_Global, 0, 1, 0, 255) * getColorToApplyOnVertex_StrengthAfterFalloff_Global;
		}
	}

	if (applyColorOnBlueChannel) {


		if (paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnBlueChannel.lerpVertexColorToTarget.lerpToTarget) {

			lerpToTargetValue_Global = UKismetMathLibrary::MapRangeClamped(paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnBlueChannel.lerpVertexColorToTarget.targetValue, 0, 1, 0, 255);

			getColorToApplyOnVertex_ColorBlue_Global = FMath::Lerp(getColorToApplyOnVertex_ColorBlue_Global, lerpToTargetValue_Global, paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnBlueChannel.lerpVertexColorToTarget.lerpStrength);
		}

		else if (paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnBlueChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) {

			tryingToApplyColor_Blue_Global = UKismetMathLibrary::MapRangeClamped(tryingToApplyColor_Blue_Global, -1, 1, -255, 255);
			getColorToApplyOnVertex_ColorBlue_Global += tryingToApplyColor_Blue_Global;
		}

		else if (paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnBlueChannel.applyWithSetting == EApplyVertexColorSetting::ESetVertexColor) {

			getColorToApplyOnVertex_ColorBlue_Global = UKismetMathLibrary::MapRangeClamped(tryingToApplyColor_Blue_Global, 0, 1, 0, 255) * getColorToApplyOnVertex_StrengthAfterFalloff_Global;
		}
	}

	if (applyColorOnAlphaChannel) {


		if (paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnAlphaChannel.lerpVertexColorToTarget.lerpToTarget) {

			lerpToTargetValue_Global = UKismetMathLibrary::MapRangeClamped(paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnAlphaChannel.lerpVertexColorToTarget.targetValue, 0, 1, 0, 255);

			getColorToApplyOnVertex_ColorAlpha_Global = FMath::Lerp(getColorToApplyOnVertex_ColorAlpha_Global, lerpToTargetValue_Global, paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnAlphaChannel.lerpVertexColorToTarget.lerpStrength);
		}

		else if (paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnAlphaChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) {

			tryingToApplyColor_Alpha_Global = UKismetMathLibrary::MapRangeClamped(tryingToApplyColor_Alpha_Global, -1, 1, -255, 255);
			getColorToApplyOnVertex_ColorAlpha_Global += tryingToApplyColor_Alpha_Global;
		}

		else if (paintOnMeshColorSetting.applyVertexColorSettings.applyColorsOnAlphaChannel.applyWithSetting == EApplyVertexColorSetting::ESetVertexColor) {

			getColorToApplyOnVertex_ColorAlpha_Global = UKismetMathLibrary::MapRangeClamped(tryingToApplyColor_Alpha_Global, 0, 1, 0, 255) * getColorToApplyOnVertex_StrengthAfterFalloff_Global;
		}
	}


	if (paintLimitOnRGBA.usePaintLimits) {

		GetVertexColorAfterAnyLimitation(paintLimitOnRGBA.limitColorIfTheColorWasAlreadyOverTheLimit, (float)currentVertexColor.R, getColorToApplyOnVertex_ColorRed_Global, paintLimitOnRGBA.paintLimitOnRedChannel, (float)currentVertexColor.G, getColorToApplyOnVertex_ColorGreen_Global, paintLimitOnRGBA.paintLimitOnGreenChannel, (float)currentVertexColor.B, getColorToApplyOnVertex_ColorBlue_Global, paintLimitOnRGBA.paintLimitOnBlueChannel, (float)currentVertexColor.A, getColorToApplyOnVertex_ColorAlpha_Global, paintLimitOnRGBA.paintLimitOnAlphaChannel, getColorToApplyOnVertex_ColorRed_Global, getColorToApplyOnVertex_ColorGreen_Global, getColorToApplyOnVertex_ColorBlue_Global, getColorToApplyOnVertex_ColorAlpha_Global);
	}


	if (applyColorOnRedChannel) {

		if (getColorToApplyOnVertex_ColorRed_Global > 0)
			getColorToApplyOnVertex_ColorToApply_Global.R = (uint8)FMath::RoundToInt(UKismetMathLibrary::FClamp(getColorToApplyOnVertex_ColorRed_Global, 0, 255));
		else
			getColorToApplyOnVertex_ColorToApply_Global.R = 0;
	}

	if (applyColorOnGreenChannel) {

		if (getColorToApplyOnVertex_ColorGreen_Global > 0)
			getColorToApplyOnVertex_ColorToApply_Global.G = (uint8)FMath::RoundToInt(UKismetMathLibrary::FClamp(getColorToApplyOnVertex_ColorGreen_Global, 0, 255));
		else
			getColorToApplyOnVertex_ColorToApply_Global.G = 0;
	}

	if (applyColorOnBlueChannel) {

		if (getColorToApplyOnVertex_ColorBlue_Global > 0)
			getColorToApplyOnVertex_ColorToApply_Global.B = (uint8)FMath::RoundToInt(UKismetMathLibrary::FClamp(getColorToApplyOnVertex_ColorBlue_Global, 0, 255));
		else
			getColorToApplyOnVertex_ColorToApply_Global.B = 0;
	}

	if (applyColorOnAlphaChannel) {

		if (getColorToApplyOnVertex_ColorAlpha_Global > 0)
			getColorToApplyOnVertex_ColorToApply_Global.A = (uint8)FMath::RoundToInt(UKismetMathLibrary::FClamp(getColorToApplyOnVertex_ColorAlpha_Global, 0, 255));
		else
			getColorToApplyOnVertex_ColorToApply_Global.A = 0;
	}


	// If set to do so then we run an Interface with Vertex Information, and returns whether we should apply the color, and with what amount. This means that the user can in whatever code class or BP that implements the interface create their own paint conditions! NOTE doesn't do the onlyRunOverrideInterfaceIfTryingToApplyColorToVertex check since just by getting here we know we're trying to apply colors so we should run this either way. 
	if (paintOnMeshColorSetting.overrideVertexColorsToApplySettings.overrideVertexColorsToApply) {

		if (overrideVertexColors_ObjectToRunInterfaceOn_Global) {

			if (paintOnMeshColorSetting.overrideVertexColorsToApplySettings.includeMostDominantPhysicsSurface) {


				overrideVertexColors_DefaultVertexColors_Global.Add(UVertexPaintFunctionLibrary::ReliableFColorToFLinearColor(currentVertexColor).R);
				overrideVertexColors_DefaultVertexColors_Global.Add(UVertexPaintFunctionLibrary::ReliableFColorToFLinearColor(currentVertexColor).G);
				overrideVertexColors_DefaultVertexColors_Global.Add(UVertexPaintFunctionLibrary::ReliableFColorToFLinearColor(currentVertexColor).B);
				overrideVertexColors_DefaultVertexColors_Global.Add(UVertexPaintFunctionLibrary::ReliableFColorToFLinearColor(currentVertexColor).A);

				/*
				overrideVertexColors_DefaultVertexColors_Global.Add(currentVertexColor.ReinterpretAsLinear().R);
				overrideVertexColors_DefaultVertexColors_Global.Add(currentVertexColor.ReinterpretAsLinear().G);
				overrideVertexColors_DefaultVertexColors_Global.Add(currentVertexColor.ReinterpretAsLinear().B);
				overrideVertexColors_DefaultVertexColors_Global.Add(currentVertexColor.ReinterpretAsLinear().A);
				*/

				UVertexPaintFunctionLibrary::GetTheMostDominantPhysicsSurface_Wrapper(calculateColorsInfo_Global.fundementalStruct.taskWorld, materialVertexIsOn, registeredPhysicsSurfacesAtMaterialVertexIsOn, overrideVertexColors_DefaultVertexColors_Global, overrideVertexColors_MostDominantPhysicsSurfaceAtVertexBeforeApplyingColors_Global, overrideVertexColors_MostDominantPhysicsSurfaceValueAtVertexBeforeApplyingColors_Global);
			}

			haveRunOverrideInterface_Global = true;

			IVertexPaintDetectionInterface::Execute_OverrideVertexColorToApply(overrideVertexColors_ObjectToRunInterfaceOn_Global, associatedPaintComponent, meshComponentToApplyColorsTo, currentLOD, currentVertexIndex, materialVertexIsOn, isVertexOnCloth, currentBoneName, currentVertexWorldPosition, currentVertexNormal, currentVertexColor, overrideVertexColors_MostDominantPhysicsSurfaceAtVertexBeforeApplyingColors_Global, overrideVertexColors_MostDominantPhysicsSurfaceValueAtVertexBeforeApplyingColors_Global, getColorToApplyOnVertex_ColorToApply_Global, shouldApplyColorOnAnyChannel_Global, shouldApplyColorOnAnyChannel_Global, overrideVertexColorsToApply_Global, overrideVertexColors_ColorToApply_Global);

			// Clamps it so if you set like Red to be 0.000001, which would've been 0 when converted to FColor, but we clamp it to a higher value so it will be the smallest amount of 1 
			if (overrideVertexColorsToApply_Global) {

				overridenVertexColorsMadeChangeToColorsToApply_Global = true;
				getColorToApplyOnVertex_ColorToApply_Global = overrideVertexColors_ColorToApply_Global;
			}
		}
	}


	if (!shouldApplyColorOnAnyChannel_Global)
		return currentVertexColor;


	// If the current color and the color applied isn't the same it means that the paint resulted in change, which can be used in the Paint Event Dispatcher to only do things if a change occured
	if (currentVertexColor != getColorToApplyOnVertex_ColorToApply_Global)
		vertexGotColorChanged = true;

	return getColorToApplyOnVertex_ColorToApply_Global;
}


//-------------------------------------------------------

// Clamp Linear Color

FLinearColor FVertexPaintCalculateColorsTask::ClampLinearColor(FLinearColor linearColor) {


	// Clamps it so if the user sets like 0.000001, we will return at the lowest amount of 1 when converted to FColor which range from 0-255

	if (linearColor.R > 0)
		linearColor.R = UKismetMathLibrary::FClamp(linearColor.R, 0.005, 1);

	if (linearColor.G > 0)
		linearColor.G = UKismetMathLibrary::FClamp(linearColor.G, 0.005, 1);

	if (linearColor.B > 0)
		linearColor.B = UKismetMathLibrary::FClamp(linearColor.B, 0.005, 1);

	if (linearColor.A > 0)
		linearColor.A = UKismetMathLibrary::FClamp(linearColor.A, 0.005, 1);

	return linearColor;
}


//-------------------------------------------------------

// Is There Any Paint Conditions

bool FVertexPaintCalculateColorsTask::IsThereAnyPaintConditions(const FVertexDetectRGBAStruct & applyColorSettings) {


	if (applyColorSettings.applyColorsUsingPhysicsSurface.applyVertexColorUsingPhysicsSurface) {

		if (applyColorSettings.applyColorsUsingPhysicsSurface.paintUsingPhysicsSurfaceConditions.onlyAffectVerticesWithDirectionToActorOrLocation.Num() > 0 || applyColorSettings.applyColorsUsingPhysicsSurface.paintUsingPhysicsSurfaceConditions.onlyAffectVerticesWithinDirectionFromActorOrLocation.Num() > 0 || applyColorSettings.applyColorsUsingPhysicsSurface.paintUsingPhysicsSurfaceConditions.ifVertexIsAboveOrBelowWorldZ.Num() > 0 || applyColorSettings.applyColorsUsingPhysicsSurface.paintUsingPhysicsSurfaceConditions.ifVertexColorIsWithinRange.Num() > 0 || applyColorSettings.applyColorsUsingPhysicsSurface.paintUsingPhysicsSurfaceConditions.ifVertexHasLineOfSightTo.Num() > 0 || applyColorSettings.applyColorsUsingPhysicsSurface.paintUsingPhysicsSurfaceConditions.ifVertexIsOnBone.Num() > 0)
			return true;
	}

	else {

		if (applyColorSettings.applyColorsOnRedChannel.paintConditions.onlyAffectVerticesWithDirectionToActorOrLocation.Num() > 0 || applyColorSettings.applyColorsOnGreenChannel.paintConditions.onlyAffectVerticesWithDirectionToActorOrLocation.Num() > 0 || applyColorSettings.applyColorsOnBlueChannel.paintConditions.onlyAffectVerticesWithDirectionToActorOrLocation.Num() > 0 || applyColorSettings.applyColorsOnAlphaChannel.paintConditions.onlyAffectVerticesWithDirectionToActorOrLocation.Num() > 0)
			return true;

		if (applyColorSettings.applyColorsOnRedChannel.paintConditions.onlyAffectVerticesWithinDirectionFromActorOrLocation.Num() > 0 || applyColorSettings.applyColorsOnGreenChannel.paintConditions.onlyAffectVerticesWithinDirectionFromActorOrLocation.Num() > 0 || applyColorSettings.applyColorsOnBlueChannel.paintConditions.onlyAffectVerticesWithinDirectionFromActorOrLocation.Num() > 0 || applyColorSettings.applyColorsOnAlphaChannel.paintConditions.onlyAffectVerticesWithinDirectionFromActorOrLocation.Num() > 0)
			return true;

		if (applyColorSettings.applyColorsOnRedChannel.paintConditions.ifVertexIsAboveOrBelowWorldZ.Num() > 0 || applyColorSettings.applyColorsOnGreenChannel.paintConditions.ifVertexIsAboveOrBelowWorldZ.Num() > 0 || applyColorSettings.applyColorsOnBlueChannel.paintConditions.ifVertexIsAboveOrBelowWorldZ.Num() > 0 || applyColorSettings.applyColorsOnAlphaChannel.paintConditions.ifVertexIsAboveOrBelowWorldZ.Num() > 0)
			return true;

		if (applyColorSettings.applyColorsOnRedChannel.paintConditions.ifVertexColorIsWithinRange.Num() > 0 || applyColorSettings.applyColorsOnGreenChannel.paintConditions.ifVertexColorIsWithinRange.Num() > 0 || applyColorSettings.applyColorsOnBlueChannel.paintConditions.ifVertexColorIsWithinRange.Num() > 0 || applyColorSettings.applyColorsOnAlphaChannel.paintConditions.ifVertexColorIsWithinRange.Num() > 0)
			return true;

		if (applyColorSettings.applyColorsOnRedChannel.paintConditions.ifVertexHasLineOfSightTo.Num() > 0 || applyColorSettings.applyColorsOnGreenChannel.paintConditions.ifVertexHasLineOfSightTo.Num() > 0 || applyColorSettings.applyColorsOnBlueChannel.paintConditions.ifVertexHasLineOfSightTo.Num() > 0 || applyColorSettings.applyColorsOnAlphaChannel.paintConditions.ifVertexHasLineOfSightTo.Num() > 0)
			return true;

		if (applyColorSettings.applyColorsOnRedChannel.paintConditions.ifVertexIsOnBone.Num() > 0 || applyColorSettings.applyColorsOnGreenChannel.paintConditions.ifVertexIsOnBone.Num() > 0 || applyColorSettings.applyColorsOnBlueChannel.paintConditions.ifVertexIsOnBone.Num() > 0 || applyColorSettings.applyColorsOnAlphaChannel.paintConditions.ifVertexIsOnBone.Num() > 0)
			return true;
	}

	return false;
}


//-------------------------------------------------------

// Does Vertex Colors Match

bool FVertexPaintCalculateColorsTask::DoesVertexColorsMatch(const FColor & vertexColor, const FColor & compareWithColor, float errorTolerance) {


	float meshColorValueTemp = 0;
	float compareColorValueTemp = 0;

	for (int i = 0; i < 4; i++) {

		switch (i) {

		case 0:

			meshColorValueTemp = (float)vertexColor.R;
			compareColorValueTemp = (float)compareWithColor.R;

			break;
		case 1:

			meshColorValueTemp = (float)vertexColor.G;
			compareColorValueTemp = (float)compareWithColor.G;

			break;
		case 2:

			meshColorValueTemp = (float)vertexColor.B;
			compareColorValueTemp = (float)compareWithColor.B;

			break;
		case 3:

			meshColorValueTemp = (float)vertexColor.A;
			compareColorValueTemp = (float)compareWithColor.A;

			break;
		default:
			break;
		}


		if (FMath::Abs((meshColorValueTemp - compareColorValueTemp)) <= errorTolerance) {

			// if match then we don't return, and if loop finishes without returning it means all of the channels was within range
			// UE_LOG(LogTemp, Warning, TEXT(""));
		}

		else {

			return false;
		}
	}

	// If haven't returned false by now all of the channels must've been matched within the error tolerance
	return true;
}


//-------------------------------------------------------

// Is Set To Override Vertex Colors And Implements Interface

bool FVertexPaintCalculateColorsTask::IsSetToOverrideVertexColorsAndImplementsInterface(FVertexPaintStruct vertexPaintSettings) {


	if (vertexPaintSettings.overrideVertexColorsToApplySettings.overrideVertexColorsToApply) {

		if (vertexPaintSettings.overrideVertexColorsToApplySettings.objectToRunOverrideVertexColorsInterface && vertexPaintSettings.overrideVertexColorsToApplySettings.objectToRunOverrideVertexColorsInterface->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass())) {

			return true;
		}
	}

	return false;
}


//-------------------------------------------------------

// Get Paint Condition Adjusted If Set To Use Physics Surface

FVertexDetectPaintColorConditionStruct FVertexPaintCalculateColorsTask::GetPaintConditionAdjustedIfSetToUsePhysicsSurface(FVertexDetectPaintColorConditionStruct channelsPaintCondition, UMaterialInterface * material) {

	if (!IsValid(material)) return channelsPaintCondition;


	if (channelsPaintCondition.ifVertexColorIsWithinRange.Num() > 0) {

		for (int i = 0; i < channelsPaintCondition.ifVertexColorIsWithinRange.Num(); i++) {

			if (channelsPaintCondition.ifVertexColorIsWithinRange[i].ifChannelWithPhysicsSurfaceIsWithinColorRange == EPhysicalSurface::SurfaceType_Default) continue;


			// If set to use the Within Color Range Condition using Physics Surface instead of Vertex Color Channel 
			TArray<Enum_SurfaceAtChannel> physicsSurfaceAtVertexColorChannelsTemp;


			// Gets the Parents of the physicSurfaceWithinColorRange we want to use, so we can check if any of the registered physics surface is a part of the same family, and which channel. If so we can have the condition take effect on the channel that physics surface is registered to. 
			TArray<TEnumAsByte<EPhysicalSurface>> parentsOfifChannelWithPhysicsSurfaceIsWithinColorRange = calculateColorsInfo_Global.vertexPaintMaterialDataAsset->GetParentsOfPhysicsSurface(channelsPaintCondition.ifVertexColorIsWithinRange[i].ifChannelWithPhysicsSurfaceIsWithinColorRange);


			// Checks if ifChannelWithPhysicsSurfaceIsWithinColorRange and what physics surface that's registered on each vertex color channel is a part of the same family
			for (auto parensOfRedChannelTemp : calculateColorsInfo_Global.vertexPaintMaterialDataAsset->GetParentsOfPhysicsSurface(calculateColorsInfo_Global.vertexPaintMaterialDataAsset->GetVertexPaintMaterialInterface().FindRef(material).paintedAtRed)) {

				if (parentsOfifChannelWithPhysicsSurfaceIsWithinColorRange.Contains(parensOfRedChannelTemp)) {

					physicsSurfaceAtVertexColorChannelsTemp.Add(Enum_SurfaceAtChannel::RedChannel);
					break;
				}
			}

			for (auto parensOfGreenChannelTemp : calculateColorsInfo_Global.vertexPaintMaterialDataAsset->GetParentsOfPhysicsSurface(calculateColorsInfo_Global.vertexPaintMaterialDataAsset->GetVertexPaintMaterialInterface().FindRef(material).paintedAtGreen)) {

				if (parentsOfifChannelWithPhysicsSurfaceIsWithinColorRange.Contains(parensOfGreenChannelTemp)) {

					physicsSurfaceAtVertexColorChannelsTemp.Add(Enum_SurfaceAtChannel::GreenChannel);
					break;
				}
			}

			for (auto parensOfBlueChannelTemp : calculateColorsInfo_Global.vertexPaintMaterialDataAsset->GetParentsOfPhysicsSurface(calculateColorsInfo_Global.vertexPaintMaterialDataAsset->GetVertexPaintMaterialInterface().FindRef(material).paintedAtBlue)) {

				if (parentsOfifChannelWithPhysicsSurfaceIsWithinColorRange.Contains(parensOfBlueChannelTemp)) {

					physicsSurfaceAtVertexColorChannelsTemp.Add(Enum_SurfaceAtChannel::BlueChannel);
					break;
				}
			}

			for (auto parensOfAlphaChannelTemp : calculateColorsInfo_Global.vertexPaintMaterialDataAsset->GetParentsOfPhysicsSurface(calculateColorsInfo_Global.vertexPaintMaterialDataAsset->GetVertexPaintMaterialInterface().FindRef(material).paintedAtAlpha)) {

				if (parentsOfifChannelWithPhysicsSurfaceIsWithinColorRange.Contains(parensOfAlphaChannelTemp)) {

					physicsSurfaceAtVertexColorChannelsTemp.Add(Enum_SurfaceAtChannel::AlphaChannel);
					break;
				}
			}


			if (physicsSurfaceAtVertexColorChannelsTemp.Num() > 0) {


				// In some instance a physics surface may share the same parent on multiple vertex color channels, for example if Cobble-Sand is on Red Channel, and Cobble-Puddle is on Blue Channel. Then we will just use the channel based on which within range index we're at. So if for instance Green and Blue have a Physics Surface, and we have 2 Is Within Range Conditions, then the first will get set to use the Green, and the second the Blue. 
				if (physicsSurfaceAtVertexColorChannelsTemp.IsValidIndex(i)) {

					channelsPaintCondition.ifVertexColorIsWithinRange[i].ifVertexColorChannelWithinColorRange = physicsSurfaceAtVertexColorChannelsTemp[i];
				}

				// If it's not valid index, i.e. maybe just 1 vertex color channel is using the physics surface, but we have several within range conditions, then they will all use that one vertex color channel. 
				else if (physicsSurfaceAtVertexColorChannelsTemp.IsValidIndex(0)) {

					channelsPaintCondition.ifVertexColorIsWithinRange[i].ifVertexColorChannelWithinColorRange = physicsSurfaceAtVertexColorChannelsTemp[0];
				}
			}
		}
	}

	return channelsPaintCondition;
}


//-------------------------------------------------------

// Get Colors Of Each Channel For Vertex

void FVertexPaintCalculateColorsTask::GetColorsOfEachChannelForVertex(const FLinearColor & currentVertexColor, const FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel & includeAmountOfPaintedColorsOfEachValueSetting, const bool& hasRequiredPhysSurfaceOnRedChannel, const bool& hasRequiredPhysSurfaceOnGreenChannel, const bool& hasRequiredPhysSurfaceOnBlueChannel, const bool& hasRequiredPhysSurfaceOnAlphaChannel, FVertexDetectAmountOfPaintedColorsOfEachChannel_Results & redChannelResult, FVertexDetectAmountOfPaintedColorsOfEachChannel_Results & greenChannelResult, FVertexDetectAmountOfPaintedColorsOfEachChannel_Results & blueChannelResult, FVertexDetectAmountOfPaintedColorsOfEachChannel_Results & alphaChannelResult) {

	if (!includeAmountOfPaintedColorsOfEachValueSetting.includeVertexColorChannelResultOfEachChannel) return;


	// If has requirement that the channel has to have specific physics surfaces
	if (includeAmountOfPaintedColorsOfEachValueSetting.includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel.Num() > 0) {

		if (hasRequiredPhysSurfaceOnRedChannel) {

			// Eventhough it's not within the min requirements we gather how many where even considered, i.e. we can later check if any channel even got any considered, and if not then none had the requirements, like any of the physics surfaces required and thus shouldn't be successfull. 
			redChannelResult.amountOfVerticesConsidered++;

			if (currentVertexColor.R >= includeAmountOfPaintedColorsOfEachValueSetting.includeIfMinColorAmountIs) {

				redChannelResult.amountOfVerticesPaintedAtMinAmount++;
				redChannelResult.averageColorAmountAtMinAmount += currentVertexColor.R;
			}
		}

		if (hasRequiredPhysSurfaceOnGreenChannel) {

			greenChannelResult.amountOfVerticesConsidered++;

			if (currentVertexColor.G >= includeAmountOfPaintedColorsOfEachValueSetting.includeIfMinColorAmountIs) {

				greenChannelResult.amountOfVerticesPaintedAtMinAmount++;
				greenChannelResult.averageColorAmountAtMinAmount += currentVertexColor.G;
			}
		}

		if (hasRequiredPhysSurfaceOnBlueChannel) {

			blueChannelResult.amountOfVerticesConsidered++;

			if (currentVertexColor.B >= includeAmountOfPaintedColorsOfEachValueSetting.includeIfMinColorAmountIs) {

				blueChannelResult.amountOfVerticesPaintedAtMinAmount++;
				blueChannelResult.averageColorAmountAtMinAmount += currentVertexColor.B;
			}
		}

		if (hasRequiredPhysSurfaceOnAlphaChannel) {

			alphaChannelResult.amountOfVerticesConsidered++;

			if (currentVertexColor.A >= includeAmountOfPaintedColorsOfEachValueSetting.includeIfMinColorAmountIs) {

				alphaChannelResult.amountOfVerticesPaintedAtMinAmount++;
				alphaChannelResult.averageColorAmountAtMinAmount += currentVertexColor.A;
			}
		}
	}

	else {

		redChannelResult.amountOfVerticesConsidered++;

		if (currentVertexColor.R >= includeAmountOfPaintedColorsOfEachValueSetting.includeIfMinColorAmountIs) {

			redChannelResult.amountOfVerticesPaintedAtMinAmount++;
			redChannelResult.averageColorAmountAtMinAmount += currentVertexColor.R;
		}


		greenChannelResult.amountOfVerticesConsidered++;

		if (currentVertexColor.G >= includeAmountOfPaintedColorsOfEachValueSetting.includeIfMinColorAmountIs) {

			greenChannelResult.amountOfVerticesPaintedAtMinAmount++;
			greenChannelResult.averageColorAmountAtMinAmount += currentVertexColor.G;
		}

		blueChannelResult.amountOfVerticesConsidered++;

		if (currentVertexColor.B >= includeAmountOfPaintedColorsOfEachValueSetting.includeIfMinColorAmountIs) {

			blueChannelResult.amountOfVerticesPaintedAtMinAmount++;
			blueChannelResult.averageColorAmountAtMinAmount += currentVertexColor.B;
		}


		alphaChannelResult.amountOfVerticesConsidered++;

		if (currentVertexColor.A >= includeAmountOfPaintedColorsOfEachValueSetting.includeIfMinColorAmountIs) {

			alphaChannelResult.amountOfVerticesPaintedAtMinAmount++;
			alphaChannelResult.averageColorAmountAtMinAmount += currentVertexColor.A;
		}
	}
}


//-------------------------------------------------------

// Get Colors Of Each Physics Surface For Vertex

void FVertexPaintCalculateColorsTask::GetColorsOfEachPhysicsSurfaceForVertex(const TArray<TEnumAsByte<EPhysicalSurface>>&registeredPhysicsSurfaceAtMaterial, const FLinearColor & currentVertexColor, const FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel & includeAmountOfPaintedColorsOfEachValueSetting, const bool& hasRequiredPhysSurfaceOnRedChannel, const bool& hasRequiredPhysSurfaceOnGreenChannel, const bool& hasRequiredPhysSurfaceOnBlueChannel, const bool& hasRequiredPhysSurfaceOnAlphaChannel, TArray<FVertexDetectAmountOfPaintedColorsOfEachChannel_Results>&physicsSurfaceResultToFill) {

	if (!includeAmountOfPaintedColorsOfEachValueSetting.includePhysicsSurfaceResultOfEachChannel) return;
	if (registeredPhysicsSurfaceAtMaterial.Num() <= 0) return;


	// If has requires specific physics surfaces to be registered
	if (includeAmountOfPaintedColorsOfEachValueSetting.includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel.Num() > 0) {

		// if haven't gotten any
		if (!hasRequiredPhysSurfaceOnRedChannel && !hasRequiredPhysSurfaceOnGreenChannel && !hasRequiredPhysSurfaceOnBlueChannel && !hasRequiredPhysSurfaceOnAlphaChannel) return;
	}



	// Loops through surfaces registered at channel. If there just one registered at one channel this will still be 4
	for (int i = 0; i < registeredPhysicsSurfaceAtMaterial.Num(); i++) {

		if (registeredPhysicsSurfaceAtMaterial[i] != EPhysicalSurface::SurfaceType_Default) {

			float colorValueTemp = 0;

			// Depending on which element we check different color channels
			switch (i) {

			case 0:

				// If requires that specific physics surfaces then skips if whatever physics surface that's on this channel isn't registered. 
				if (includeAmountOfPaintedColorsOfEachValueSetting.includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel.Num() > 0) {

					if (!hasRequiredPhysSurfaceOnRedChannel)
						continue;
				}

				colorValueTemp = currentVertexColor.R;
				break;

			case 1:

				if (includeAmountOfPaintedColorsOfEachValueSetting.includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel.Num() > 0) {

					if (!hasRequiredPhysSurfaceOnGreenChannel)
						continue;
				}

				colorValueTemp = currentVertexColor.G;
				break;

			case 2:

				if (includeAmountOfPaintedColorsOfEachValueSetting.includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel.Num() > 0) {

					if (!hasRequiredPhysSurfaceOnBlueChannel)
						continue;
				}

				colorValueTemp = currentVertexColor.B;
				break;

			case 3:

				if (includeAmountOfPaintedColorsOfEachValueSetting.includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel.Num() > 0) {

					if (!hasRequiredPhysSurfaceOnAlphaChannel)
						continue;
				}

				colorValueTemp = currentVertexColor.A;
				break;

			default:
				break;
			}


			physicsSurfaceResultToFill[i].amountOfVerticesConsidered++;

			if (colorValueTemp >= includeAmountOfPaintedColorsOfEachValueSetting.includeIfMinColorAmountIs) {

				physicsSurfaceResultToFill[i].amountOfVerticesPaintedAtMinAmount++;
				physicsSurfaceResultToFill[i].averageColorAmountAtMinAmount += colorValueTemp;
			}
		}
	}
}


/** Helper struct for the mesh component vert position octree - Copied from MeshPaintHelpers.cpp ApplyVertexColorsToAllLODs */
struct FStaticMeshComponentVertPosOctreeSemantics {
	enum { MaxElementsPerLeaf = 16 };
	enum { MinInclusiveElementsPerNode = 7 };
	enum { MaxNodeDepth = 12 };

	typedef TInlineAllocator<MaxElementsPerLeaf> ElementAllocator;

	/**
	 * Get the bounding box of the provided octree element. In this case, the box
	 * is merely the point specified by the element.
	 *
	 * @param	Element	Octree element to get the bounding box for
	 *
	 * @return	Bounding box of the provided octree element
	 */
	FORCEINLINE static FBoxCenterAndExtent GetBoundingBox(const FPaintedVertex& Element)
	{
		return FBoxCenterAndExtent(Element.Position, FVector::ZeroVector);
	}

	/**
	 * Determine if two octree elements are equal
	 *
	 * @param	A	First octree element to check
	 * @param	B	Second octree element to check
	 *
	 * @return	true if both octree elements are equal, false if they are not
	 */
	FORCEINLINE static bool AreElementsEqual(const FPaintedVertex& A, const FPaintedVertex& B)
	{
		return (A.Position == B.Position && A.Normal == B.Normal && A.Color == B.Color);
	}

	/** Ignored for this implementation */
	FORCEINLINE static void SetElementId(const FPaintedVertex& Element, FOctreeElementId2 Id)
	{
	}
};

typedef TOctree2<FPaintedVertex, FStaticMeshComponentVertPosOctreeSemantics> TSMCVertPosOctree;


//-------------------------------------------------------

// Propogate LOD 0 Vertex Colors To LODs

void FVertexPaintCalculateColorsTask::PropogateLOD0VertexColorsToLODs(const TArray<FPaintedVertex>&lod0PaintedVerts, FVertexDetectMeshDataStruct & vertexDetectMeshData, const TArray<FBox>&lodBaseBounds, TArray<FColorVertexBuffer*>& colorVertexBufferToUpdate, UPrimitiveComponent * component) {

	if (vertexDetectMeshData.meshDataPerLOD.Num() <= 1) return; // Has to have more than 1 LOD to build color data for the other LODs
	if (vertexDetectMeshData.meshDataPerLOD[0].meshVertexColorsPerLODArray.Num() <= 0)  return; // And the LOD0 has to have some colors that we can propogate
	if (!IsValid(component)) return;


	FVector CurPosition = FVector(ForceInitToZero);
	FVector CurNormal = FVector(ForceInitToZero);
	TArray<FPaintedVertex> PointsToConsider;
	const float DistanceOverNormalThreshold = KINDA_SMALL_NUMBER;

	FPaintedVertex BestVertex = FPaintedVertex();
	FVector BestVertexNormal = FVector(ForceInitToZero);
	float BestDistanceSquared = 0;
	float BestNormalDot = 0;
	FPaintedVertex VertexToConsider = FPaintedVertex();
	FVector VertexNormalToConsider = FVector(ForceInitToZero);
	float DistSqrdToConsider = 0;
	float NormalDotToConsider = 0;


	for (uint32 i = 1; i < (uint32)vertexDetectMeshData.meshDataPerLOD.Num(); ++i) {

		if (!colorVertexBufferToUpdate.IsValidIndex(i) || !vertexDetectMeshData.meshDataPerLOD.IsValidIndex(i)) break;


		// UMeshPaintingSubsystem::ApplyVertexColorsToAllLODs -> RemapPaintedVertexColors in StaticMeshBuild

		// This was copied from StaticMeshBuild->RemapPaintedVertexColors() and adjusted a bit so it works for both Static and Skeletal Meshes in Runtime and gets what each vertex color on LOD1, 2 etc. should have based on LOD0. It's a bit more expensive and I didn't see a noticable better result using it so i opted to use my own solution which allows me to break out from the main loop once all the vertices has been randomized, since it doesn't build Bounds and doesn't need All LOD0 positions at once. Also my own solution only loops through the as many LOD0 vertices that was actually randomized, instead of looping through all of them for every LOD1 vertex etc.


		FBox Bounds = lodBaseBounds[0]; // First sets BaseBounds for LOD0
		Bounds += lodBaseBounds[i]; // Then adds the current LOD for a Combined Bounds


		TSMCVertPosOctree VertPosOctree(Bounds.GetCenter(), Bounds.GetExtent().GetMax());

		for (int32 PaintedVertexIndex = 0; PaintedVertexIndex < lod0PaintedVerts.Num(); ++PaintedVertexIndex) {

			VertPosOctree.AddElement(lod0PaintedVerts[PaintedVertexIndex]);
		}


		CurPosition = FVector(ForceInitToZero);
		CurNormal = FVector(ForceInitToZero);
		PointsToConsider.Reset();

		BestVertex = FPaintedVertex();
		BestVertexNormal = FVector(ForceInitToZero);
		BestDistanceSquared = 0;
		BestNormalDot = 0;
		VertexToConsider = FPaintedVertex();
		VertexNormalToConsider = FVector(ForceInitToZero);
		DistSqrdToConsider = 0;
		NormalDotToConsider = 0;


		for (uint32 NewVertIndex = 0; NewVertIndex < (uint32)vertexDetectMeshData.meshDataPerLOD[i].meshVertexPositionsInComponentSpacePerLODArray.Num(); ++NewVertIndex) {

			// Necessary in case it gets destroyed will running, otherwise the task will not be removed immediately
			if (!IsValid(component)) return;

			PointsToConsider.Reset();
			CurPosition = vertexDetectMeshData.meshDataPerLOD[i].meshVertexPositionsInComponentSpacePerLODArray[NewVertIndex];
			CurNormal = vertexDetectMeshData.meshDataPerLOD[i].meshVertexNormalsPerLODArray[NewVertIndex];


			// Iterate through the octree attempting to find the vertices closest to the current new point
			VertPosOctree.FindNearbyElements(CurPosition, [&PointsToConsider](const FPaintedVertex& Vertex) {

				PointsToConsider.Add(Vertex);
				});

			// If any points to consider were found, iterate over each and find which one is the closest to the new point 
			if (PointsToConsider.Num() > 0) {

				BestVertex = PointsToConsider[0];
				BestVertexNormal = BestVertex.Normal;

				BestDistanceSquared = (BestVertex.Position - CurPosition).SizeSquared();
				BestNormalDot = BestVertexNormal | CurNormal;

				for (int32 ConsiderationIndex = 1; ConsiderationIndex < PointsToConsider.Num(); ++ConsiderationIndex) {

					VertexToConsider = PointsToConsider[ConsiderationIndex];
					VertexNormalToConsider = VertexToConsider.Normal;

					DistSqrdToConsider = (VertexToConsider.Position - CurPosition).SizeSquared();
					NormalDotToConsider = VertexNormalToConsider | CurNormal;

					if (DistSqrdToConsider < BestDistanceSquared - DistanceOverNormalThreshold) {

						BestVertex = VertexToConsider;
						BestDistanceSquared = DistSqrdToConsider;
						BestNormalDot = NormalDotToConsider;
					}

					else if (DistSqrdToConsider < BestDistanceSquared + DistanceOverNormalThreshold && NormalDotToConsider > BestNormalDot) {

						BestVertex = VertexToConsider;
						BestDistanceSquared = DistSqrdToConsider;
						BestNormalDot = NormalDotToConsider;
					}
				}

				vertexDetectMeshData.meshDataPerLOD[i].meshVertexColorsPerLODArray[NewVertIndex] = BestVertex.Color;
				colorVertexBufferToUpdate[i]->VertexColor(NewVertIndex) = BestVertex.Color;
			}
		}
	}
}


//-------------------------------------------------------

// Get If Physics Surfaces Is Registered To Vertex Color Channels

void FVertexPaintCalculateColorsTask::GetIfPhysicsSurfacesIsRegisteredToVertexColorChannels(const UWorld* world, const bool& includeVertexColorChannelResultOfEachChannel, const bool& includePhysicsSurfaceResultOfEachChannel, const TArray<TEnumAsByte<EPhysicalSurface>>& includeOnlyIfPhysicsSurfaceIsRegisteredToAnyChannel, const TArray<TEnumAsByte<EPhysicalSurface>>& physicsSurfacesAtMaterial, bool& containsPhysicsSurfaceOnRedChannel, bool& containsPhysicsSurfaceOnGreenChannel, bool& containsPhysicsSurfaceOnBlueChannel, bool& containsPhysicsSurfaceOnAlphaChannel) {

	if (includeOnlyIfPhysicsSurfaceIsRegisteredToAnyChannel.Num() <= 0) return;


	if (includeVertexColorChannelResultOfEachChannel || includePhysicsSurfaceResultOfEachChannel) {

		for (int i = 0; i < physicsSurfacesAtMaterial.Num(); i++) {

			for (auto physicsSurfaceTemp : includeOnlyIfPhysicsSurfaceIsRegisteredToAnyChannel) {

				// If physics surface belongs to the family or is the specified surface we require to include. For instance if set to only include Wet physics surface, and the channel has Cobble-Puddle (which is registered under the Wet Family), then it will pass, same if set to only include Cobble-Puddle since it's the same as the channel has. 
				if (physicsSurfacesAtMaterial[i] == physicsSurfaceTemp || UVertexPaintFunctionLibrary::DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily(world, physicsSurfacesAtMaterial[i], physicsSurfaceTemp)) {

					switch (i) {

					case 0:
						containsPhysicsSurfaceOnRedChannel = true;
						break;
					case 1:
						containsPhysicsSurfaceOnGreenChannel = true;
						break;
					case 2:
						containsPhysicsSurfaceOnBlueChannel = true;
						break;
					case 3:
						containsPhysicsSurfaceOnAlphaChannel = true;
						break;
					default:
						break;
					}

					break;
				}
			}
		}
	}
}


//-------------------------------------------------------

// Set All Color Channels To Have Been Changed

void FVertexPaintCalculateColorsTask::SetAllColorChannelsToHaveBeenChanged() {

	redColorChannelChanged_Global = true;
	greenColorChannelChanged_Global = true;
	blueColorChannelChanged_Global = true;
	alphaColorChannelChanged_Global = true;

	if (!appliedToVertexColorChannels_Global.Contains(EVertexColorChannel::RedChannel))
		appliedToVertexColorChannels_Global.Add(EVertexColorChannel::RedChannel);

	if (!appliedToVertexColorChannels_Global.Contains(EVertexColorChannel::GreenChannel))
		appliedToVertexColorChannels_Global.Add(EVertexColorChannel::GreenChannel);

	if (!appliedToVertexColorChannels_Global.Contains(EVertexColorChannel::BlueChannel))
		appliedToVertexColorChannels_Global.Add(EVertexColorChannel::BlueChannel);

	if (!appliedToVertexColorChannels_Global.Contains(EVertexColorChannel::AlphaChannel))
		appliedToVertexColorChannels_Global.Add(EVertexColorChannel::AlphaChannel);
}


//-------------------------------------------------------

// Get Skeletal Mesh Cloth Info

#if ENGINE_MAJOR_VERSION == 4

void FVertexPaintCalculateColorsTask::GetSkeletalMeshClothInfo(const FCalculateColorsInfo & calculateColorsInfo, TMap<UClothingAssetBase*, FVertexDetectClothSettingsStruct>&clothPhysics, TArray<UClothingAssetBase*>&clothingAssets, TMap<int32, TArray<FVector>>&clothvertexPositions, TMap<int32, TArray<FVector>>&clothVertexNormals, TArray<FVector>&clothBoneLocationInComponentSpace, TArray<FQuat>&clothBoneQuaternionsInComponentSpace) {

#elif ENGINE_MAJOR_VERSION == 5

void FVertexPaintCalculateColorsTask::GetSkeletalMeshClothInfo(const FCalculateColorsInfo & calculateColorsInfo, TMap<UClothingAssetBase*, FVertexDetectClothSettingsStruct>&clothPhysics, TArray<UClothingAssetBase*>&clothingAssets, TMap<int32, TArray<FVector3f>>&clothvertexPositions, TMap<int32, TArray<FVector3f>>&clothVertexNormals, TArray<FVector>&clothBoneLocationInComponentSpace, TArray<FQuat>&clothBoneQuaternionsInComponentSpace) {

#endif

	if (!calculateColorsInfo.vertexPaintSkelComponentsSkeletalMesh) return;
	if (!calculateColorsInfo.vertexPaintSkelComponent) return;

	const FSkeletalMeshRenderData* skeletalMeshRenderData = calculateColorsInfo.vertexPaintSkelComponent->GetSkeletalMeshRenderData();

	if (!skeletalMeshRenderData->LODRenderData.IsValidIndex(calculateColorsInfo.vertexPaintSkelComponent->GetPredictedLODLevel())) return;
	if (!skeletalMeshRenderData->LODRenderData[calculateColorsInfo.vertexPaintSkelComponent->GetPredictedLODLevel()].HasClothData()) return;


	TMap<int32, FClothSimulData> clothSimulationData_Local;

	if (inGameThread_Global)
		clothSimulationData_Local = calculateColorsInfo.vertexPaintSkelComponent->GetCurrentClothingData_GameThread();
	else
		clothSimulationData_Local = calculateColorsInfo.vertexPaintSkelComponent->GetCurrentClothingData_AnyThread();

	clothingAssets = calculateColorsInfo.vertexPaintSkelComponentsSkeletalMesh->GetMeshClothingAssets();


	for (int i = 0; i < clothingAssets.Num(); i++) {

		FClothSimulData simulationData = clothSimulationData_Local.FindRef(i);

		if (clothSimulationData_Local.Contains(i)) {

#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 4


			// From 5.4 and up we couldn't just get the cloth pos immediately because of memory optimizations but have to loop through them. But since you usually don't have that much cloth i don't think it should affect task speed to much. 

			int amountOfClothVertices_Local = simulationData.Positions.Num();

			// Initialize the arrays only once and ensure the types match the ones returned from your data accessors.
			TArray<UE::Math::TVector<float>, FDefaultAllocator> clothVertexPositions_Local;
			TArray<UE::Math::TVector<float>, FDefaultAllocator> clothVertexNormals_Local;

			clothVertexPositions_Local.SetNumUninitialized(amountOfClothVertices_Local);
			clothVertexNormals_Local.SetNumUninitialized(amountOfClothVertices_Local);

			// Directly copy the data from the arrays returned by the accessor methods.
			for (int32 j = 0; j < amountOfClothVertices_Local; j++) {
				clothVertexPositions_Local[j] = simulationData.Positions[j];
				clothVertexNormals_Local[j] = simulationData.Normals[j];
			}

			clothvertexPositions.Add(i, clothVertexPositions_Local);
			clothVertexNormals.Add(i, clothVertexNormals_Local);

#else
			clothvertexPositions.Add(i, simulationData.Positions);
			clothVertexNormals.Add(i, simulationData.Normals);
#endif
		}


#if ENGINE_MAJOR_VERSION == 5

		if (clothingAssets[i]) {

			if (auto clothingAssetCommon_Local = Cast<UClothingAssetCommon>(clothingAssets[i])) {

				if (calculateColorsInfo.skeletalMeshBonesNames.IsValidIndex(clothingAssetCommon_Local->ReferenceBoneIndex)) {

					FName boneName_Local = calculateColorsInfo.skeletalMeshBonesNames[clothingAssetCommon_Local->ReferenceBoneIndex];
					FVector boneLocation_Local = calculateColorsInfo.vertexPaintSkelComponent->GetBoneLocation(boneName_Local, EBoneSpaces::ComponentSpace);
					FQuat boneQuat_Local = calculateColorsInfo.vertexPaintSkelComponent->GetBoneQuaternion(boneName_Local, EBoneSpaces::ComponentSpace);

					clothBoneLocationInComponentSpace.Add(boneLocation_Local);
					clothBoneQuaternionsInComponentSpace.Add(boneQuat_Local);
				}
			}
		}
#endif
	}
}


//-------------------------------------------------------

// Get Closest Vertex Data Info

void FVertexPaintCalculateColorsTask::GetClosestVertexDataInfo(const FCalculateColorsInfo & calculateColorsInfo, FVertexDetectGetAverageColorStruct & averageColorInAreaSettings, FVector & hitLocationInWorldSpace, FVector & hitNormal) {

	averageColorInAreaSettings = calculateColorsInfo.getClosestVertexDataSettings.getAverageColorInAreaSettings;
	hitLocationInWorldSpace = UKismetMathLibrary::TransformLocation(calculateColorsInfo.vertexPaintComponent->GetComponentTransform(), calculateColorsInfo.getClosestVertexDataSettings.hitFundementals.hitLocationInComponentSpace);
	hitNormal = calculateColorsInfo.getClosestVertexDataSettings.hitFundementals.hitNormal;
}


//-------------------------------------------------------

// Get Paint At Location Info

void FVertexPaintCalculateColorsTask::GetPaintAtLocationInfo(const FCalculateColorsInfo & calculateColorsInfo, float& vertexNormalDotToHitNormalMin, FVector & hitLocationInWorldSpace) {

	if (calculateColorsInfo.vertexPaintStaticMeshComponent) {

		vertexNormalDotToHitNormalMin = calculateColorsInfo.paintOnMeshAtLocationSettings.paintAtAreaSettings.VertexNormalToHitNormal_MinimumDotProductToGetPainted_StaticMesh;
	}

	else if (calculateColorsInfo.vertexPaintSkelComponent) {

		vertexNormalDotToHitNormalMin = calculateColorsInfo.paintOnMeshAtLocationSettings.paintAtAreaSettings.VertexNormalToHitNormal_MinimumDotProductToGetPainted_SkeletalMesh;
	}

	hitLocationInWorldSpace = UKismetMathLibrary::TransformLocation(calculateColorsInfo.vertexPaintComponent->GetComponentTransform(), calculateColorsInfo.paintOnMeshAtLocationSettings.hitFundementals.hitLocationInComponentSpace);
}


//-------------------------------------------------------

// Get Paint Within Area Info

bool FVertexPaintCalculateColorsTask::GetWithinAreaInfo(const FCalculateColorsInfo & calculateColorsInfo, TArray<FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo>& componentsToCheckIfWithin, FCollisionQueryParams & withinAreaComplexShapeTraceParams) {

	if (componentsToCheckIfWithin.Num() <= 0) return false;


	FTransform origoTransform = FTransform();
	origoTransform.SetIdentity();


	// Since complex shape we can be dependent on the component still existing and on the components current location because we're tracing for it anyway. 
	for (int i = 0; i < componentsToCheckIfWithin.Num(); i++) {


		// When Task finally starts and its complex shape, we updates world transform based on where the component is now, since with complex we're dependent on the component actually existing since we're tracing for it
		if (componentsToCheckIfWithin[i].paintWithinAreaShape == Enum_PaintWithinAreaShape::isComplexShape) {

			if (!IsValid(componentsToCheckIfWithin[i].componentToCheckIfIsWithin)) return false;

			// Ignores self as we only want to check if hit on componentToCheckIfIsWithin
			withinAreaComplexShapeTraceParams.AddIgnoredActor(calculateColorsInfo.paintOnMeshWithinAreaSettings.actor);

			componentsToCheckIfWithin[i].componentWorldTransform = componentsToCheckIfWithin[i].componentToCheckIfIsWithin->GetComponentTransform();
		}

		// Other shapes we cache what we need and can transform it back and is not dependent on the actual component to check if within is still valid
		else {


			// Transforms from Local to World again so can check if the vertices are within the area where it was when the task got created.
			const FVector compsToCheckIfWithinWorldLocation_Local = UKismetMathLibrary::TransformLocation(origoTransform, componentsToCheckIfWithin[i].componentRelativeLocationToMeshBeingPainted);
			componentsToCheckIfWithin[i].componentWorldTransform.SetLocation(compsToCheckIfWithinWorldLocation_Local);


			const FRotator compsToCheckIfWithinWorldRotation_Local = UKismetMathLibrary::TransformRotation(origoTransform, componentsToCheckIfWithin[i].componentRelativeRotationToMeshBeingPainted);
			componentsToCheckIfWithin[i].componentWorldTransform.SetRotation(compsToCheckIfWithinWorldRotation_Local.Quaternion());


			const FVector compsToCheckIfWithinWorldScale_Local = UKismetMathLibrary::TransformLocation(origoTransform, componentsToCheckIfWithin[i].componentRelativeScaleToMeshBeingPainted);
			componentsToCheckIfWithin[i].componentWorldTransform.SetScale3D(compsToCheckIfWithinWorldScale_Local);
		}
	}

	return true;
}


//-------------------------------------------------------

// Get Static Mesh LOD Info

void FVertexPaintCalculateColorsTask::GetStaticMeshLODInfo(const FCalculateColorsInfo & calculateColorsInfo, const int& lod, TArray<int32>&sectionsToLoopThrough, FPositionVertexBuffer * &positionVertexBuffer, FStaticMeshVertexBuffer * &meshVertexBuffer, int& totalAmountOfVerticesAtLOD, FVertexDetectMeshDataStruct & meshVertexData, TArray<FColor>&colorsAtLOD) {

	if (lod < 0) return;
	if (!calculateColorsInfo.vertexPaintStaticMeshComponent) return;
	if (!calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()) return;


	// Adds a section for each one that exists. We can also get the first vertex index of each one and the material using the material index
	for (int32 i = 0; i < calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[lod].Sections.Num(); i++) {

		sectionsToLoopThrough.Add(i);

		// Can get the Min and Max Vertex Index, as well as the Material of this Section
		// UE_LOG(LogTemp, Warning, TEXT("LOD: %i  -  MinVertexIndex: %i  -  MaxVertexIndex: %i   -  Material Index: %i  "), lod, calculateColorsInfo_Global.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[lod].Sections[i].MinVertexIndex, calculateColorsInfo_Global.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[lod].Sections[i].MaxVertexIndex, calculateColorsInfo_Global.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[lod].Sections[i].MaterialIndex);
	}


	positionVertexBuffer = &calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[lod].VertexBuffers.PositionVertexBuffer;
	meshVertexBuffer = &calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[lod].VertexBuffers.StaticMeshVertexBuffer;
	totalAmountOfVerticesAtLOD = positionVertexBuffer->GetNumVertices();

	colorsAtLOD.SetNum(totalAmountOfVerticesAtLOD, true);


	// If this has been pre-filled, perhaps if we ran Paint Color Snippet before we started this then we use what's been filled in meshVertexColorsPerLODArray
	if (meshVertexData.meshDataPerLOD[lod].meshVertexColorsPerLODArray.Num() <= 0) {

		colorsAtLOD = UVertexPaintFunctionLibrary::GetStaticMeshVertexColorsAtLOD(calculateColorsInfo.vertexPaintStaticMeshComponent, lod);

		meshVertexData.meshDataPerLOD[lod].meshVertexColorsPerLODArray = colorsAtLOD;
	}

	else {

		colorsAtLOD = meshVertexData.meshDataPerLOD[lod].meshVertexColorsPerLODArray;
	}
}


//-------------------------------------------------------

// Get Skeletal Mesh LOD Info

bool FVertexPaintCalculateColorsTask::GetSkeletalMeshLODInfo(const FCalculateColorsInfo & calculateColorsInfo, FSkeletalMeshRenderData * skeletalMeshRenderData, FSkeletalMeshLODRenderData * &skeletalMeshLODRenderData, const int& lod, FSkinWeightVertexBuffer * &skinWeightBuffer, TArray<int32>&sectionsToLoopThrough, int& totalAmountOfVerticesAtLOD, FVertexDetectMeshDataStruct & meshVertexData, TArray<FColor>&colorsAtLOD, int& vertexIndexToStartAt, TArray<TArray<FColor>>&boneIndexColors) {

	if (!IsValidSkeletalMesh(calculateColorsInfo.vertexPaintSkelComponentsSkeletalMesh, calculateColorsInfo.vertexPaintSkelComponent, skeletalMeshRenderData, lod)) return false;

	skeletalMeshLODRenderData = &skeletalMeshRenderData->LODRenderData[lod];
	if (!skeletalMeshLODRenderData) return false;

	skinWeightBuffer = calculateColorsInfo.vertexPaintSkelComponent->GetSkinWeightBuffer(lod);
	if (!skinWeightBuffer) return false;


	totalAmountOfVerticesAtLOD = skeletalMeshLODRenderData->GetNumVertices();


	// if (!calculateColorsInfo_Global.fundementalStruct.skeletalMeshCachePoseOnTaskCreation)
	//	calculateColorsInfo_Global.vertexPaintSkelComponentsMasterSkinnedComp->CacheRefToLocalMatrices(calculateColorsInfo_Global.skeletalMeshRefToLocals);


	// If this has been pre-filled, perhaps if we ran Paint Color Snippet before we started this then we use what's been filled in meshVertexColorsPerLODArray
	if (meshVertexData.meshDataPerLOD[lod].meshVertexColorsPerLODArray.Num() <= 0) {

		colorsAtLOD = UVertexPaintFunctionLibrary::GetSkeletalMeshVertexColorsAtLOD(calculateColorsInfo.vertexPaintSkelComponent, lod);

		meshVertexData.meshDataPerLOD[lod].meshVertexColorsPerLODArray = colorsAtLOD;
	}

	else {

		colorsAtLOD = meshVertexData.meshDataPerLOD[lod].meshVertexColorsPerLODArray;
	}


	for (int j = 0; j < skeletalMeshLODRenderData->RenderSections.Num(); j++) {


		// If Get Closest Vertex Data and doesn't have to loop through all vertices and LODs, then we can just loop through the section of the hit bone and not the others so the task is much quicker. 
		if (calculateColorsInfo.getClosestVertexDataSettings.actor && calculateColorsInfo.getClosestVertexDataSettings.hitFundementals.hitBone != "None" && !ShouldLoopThroughVerticesAndLODs(calculateColorsInfo.fundementalStruct.callbackSettings, calculateColorsInfo.vertexPaintComponent, calculateColorsInfo.vertexPaintSettings.overrideVertexColorsToApplySettings)) {

			bool gotSectionRelatedToBone_Local = false;


			// Loops through all bones on section
			for (FBoneIndexType boneTemp : skeletalMeshLODRenderData->RenderSections[j].BoneMap) {

				// If Section has bone we hit
				if (calculateColorsInfo.skeletalMeshBonesNames[boneTemp] == calculateColorsInfo.getClosestVertexDataSettings.hitFundementals.hitBone) {


					// Add all sections related to the bone so we loop through all of them to get the closest vertex and material etc. 
					if (!sectionsToLoopThrough.Contains(j))
						sectionsToLoopThrough.Add(j);


					// For the first section find we set vertex index to start at. 
					if (!gotSectionRelatedToBone_Local)
						vertexIndexToStartAt = skeletalMeshLODRenderData->RenderSections[j].BaseVertexIndex;

					gotSectionRelatedToBone_Local = true;


					// auto materialAtSectionTemp = calculateColorsInfo.vertexPaintSkelComponent->GetMaterial(skeletalMeshLODRenderData->RenderSections[j].MaterialIndex);

					// UE_LOG(LogTemp, Warning, TEXT("bone to loop through from cached array: %s  -  Section: %i  -  Starting at vertex: %i  -  Material: %s"), *calculateColorsInfo.skeletalMeshBonesNames[boneTemp].ToString(), j, vertexIndexToStartAt, *materialAtSectionTemp->GetName());
				}
			}
		}

		else {

			sectionsToLoopThrough.Add(j);

			if (calculateColorsInfo.fundementalStruct.callbackSettings.includeColorsOfEachBone) {

				for (auto boneTemp : skeletalMeshLODRenderData->RenderSections[j].BoneMap) {

					// Can increase the array of array colors but not shrink it, so we will cover all bone indexes. 
					if (boneTemp >= (boneIndexColors.Num())) {

						boneTemp++;
						boneIndexColors.SetNum(boneTemp, false);
					}
				}
			}
		}
	}

	return true;
}


#if ENGINE_MAJOR_VERSION == 5

//-------------------------------------------------------

// Get Dynamic Mesh LOD Info

bool FVertexPaintCalculateColorsTask::GetDynamicMeshLODInfo(const FCalculateColorsInfo & calculateColorsInfo, UE::Geometry::FDynamicMesh3 * &dynamicMesh3, const int& lod, TArray<int32>&sectionsToLoopThrough, int& totalAmountOfVerticesAtLOD, TArray<FColor>&colorsAtLOD, TArray<FColor>&defaultColorsFromLOD, TArray<FColor>& dynamicMeshComponentVertexColors) {

	if (!IsValid(calculateColorsInfo.vertexPaintDynamicMeshComponent)) return false;
	if (!IsValid(calculateColorsInfo.vertexPaintDynamicMeshComponent->GetDynamicMesh())) return false;

	dynamicMesh3 = &calculateColorsInfo.vertexPaintDynamicMeshComponent->GetDynamicMesh()->GetMeshRef();
	if (!dynamicMesh3) return false;


	sectionsToLoopThrough.Add(0);
	totalAmountOfVerticesAtLOD = dynamicMesh3->MaxVertexID();

	colorsAtLOD.SetNum(totalAmountOfVerticesAtLOD, true); // fills this array while we're looping through the verts as we can't just get them all right away here like static and skel meshes without having to loop through the verts here as well
	defaultColorsFromLOD.SetNum(totalAmountOfVerticesAtLOD, true);
	dynamicMeshComponentVertexColors.SetNum(totalAmountOfVerticesAtLOD);
	return true;
}


//-------------------------------------------------------

// Get Geometry Collection Mesh LOD Info

void FVertexPaintCalculateColorsTask::GetGeometryCollectionMeshLODInfo(const FCalculateColorsInfo & calculateColorsInfo, const int& lod, TArray<int32>&sectionsToLoopThrough, int& totalAmountOfVerticesAtLOD, TArray<FColor>&colorsAtLOD, TArray<FColor>&defaultColorsFromLOD, TArray<FLinearColor>& geometryCollectionVertexColors) {


	// There seems to be something bugged with the sections when it comes to geometry collection components. For instance we could get 10 000 color num, and the first sections .MaxIndex reached that number, but also the second section, but it said the second section first index was like 35 000, way beyond the limit of the total amount of vertices. Tested it with several meshes so instead of looping through all of the sections we just loop through the first which seem to be the most accurate. 
	sectionsToLoopThrough.Add(0);
	// for (int i = 0; i < geometryCollectionData->Sections.Num(); i++)
	// 	sectionsToLoopThrough_Local.Add(i);

	totalAmountOfVerticesAtLOD = calculateColorsInfo.vertexPaintGeometryCollectionData->Color.Num();


	colorsAtLOD.SetNum(totalAmountOfVerticesAtLOD, true); // fills this array while we're looping through the verts as we can't just get them all right away here like static and skel meshes without having to loop through the verts here as well
	defaultColorsFromLOD.SetNum(totalAmountOfVerticesAtLOD, true);
	geometryCollectionVertexColors.SetNum(totalAmountOfVerticesAtLOD);
}

#endif


//-------------------------------------------------------

// Get Paint Entire Mesh Random LOD Info

void FVertexPaintCalculateColorsTask::GetPaintEntireMeshRandomLODInfo(const FCalculateColorsInfo& calculateColorsInfo, const int& lod, const int& amountOfVerticesAtLOD, FRandomStream& randomSeedToUse, float& amountOfVerticesToRandomize) {

	randomSeedToUse = FRandomStream();
	amountOfVerticesToRandomize = 0;

	if (!calculateColorsInfo.paintOnEntireMeshSettings.actor) return;



	// Can override the random seed, which is useful if for instance a server want clients to paint using the same seeds so they get the same random pattern. 
	if (calculateColorsInfo.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.overrideRandomSeeds)
		randomSeedToUse = calculateColorsInfo.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.seedToOverrideWith;

	else
		randomSeedToUse.GenerateNewSeed();


	if (calculateColorsInfo.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh && calculateColorsInfo.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint > 0) {


		if (calculateColorsInfo.propogateLOD0ToAllLODs) {

			// If gonna propogate LOD0 Colors to other LODs then we only randomize on LOD0
			if (lod == 0)
				amountOfVerticesToRandomize = UKismetMathLibrary::MapRangeClamped(calculateColorsInfo.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint, 0, 100, 0, amountOfVerticesAtLOD);
		}

		else {

			amountOfVerticesToRandomize = UKismetMathLibrary::MapRangeClamped(calculateColorsInfo.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint, 0, 100, 0, amountOfVerticesAtLOD);
		}
	}

	else if (calculateColorsInfo.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.onlyRandomizeWithinAreaOfEffectAtLocation && calculateColorsInfo.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.onlyRandomizeWithinAreaOfEffectAtLocation_ProbabilityFactor > 0) {

		// If set to randomize within area then we don't increase the probability depending on how many verts left to randomize, as we're not using the Percent because that's for randomizing a percent over the entire mesh
		amountOfVerticesToRandomize = amountOfVerticesAtLOD;
	}
}


//-------------------------------------------------------

// Get Static Mesh Component Section Info

void FVertexPaintCalculateColorsTask::GetStaticMeshComponentSectionInfo(const FCalculateColorsInfo& calculateColorsInfo, const int& lod, const int& section, int& sectionMaxAmountOfVertices, int& currentLODVertex, UMaterialInterface*& materialSection) {


	if (section > 0) {

		// Sets this section max amount of verts, not the max amount of loops in total up to this section. So if the section goes between vertex 300 - 600, we will only loop through 300
		sectionMaxAmountOfVertices = calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[lod].Sections[section].MaxVertexIndex - calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[lod].Sections[section].MinVertexIndex;
	}

	else {

		// If the very first section then we need to +1 since MaxVertexIndex isn't the total amount of vertices but just the max. For instance if you have a Mesh with 1801 vertices, i.e. 0 - 1800, then MaxVertexIndex would be 1800, so we can't just use that because then we would loop through 0-1799. 
		sectionMaxAmountOfVertices = calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[lod].Sections[section].MaxVertexIndex + 1;
	}


	// Makes sure the lod vertex is in sync with the section we're on. Necessary in case we skip this section if it's a paint job with apply using physics surface, but it failed and there's no reason to loop through verts. 
	currentLODVertex = calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[lod].Sections[section].MinVertexIndex;

	// In case the previous section had higher MaxVertIndex, if so it could become -
	sectionMaxAmountOfVertices = FMath::Abs(sectionMaxAmountOfVertices);

	materialSection = calculateColorsInfo.vertexPaintStaticMeshComponent->GetMaterial(calculateColorsInfo_Global.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[lod].Sections[section].MaterialIndex);
}


//-------------------------------------------------------

// Get Skeletal Mesh Component Section Info

#if ENGINE_MAJOR_VERSION == 4

bool FVertexPaintCalculateColorsTask::GetSkeletalMeshComponentSectionInfo(const FCalculateColorsInfo& calculateColorsInfo, const int& lod, const int& section, FSkeletalMeshRenderData* skelMeshRenderData, FSkeletalMeshLODRenderData* skelMeshLODRenderData, const TMap<int32, TArray<FVector>>& clothVertexPositions, const TMap<int32, TArray<FVector>>& clothVertexNormals, const TMap<UClothingAssetBase*, FVertexDetectClothSettingsStruct>& clothsPhysicsSettings, const TArray<UClothingAssetBase*>& clothingAssets, int& sectionMaxAmountOfVertices, int& currentLODVertex, UMaterialInterface*& materialSection, FSkelMeshRenderSection*& skelMeshRenderSection, bool& shouldAffectClothPhysics, TArray<FVector>& clothSectionVertexPositions, TArray<FVector>& clothSectionVertexNormals) {

#elif ENGINE_MAJOR_VERSION == 5

bool FVertexPaintCalculateColorsTask::GetSkeletalMeshComponentSectionInfo(const FCalculateColorsInfo & calculateColorsInfo, const int& lod, const int& section, FSkeletalMeshRenderData * skelMeshRenderData, FSkeletalMeshLODRenderData * skelMeshLODRenderData, const TMap<int32, TArray<FVector3f>>&clothVertexPositions, const TMap<int32, TArray<FVector3f>>&clothVertexNormals, const TMap<UClothingAssetBase*, FVertexDetectClothSettingsStruct>&clothsPhysicsSettings, const TArray<UClothingAssetBase*>&clothingAssets, int& sectionMaxAmountOfVertices, int& currentLODVertex, UMaterialInterface * &materialSection, FSkelMeshRenderSection * &skelMeshRenderSection, bool& shouldAffectClothPhysics, TArray<FVector3f>&clothSectionVertexPositions, TArray<FVector3f>&clothSectionVertexNormals) {

#endif


	if (!IsValidSkeletalMesh(calculateColorsInfo.vertexPaintSkelComponentsSkeletalMesh, calculateColorsInfo.vertexPaintSkelComponent, skelMeshRenderData, lod)) return false;

	// If invalid section then something have gone so we end the task. There was a very very rare crash later with cloth this seems to fix
	if (!skelMeshLODRenderData->RenderSections.IsValidIndex(section)) {

		calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Failed because invalid Render Section: %i!"), section), FColor::Red));

		return false;
	}

	
	skelMeshRenderSection = &skelMeshLODRenderData->RenderSections[section];
	materialSection = calculateColorsInfo.vertexPaintSkelComponent->GetMaterial(skelMeshRenderSection->MaterialIndex);

	// Makes sure the lod vertex is in sync with the section we're on. Necessary in case we skip this section if it's a paint job with apply using physics surface, but it failed and there's no reason to loop through verts
	currentLODVertex = skelMeshRenderSection->BaseVertexIndex;
	sectionMaxAmountOfVertices = skelMeshRenderSection->GetNumVertices();


	// for each section we check if it's cloth and if so gets pos and normal of the cloth. Sets a local var here for use later on so we don't have to do .FindRef several times
	if (skelMeshRenderSection->HasClothingData() && clothingAssets.IsValidIndex(skelMeshRenderSection->CorrespondClothAssetIndex) && lod == calculateColorsInfo.vertexPaintSkelComponent->GetPredictedLODLevel()) {


		const UClothingAssetBase* currentClothingAssetBase_Local = clothingAssets[skelMeshRenderSection->CorrespondClothAssetIndex];

		// Caches a bool so we don't have to run a .Contain check on something every vertex. 
		if (calculateColorsInfo.vertexPaintSettings.affectClothPhysics) {

			if (clothsPhysicsSettings.Contains(currentClothingAssetBase_Local))
				shouldAffectClothPhysics = true;
		}


		if (clothVertexPositions.Contains(skelMeshRenderSection->CorrespondClothAssetIndex))
			clothSectionVertexPositions = clothVertexPositions.FindRef(skelMeshRenderSection->CorrespondClothAssetIndex);


		if (clothVertexNormals.Contains(skelMeshRenderSection->CorrespondClothAssetIndex))
			clothSectionVertexNormals = clothVertexNormals.FindRef(skelMeshRenderSection->CorrespondClothAssetIndex);
	}

	return true;
}


#if ENGINE_MAJOR_VERSION == 5

//-------------------------------------------------------

// Get Dynamic Mesh Component Section Info

void FVertexPaintCalculateColorsTask::GetDynamicMeshComponentSectionInfo(const FCalculateColorsInfo& calculateColorsInfo, const int& lodAmountOfVertices, const int& section, int& sectionMaxAmountOfVertices, int& currentLODVertex, UMaterialInterface*& materialSection) {

	// Dynamic Mesh Components seem to only be able to have 1 LOD and Material. Review this if there is a way to have multiple materials

	currentLODVertex = 0;
	sectionMaxAmountOfVertices = lodAmountOfVertices;
	materialSection = calculateColorsInfo.vertexPaintDynamicMeshComponent->GetMaterials()[section];
}


//-------------------------------------------------------

// Get Geometry Collection Mesh Component Section Info

void FVertexPaintCalculateColorsTask::GetGeometryCollectionMeshComponentSectionInfo(const FCalculateColorsInfo& calculateColorsInfo, const int& section, int& sectionMaxAmountOfVertices, int& currentLODVertex, UMaterialInterface*& materialSection) {


	if (section > 0)
		sectionMaxAmountOfVertices = calculateColorsInfo.vertexPaintGeometryCollectionData->Sections[section].MaxVertexIndex - calculateColorsInfo.vertexPaintGeometryCollectionData->Sections[section].MinVertexIndex;
	else
		sectionMaxAmountOfVertices = calculateColorsInfo.vertexPaintGeometryCollectionData->Sections[section].MaxVertexIndex + 1;


	currentLODVertex = calculateColorsInfo.vertexPaintGeometryCollectionData->Sections[section].MinVertexIndex;
	sectionMaxAmountOfVertices = FMath::Abs(sectionMaxAmountOfVertices);
	materialSection = calculateColorsInfo.vertexPaintGeometryCollectionComponent->GetMaterial(calculateColorsInfo.vertexPaintGeometryCollectionData->Sections[section].MaterialID);

	// calculateColorsInfo_Global.vertexPaintGeometryCollectionData->Sections[section].HitProxy
	// calculateColorsInfo_Global.vertexPaintGeometryCollectionData->Sections[section].NumTriangles

	// Got strange result here if looping through all sections for geometry collection components, like the second sections .FirstIndex could be way beyond the max amount of vertices. 
}

#endif


//-------------------------------------------------------

// Get Material To Get Surfaces From

void FVertexPaintCalculateColorsTask::GetMaterialToGetSurfacesFrom(const FCalculateColorsInfo& calculateColorsInfo, UMaterialInterface* materialAtSection, UMaterialInterface*& materialToGetSurfacesFrom, TArray<TEnumAsByte<EPhysicalSurface>>& registeredPhysicsSurfacesAtMaterial) {

	materialToGetSurfacesFrom = nullptr;
	registeredPhysicsSurfacesAtMaterial.Empty();

	if (materialAtSection) {

		// If it's registered, then we get whether materialAtSection material, or it's parent (if it's an instance) is registered, so we can you stuff like find what physics surfaces is painted at what channel etc. using this. Otherwise we had an issue if an instance wasn't registered, but the parent was, then we expect to work off of what the parent has. 
		if (calculateColorsInfo.vertexPaintMaterialDataAsset)
			materialToGetSurfacesFrom = calculateColorsInfo.vertexPaintMaterialDataAsset->GetRegisteredMaterialInstanceOrParentMaterial(materialAtSection);

		else
			materialToGetSurfacesFrom = materialAtSection;
	}


	if (materialToGetSurfacesFrom)
		registeredPhysicsSurfacesAtMaterial = UVertexPaintFunctionLibrary::GetPhysicsSurfacesRegisteredToMaterial(calculateColorsInfo.fundementalStruct.taskWorld, materialToGetSurfacesFrom);
}


//-------------------------------------------------------

// Get Color Channels To Primarily Apply

void FVertexPaintCalculateColorsTask::GetColorChannelsToPrimarilyApply(const FVertexPaintColorSettingStruct& paintOnMeshColorSettingsForSection, bool& applyColorsPrimarilyOnRedChannel, bool& applyColorsPrimarilyOnGreenChannel, bool& applyColorsPrimarilyOnBlueChannel, bool& applyColorsPrimarilyOnAlphaChannel) {


	if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnRedChannel.lerpVertexColorToTarget.lerpToTarget && paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnRedChannel.lerpVertexColorToTarget.lerpStrength > 0) {

		applyColorsPrimarilyOnRedChannel = true;
	}

	else if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnRedChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) {

		if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnRedChannel.amountToApply != 0)
			applyColorsPrimarilyOnRedChannel = true;
		else
			applyColorsPrimarilyOnRedChannel = false;
	}

	else if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnRedChannel.applyWithSetting == EApplyVertexColorSetting::ESetVertexColor) {

		applyColorsPrimarilyOnRedChannel = true;
	}



	if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnGreenChannel.lerpVertexColorToTarget.lerpToTarget && paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnGreenChannel.lerpVertexColorToTarget.lerpStrength > 0) {

		applyColorsPrimarilyOnGreenChannel = true;
	}

	else if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnGreenChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) {

		if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnGreenChannel.amountToApply != 0)
			applyColorsPrimarilyOnGreenChannel = true;
		else
			applyColorsPrimarilyOnGreenChannel = false;
	}

	else if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnGreenChannel.applyWithSetting == EApplyVertexColorSetting::ESetVertexColor) {

		applyColorsPrimarilyOnGreenChannel = true;
	}



	if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnBlueChannel.lerpVertexColorToTarget.lerpToTarget && paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnBlueChannel.lerpVertexColorToTarget.lerpStrength > 0) {

		applyColorsPrimarilyOnBlueChannel = true;
	}

	else if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnBlueChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) {

		if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnBlueChannel.amountToApply != 0)
			applyColorsPrimarilyOnBlueChannel = true;
		else
			applyColorsPrimarilyOnBlueChannel = false;
	}

	else if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnBlueChannel.applyWithSetting == EApplyVertexColorSetting::ESetVertexColor) {

		applyColorsPrimarilyOnBlueChannel = true;
	}



	if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnAlphaChannel.lerpVertexColorToTarget.lerpToTarget && paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnAlphaChannel.lerpVertexColorToTarget.lerpStrength > 0) {

		applyColorsPrimarilyOnAlphaChannel = true;
	}

	else if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnAlphaChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) {

		if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnAlphaChannel.amountToApply != 0)
			applyColorsPrimarilyOnAlphaChannel = true;
		else
			applyColorsPrimarilyOnAlphaChannel = false;
	}

	else if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnAlphaChannel.applyWithSetting == EApplyVertexColorSetting::ESetVertexColor) {

		applyColorsPrimarilyOnAlphaChannel = true;
	}
}


//-------------------------------------------------------

// Get Paint On Mesh Color Settings From Physics Surface

bool FVertexPaintCalculateColorsTask::GetPaintOnMeshColorSettingsFromPhysicsSurface(const FCalculateColorsInfo& calculateColorsInfo, const int32& currentSection, UMaterialInterface* materialToGetSurfacesFrom, FVertexPaintColorSettingStruct& paintOnMeshColorSettingsForSection, FVertexPaintingLimitRGBA& paintLimiitsRGB, bool& applyColorsPrimarilyOnRedChannel, bool& applyColorsPrimarilyOnGreenChannel, bool& applyColorsPrimarilyOnBlueChannel, bool& applyColorsPrimarilyOnAlphaChannel) {

	if (!paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.applyVertexColorUsingPhysicsSurface) return false;


	// Resets so the result from a previous section doesn't affect another if we fail at getting colors to apply on another section. 
	applyColorsPrimarilyOnRedChannel = false;
	applyColorsPrimarilyOnGreenChannel = false;
	applyColorsPrimarilyOnBlueChannel = false;
	applyColorsPrimarilyOnAlphaChannel = false;
	bool successfullyGotVertexColorsToApplyForAnyPhysicsSurface = false;


	// If set to Paint Using Physics Surface, and we was successfull at getting the Material, then we Get the Colors to Apply based on what's Registered in the Editor Widget. 


	// If applying with Set and Physics Surface, then only want the channels that was successfull, i.e. had the same physics surface to actually Set the colors. 
	if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.applyWithSetting == EApplyVertexColorSetting::ESetVertexColor) {

		applyColorsPrimarilyOnRedChannel = false;
		applyColorsPrimarilyOnGreenChannel = false;
		applyColorsPrimarilyOnBlueChannel = false;
		applyColorsPrimarilyOnAlphaChannel = false;
	}


	bool redColorToApplySuccessfullyGotOnAnyPhysicsSurface_Local = false;
	bool greenColorToApplySuccessfullyGotOnAnyPhysicsSurface_Local = false;
	bool blueColorToApplySuccessfullyGotOnAnyPhysicsSurface_Local = false;
	bool alphaColorToApplySuccessfullyGotOnAnyPhysicsSurface_Local = false;


	float redColorToApplyTotal_Local = 0;
	float greenColorToApplyTotal_Local = 0;
	float blueColorToApplyTotal_Local = 0;
	float alphaColorToApplyTotal_Local = 0;


	for (auto physicsSurfaceToApply_Local : paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.physicsSurfacesToApply) {

		float redColorToApply_Local = 0;
		float greenColorToApply_Local = 0;
		float blueColorToApply_Local = 0;
		float alphaColorToApply_Local = 0;

		bool redColorToApplySuccessfullyGot_Local = false;
		bool greenColorToApplySuccessfullyGot_Local = false;
		bool blueColorToApplySuccessfullyGot_Local = false;
		bool alphaColorToApplySuccessfullyGot_Local = false;

		bool successfullyGotVertexColorsToApply_Local = false;

		UVertexPaintFunctionLibrary::GetColorsToApplyFromPhysicsSurface_Wrapper(calculateColorsInfo.fundementalStruct.taskWorld, materialToGetSurfacesFrom, physicsSurfaceToApply_Local, redColorToApply_Local, redColorToApplySuccessfullyGot_Local, greenColorToApply_Local, greenColorToApplySuccessfullyGot_Local, blueColorToApply_Local, blueColorToApplySuccessfullyGot_Local, alphaColorToApply_Local, alphaColorToApplySuccessfullyGot_Local, successfullyGotVertexColorsToApply_Local, paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintStrengthToApply, paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintStrengtOnChannelsWithoutThePhysicsSurface, paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.applyOnChannelsThatIsAParentOfPhysicsSurface, paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.applyOnChannelsThatsChildOfPhysicsSurface, paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.applyOnChannelsThatResultsInBlendableSurfaces);


		if (successfullyGotVertexColorsToApply_Local) {

			if (!successfullyGotVertexColorsToApplyForAnyPhysicsSurface)
				successfullyGotVertexColorsToApplyForAnyPhysicsSurface = true;

			if (!redColorToApplySuccessfullyGotOnAnyPhysicsSurface_Local)
				redColorToApplySuccessfullyGotOnAnyPhysicsSurface_Local = redColorToApplySuccessfullyGot_Local;

			if (!greenColorToApplySuccessfullyGotOnAnyPhysicsSurface_Local)
				greenColorToApplySuccessfullyGotOnAnyPhysicsSurface_Local = greenColorToApplySuccessfullyGot_Local;

			if (!blueColorToApplySuccessfullyGotOnAnyPhysicsSurface_Local)
				blueColorToApplySuccessfullyGotOnAnyPhysicsSurface_Local = blueColorToApplySuccessfullyGot_Local;

			if (!alphaColorToApplySuccessfullyGotOnAnyPhysicsSurface_Local)
				alphaColorToApplySuccessfullyGotOnAnyPhysicsSurface_Local = alphaColorToApplySuccessfullyGot_Local;


			redColorToApplyTotal_Local += redColorToApply_Local;
			greenColorToApplyTotal_Local += greenColorToApply_Local;
			blueColorToApplyTotal_Local += blueColorToApply_Local;
			alphaColorToApplyTotal_Local += alphaColorToApply_Local;


			// calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Got Vertex Colors to Apply from Material: %s and Physics Surface: %s - Red: %f - Green: %f - Blue: %f - Alpha: %f"), *materialToGetSurfacesFrom->GetName(), *StaticEnum<EPhysicalSurface>()->GetDisplayNameTextByValue(physicsSurfaceToApply_Local.GetValue()).ToString(), redColorToApply_Local, greenColorToApply_Local, blueColorToApply_Local, alphaColorToApply_Local), FColor::Cyan));
		}
	}


	// Since we're += for every physics surface we've gotta to make sure they don't exceed past 1 afterwards. 
	redColorToApplyTotal_Local = UKismetMathLibrary::FClamp(redColorToApplyTotal_Local, -1, 1);
	greenColorToApplyTotal_Local = UKismetMathLibrary::FClamp(greenColorToApplyTotal_Local, -1, 1);
	blueColorToApplyTotal_Local = UKismetMathLibrary::FClamp(blueColorToApplyTotal_Local, -1, 1);
	alphaColorToApplyTotal_Local = UKismetMathLibrary::FClamp(alphaColorToApplyTotal_Local, -1, 1);


	if (successfullyGotVertexColorsToApplyForAnyPhysicsSurface) {

		paintLimiitsRGB.usePaintLimits = paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.physicsSurfacePaintLimit.usePaintLimits;

		paintLimiitsRGB.limitColorIfTheColorWasAlreadyOverTheLimit = paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.physicsSurfacePaintLimit.limitColorIfTheColorWasAlreadyOverTheLimit;

		// Set all channels to 1 by default so they don't get limited on channels other than the surfaces we find, then on those channels we will update the limit to the limit amount. 
		paintLimiitsRGB.paintLimitOnRedChannel = 1;
		paintLimiitsRGB.paintLimitOnGreenChannel = 1;
		paintLimiitsRGB.paintLimitOnBlueChannel = 1;
		paintLimiitsRGB.paintLimitOnAlphaChannel = 1;


		// If successfull in getting color to apply on at least 1 channel, it means they all are set to either paintStrengthToApply, or paintStrengtOnChannelsWithoutThePhysicsSurface, either way they should get whatever color that got returned for them
		paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnRedChannel.amountToApply = redColorToApplyTotal_Local;
		paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnGreenChannel.amountToApply = greenColorToApplyTotal_Local;
		paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnBlueChannel.amountToApply = blueColorToApplyTotal_Local;
		paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnAlphaChannel.amountToApply = alphaColorToApplyTotal_Local;


		FVertexDetectPaintColorConditionStruct paintConditionAdjustedIfSetToUsePhysicsSurface = GetPaintConditionAdjustedIfSetToUsePhysicsSurface(paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintUsingPhysicsSurfaceConditions, materialToGetSurfacesFrom);


		// Updates the setting for each channel as well with the setting, so they're either Adding or Setting. 
		paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnRedChannel.applyWithSetting = paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.applyWithSetting;

		paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnGreenChannel.applyWithSetting = paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.applyWithSetting;

		paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnBlueChannel.applyWithSetting = paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.applyWithSetting;

		paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnAlphaChannel.applyWithSetting = paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.applyWithSetting;


		// Sets the applyColorsUsingPhysicsSurface.paintUsingPhysicsSurfaceConditions as well, just so it matches, in case we try to use this later. Otherwise this may have an incorrect setting at the vertex channel or something
		paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintUsingPhysicsSurfaceConditions = paintConditionAdjustedIfSetToUsePhysicsSurface;


		if (redColorToApplySuccessfullyGotOnAnyPhysicsSurface_Local) {

			applyColorsPrimarilyOnRedChannel = true;

			paintLimiitsRGB.paintLimitOnRedChannel = paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.physicsSurfacePaintLimit.paintLimitOnPhysicsSurface;

			paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnRedChannel.paintConditions = paintConditionAdjustedIfSetToUsePhysicsSurface;

			paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnRedChannel.lerpVertexColorToTarget = paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.lerpPhysicsSurfaceToTarget;
		}

		else {

			// If failed but we still got color to apply, it means we still want to apply color to channels that Didn't have the physics surface we're painting, for instance if we're painting Wet but want to - on the other channels to wash them off. 
			if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnRedChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) {

				if (redColorToApplyTotal_Local != 0)
					applyColorsPrimarilyOnRedChannel = true;
			}

			// If failed but is set to Set, then we may want to set even if the vertex color we got to apply is 0 since that may be the expected result. 
			else if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnRedChannel.applyWithSetting == EApplyVertexColorSetting::ESetVertexColor) {

				applyColorsPrimarilyOnRedChannel = true;
			}
		}

		if (greenColorToApplySuccessfullyGotOnAnyPhysicsSurface_Local) {

			applyColorsPrimarilyOnGreenChannel = true;

			paintLimiitsRGB.paintLimitOnGreenChannel = paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.physicsSurfacePaintLimit.paintLimitOnPhysicsSurface;

			paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnGreenChannel.paintConditions = paintConditionAdjustedIfSetToUsePhysicsSurface;

			paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnGreenChannel.lerpVertexColorToTarget = paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.lerpPhysicsSurfaceToTarget;
		}

		else {

			if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnGreenChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) {

				if (greenColorToApplyTotal_Local != 0)
					applyColorsPrimarilyOnGreenChannel = true;
			}

			else if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnGreenChannel.applyWithSetting == EApplyVertexColorSetting::ESetVertexColor) {

				applyColorsPrimarilyOnGreenChannel = true;
			}
		}

		if (blueColorToApplySuccessfullyGotOnAnyPhysicsSurface_Local) {

			applyColorsPrimarilyOnBlueChannel = true;

			paintLimiitsRGB.paintLimitOnBlueChannel = paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.physicsSurfacePaintLimit.paintLimitOnPhysicsSurface;

			paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnBlueChannel.paintConditions = paintConditionAdjustedIfSetToUsePhysicsSurface;

			paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnBlueChannel.lerpVertexColorToTarget = paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.lerpPhysicsSurfaceToTarget;
		}

		else {

			if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnBlueChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) {

				if (blueColorToApplyTotal_Local != 0)
					applyColorsPrimarilyOnBlueChannel = true;
			}

			else if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnBlueChannel.applyWithSetting == EApplyVertexColorSetting::ESetVertexColor) {

				applyColorsPrimarilyOnBlueChannel = true;
			}
		}

		if (alphaColorToApplySuccessfullyGotOnAnyPhysicsSurface_Local) {

			applyColorsPrimarilyOnAlphaChannel = true;

			paintLimiitsRGB.paintLimitOnAlphaChannel = paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.physicsSurfacePaintLimit.paintLimitOnPhysicsSurface;

			paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnAlphaChannel.paintConditions = paintConditionAdjustedIfSetToUsePhysicsSurface;

			paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnAlphaChannel.lerpVertexColorToTarget = paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsUsingPhysicsSurface.lerpPhysicsSurfaceToTarget;
		}

		else {

			if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnAlphaChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) {

				if (alphaColorToApplyTotal_Local != 0)
					applyColorsPrimarilyOnAlphaChannel = true;
			}

			else if (paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnAlphaChannel.applyWithSetting == EApplyVertexColorSetting::ESetVertexColor) {

				applyColorsPrimarilyOnAlphaChannel = true;
			}
		}


		calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Total Vertex Colors to Apply from Physics Surfaces. Red: %f - Green: %f - Blue: %f - Alpha: %f"), paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnRedChannel.amountToApply, paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnGreenChannel.amountToApply, paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnBlueChannel.amountToApply, paintOnMeshColorSettingsForSection.applyVertexColorSettings.applyColorsOnAlphaChannel.amountToApply), FColor::Cyan));
	}


	return successfullyGotVertexColorsToApplyForAnyPhysicsSurface;
}


//-------------------------------------------------------

// Get Which Channels Contains Physics Surface

void FVertexPaintCalculateColorsTask::GetChannelsThatContainsPhysicsSurface(const FCalculateColorsInfo& calculateColorsInfo, const TArray<TEnumAsByte<EPhysicalSurface>>& registeredPhysicsSurfacesAtMaterial, bool& containsPhysicsSurfaceOnRedChannel, bool& containsPhysicsSurfaceOnGreenChannel, bool& containsPhysicsSurfaceOnBlueChannel, bool& containsPhysicsSurfaceOnAlphaChannel) {


	containsPhysicsSurfaceOnRedChannel = false;
	containsPhysicsSurfaceOnGreenChannel = false;
	containsPhysicsSurfaceOnBlueChannel = false;
	containsPhysicsSurfaceOnAlphaChannel = false;


	// If include color of each channel has requirement that the channel has to have specific physics surfaces
	GetIfPhysicsSurfacesIsRegisteredToVertexColorChannels(calculateColorsInfo.fundementalStruct.taskWorld, calculateColorsInfo.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeVertexColorChannelResultOfEachChannel, calculateColorsInfo.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includePhysicsSurfaceResultOfEachChannel, calculateColorsInfo.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel, registeredPhysicsSurfacesAtMaterial, containsPhysicsSurfaceOnRedChannel, containsPhysicsSurfaceOnGreenChannel, containsPhysicsSurfaceOnBlueChannel, containsPhysicsSurfaceOnAlphaChannel);


	// If Paint or Detect Within Area
	if (calculateColorsInfo_Global.withinAreaSettings.componentsToCheckIfIsWithin.Num() > 0) {

		GetIfPhysicsSurfacesIsRegisteredToVertexColorChannels(calculateColorsInfo.fundementalStruct.taskWorld, calculateColorsInfo.withinAreaSettings.includeAmountOfColorsOfEachChannelWithinArea.includeVertexColorChannelResultOfEachChannel, calculateColorsInfo.withinAreaSettings.includeAmountOfColorsOfEachChannelWithinArea.includePhysicsSurfaceResultOfEachChannel, calculateColorsInfo.withinAreaSettings.includeAmountOfColorsOfEachChannelWithinArea.includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel, registeredPhysicsSurfacesAtMaterial, containsPhysicsSurfaceOnRedChannel, containsPhysicsSurfaceOnGreenChannel, containsPhysicsSurfaceOnBlueChannel, containsPhysicsSurfaceOnAlphaChannel);
	}
}


//-------------------------------------------------------

// Get Static Mesh Component Vertex Info

bool FVertexPaintCalculateColorsTask::GetStaticMeshComponentVertexInfo(const FCalculateColorsInfo& calculateColorsInfo, FPositionVertexBuffer* positionVertBuffer, FStaticMeshVertexBuffer* staticMeshVertexBuffer, int lodVertexIndex, FVector& vertexPositionInComponentSpace, FVector& vertexPositionInActorSpace, FVector& vertexNormal, bool& gotVertexNormal) {

	if (!calculateColorsInfo.vertexPaintStaticMeshComponent) return false;
	if (!positionVertBuffer) return false;
	if (!staticMeshVertexBuffer) return false;

	gotVertexNormal = false;


#if ENGINE_MAJOR_VERSION == 4

	vertexPositionInComponentSpace = positionVertBuffer->VertexPosition(lodVertexIndex);

#elif ENGINE_MAJOR_VERSION == 5

	vertexPositionInComponentSpace = (FVector)positionVertBuffer->VertexPosition(lodVertexIndex);

#endif


	vertexNormal = FVector(staticMeshVertexBuffer->VertexTangentZ(lodVertexIndex).X, staticMeshVertexBuffer->VertexTangentZ(lodVertexIndex).Y, staticMeshVertexBuffer->VertexTangentZ(lodVertexIndex).Z);

	gotVertexNormal = true;


	if (IsValid(calculateColorsInfo.vertexPaintSplineMeshComponent)) {

		vertexPositionInComponentSpace = GetSplineMeshVertexPositionInMeshSpace(vertexPositionInComponentSpace, calculateColorsInfo.vertexPaintSplineMeshComponent);

		vertexNormal = GetSplineMeshVertexNormalInMeshSpace(vertexNormal, calculateColorsInfo.vertexPaintSplineMeshComponent);
	}

	else if (IsValid(calculateColorsInfo.vertexPaintInstancedStaticMeshComponent) && calculateColorsInfo.fundementalStruct.componentItem >= 0) {


		calculateColorsInfo.vertexPaintInstancedStaticMeshComponent->GetInstanceTransform(calculateColorsInfo.fundementalStruct.componentItem, instancedMesh_LocalTransform_Global, false);

		// Takes the Rotation into account as well since otherwise it was only accurate if the instance was rotated as 0, 0, 0. Otherwise if painting one side of the instance the other side could start getting painted
		instancedMesh_RotationMatrix_Global = FRotationMatrix(instancedMesh_LocalTransform_Global.GetRotation().Rotator());
		instancedMesh_RotatedVertexPosition_Global = instancedMesh_RotationMatrix_Global.TransformPosition(vertexPositionInComponentSpace);
		
		vertexPositionInComponentSpace = instancedMesh_RotatedVertexPosition_Global + instancedMesh_LocalTransform_Global.GetLocation();
	}


	vertexPositionInActorSpace = UKismetMathLibrary::InverseTransformLocation(calculateColorsInfo.vertexPaintActor->GetTransform(), UKismetMathLibrary::TransformLocation(calculateColorsInfo.vertexPaintComponent->GetComponentTransform(), vertexPositionInComponentSpace));


	return true;
}


//-------------------------------------------------------

// Get Skeletal Mesh Component Vertex Info

#if ENGINE_MAJOR_VERSION == 4

bool FVertexPaintCalculateColorsTask::GetSkeletalMeshComponentVertexInfo(const FCalculateColorsInfo& calculateColorsInfo, FSkeletalMeshRenderData* skeletalMeshRenderData, FSkeletalMeshLODRenderData* skeletalMeshLODRenderData, FSkelMeshRenderSection* skeletalMeshRenderSection, FSkinWeightVertexBuffer* skeletalMeshSkinWeightBuffer, const TArray<FVector>& clothSectionVertexPositions, const TArray<FVector>& clothSectionVertexNormals, const TArray<FQuat>& clothBoneQuaternionsInComponentSpace, const TArray<FVector>& clothBoneLocationInComponentSpace, int lod, int section, int sectionVertexIndex, int lodVertexIndex, FVector& vertexPositionInComponentSpace, FVector& vertexPositionInActorSpace, FVector& vertexNormal, bool& gotVertexNormal, bool& isVertexOnCloth, uint32& boneIndex, FName& boneName) {

#elif ENGINE_MAJOR_VERSION == 5

bool FVertexPaintCalculateColorsTask::GetSkeletalMeshComponentVertexInfo(const FCalculateColorsInfo & calculateColorsInfo, FSkeletalMeshRenderData * skeletalMeshRenderData, FSkeletalMeshLODRenderData * skeletalMeshLODRenderData, FSkelMeshRenderSection * skeletalMeshRenderSection, FSkinWeightVertexBuffer * skeletalMeshSkinWeightBuffer, const TArray<FVector3f>& clothSectionVertexPositions, const TArray<FVector3f>& clothSectionVertexNormals, const TArray<FQuat>&clothBoneQuaternionsInComponentSpace, const TArray<FVector>&clothBoneLocationInComponentSpace, int lod, int section, int sectionVertexIndex, int lodVertexIndex, FVector& vertexPositionInComponentSpace, FVector& vertexPositionInActorSpace, FVector & vertexNormal, bool& gotVertexNormal, bool& isVertexOnCloth, uint32& boneIndex, FName& boneName) {

#endif

	if (!IsValidSkeletalMesh(calculateColorsInfo.vertexPaintSkelComponentsSkeletalMesh, calculateColorsInfo.vertexPaintSkelComponent, skeletalMeshRenderData, lod)) return false;

	if (!skeletalMeshLODRenderData->RenderSections.IsValidIndex(section)) {

		calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Failed because we're trying to loop through an invalid section of the skeletal mesh LOD render data. Possibly the mesh has changed since the task started or during it? ")), FColor::Red));

		return false;
	}

	if (lodVertexIndex >= (int)skeletalMeshLODRenderData->GetNumVertices()) {

		calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Task Failed because skeletal mesh current vertex we're looping through is more than the skeletal mesh render data number of vertices. Possibly the Mesh has gotteh changed during paint job")), FColor::Red));

		return false;
	}


	// Extremely rarely got crashes when run .VertexTangentZ below on StaticMeshVertexBuffer ln 217 when switching skeletal meshes and painting every frame. This seems to have fixed that issue. 
	if (!skeletalMeshLODRenderData->StaticVertexBuffers.StaticMeshVertexBuffer.IsInitialized() || !skeletalMeshLODRenderData->StaticVertexBuffers.StaticMeshVertexBuffer.TangentsVertexBuffer.IsInitialized() || !skeletalMeshLODRenderData->StaticVertexBuffers.StaticMeshVertexBuffer.GetTangentData()) {

		calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Failed because skeletal mesh's static vertex buffers tangent vertex buffer isn't initialized!")), FColor::Red));

		return false;
	}


#if ENGINE_MAJOR_VERSION == 4

	vertexNormal = skeletalMeshLODRenderData->StaticVertexBuffers.StaticMeshVertexBuffer.VertexTangentZ(lodVertexIndex);

#elif ENGINE_MAJOR_VERSION == 5

	vertexNormal = (FVector)skeletalMeshLODRenderData->StaticVertexBuffers.StaticMeshVertexBuffer.VertexTangentZ(lodVertexIndex);

#endif


	gotVertexNormal = true;


	// If cloth, then gets and adjust position from cloth simul data when on the viewable LOD
	if (skeletalMeshRenderSection->HasClothingData() && lod == calculateColorsInfo.vertexPaintSkelComponent->GetPredictedLODLevel()) {

		if (!skeletalMeshLODRenderData->ClothVertexBuffer.IsInitialized()) {

			calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Task Failed skeletal mesh with cloth's cloth vertex buffer isn't initialized eventhough it's supposed to have cloth. Perhaps the mesh has changed since the task was created or during it? ")), FColor::Red));

			return false;
		}

		
		if (clothSectionVertexPositions.IsValidIndex(sectionVertexIndex) && clothSectionVertexNormals.IsValidIndex(sectionVertexIndex) && clothBoneQuaternionsInComponentSpace.IsValidIndex(skeletalMeshRenderSection->CorrespondClothAssetIndex)) {

			isVertexOnCloth = true;
			vertexPositionInComponentSpace = (FVector)clothSectionVertexPositions[sectionVertexIndex];
			vertexNormal = (FVector)clothSectionVertexNormals[sectionVertexIndex];


			// UE5 with Chaos Cloth required a conversion of the cloth positions and rotation to get them aligned to the bone the cloth is attached to
#if ENGINE_MAJOR_VERSION == 5

			// Rotates the Vector according to the bone it's attached to
			vertexPositionInComponentSpace = UKismetMathLibrary::Quat_RotateVector(clothBoneQuaternionsInComponentSpace[skeletalMeshRenderSection->CorrespondClothAssetIndex], (FVector)clothSectionVertexPositions[sectionVertexIndex]);

			// Since the Vertex Positions we get from Cloth is component 0, 0, 0 we had to add the bone component local here to get it at the right location, so we now have the correct rotation and location for each cloth vertex 
			vertexPositionInComponentSpace += clothBoneLocationInComponentSpace[skeletalMeshRenderSection->CorrespondClothAssetIndex];

#endif


			if (calculateColorsInfo.fundementalStruct.debugSettings.gameThreadSpecificDebugSymbols.drawClothVertexPositionDebugPoint && inGameThread_Global) {

				DrawDebugPoint(calculateColorsInfo.vertexPaintActor->GetWorld(), UKismetMathLibrary::TransformLocation(calculateColorsInfo.vertexPaintActor->GetTransform(), UKismetMathLibrary::InverseTransformLocation(calculateColorsInfo.vertexPaintActor->GetTransform(), UKismetMathLibrary::TransformLocation(calculateColorsInfo.vertexPaintComponent->GetComponentTransform(), vertexPositionInComponentSpace))), 5, FColor::Red, false, calculateColorsInfo.fundementalStruct.debugSettings.gameThreadSpecificDebugSymbols.drawGameThreadSpecificDebugSymbolsDuration, 0);
			}
		}

		else {
			
			// If no clothing then gets the position in component space using our own GetTypedSkinnedVertexPosition, which is otherwise called on each vertex if running ComputeSkinnedPositions. The reason why we've made our own here is so we only have to loop through a mesh sections and vertices once, instead of atleast twice if running ComputeSkinnedPositions, since it also loops through sections and vertices, then if we where to use that here we would have to loop through it again. 
			vertexPositionInComponentSpace = Modified_GetTypedSkinnedVertexPosition(skeletalMeshRenderSection, skeletalMeshLODRenderData->StaticVertexBuffers.PositionVertexBuffer, skeletalMeshSkinWeightBuffer, sectionVertexIndex, calculateColorsInfo.skeletalMeshRefToLocals, boneIndex);
		}
	}

	else {

		vertexPositionInComponentSpace = Modified_GetTypedSkinnedVertexPosition(skeletalMeshRenderSection, skeletalMeshLODRenderData->StaticVertexBuffers.PositionVertexBuffer, skeletalMeshSkinWeightBuffer, sectionVertexIndex, calculateColorsInfo.skeletalMeshRefToLocals, boneIndex);
	}


	if (!calculateColorsInfo.skeletalMeshBonesNames.IsValidIndex(boneIndex)) {

		calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Task Failed because skeletal mesh's current bone index isn't valid to the cached array we got when creating the task. Possibly the skeletal mesh has changed since then or during the task. ")), FColor::Red));

		return false;
	}


	// When gotten the bone index from GetTypedSkinnedVertexPosition we can get the bone name
	boneName = calculateColorsInfo.skeletalMeshBonesNames[boneIndex];

	vertexPositionInActorSpace = UKismetMathLibrary::InverseTransformLocation(calculateColorsInfo.vertexPaintActor->GetTransform(), UKismetMathLibrary::TransformLocation(calculateColorsInfo.vertexPaintComponent->GetComponentTransform(), vertexPositionInComponentSpace));


	return true;
}


//-------------------------------------------------------

// Get Dynamic Mesh Component Vertex Info

#if ENGINE_MAJOR_VERSION == 5

bool FVertexPaintCalculateColorsTask::GetDynamicMeshComponentVertexInfo(const FCalculateColorsInfo& calculateColorsInfo, UE::Geometry::FDynamicMesh3* dynamicMesh3, int totalAmountOfVerticesAtLOD, int lodVertexIndex, FColor& vertexColor, FVector& vertexPositionInComponentSpace, FVector& vertexPositionInActorSpace, FVector& vertexNormal, bool& gotVertexNormal, UE::Geometry::FVertexInfo& dynamicMeshVertexInfo, int& dynamicMeshMaxVertexID, int& dynamicMeshVerticesBufferMax, bool& skipDynamicMeshVertex) {

	if (!IsValid(calculateColorsInfo.vertexPaintDynamicMeshComponent)) return false;
	if (!IsValid(calculateColorsInfo.vertexPaintDynamicMeshComponent->GetDynamicMesh())) return false;
	if (!dynamicMesh3) return false;

	skipDynamicMeshVertex = false;
	dynamicMeshMaxVertexID = dynamicMesh3->MaxVertexID();
	dynamicMeshVerticesBufferMax = dynamicMesh3->GetVerticesBuffer().Num();


	// These could rarely diff where one was not 0 but the other was if running a bunch of paint jobs while it was deforming every frame
	if (dynamicMeshMaxVertexID <= 0 || dynamicMeshVerticesBufferMax <= 0) {

		calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Failed because Dynamic Mesh MaxVertexID and VerticesBuffer amount isn't in sync!")), FColor::Red));

		return false;
	}


	// Checks if vertex count has changed, so even if the index is valid, but the deformation has occured and changed the amount While we where looping through the verts we can abort the task. 
	if (lodVertexIndex >= dynamicMeshMaxVertexID || dynamicMeshMaxVertexID != totalAmountOfVerticesAtLOD) {

		calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Failed because Dynamic Mesh MaxVertexID is higher than the current lod vertex, or it's not the same amount as the total amount of vertices when task started. ")), FColor::Red));

		return false;
	}


	// Also checks lod vertex is within the vertices buffer amoutn. This was necessary because eventhough we could pass the IsVertexCheck, we could get a crash at GetVertex below where it tried to access a Vertices property, eventhough it passed a VertexRefCounts valid check, so apparently they can diff. 
	if (lodVertexIndex >= dynamicMeshVerticesBufferMax || dynamicMeshVerticesBufferMax != totalAmountOfVerticesAtLOD) {

		calculateColorsResultMessage_Global.Add(FAsyncTaskDebugMessages(FString::Printf(TEXT("Calculate Colors Task: Failed because Dynamic Mesh vertices buffer max vertex count is higher than the current lod vertex, or it's not the same amount as the total amount of vertices when task started. ")), FColor::Red));

		return false;
	}


	// When a Dynamic Mesh become deformed all vertices aren't valid or exist, so on these we skip to the next iteration.
	if (!dynamicMesh3->IsVertex(lodVertexIndex)) {

		lodVertexIndex++;
		skipDynamicMeshVertex = true;

		return true;
	}


	dynamicMeshVertexInfo = dynamicMesh3->GetVertexInfo(lodVertexIndex);


	if (dynamicMeshVertexInfo.bHaveC) {

		// Since dynamic meshes store their colors as FVector3f, i.e. RGB only, we return alpha as 0 instead of 1 as it would be otherwise. 
		vertexColor = (FColor(dynamicMeshVertexInfo.Color.X, dynamicMeshVertexInfo.Color.Y, dynamicMeshVertexInfo.Color.Z, 0));
	}


	vertexPositionInComponentSpace = (FVector)dynamicMeshVertexInfo.Position;

	if (dynamicMeshVertexInfo.bHaveN) {

		vertexNormal = (FVector)dynamicMeshVertexInfo.Normal;
		gotVertexNormal = true;
	}


	vertexPositionInActorSpace = UKismetMathLibrary::InverseTransformLocation(calculateColorsInfo.vertexPaintActor->GetTransform(), UKismetMathLibrary::TransformLocation(calculateColorsInfo.vertexPaintComponent->GetComponentTransform(), vertexPositionInComponentSpace));

	return true;
}


//-------------------------------------------------------

// Get Geometry Collection Component Vertex Info

// vertexPaintGeometryCollectionComponent->GetRootCurrentTransform() didn't exist on 5.0 so added this here. We don't support painting and detecting prior to 5.3 
#if ENGINE_MINOR_VERSION >= 3

bool FVertexPaintCalculateColorsTask::GetGeometryCollectionComponentVertexInfo(const FCalculateColorsInfo& calculateColorsInfo, int lodVertexIndex, FColor& vertexColor, FVector& vertexPositionInComponentSpace, FVector& vertexPositionInActorSpace, FVector& vertexNormal, bool& gotVertexNormal) {

	if (!IsValid(calculateColorsInfo.vertexPaintGeometryCollectionComponent)) return false;
	if (!calculateColorsInfo.vertexPaintGeometryCollectionData) return false;


	vertexNormal = (FVector)calculateColorsInfo.vertexPaintGeometryCollectionData->Normal[lodVertexIndex];
	vertexPositionInComponentSpace = (FVector)calculateColorsInfo.vertexPaintGeometryCollectionData->Vertex[lodVertexIndex];

	gotVertexNormal = true;

	// Have had issues when using .ToFColor thousands of time in async where it can occasionally not convert it correctly, where a few out of a thousands vertices may go from fully colored to 0, 0, 0, 0. Not sure why, but avoiding .ToFColor and doing your own conversion fixed the issue. 
	vertexColor = UVertexPaintFunctionLibrary::ReliableFLinearToFColor(calculateColorsInfo.vertexPaintGeometryCollectionData->Color[lodVertexIndex]);



	// Geometry Collection Components GetComponentTransform doesn't change apparently, so you have to use GetRootCurrentTransform to get the correct one. 
	vertexPositionInActorSpace = UKismetMathLibrary::InverseTransformLocation(calculateColorsInfo.vertexPaintActor->GetTransform(), UKismetMathLibrary::TransformLocation(calculateColorsInfo.vertexPaintGeometryCollectionComponent->GetRootCurrentTransform(), vertexPositionInComponentSpace));


	return true;
}

#endif
#endif


//-------------------------------------------------------

// Get Paint Entire Mesh Vertex Info

void FVertexPaintCalculateColorsTask::GetPaintEntireMeshVertexInfo(const FCalculateColorsInfo& calculateColorsInfo, const FVector& vertexPositionInWorldSpace, const FVector& vertexPositionInComponentSpace, int totalAmountOfVerticesAtLOD, int lod, int lodVertexIndex, const TMap<FVector, FColor>& vertexDublettesPaintedAtLOD0, const FRandomStream& randomStream, bool& shouldPaintCurrentVertex, float& amountOfVerticesLeftToRandomize, float& currentProbability) {

	if (!calculateColorsInfo.paintOnEntireMeshSettings.actor) return;



	// If set to randomize over the entire mesh
	if (calculateColorsInfo.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh || calculateColorsInfo.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.onlyRandomizeWithinAreaOfEffectAtLocation) {


		// This array only gets filled if Motified Engine Method. If this vertex is a doublette of another that is on the Exact same position, then we want it to also get painted, so all doublettes at a position have the same color. This is so when we run our calculation so LOD1, 2 vertices get the same color as their closest and best LOD0 vertex, it shouldn't matter which of the doublettes the calculation chooses to be the best, as they all have the same color. Otherwise we had an issue where other LODs wouldn't get LOD0 color if using modified engine method since the result of it can be that the closest LOD0 vertex color to use for a LOD1 vertex could be a doublette of the randomized one that was on the exact same location
		if (lod == 0 && vertexDublettesPaintedAtLOD0.Contains(vertexPositionInComponentSpace)) {

			shouldPaintCurrentVertex = true;
		}

		// AmountOfVerticesLeftToRandomize_Local will reset if Not to propogate to other LODs, i.e. do a complete randomization for each LOD
		else if (amountOfVerticesLeftToRandomize > 0) {

			// For instance 5 left to randomize out of total 100 verts that's left, = 0.05, 5% chance. initial amountOfVerticesLeftToRandomize_Local Will be set depending on the paintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint
			currentProbability = amountOfVerticesLeftToRandomize / (totalAmountOfVerticesAtLOD - lodVertexIndex);


			// If set to randomize within AoE at Location then checks distance,if too far away then probability drops to 0 as we should never randomizee to them. 
			if (calculateColorsInfo.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.onlyRandomizeWithinAreaOfEffectAtLocation) {

				if ((calculateColorsInfo.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.onlyRandomizeWithinAreaOfEffectAtLocation_Location - vertexPositionInWorldSpace).Size() > calculateColorsInfo.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.onlyRandomizeWithinAreaOfEffectAtLocation_AreaOfEffect)
					currentProbability = 0;

				else
					currentProbability = calculateColorsInfo.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.onlyRandomizeWithinAreaOfEffectAtLocation_ProbabilityFactor;
			}


			// Used to test in combination with only randomizing 1 vert if it got propogated to the other LOD
			// paintEntireMesh_Random_Probability_Local = 1;


			if (currentProbability > 0) {

#if ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0
				if (UKismetMathLibrary::RandomBoolWithWeightFromStream(currentProbability, randomStream)) {
#elif ENGINE_MINOR_VERSION == 1
				if (UKismetMathLibrary::RandomBoolWithWeightFromStream(currentProbability, randomStream)) {
#else
				// From 5.2 it's changed with FRandomStream as first argument
				if (UKismetMathLibrary::RandomBoolWithWeightFromStream(randomStream, currentProbability)) {
#endif

#else
				// If this vert was choosen, then set paintCurrentVertex to true so we actually paint on this and doesn't just run it
				if (UKismetMathLibrary::RandomBoolWithWeightFromStream(currentProbability, randomStream)) {
#endif

					// UE_LOG(LogTemp, Warning, TEXT("Choose Vertex: %i  -   Amount Randomized left: %f   -   Total Verts left: %i   -   Random Weight: %f"), lodVertexIndex, amountOfVerticesLeftToRandomize, (meshLODTotalAmountOfVerts_Local - lodVertexIndex), paintEntireMesh_Random_Probability_Local);

					amountOfVerticesLeftToRandomize--;
					shouldPaintCurrentVertex = true;
				}

				// If not choosen to paint on this vertex, we still let the loop continue, so we can get complete cloth data to apply etc. 
				else {

					shouldPaintCurrentVertex = false;

					// UE_LOG(LogTemp, Warning, TEXT("Did Not choose Vertex. Amount Randomized left: %f   -   Total Verts left: %i   -   Random Weight: %f"), amountOfVerticesLeftToRandomize, (meshLODTotalAmountOfVerts_Local - lodVertexIndex), paintEntireMesh_Random_Probability_Local);
				}
			}

			else {

				shouldPaintCurrentVertex = false;
			}
		}
	}

	else {

		shouldPaintCurrentVertex = true;
	}
}


//-------------------------------------------------------

// Get Paint At Location Vertex Info At LOD Zero Before Applying Colors

void FVertexPaintCalculateColorsTask::GetPaintAtLocationVertexInfoAtLODZeroBeforeApplyingColors(const FCalculateColorsInfo& calculateColorsInfo, const FVector& vertexPositionInWorldSpace, const FVector& paintAtLocationHitInWorldSpace, int lod, int lodVertexIndex, int section, int amountOfLODVertices, float distanceFromVertexToHitLocation, float& paintAtLocationsDistanceToClosestVertex, int& closestPaintVertexFound, int& closestPaintSectionFound, FVector& paintAtLocationsEstimatedColorToHitLocationsDirectionToClosestVertex, float& paintAtLocationsEstimatedColorToHitLocation_LongestDistance, int& paintAtLocationsEstimatedColorToHitLocation_LongestDistanceIndex, TMap<int, FDirectionFromHitLocationToClosestVerticesInfo>& paintAtLocationEstimatedColorToHitLocation_DirectionFromHitToClosestVertexInfo) {

	if (lod != 0) return;
	if (!calculateColorsInfo.paintOnMeshAtLocationSettings.actor) return;


	if (distanceFromVertexToHitLocation < paintAtLocationsDistanceToClosestVertex) {


		// If its less then updates distanceFromTraceHitToVertPos, so in the next loop it will check against that value
		paintAtLocationsDistanceToClosestVertex = distanceFromVertexToHitLocation;

		closestPaintVertexFound = lodVertexIndex;
		closestPaintSectionFound = section;

		paintAtLocationsEstimatedColorToHitLocationsDirectionToClosestVertex = UKismetMathLibrary::GetDirectionUnitVector(paintAtLocationHitInWorldSpace, vertexPositionInWorldSpace);
	}


	bool getEstimatedColorAtHitLocation_Local = false;

	if (calculateColorsInfo.estimatedColorAtHitLocationSettings.getEstimatedColorAtHitLocation) {

		if (calculateColorsInfo.estimatedColorAtHitLocationSettings.onlyGetIfMeshHasMaxAmountOfVertices) {

			if (amountOfLODVertices <= calculateColorsInfo.estimatedColorAtHitLocationSettings.maxAmountOfVertices)
				getEstimatedColorAtHitLocation_Local = true;
		}

		else {

			getEstimatedColorAtHitLocation_Local = true;
		}
	}

	// Adds the closest 9 into a TMap containing the closest verts and the direction, index and distance to them. This is used when we've finished looping through LOD0 verts to determine which vertex we want to scale against to calculate the colors at the Hit Location. So based on the direction from the closest vertex, and the hit location, we can check which of the nearby vertices has the best Dot toward it. Then based on the distance to it we lerp from the closest vertex color, to the one that had the best dot, based on the distance to it, to get a close to accurate Color at Actual Hit Location of the Mesh, which is useful if you have meshes with few vertices. 
	if (getEstimatedColorAtHitLocation_Local)
		IsVertexCloseToEstimatedColorToHitLocation(paintAtLocationsEstimatedColorToHitLocation_LongestDistance, paintAtLocationsEstimatedColorToHitLocation_LongestDistanceIndex, paintAtLocationEstimatedColorToHitLocation_DirectionFromHitToClosestVertexInfo, paintAtLocationHitInWorldSpace, vertexPositionInWorldSpace, lodVertexIndex);
}


//-------------------------------------------------------

// Get Closest Vertex Data Vertex Info At LOD Zero Before Applying Colors

void FVertexPaintCalculateColorsTask::GetClosestVertexDataVertexInfoAtLODZeroBeforeApplyingColors(const FCalculateColorsInfo& calculateColorsInfo, const FVertexDetectGetAverageColorStruct& getClosestVertexDataGetAverageColor, const FColor& vertexColor, const FVector& vertexPositionInWorldSpace, const FVector& getClosestVertexDataHitInWorldSpace, int lod, int lodVertexIndex, int section, int amountOfLODVertices, float getClosestVertexDataNormalToHitNormalDot, float distanceFromVertexToHitLocation, float& getClosestVertexDataDistanceToClosestVertex, int& closestGetClosestVertexFound, int& closestGetClosestSectionFound, FVector& getClosestVertexDataEstimatedColorToHitLocationsDirectionToClosestVertex, float& getClosestVertexDataEstimatedColorToHitLocation_LongestDistance, int& getClosestVertexDataEstimatedColorToHitLocation_LongestDistanceIndex, TMap<int, FDirectionFromHitLocationToClosestVerticesInfo>& getClosestVertexDataEstimatedColorToHitLocation_DirectionFromHitToClosestVertexInfo, int& amountOfVerticesWithinArea, float& averageColorWithinArea_Red, float& averageColorWithinArea_Green, float& averageColorWithinArea_Blue, float& averageColorWithinArea_Alpha) {

	if (!calculateColorsInfo.getClosestVertexDataSettings.actor) return;
	if (lod != 0) return;
	

	if (getClosestVertexDataGetAverageColor.areaRangeToGetAvarageColorFrom > 0) {

		// If within range
		if ((getClosestVertexDataHitInWorldSpace - vertexPositionInWorldSpace).Size() <= getClosestVertexDataGetAverageColor.areaRangeToGetAvarageColorFrom) {


			// Vertex World Normal is within Dot to Hit Normal. So we can only detect and get average color from one side of a wall if set to 0 for instance
			if (getClosestVertexDataNormalToHitNormalDot >= getClosestVertexDataGetAverageColor.VertexNormalToHitNormal_MinimumDotProductToBeAccountedFor) {


				amountOfVerticesWithinArea++;

				averageColorWithinArea_Red += vertexColor.R;
				averageColorWithinArea_Green += vertexColor.G;
				averageColorWithinArea_Blue += vertexColor.B;
				averageColorWithinArea_Alpha += vertexColor.A;
			}
		}
	}


	if (distanceFromVertexToHitLocation < getClosestVertexDataDistanceToClosestVertex) {

		// If its less then updates distanceFromTraceHitToVertPos, so in the next loop it will check against that value
		getClosestVertexDataDistanceToClosestVertex = (getClosestVertexDataHitInWorldSpace - vertexPositionInWorldSpace).Size();

		closestGetClosestVertexFound = lodVertexIndex;
		closestGetClosestSectionFound = section;

		getClosestVertexDataEstimatedColorToHitLocationsDirectionToClosestVertex = UKismetMathLibrary::GetDirectionUnitVector(getClosestVertexDataHitInWorldSpace, vertexPositionInWorldSpace);
	}


	bool getEstimatedColorAtHitLocation_Local = false;

	if (calculateColorsInfo.estimatedColorAtHitLocationSettings.getEstimatedColorAtHitLocation) {

		if (calculateColorsInfo.estimatedColorAtHitLocationSettings.onlyGetIfMeshHasMaxAmountOfVertices) {

			if (amountOfLODVertices <= calculateColorsInfo.estimatedColorAtHitLocationSettings.maxAmountOfVertices)
				getEstimatedColorAtHitLocation_Local = true;
		}

		else {

			getEstimatedColorAtHitLocation_Local = true;
		}

		if (calculateColorsInfo.paintOnMeshAtLocationSettings.actor) {

			if (calculateColorsInfo.paintOnMeshAtLocationSettings.getClosestVertexDataCombo.useCustomHitFundementalsForDetection) {

				//
			}

			// If it's a paint at location with detect before/after, but at the same hit location the paint at location is run on, then there's no need to fill the detection directionFromHitToClosestVerticesInfo_Detect TMap since it can just use the same result the paint job gets. This should save some performance since there's less loops every vertex etc.
			else {

				getEstimatedColorAtHitLocation_Local = false;
			}
		}
	}

	// Adds the closest 9 into a TMap containing the closest verts and the direction, index and distance to them. This is used when we've finished looping through LOD0 verts to determine which vertex we want to scale against to calculate the colors at the Hit Location. So based on the direction from the closest vertex, and the hit location, we can check which of the nearby vertices has the best Dot toward it. Then based on the distance to it we lerp from the closest vertex color, to the one that had the best dot, based on the distance to it, to get a close to accurate Color at Actual Hit Location of the Mesh, which is useful if you have meshes with few vertices. 
	if (getEstimatedColorAtHitLocation_Local) {

		IsVertexCloseToEstimatedColorToHitLocation(getClosestVertexDataEstimatedColorToHitLocation_LongestDistance, getClosestVertexDataEstimatedColorToHitLocation_LongestDistanceIndex, getClosestVertexDataEstimatedColorToHitLocation_DirectionFromHitToClosestVertexInfo, getClosestVertexDataHitInWorldSpace, vertexPositionInWorldSpace, lodVertexIndex);
	}
}


//-------------------------------------------------------

// Get Within Area Vertex Info At LOD Zero Before Applying Colors

bool FVertexPaintCalculateColorsTask::GetWithinAreaVertexInfoAtLODZeroBeforeApplyingColors(const FCalculateColorsInfo& calculateColorsInfo, int lod, const FVector& vertexPositionInWorldSpace, bool& vertexIsWithinArea) {

	// Only returns false if task should actually fail
	if (lod != 0) return true;


	// If only Get Colors Within Area then we do a similar check as Paint Within Area, but without all Falloff stuff. Otherwise if paint within area but with detection before then we just run this there but get what the color was Before we applied color. 
	if (calculateColorsInfo.getColorsWithinAreaSettings.actor && !calculateColorsInfo.paintOnMeshWithinAreaSettings.actor) {


		vertexIsWithinArea = false;

		for (int i = 0; i < calculateColorsInfo.withinAreaSettings.componentsToCheckIfIsWithin.Num(); i++) {

			// If Complex shape then requires that the component is still valid as we trace for it
			if (calculateColorsInfo.withinAreaSettings.componentsToCheckIfIsWithin[i].paintWithinAreaShape == Enum_PaintWithinAreaShape::isComplexShape) {

				if (!IsValid(calculateColorsInfo.withinAreaSettings.componentsToCheckIfIsWithin[i].componentToCheckIfIsWithin)) return false;
			}

			if (IsVertexWithinArea(vertexPositionInWorldSpace, calculateColorsInfo.withinAreaSettings.componentsToCheckIfIsWithin[i])) {

				vertexIsWithinArea = true;
				return true;
			}
		}
	}

	return true;
}


//-------------------------------------------------------

// Get Within Area Vertex Info At LOD Zero Before Applying Colors

void FVertexPaintCalculateColorsTask::UpdateColorsOfEachChannelAbove0BeforeApplyingColors(const FLinearColor& vertexColorAsLinear, int lod, FVertexDetectAmountOfPaintedColorsOfEachChannel& colorsOfEachChannelAbove0) {

	if (lod != 0) return;


	colorsOfEachChannelAbove0.redChannelResult.amountOfVerticesConsidered++;
	colorsOfEachChannelAbove0.greenChannelResult.amountOfVerticesConsidered++;
	colorsOfEachChannelAbove0.blueChannelResult.amountOfVerticesConsidered++;
	colorsOfEachChannelAbove0.alphaChannelResult.amountOfVerticesConsidered++;

	// Always get the total amount for each channel if there is anything on it so we can after the task is done check if all is 0 or 1, if we're trying to add colors to an already fully painted mesh
	if (vertexColorAsLinear.R > 0) {

		colorsOfEachChannelAbove0.redChannelResult.amountOfVerticesPaintedAtMinAmount++;
		colorsOfEachChannelAbove0.redChannelResult.averageColorAmountAtMinAmount += vertexColorAsLinear.R;
	}

	if (vertexColorAsLinear.G > 0) {

		colorsOfEachChannelAbove0.greenChannelResult.amountOfVerticesPaintedAtMinAmount++;
		colorsOfEachChannelAbove0.greenChannelResult.averageColorAmountAtMinAmount += vertexColorAsLinear.G;
	}

	if (vertexColorAsLinear.B > 0) {

		colorsOfEachChannelAbove0.blueChannelResult.amountOfVerticesPaintedAtMinAmount++;
		colorsOfEachChannelAbove0.blueChannelResult.averageColorAmountAtMinAmount += vertexColorAsLinear.B;
	}

	if (vertexColorAsLinear.A > 0) {

		colorsOfEachChannelAbove0.alphaChannelResult.amountOfVerticesPaintedAtMinAmount++;
		colorsOfEachChannelAbove0.alphaChannelResult.averageColorAmountAtMinAmount += vertexColorAsLinear.A;
	}
}


//-------------------------------------------------------

// Get Within Area Vertex Info After Applying Colors

void FVertexPaintCalculateColorsTask::GetWithinAreaVertexInfoAfterApplyingColorsAtLODZero(const FCalculateColorsInfo& calculateColorsInfo, const TArray<TEnumAsByte<EPhysicalSurface>>& registeredPhysicsSurfacesAtMaterial, const FLinearColor& vertexColorAsLinearBeforeApplyingColor, const FLinearColor& vertexColorAsLinearAfterApplyingColor, int lod, bool vertexWasWithinArea, bool containsPhysicsSurfaceOnRedChannel, bool containsPhysicsSurfaceOnGreenChannel, bool containsPhysicsSurfaceOnBlueChannel, bool containsPhysicsSurfaceOnAlphaChannel, FVertexDetectAmountOfPaintedColorsOfEachChannel& amountOfPaintedColorsOfEachChannelWithinArea_BeforeApplyingColors, TArray<FVertexDetectAmountOfPaintedColorsOfEachChannel_Results>& physicsSurfaceResultForSection_BeforeApplyingColors, FVertexDetectAmountOfPaintedColorsOfEachChannel& amountOfPaintedColorsOfEachChannelWithinArea_AfterApplyingColors, TArray<FVertexDetectAmountOfPaintedColorsOfEachChannel_Results>& physicsSurfaceResultForSection_AfterApplyingColors) {

	if (!vertexWasWithinArea) return;
	if (lod != 0) return;


	// These are the things both Get Colors Within Area, and Paint Within Area can share if the vertex was within area


	// Get Colors Within Area that uses the color Before Applying Colors. Sets this here in case it was a Paint Within Area job, with detect before so we don't have to have this logic in two places
	if (calculateColorsInfo.getColorsWithinAreaSettings.actor) {

		if (calculateColorsInfo.withinAreaSettings.includeAmountOfColorsOfEachChannelWithinArea.includeVertexColorChannelResultOfEachChannel) {

			GetColorsOfEachChannelForVertex(vertexColorAsLinearBeforeApplyingColor, calculateColorsInfo.withinAreaSettings.includeAmountOfColorsOfEachChannelWithinArea, containsPhysicsSurfaceOnRedChannel, containsPhysicsSurfaceOnGreenChannel, containsPhysicsSurfaceOnBlueChannel, containsPhysicsSurfaceOnAlphaChannel, amountOfPaintedColorsOfEachChannelWithinArea_BeforeApplyingColors.redChannelResult, amountOfPaintedColorsOfEachChannelWithinArea_BeforeApplyingColors.greenChannelResult, amountOfPaintedColorsOfEachChannelWithinArea_BeforeApplyingColors.blueChannelResult, amountOfPaintedColorsOfEachChannelWithinArea_BeforeApplyingColors.alphaChannelResult);
		}

		if (calculateColorsInfo.withinAreaSettings.includeAmountOfColorsOfEachChannelWithinArea.includePhysicsSurfaceResultOfEachChannel && registeredPhysicsSurfacesAtMaterial.Num() > 0) {

			GetColorsOfEachPhysicsSurfaceForVertex(registeredPhysicsSurfacesAtMaterial, vertexColorAsLinearBeforeApplyingColor, calculateColorsInfo_Global.withinAreaSettings.includeAmountOfColorsOfEachChannelWithinArea, containsPhysicsSurfaceOnRedChannel, containsPhysicsSurfaceOnGreenChannel, containsPhysicsSurfaceOnBlueChannel, containsPhysicsSurfaceOnAlphaChannel, physicsSurfaceResultForSection_BeforeApplyingColors);
		}
	}

	// Colors Within Area for Paint Within Area job that uses the colors After Applying Colors
	if (calculateColorsInfo.paintOnMeshWithinAreaSettings.actor) {

		if (calculateColorsInfo.withinAreaSettings.includeAmountOfColorsOfEachChannelWithinArea.includeVertexColorChannelResultOfEachChannel) {

			GetColorsOfEachChannelForVertex(vertexColorAsLinearAfterApplyingColor, calculateColorsInfo.withinAreaSettings.includeAmountOfColorsOfEachChannelWithinArea, containsPhysicsSurfaceOnRedChannel, containsPhysicsSurfaceOnGreenChannel, containsPhysicsSurfaceOnBlueChannel, containsPhysicsSurfaceOnAlphaChannel, amountOfPaintedColorsOfEachChannelWithinArea_AfterApplyingColors.redChannelResult, amountOfPaintedColorsOfEachChannelWithinArea_AfterApplyingColors.greenChannelResult, amountOfPaintedColorsOfEachChannelWithinArea_AfterApplyingColors.blueChannelResult, amountOfPaintedColorsOfEachChannelWithinArea_AfterApplyingColors.alphaChannelResult);
		}

		if (calculateColorsInfo.withinAreaSettings.includeAmountOfColorsOfEachChannelWithinArea.includePhysicsSurfaceResultOfEachChannel && registeredPhysicsSurfacesAtMaterial.Num() > 0) {

			GetColorsOfEachPhysicsSurfaceForVertex(registeredPhysicsSurfacesAtMaterial, vertexColorAsLinearAfterApplyingColor, calculateColorsInfo.withinAreaSettings.includeAmountOfColorsOfEachChannelWithinArea, containsPhysicsSurfaceOnRedChannel, containsPhysicsSurfaceOnGreenChannel, containsPhysicsSurfaceOnBlueChannel, containsPhysicsSurfaceOnAlphaChannel, physicsSurfaceResultForSection_AfterApplyingColors);
		}
	}
}


//-------------------------------------------------------

// Get Paint At Location Average Color Within Area At LOD Zero

void FVertexPaintCalculateColorsTask::GetPaintAtLocationAverageColorWithinAreaAtLODZero(const FCalculateColorsInfo& calculateColorsInfo, const FColor& vertexColor, float paintAtLocationDistanceToHitLocation, float paintAtLocationVertexNormalToHitNormalDot, float paintAtLocationVertexNormalToHitNormalMinDotRequired, int& paintAtLocation_AmountOfVerticesWithinArea, float& paintAtLocationAverageColorWithinArea_Red, float& paintAtLocationAverageColorWithinArea_Green, float& paintAtLocationAverageColorWithinArea_Blue, float& paintAtLocationAverageColorWithinArea_Alpha, float getClosestVertexDataDistanceToHitLocation, const FVertexDetectGetAverageColorStruct& getClosestVertexData_GetAverageColor, float getClosesVertexNormalToHitNormalDot, float& getClosestVertexDataAverageColorWithinAreaAfterApplyingColors_Red, float& getClosestVertexDataAverageColorWithinAreaAfterApplyingColors_Green, float& getClosestVertexDataAverageColorWithinAreaAfterApplyingColors_Blue, float& getClosestVertexDataAverageColorWithinAreaAfterApplyingColors_Alpha, int& getClosestVertexData_AmountOfVerticesWithinArea) {


	if (calculateColorsInfo.paintOnMeshAtLocationSettings.actor) {

		// If painting then sets a cached avarageColorWithinArea After we've applied colors, if within range
		if (paintAtLocationDistanceToHitLocation >= calculateColorsInfo.paintOnMeshAtLocationSettings.paintAtAreaSettings.areaOfEffectRangeStart && paintAtLocationDistanceToHitLocation <= calculateColorsInfo.paintOnMeshAtLocationSettings.paintAtAreaSettings.areaOfEffectRangeEnd) {

			// Vertex World Normal is within Dot to Hit Normal. So we can only detect and get average color from one side of a wall if set to 0 for instance
			if (paintAtLocationVertexNormalToHitNormalDot >= paintAtLocationVertexNormalToHitNormalMinDotRequired) {

				paintAtLocation_AmountOfVerticesWithinArea++;

				paintAtLocationAverageColorWithinArea_Red += vertexColor.R;
				paintAtLocationAverageColorWithinArea_Green += vertexColor.G;
				paintAtLocationAverageColorWithinArea_Blue += vertexColor.B;
				paintAtLocationAverageColorWithinArea_Alpha += vertexColor.A;
			}
		}

		// If detecting while painting
		if (calculateColorsInfo.getClosestVertexDataSettings.actor) {

			if (getClosestVertexDataDistanceToHitLocation <= getClosestVertexData_GetAverageColor.areaRangeToGetAvarageColorFrom) {

				if (getClosesVertexNormalToHitNormalDot >= getClosestVertexData_GetAverageColor.VertexNormalToHitNormal_MinimumDotProductToBeAccountedFor) {

					getClosestVertexData_AmountOfVerticesWithinArea++;

					getClosestVertexDataAverageColorWithinAreaAfterApplyingColors_Red += vertexColor.R;
					getClosestVertexDataAverageColorWithinAreaAfterApplyingColors_Green += vertexColor.G;
					getClosestVertexDataAverageColorWithinAreaAfterApplyingColors_Blue += vertexColor.B;
					getClosestVertexDataAverageColorWithinAreaAfterApplyingColors_Alpha += vertexColor.A;
				}
			}
		}
	}
}


//-------------------------------------------------------

// Get Cloth Section Total Colors After Applying Color

void FVertexPaintCalculateColorsTask::GetClothSectionTotalColorsAfterApplyingColor(USkeletalMeshComponent* skeletalMeshComponent, bool shouldAffectPhysicsOnClothSection, const FColor& vertexColor, float& clothSectionTotalRedColors, float& clothSectionTotalGreenColors, float& clothSectionTotalBlueColors, float& clothSectionTotalAlphaColors) {

	if (skeletalMeshComponent && shouldAffectPhysicsOnClothSection) {

		// Affecting Cloth Physics is exclusive to UE5 and ChaosCloth
#if ENGINE_MAJOR_VERSION == 5

		clothSectionTotalRedColors += vertexColor.R;
		clothSectionTotalGreenColors += vertexColor.G;
		clothSectionTotalBlueColors += vertexColor.B;
		clothSectionTotalAlphaColors += vertexColor.A;
#endif
	}
}


//-------------------------------------------------------

// Get Serialized Vertex Color

void FVertexPaintCalculateColorsTask::GetSerializedVertexColor(bool includeSerializedVertexColors, bool includeVertexDataOnlyForLOD0, int amountOfLODVertices, const FColor& vertexColor, int lod, int lodVertexIndex, FString& serializedColorData) {


	// Serializes each element while we're looping through the verts, so we don't have to loop through them again for the LOD after
	if (includeSerializedVertexColors) {


		// If only include vertex data for LOD0 is true then we only serialize for LOD 0, otherwise all LODs. 
		bool serializeLOD_Local = (includeVertexDataOnlyForLOD0 && lod != 0) ? false : true;


		if (serializeLOD_Local) {

			// Has to be bookended with [] so it matches our serialized TArray format
			if (lodVertexIndex == 0)
				serializedColorData += "[";

			// Needs , inbetween to match the regular serialized TArray format, but not on the first one
			if (lodVertexIndex > 0)
				serializedColorData += ",";

			serializedColorData += URVPDPRapidJsonFunctionLibrary::SerializeFColor_Wrapper(vertexColor);

			// If last vertex then wraps up with ]
			if (lodVertexIndex == amountOfLODVertices - 1)
				serializedColorData += "]";
		}
	}
}


//-------------------------------------------------------

// Get Cloth Section Average Color

void FVertexPaintCalculateColorsTask::GetClothSectionAverageColor(USkeletalMeshComponent* skeletalMeshComponent, FSkelMeshRenderSection* skelMeshRenderSection, bool shouldAffectPhysicsOnClothSection, int sectionMaxAmountOfVertices, float clothTotalRedVertexColorsOnSection, float clothTotalGreenVertexColorsOnSection, float clothTotalBlueVertexColorsOnSection, float clothTotalAlphaVertexColorsOnSection, TMap<int16, FLinearColor>& clothsSectionAvarageColor) {


	// Cloth Physics
	if (skeletalMeshComponent && shouldAffectPhysicsOnClothSection && skelMeshRenderSection) {

		// Affecting Cloth Physics is exclusive to UE5 and ChaosCloth
#if ENGINE_MAJOR_VERSION == 5

		clothTotalRedVertexColorsOnSection /= sectionMaxAmountOfVertices;
		clothTotalGreenVertexColorsOnSection /= sectionMaxAmountOfVertices;
		clothTotalBlueVertexColorsOnSection /= sectionMaxAmountOfVertices;
		clothTotalAlphaVertexColorsOnSection /= sectionMaxAmountOfVertices;

		clothTotalRedVertexColorsOnSection = UKismetMathLibrary::MapRangeClamped(clothTotalRedVertexColorsOnSection, 0, 255, 0, 1);
		clothTotalGreenVertexColorsOnSection = UKismetMathLibrary::MapRangeClamped(clothTotalGreenVertexColorsOnSection, 0, 255, 0, 1);
		clothTotalBlueVertexColorsOnSection = UKismetMathLibrary::MapRangeClamped(clothTotalBlueVertexColorsOnSection, 0, 255, 0, 1);
		clothTotalAlphaVertexColorsOnSection = UKismetMathLibrary::MapRangeClamped(clothTotalAlphaVertexColorsOnSection, 0, 255, 0, 1);

		// Adds the Cloths that actually got painted and average color
		clothsSectionAvarageColor.Add(skelMeshRenderSection->CorrespondClothAssetIndex, FLinearColor(clothTotalRedVertexColorsOnSection, clothTotalGreenVertexColorsOnSection, clothTotalBlueVertexColorsOnSection, clothTotalAlphaVertexColorsOnSection));
#endif
	}
}


//-------------------------------------------------------

// Resolve Amount Of Colors Of Each Channel

void FVertexPaintCalculateColorsTask::ResolveAmountOfColorsOfEachChannelForSection(const FCalculateColorsInfo& calculateColorsInfo, const TArray<TEnumAsByte<EPhysicalSurface>>& registeredPhysicsSurfacesAtMaterial, TArray<FVertexDetectAmountOfPaintedColorsOfEachChannel_Results>& physicsSurfaceResultForSection_BeforeApplyingColors, FVertexDetectAmountOfPaintedColorsOfEachChannel& amountOfPaintedColorsOfEachChannel_BeforeApplyingColors, TArray<FVertexDetectAmountOfPaintedColorsOfEachChannel_Results>& physicsSurfaceResultForSection_AfterApplyingColors, FVertexDetectAmountOfPaintedColorsOfEachChannel& amountOfPaintedColorsOfEachChannel_AfterApplyingColors, TArray<FVertexDetectAmountOfPaintedColorsOfEachChannel_Results>& physicsSurfaceResultForSection_WithinArea_BeforeApplyingColors, FVertexDetectAmountOfPaintedColorsOfEachChannel& amountOfPaintedColorsOfEachChannel_WithinArea_BeforeApplyingColors, TArray<FVertexDetectAmountOfPaintedColorsOfEachChannel_Results>& physicsSurfaceResultForSection_WithinArea_AfterApplyingColors, FVertexDetectAmountOfPaintedColorsOfEachChannel& amountOfPaintedColorsOfEachChannel_WithinArea_AfterApplyingColors) {


	// When Finished looping through section we go through the physics surface result for this section, if we've gotten it earlier in a previous section, or perhaps several vertex color channels has the same physics surface registered, then we add them up. 
	if (calculateColorsInfo.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includePhysicsSurfaceResultOfEachChannel || calculateColorsInfo.withinAreaSettings.includeAmountOfColorsOfEachChannelWithinArea.includePhysicsSurfaceResultOfEachChannel) {

		if (registeredPhysicsSurfacesAtMaterial.Num() > 0) {

			for (int i = 0; i < registeredPhysicsSurfacesAtMaterial.Num(); i++) {


				if (registeredPhysicsSurfacesAtMaterial[i] != EPhysicalSurface::SurfaceType_Default) {

					// Before and/or After Applying Color
					if (calculateColorsInfo.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includePhysicsSurfaceResultOfEachChannel) {

						// If Detection
						if (physicsSurfaceResultForSection_BeforeApplyingColors.IsValidIndex(i) && calculateColorsInfo.vertexDetectSettings.actor) {

							// If already exsts, i.e. there are several channels registered with the same physics surface, then we add them up. 
							if (amountOfPaintedColorsOfEachChannel_BeforeApplyingColors.physicsSurfacesResult.Contains(registeredPhysicsSurfacesAtMaterial[i])) {

								const FVertexDetectAmountOfPaintedColorsOfEachChannel_Results colorsOfEachChannelTemp = amountOfPaintedColorsOfEachChannel_BeforeApplyingColors.physicsSurfacesResult.FindRef(registeredPhysicsSurfacesAtMaterial[i]);

								physicsSurfaceResultForSection_BeforeApplyingColors[i].amountOfVerticesConsidered += colorsOfEachChannelTemp.amountOfVerticesConsidered;

								physicsSurfaceResultForSection_BeforeApplyingColors[i].amountOfVerticesPaintedAtMinAmount += colorsOfEachChannelTemp.amountOfVerticesPaintedAtMinAmount;

								physicsSurfaceResultForSection_BeforeApplyingColors[i].averageColorAmountAtMinAmount += colorsOfEachChannelTemp.averageColorAmountAtMinAmount;

								physicsSurfaceResultForSection_BeforeApplyingColors[i].percentPaintedAtMinAmount += colorsOfEachChannelTemp.percentPaintedAtMinAmount;

								amountOfPaintedColorsOfEachChannel_BeforeApplyingColors.physicsSurfacesResult.Add(registeredPhysicsSurfacesAtMaterial[i], physicsSurfaceResultForSection_BeforeApplyingColors[i]);
							}

							else {

								amountOfPaintedColorsOfEachChannel_BeforeApplyingColors.physicsSurfacesResult.Add(registeredPhysicsSurfacesAtMaterial[i], physicsSurfaceResultForSection_BeforeApplyingColors[i]);
							}
						}

						// After Applying Color
						if (physicsSurfaceResultForSection_AfterApplyingColors.IsValidIndex(i) && calculateColorsInfo.vertexPaintSettings.actor) {

							if (amountOfPaintedColorsOfEachChannel_AfterApplyingColors.physicsSurfacesResult.Contains(registeredPhysicsSurfacesAtMaterial[i])) {

								const FVertexDetectAmountOfPaintedColorsOfEachChannel_Results colorsOfEachChannelTemp = amountOfPaintedColorsOfEachChannel_AfterApplyingColors.physicsSurfacesResult.FindRef(registeredPhysicsSurfacesAtMaterial[i]);

								physicsSurfaceResultForSection_AfterApplyingColors[i].amountOfVerticesConsidered += colorsOfEachChannelTemp.amountOfVerticesConsidered;

								physicsSurfaceResultForSection_AfterApplyingColors[i].amountOfVerticesPaintedAtMinAmount += colorsOfEachChannelTemp.amountOfVerticesPaintedAtMinAmount;

								physicsSurfaceResultForSection_AfterApplyingColors[i].averageColorAmountAtMinAmount += colorsOfEachChannelTemp.averageColorAmountAtMinAmount;

								physicsSurfaceResultForSection_AfterApplyingColors[i].percentPaintedAtMinAmount += colorsOfEachChannelTemp.percentPaintedAtMinAmount;

								amountOfPaintedColorsOfEachChannel_AfterApplyingColors.physicsSurfacesResult.Add(registeredPhysicsSurfacesAtMaterial[i], physicsSurfaceResultForSection_AfterApplyingColors[i]);
							}

							else {

								amountOfPaintedColorsOfEachChannel_AfterApplyingColors.physicsSurfacesResult.Add(registeredPhysicsSurfacesAtMaterial[i], physicsSurfaceResultForSection_AfterApplyingColors[i]);
							}
						}
					}


					// Within Area
					if (calculateColorsInfo.withinAreaSettings.includeAmountOfColorsOfEachChannelWithinArea.includePhysicsSurfaceResultOfEachChannel) {


						if (physicsSurfaceResultForSection_WithinArea_BeforeApplyingColors.IsValidIndex(i)) {

							if (amountOfPaintedColorsOfEachChannel_WithinArea_BeforeApplyingColors.physicsSurfacesResult.Contains(registeredPhysicsSurfacesAtMaterial[i])) {

								const FVertexDetectAmountOfPaintedColorsOfEachChannel_Results colorsOfEachChannelTemp = amountOfPaintedColorsOfEachChannel_WithinArea_BeforeApplyingColors.physicsSurfacesResult.FindRef(registeredPhysicsSurfacesAtMaterial[i]);

								physicsSurfaceResultForSection_WithinArea_BeforeApplyingColors[i].amountOfVerticesConsidered += colorsOfEachChannelTemp.amountOfVerticesConsidered;

								physicsSurfaceResultForSection_WithinArea_BeforeApplyingColors[i].amountOfVerticesPaintedAtMinAmount += colorsOfEachChannelTemp.amountOfVerticesPaintedAtMinAmount;

								physicsSurfaceResultForSection_WithinArea_BeforeApplyingColors[i].averageColorAmountAtMinAmount += colorsOfEachChannelTemp.averageColorAmountAtMinAmount;

								physicsSurfaceResultForSection_WithinArea_BeforeApplyingColors[i].percentPaintedAtMinAmount += colorsOfEachChannelTemp.percentPaintedAtMinAmount;

								amountOfPaintedColorsOfEachChannel_WithinArea_BeforeApplyingColors.physicsSurfacesResult.Add(registeredPhysicsSurfacesAtMaterial[i], physicsSurfaceResultForSection_WithinArea_BeforeApplyingColors[i]);
							}

							else {

								amountOfPaintedColorsOfEachChannel_WithinArea_BeforeApplyingColors.physicsSurfacesResult.Add(registeredPhysicsSurfacesAtMaterial[i], physicsSurfaceResultForSection_WithinArea_BeforeApplyingColors[i]);
							}
						}


						if (physicsSurfaceResultForSection_WithinArea_AfterApplyingColors.IsValidIndex(i)) {

							if (amountOfPaintedColorsOfEachChannel_WithinArea_AfterApplyingColors.physicsSurfacesResult.Contains(registeredPhysicsSurfacesAtMaterial[i])) {

								const FVertexDetectAmountOfPaintedColorsOfEachChannel_Results colorsOfEachChannelTemp = amountOfPaintedColorsOfEachChannel_WithinArea_AfterApplyingColors.physicsSurfacesResult.FindRef(registeredPhysicsSurfacesAtMaterial[i]);

								physicsSurfaceResultForSection_WithinArea_AfterApplyingColors[i].amountOfVerticesConsidered += colorsOfEachChannelTemp.amountOfVerticesConsidered;

								physicsSurfaceResultForSection_WithinArea_AfterApplyingColors[i].amountOfVerticesPaintedAtMinAmount += colorsOfEachChannelTemp.amountOfVerticesPaintedAtMinAmount;

								physicsSurfaceResultForSection_WithinArea_AfterApplyingColors[i].averageColorAmountAtMinAmount += colorsOfEachChannelTemp.averageColorAmountAtMinAmount;

								physicsSurfaceResultForSection_WithinArea_AfterApplyingColors[i].percentPaintedAtMinAmount += colorsOfEachChannelTemp.percentPaintedAtMinAmount;

								amountOfPaintedColorsOfEachChannel_WithinArea_AfterApplyingColors.physicsSurfacesResult.Add(registeredPhysicsSurfacesAtMaterial[i], physicsSurfaceResultForSection_WithinArea_AfterApplyingColors[i]);
							}

							else {

								amountOfPaintedColorsOfEachChannel_WithinArea_AfterApplyingColors.physicsSurfacesResult.Add(registeredPhysicsSurfacesAtMaterial[i], physicsSurfaceResultForSection_WithinArea_AfterApplyingColors[i]);
							}
						}
					}
				}
			}
		}
	}
}


//-------------------------------------------------------

// Get Material At Section

UMaterialInterface* FVertexPaintCalculateColorsTask::GetMaterialAtSection(const FCalculateColorsInfo& calculateColorsInfo, int section, FSkeletalMeshLODRenderData* skeletalMeshLODRenderData) {


	// Getting closest materials
	if (calculateColorsInfo.vertexPaintStaticMeshComponent) {

		if (auto staticMeshRenderData = calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()) {

			if (staticMeshRenderData->LODResources.IsValidIndex(0) && staticMeshRenderData->LODResources[0].Sections.IsValidIndex(section))
				return calculateColorsInfo.vertexPaintStaticMeshComponent->GetMaterial(staticMeshRenderData->LODResources[0].Sections[section].MaterialIndex);
		}
	}

	else if (calculateColorsInfo.vertexPaintSkelComponent) {

		if (skeletalMeshLODRenderData && skeletalMeshLODRenderData->RenderSections.IsValidIndex(section))
			return calculateColorsInfo.vertexPaintSkelComponent->GetMaterial(skeletalMeshLODRenderData->RenderSections[section].MaterialIndex);
	}

#if ENGINE_MAJOR_VERSION == 5

	else if (calculateColorsInfo.vertexPaintDynamicMeshComponent) {

		return calculateColorsInfo.vertexPaintDynamicMeshComponent->GetMaterial(section);
	}

	else if (calculateColorsInfo.vertexPaintGeometryCollectionComponent) {

		return calculateColorsInfo.vertexPaintGeometryCollectionComponent->GetMaterial(section);
	}
#endif

	return nullptr;
}


//-------------------------------------------------------

// Resolve Within Area Results

void FVertexPaintCalculateColorsTask::ResolveWithinAreaResults(const FCalculateColorsInfo& calculateColorsInfo, int lod, int amountOfVerticesWithinArea, const TArray<FColor>& vertexColorsWithinArea_BeforeApplyingColors, const TArray<FColor>& vertexColorsWithinArea_AfterApplyingColors, const TArray<FVector>& vertexPositionsInComponentSpaceWithinArea, const TArray<FVector>& vertexNormalsWithinArea, FVertexDetectAmountOfPaintedColorsOfEachChannel& colorsOfEachChannel_WithinArea_BeforeApplyingColors, FVertexDetectAmountOfPaintedColorsOfEachChannel& colorsOfEachChannel_WithinArea_AfterApplyingColors, FVertexPaintWithinAreaResults& withinAreaResultsBeforeApplyingColors, FVertexPaintWithinAreaResults& withinAreaResultsAfterApplyingColors) {


	// Sets meshVertexData and colors of each channel etc. for Paint and GetColorsWithin area for the vertices just within the area
	if (calculateColorsInfo.withinAreaSettings.componentsToCheckIfIsWithin.Num() > 0) {

		// Setting meshVertexData colors, position and normal arrays for within areas

		if (calculateColorsInfo.getColorsWithinAreaSettings.actor) {

			withinAreaResultsBeforeApplyingColors.meshVertexDataWithinArea[lod].lod = lod;
			withinAreaResultsBeforeApplyingColors.meshVertexDataWithinArea[lod].amountOfVerticesAtLOD = amountOfVerticesWithinArea;

			if (calculateColorsInfo.withinAreaSettings.includeVertexColorsWithinArea)
				withinAreaResultsBeforeApplyingColors.meshVertexDataWithinArea[lod].meshVertexColorsPerLODArray = vertexColorsWithinArea_BeforeApplyingColors;

			if (calculateColorsInfo.withinAreaSettings.includeVertexPositionsWithinrea)
				withinAreaResultsBeforeApplyingColors.meshVertexDataWithinArea[lod].meshVertexPositionsInComponentSpacePerLODArray = vertexPositionsInComponentSpaceWithinArea;

			if (calculateColorsInfo.withinAreaSettings.includeVertexNormalsWithinArea)
				withinAreaResultsBeforeApplyingColors.meshVertexDataWithinArea[lod].meshVertexNormalsPerLODArray = vertexNormalsWithinArea;
		}

		if (calculateColorsInfo.paintOnMeshWithinAreaSettings.actor) {

			withinAreaResultsAfterApplyingColors.meshVertexDataWithinArea[lod].lod = lod;
			withinAreaResultsAfterApplyingColors.meshVertexDataWithinArea[lod].amountOfVerticesAtLOD = amountOfVerticesWithinArea;

			if (calculateColorsInfo.withinAreaSettings.includeVertexColorsWithinArea)
				withinAreaResultsAfterApplyingColors.meshVertexDataWithinArea[lod].meshVertexColorsPerLODArray = vertexColorsWithinArea_AfterApplyingColors;

			if (calculateColorsInfo.withinAreaSettings.includeVertexPositionsWithinrea)
				withinAreaResultsAfterApplyingColors.meshVertexDataWithinArea[lod].meshVertexPositionsInComponentSpacePerLODArray = vertexPositionsInComponentSpaceWithinArea;

			if (calculateColorsInfo.withinAreaSettings.includeVertexNormalsWithinArea)
				withinAreaResultsAfterApplyingColors.meshVertexDataWithinArea[lod].meshVertexNormalsPerLODArray = vertexNormalsWithinArea;
		}


		// Setting Colors of Each channel result for vertices within area

		if (lod == 0) {

			// Consolidates colors of each channel
			if (calculateColorsInfo.withinAreaSettings.includeAmountOfColorsOfEachChannelWithinArea.includeVertexColorChannelResultOfEachChannel) {

				if (calculateColorsInfo.getColorsWithinAreaSettings.actor)
					colorsOfEachChannel_WithinArea_BeforeApplyingColors = UVertexPaintFunctionLibrary::ConsolidateColorsOfEachChannel(colorsOfEachChannel_WithinArea_BeforeApplyingColors, amountOfVerticesWithinArea);
				
				if (calculateColorsInfo.paintOnMeshWithinAreaSettings.actor)
					colorsOfEachChannel_WithinArea_AfterApplyingColors = UVertexPaintFunctionLibrary::ConsolidateColorsOfEachChannel(colorsOfEachChannel_WithinArea_AfterApplyingColors, amountOfVerticesWithinArea);
			}

			// Consolidates colors of each physics surface
			if (calculateColorsInfo.withinAreaSettings.includeAmountOfColorsOfEachChannelWithinArea.includePhysicsSurfaceResultOfEachChannel) {

				if (calculateColorsInfo.getColorsWithinAreaSettings.actor)
					colorsOfEachChannel_WithinArea_BeforeApplyingColors = UVertexPaintFunctionLibrary::ConsolidatePhysicsSurfaceResult(colorsOfEachChannel_WithinArea_BeforeApplyingColors, amountOfVerticesWithinArea);

				if (calculateColorsInfo.paintOnMeshWithinAreaSettings.actor)
					colorsOfEachChannel_WithinArea_AfterApplyingColors = UVertexPaintFunctionLibrary::ConsolidatePhysicsSurfaceResult(colorsOfEachChannel_WithinArea_AfterApplyingColors, amountOfVerticesWithinArea);
			}

			if (calculateColorsInfo.getColorsWithinAreaSettings.actor)
				withinAreaResultsBeforeApplyingColors.amountOfPaintedColorsOfEachChannelWithinArea = colorsOfEachChannel_WithinArea_BeforeApplyingColors;

			if (calculateColorsInfo.paintOnMeshWithinAreaSettings.actor)
				withinAreaResultsAfterApplyingColors.amountOfPaintedColorsOfEachChannelWithinArea = colorsOfEachChannel_WithinArea_AfterApplyingColors;
		}
	}
}


//-------------------------------------------------------

// Resolve Skeletal Mesh Bone Colors

void FVertexPaintCalculateColorsTask::ResolveSkeletalMeshBoneColors(const FCalculateColorsInfo& calculateColorsInfo, int lod, const TArray<TArray<FColor>>& boneVertexColors, TMap<FName, FVertexDetectBoneColorsStruct>& nameAndBoneColors, bool& successfullyGoBoneColors) {

	successfullyGoBoneColors = false;

	if (!calculateColorsInfo.vertexPaintSkelComponent) return;


	// Had to have an array of a color array that i add to instead of adding directly to the TMap since then i had to use .Contain and .FindRef which made it so each task took longer to finish
	if (lod == 0 && calculateColorsInfo.fundementalStruct.callbackSettings.includeColorsOfEachBone) {

		TMap<FName, FVertexDetectBoneColorsStruct> nameAndColorOfEachBone_Local;

		for (int i = 0; i < boneVertexColors.Num(); i++) {

			// If have added colors, i.e. a valid bone
			if (boneVertexColors[i].Num() > 0) {

				FVertexDetectBoneColorsStruct boneColorsStructTemp;
				boneColorsStructTemp.boneVertexColors = boneVertexColors[i];

				nameAndColorOfEachBone_Local.Add(calculateColorsInfo.skeletalMeshBonesNames[i], boneColorsStructTemp);
			}
		}

		nameAndBoneColors = nameAndColorOfEachBone_Local;
		successfullyGoBoneColors = true;
	}
}


//-------------------------------------------------------

// Resolve Chaos Cloth Physics

void FVertexPaintCalculateColorsTask::ResolveChaosClothPhysics(const FCalculateColorsInfo& calculateColorsInfo, bool vertexColorsChanged, FSkeletalMeshLODRenderData* skeletalMeshLODRenderData, int lod, const TMap<UClothingAssetBase*, FVertexDetectClothSettingsStruct>& clothPhysicsSettings, const TMap<int16, FLinearColor>& clothAverageColor, TMap<UClothingAssetBase*, FVertexDetectChaosClothPhysicsSettings>& clothPhysicsSettingsBasedOnAverageColor) {

	if (!calculateColorsInfo.vertexPaintSkelComponent) return;
	if (!skeletalMeshLODRenderData) return;


	// Affected Cloth Physics is exclusive to UE5 and ChaosCloth
#if ENGINE_MAJOR_VERSION == 5


	if (calculateColorsInfo.vertexPaintSettings.affectClothPhysics && skeletalMeshLODRenderData->HasClothData() && vertexColorsChanged && lod == calculateColorsInfo.vertexPaintSkelComponent->GetPredictedLODLevel()) {


		TArray<UClothingAssetBase*> clothingAssetBase_Local;
		clothPhysicsSettings.GetKeys(clothingAssetBase_Local);

		TArray<FVertexDetectClothSettingsStruct> physicsSettingsAtColors;
		clothPhysicsSettings.GenerateValueArray(physicsSettingsAtColors);

		TArray<int16> paintedCloths_Local;
		clothAverageColor.GetKeys(paintedCloths_Local);

		for (int j = 0; j < paintedCloths_Local.Num(); j++) {

			if (!clothingAssetBase_Local.IsValidIndex(j)) continue;
			if (!physicsSettingsAtColors.IsValidIndex(j)) continue;

			clothPhysicsSettingsBasedOnAverageColor.Add(
				clothingAssetBase_Local[j],
				UVertexPaintFunctionLibrary::GetChaosClothPhysicsSettingsBasedOnAverageVertexColor(calculateColorsInfo.vertexPaintSkelComponent, clothingAssetBase_Local[j], clothAverageColor.FindRef(j), physicsSettingsAtColors[j])
			);
		}
	}
#endif

}


//-------------------------------------------------------

// Does Paint job Use Vertex Color Buffer

bool FVertexPaintCalculateColorsTask::DoesPaintJobUseVertexColorBuffer(const FCalculateColorsInfo& calculateColorsInfo) {

	
#if ENGINE_MAJOR_VERSION == 5

	return (IsValid(calculateColorsInfo.vertexPaintSettings.actor) && !calculateColorsInfo.vertexPaintDynamicMeshComponent && !calculateColorsInfo.vertexPaintGeometryCollectionComponent);

#elif ENGINE_MAJOR_VERSION == 4

	return (IsValid(calculateColorsInfo.vertexPaintSettings.actor));

#else

	return false;

#endif
}