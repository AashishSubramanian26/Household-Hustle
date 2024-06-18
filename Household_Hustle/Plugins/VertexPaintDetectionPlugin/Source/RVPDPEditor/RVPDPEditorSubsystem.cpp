// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 


#include "RVPDPEditorSubsystem.h"

// Engine
#include "Engine/SkeletalMesh.h"
#include "Rendering/SkeletalMeshModel.h"
#include "Rendering/SkeletalMeshLODModel.h"
#include "Rendering/SkeletalMeshRenderData.h"
#include "Engine/StaticMesh.h"
#include "Components/StaticMeshComponent.h"
#include "StaticMeshResources.h"
#include "FileHelpers.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetRegistry/IAssetRegistry.h"
#include "Components/Button.h"
#include "Components/ComboBoxString.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Framework/Notifications/NotificationManager.h"
#include "GameplayTagsManager.h"
#include "GameplayTagsEditorModule.h"
#include "Templates/SharedPointer.h"
#include <fstream>
#include <string>
#include <vector>
#include "Misc/Paths.h"

// Plugin
#include "VertexPaintDetectionSettings.h"
#include "VertexPaintFunctionLibrary.h"
#include "VertexPaintMaterialDataAsset.h"
#include "VertexPaintOptimizationDataAsset.h"
#include "VertexPaintColorSnippetDataAsset.h"
#include "VertexPaintColorSnippetRefs.h"

// UE5
#if ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION >= 2
#include "StaticMeshComponentLODInfo.h"
#endif
#endif



//--------------------------------------------------------

// Initialize

void URVPDPEditorSubsystem::Initialize(FSubsystemCollectionBase& Collection) {

	UE_LOG(LogTemp, Log, TEXT("Editor Subsystem Initialized"));
}


//--------------------------------------------------------

// Save Package Wrapper

bool URVPDPEditorSubsystem::SavePackageWrapper(UObject* packageToSave) {

	if (!packageToSave) return false;
	if (!packageToSave->GetPackage()) return false;


	TArray<UPackage*> packages;
	packages.Add(packageToSave->GetPackage());

	return UEditorLoadingAndSavingUtils::SavePackages(packages, false);
}


//--------------------------------------------------------

// Add Editor Notification

void URVPDPEditorSubsystem::AddEditorNotification(FString notification) {

	float notificationDuration_Local = 2;

	auto vertexPaintDetectionSettings = GetDefault<UVertexPaintDetectionSettings>();

	if (vertexPaintDetectionSettings) {

		// If set not to show notifications then just returns
		if (!vertexPaintDetectionSettings->vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled)
			return;

		notificationDuration_Local = vertexPaintDetectionSettings->vertexPaintAndDetectionPlugin_EditorWidgetNotificationDuration;
	}


	FNotificationInfo Info(FText::FromString(notification));

	//How long before the widget automatically starts to fade out (in seconds)
	Info.ExpireDuration = notificationDuration_Local;

	// A larger, bolder font for super important warnings or something!
	// Info.bUseLargeFont = true;
	// Info.bFireAndForget
	// Info.bUseThrobber
	// Info.Hyperlink
	// Info.Image
	// Info.FadeInDuration = 1.0f;
	// Info.FadeOutDuration = 1.0f;
	// Info.WidthOverride = 500.0f;

	FSlateNotificationManager::Get().AddNotification(Info);
}


//--------------------------------------------------------

// Set Engine Specific Button Settings

void URVPDPEditorSubsystem::SetEngineSpecificButtonSettings(TArray<UButton*> buttons, TArray<UComboBoxString*> comboBoxes) {

	if (buttons.Num() <= 0) return;


#if ENGINE_MAJOR_VERSION == 5

	// It turns out Buttons in UE5 has really dark tint by default, and outline of 1 which i have to turn off here

	for (auto buttonTemp : buttons) {

		FButtonStyle buttonStyleTemp;

#if ENGINE_MINOR_VERSION >= 2
		buttonStyleTemp = buttonTemp->GetStyle();
#else
		buttonStyleTemp = buttonTemp->WidgetStyle;
#endif


		buttonStyleTemp.Normal.TintColor = FSlateColor(FLinearColor::White);
		buttonStyleTemp.Normal.OutlineSettings.Width = 0;

		buttonStyleTemp.Hovered.TintColor = FSlateColor(FLinearColor::White);
		buttonStyleTemp.Hovered.OutlineSettings.Width = 0;

		buttonStyleTemp.Pressed.TintColor = FSlateColor(FLinearColor::White);
		buttonStyleTemp.Pressed.OutlineSettings.Width = 0;

		buttonStyleTemp.Disabled.TintColor = FSlateColor(FLinearColor::White);
		buttonStyleTemp.Disabled.OutlineSettings.Width = 0;
		buttonStyleTemp.Disabled.DrawAs = ESlateBrushDrawType::NoDrawType;


#if ENGINE_MINOR_VERSION >= 2
		buttonTemp->SetStyle(buttonStyleTemp);
#else
		buttonTemp->WidgetStyle = buttonStyleTemp;
#endif
	}

	for (auto comboBoxTemp : comboBoxes) {

		FComboBoxStyle comboBoxStyleTemp;

#if ENGINE_MINOR_VERSION >= 2
		comboBoxStyleTemp = comboBoxTemp->GetWidgetStyle();
#else
		comboBoxStyleTemp = comboBoxTemp->WidgetStyle;
#endif

		comboBoxStyleTemp.ComboButtonStyle.ButtonStyle.Normal.DrawAs = ESlateBrushDrawType::Box;
		comboBoxStyleTemp.ComboButtonStyle.ButtonStyle.Normal.OutlineSettings.Width = 0;

		comboBoxStyleTemp.ComboButtonStyle.ButtonStyle.Hovered.DrawAs = ESlateBrushDrawType::Box;
		comboBoxStyleTemp.ComboButtonStyle.ButtonStyle.Hovered.OutlineSettings.Width = 0;

		comboBoxStyleTemp.ComboButtonStyle.ButtonStyle.Pressed.DrawAs = ESlateBrushDrawType::Box;
		comboBoxStyleTemp.ComboButtonStyle.ButtonStyle.Pressed.OutlineSettings.Width = 0;

		comboBoxStyleTemp.ComboButtonStyle.ButtonStyle.Disabled.DrawAs = ESlateBrushDrawType::Box;
		comboBoxStyleTemp.ComboButtonStyle.ButtonStyle.Disabled.OutlineSettings.Width = 0;


#if ENGINE_MINOR_VERSION >= 2
		comboBoxTemp->SetWidgetStyle(comboBoxStyleTemp);
#else
		comboBoxTemp->WidgetStyle = comboBoxStyleTemp;
#endif
	}

#endif
}


//--------------------------------------------------------

// Add Skeletal Mesh And Amount Of LODs To Paint

void URVPDPEditorSubsystem::AddSkeletalMeshAmountOfLODsToPaintByDefault(USkeletalMesh* skeletalMesh, int maxAmountOfLODsToPaint, bool& success) {

	success = false;

	if (!skeletalMesh) return;

	auto optimizationDataAssetTemp = UVertexPaintFunctionLibrary::GetOptimizationDataAsset(nullptr);
	if (!optimizationDataAssetTemp) return;


	FPaintOnLODSettingsStruct paintOnLODSettingsStruct_Local;
	paintOnLODSettingsStruct_Local.maxAmountOfLODsToPaint = maxAmountOfLODsToPaint;

	success = true;


	if (optimizationDataAssetTemp->GetSkeletalMeshNumOfLODsToPaint().Contains(skeletalMesh))
		AddEditorNotification(FString::Printf(TEXT("Updated Skeletal Mesh %s LODs to Store and Paint!"), *skeletalMesh->GetName()));
	else
		AddEditorNotification(FString::Printf(TEXT("Added Skeletal Mesh %s LODs to Store and Paint!"), *skeletalMesh->GetName()));


	optimizationDataAssetTemp->AddToSkeletalMeshNumOfLODsToPaint(skeletalMesh, paintOnLODSettingsStruct_Local);


	SavePackageWrapper(optimizationDataAssetTemp);
}


//--------------------------------------------------------

// Remove Skeletal Mesh And Amount Of LODs To Paint

void URVPDPEditorSubsystem::RemoveSkeletalMeshAmountOfLODsToPaintByDefault(USkeletalMesh* skeletalMesh, bool& success) {

	success = false;

	if (!IsValid(UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset(nullptr))) return;
	
	auto optimizationDataAssetTemp = UVertexPaintFunctionLibrary::GetOptimizationDataAsset(nullptr);
	if (!optimizationDataAssetTemp) return;


	if (optimizationDataAssetTemp->GetSkeletalMeshNumOfLODsToPaint().Contains(skeletalMesh)) {

		optimizationDataAssetTemp->RemoveFromSkeletalMeshNumOfLODsToPaint(skeletalMesh);

		success = true;

		SavePackageWrapper(optimizationDataAssetTemp);
	}
}


//--------------------------------------------------------

// Add Static Mesh And Amount Of LODs To Paint

void URVPDPEditorSubsystem::AddStaticMeshAndAmountOfLODsToPaintByDefault(UStaticMesh* staticMesh, int maxAmountOfLODsToPaint, bool& success) {

	success = false;

	if (!IsValid(staticMesh)) return;

	auto optimizationDataAssetTemp = UVertexPaintFunctionLibrary::GetOptimizationDataAsset(nullptr);
	if (!optimizationDataAssetTemp) return;


	FPaintOnLODSettingsStruct paintOnLODSettingsStruct_Local;

	paintOnLODSettingsStruct_Local.maxAmountOfLODsToPaint = maxAmountOfLODsToPaint;

	if (optimizationDataAssetTemp->GetStaticMeshNumOfLODsToPaint().Contains(staticMesh))
		AddEditorNotification(FString::Printf(TEXT("Updated Static Mesh %s LODs to Store and Paint!"), *staticMesh->GetName()));
	else
		AddEditorNotification(FString::Printf(TEXT("Added Static Mesh %s LODs to Store and Paint!"), *staticMesh->GetName()));


	optimizationDataAssetTemp->AddToStaticMeshNumOfLODsToPaint(staticMesh, paintOnLODSettingsStruct_Local);

	success = true;

	SavePackageWrapper(optimizationDataAssetTemp);

}


//--------------------------------------------------------

// Remove Static Mesh And Amount Of LODs To Paint

void URVPDPEditorSubsystem::RemoveStaticMeshAndAmountOfLODsToPaintByDefault(UStaticMesh* staticMesh, bool& success) {

	success = false;

	if (!staticMesh) return;
	auto optimizationDataAssetTemp = UVertexPaintFunctionLibrary::GetOptimizationDataAsset(nullptr);
	if (!optimizationDataAssetTemp) return;


	if (optimizationDataAssetTemp->GetStaticMeshNumOfLODsToPaint().Contains(staticMesh)) {

		optimizationDataAssetTemp->RemoveFromStaticMeshNumOfLODsToPaint(staticMesh);

		success = true;

		SavePackageWrapper(optimizationDataAssetTemp);
	}
}


//--------------------------------------------------------

// Add Group Color Snippet

void URVPDPEditorSubsystem::AddGroupColorSnippet(FVertexDetectGroupColorSnippetInfo groupSnippetInfo, bool& success) {

	success = false;

	if (groupSnippetInfo.groupSnippetID.IsEmpty() || groupSnippetInfo.associatedGroupMeshes.Num() <= 0) return;

	auto colorSnippetReferenceDataAsset = UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset(nullptr);

	if (!colorSnippetReferenceDataAsset) {

		UE_LOG(LogTemp, Warning, TEXT("Trying to Add Group Color Snippet but there is no Color Snippet Reference Data Asset Set in Project Settings. "));

		return;
	}

	colorSnippetReferenceDataAsset->groupSnippetsAndAssociatedMeshes.Add(groupSnippetInfo.groupSnippetID, groupSnippetInfo);

	success = true;

	SavePackageWrapper(colorSnippetReferenceDataAsset);
}


//--------------------------------------------------------

// Remove Group Color Snippet

void URVPDPEditorSubsystem::RemoveGroupColorSnippet(FString groupSnippetID, bool& success) {

	success = false;

	if (groupSnippetID.IsEmpty()) return;

	auto colorSnippetReferenceDataAsset = UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset(nullptr);

	if (!colorSnippetReferenceDataAsset) {

		UE_LOG(LogTemp, Warning, TEXT("Trying to Remove Group Color Snippet but there is no Color Snippet Reference Data Asset Set in Project Settings. "));

		return;
	}


	if (colorSnippetReferenceDataAsset->groupSnippetsAndAssociatedMeshes.Contains(groupSnippetID)) {

		colorSnippetReferenceDataAsset->groupSnippetsAndAssociatedMeshes.Remove(groupSnippetID);

		success = true;

		SavePackageWrapper(colorSnippetReferenceDataAsset);
	}
}


//--------------------------------------------------------

// Add Mesh Color Snippet

void URVPDPEditorSubsystem::AddMeshColorSnippet(UPrimitiveComponent* meshComponent, FString colorSnippetID, bool isPartOfAGroupSnippet, FString groupSnippedID, FVector relativeLocationToGroupCenterPoint, float dotProductToGroupCenterPoint, UVertexPaintColorSnippetDataAsset* colorSnippetDataAsset, bool& success) {

	success = false;

	if (!colorSnippetDataAsset || !meshComponent) return;
	if (colorSnippetID.Len() <= 0) return;

	auto colorSnippetReferenceDataAsset = UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset(nullptr);

	if (!colorSnippetReferenceDataAsset) {

		UE_LOG(LogTemp, Warning, TEXT("Trying to Add Mesh Color Snippet but there is no Color Snippet Reference Data Asset Set in Project Settings. "));

		return;
	}

	


	FVertexDetectStoredColorSnippetInfo storedColorSnippetInfoTemp;
	storedColorSnippetInfoTemp.colorSnippetDataAssetStoredOn = colorSnippetDataAsset;
	storedColorSnippetInfoTemp.objectColorSnippetBelongsTo = UVertexPaintFunctionLibrary::GetMeshComponentSourceMesh(meshComponent);
	storedColorSnippetInfoTemp.isPartOfAGroupSnippet = isPartOfAGroupSnippet;
	storedColorSnippetInfoTemp.groupSnippetID = groupSnippedID;
	storedColorSnippetInfoTemp.relativeLocationToGroupCenterPoint = relativeLocationToGroupCenterPoint;
	storedColorSnippetInfoTemp.dotProductToGroupCenterPoint = dotProductToGroupCenterPoint;


	if (auto staticMeshComponent_Local = Cast<UStaticMeshComponent>(meshComponent)) {

		if (!staticMeshComponent_Local->GetStaticMesh()) {

			UE_LOG(LogTemp, Warning, TEXT("Couldn't store Static Mesh Color Snippet because the selected Static Mesh Component a Static Mesh Set"));

			return;
		}

		if (staticMeshComponent_Local->LODData.Num() > 0) {


			// For Group Snippets we can make snippets even if there is nothing painted, so it's more user friendly when using Compare against color snippets, and most likely what users expects when they create group snippets. 
			if (!isPartOfAGroupSnippet) {

				if (staticMeshComponent_Local->LODData[0].PaintedVertices.Num() <= 0) {

					UE_LOG(LogTemp, Warning, TEXT("Couldn't store Static Mesh Color Snippet because the selected Static Mesh doesn't have any Painted Vertices at LOD0"));


					AddEditorNotification(FString::Printf(TEXT("Failed at Adding Color Snippet - Mesh has no Colors to Add!")));

					return;
				}
			}
		}

		else {

			if (!isPartOfAGroupSnippet) {

				UE_LOG(LogTemp, Warning, TEXT("Couldn't store Static Mesh Color Snippet because the selected Static Mesh doesn't have any a LOD0"));

				return;
			}
		}


		UObject* staticMesh_Local = nullptr;

#if ENGINE_MAJOR_VERSION == 4

		staticMesh_Local = staticMeshComponent_Local->GetStaticMesh();

#elif ENGINE_MAJOR_VERSION == 5

		staticMesh_Local = staticMeshComponent_Local->GetStaticMesh().Get();

#endif


		FVertexDetectColorSnippetDataStruct colorSnippetDataTemp;
		colorSnippetDataTemp.objectColorSnippetBelongsTo = staticMeshComponent_Local->GetStaticMesh();

		FVertexDetectMeshDataPerLODStruct colorSnippetPerLODTemp;
		colorSnippetPerLODTemp.lod = 0;
		colorSnippetPerLODTemp.meshVertexColorsPerLODArray = UVertexPaintFunctionLibrary::GetStaticMeshVertexColorsAtLOD(staticMeshComponent_Local, 0);
		colorSnippetPerLODTemp.amountOfVerticesAtLOD = colorSnippetPerLODTemp.meshVertexColorsPerLODArray.Num();

		colorSnippetDataTemp.colorSnippetDataPerLOD.Add(colorSnippetPerLODTemp);

		colorSnippetDataAsset->snippetColorData.Add(colorSnippetID, colorSnippetDataTemp);
		SavePackageWrapper(colorSnippetDataAsset);


		FVertexDetectColorSnippetReferenceDataStruct colorSnippetReferenceDataTemp;

		if (colorSnippetReferenceDataAsset->staticMeshesColorSnippets.Contains(staticMesh_Local))
			colorSnippetReferenceDataTemp = colorSnippetReferenceDataAsset->staticMeshesColorSnippets.FindRef(staticMesh_Local);

		colorSnippetReferenceDataTemp.colorSnippetsStorageInfo.Add(colorSnippetID, storedColorSnippetInfoTemp);
		colorSnippetReferenceDataAsset->staticMeshesColorSnippets.Add(staticMesh_Local, colorSnippetReferenceDataTemp);


		SavePackageWrapper(colorSnippetReferenceDataAsset);

		success = true;

		AddEditorNotification(FString::Printf(TEXT("Successfully Added Static Mesh Color Snippet: %s!"), *colorSnippetID));
	}

	else if (auto skeletalMeshComponent_Local = Cast<USkeletalMeshComponent>(meshComponent)) {


		USkeletalMesh* skeletalMeshAsset_Local = nullptr;

#if ENGINE_MAJOR_VERSION == 4

		skeletalMeshAsset_Local = Cast<USkeletalMesh>(skeletalMeshComponent_Local->SkeletalMesh);

#elif ENGINE_MAJOR_VERSION == 5


#if ENGINE_MINOR_VERSION == 0

		skeletalMeshAsset_Local = Cast<USkeletalMesh>(skeletalMeshComponent_Local->SkeletalMesh.Get());

#else

		skeletalMeshAsset_Local = Cast<USkeletalMesh>(skeletalMeshComponent_Local->GetSkeletalMeshAsset());

#endif
#endif


		FVertexDetectColorSnippetDataStruct colorSnippetDataTemp;
		colorSnippetDataTemp.objectColorSnippetBelongsTo = skeletalMeshAsset_Local;


		FVertexDetectMeshDataPerLODStruct colorSnippetPerLODTemp;
		colorSnippetPerLODTemp.lod = 0;
		colorSnippetPerLODTemp.meshVertexColorsPerLODArray = UVertexPaintFunctionLibrary::UVertexPaintFunctionLibrary::GetSkeletalMeshVertexColorsAtLOD(skeletalMeshComponent_Local, 0);
		colorSnippetPerLODTemp.amountOfVerticesAtLOD = colorSnippetPerLODTemp.meshVertexColorsPerLODArray.Num();

		colorSnippetDataTemp.colorSnippetDataPerLOD.Add(colorSnippetPerLODTemp);

		colorSnippetDataAsset->snippetColorData.Add(colorSnippetID, colorSnippetDataTemp);
		SavePackageWrapper(colorSnippetDataAsset);

		FVertexDetectColorSnippetReferenceDataStruct colorSnippetReferenceData_Local;

		if (colorSnippetReferenceDataAsset->skeletalMeshesColorSnippets.Contains(skeletalMeshAsset_Local))
			colorSnippetReferenceData_Local = colorSnippetReferenceDataAsset->skeletalMeshesColorSnippets.FindRef(skeletalMeshAsset_Local);


		colorSnippetReferenceData_Local.colorSnippetsStorageInfo.Add(colorSnippetID, storedColorSnippetInfoTemp);
		colorSnippetReferenceDataAsset->skeletalMeshesColorSnippets.Add(skeletalMeshAsset_Local, colorSnippetReferenceData_Local);

		SavePackageWrapper(colorSnippetReferenceDataAsset);

		success = true;

		AddEditorNotification(FString::Printf(TEXT("Successfully Added Skeletal Mesh Color Snippet: %s!"), *colorSnippetID));
	}


	// If wasn't success, i.e. didn't save in the function then we save here as a failsafe
	AddColorSnippetTag(colorSnippetID);

	RefreshAllAvailableCachedColorSnippetTagContainer();
}


//--------------------------------------------------------

// Move Mesh Color Snippet

void URVPDPEditorSubsystem::MoveMeshColorSnippet(FString colorSnippetID, UVertexPaintColorSnippetDataAsset* colorSnippetDataAssetToMoveFrom, UVertexPaintColorSnippetDataAsset* colorSnippetDataAssetToMoveTo, bool& success) {

	success = false;

	if (!colorSnippetDataAssetToMoveFrom || !colorSnippetDataAssetToMoveTo || colorSnippetID.Len() <= 0) return;


	if (colorSnippetDataAssetToMoveTo->snippetColorData.Contains(colorSnippetID)) {

		UE_LOG(LogTemp, Warning, TEXT("Trying to Move Mesh Color Snippet to a Data Asset that already has it. "));

		return;
	}

	auto colorSnippetReferenceDataAsset = UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset(nullptr);

	if (!colorSnippetReferenceDataAsset) {

		UE_LOG(LogTemp, Warning, TEXT("Trying to Move Mesh Color Snippet but there is no Color Snippet Reference Data Asset Set in Project Settings. "));

		return;
	}

	if (!colorSnippetReferenceDataAsset->ContainsColorSnippet(colorSnippetID, false, nullptr)) {

		UE_LOG(LogTemp, Warning, TEXT("Trying to Move Mesh Color Snippet but the Color Snippet isn't registered in the Reference Data Asset. "));

		return;
	}


	if (colorSnippetDataAssetToMoveFrom->snippetColorData.Contains(colorSnippetID)) {

		UObject* snippetMeshToMove = colorSnippetReferenceDataAsset->GetObjectFromSnippetID(colorSnippetID).Get();

		FVertexDetectColorSnippetDataStruct colorSnippetStruct_Local = colorSnippetDataAssetToMoveFrom->snippetColorData.FindRef(colorSnippetID);

		colorSnippetDataAssetToMoveFrom->snippetColorData.Remove(colorSnippetID);
		colorSnippetDataAssetToMoveTo->snippetColorData.Add(colorSnippetID, colorSnippetStruct_Local);


		FVertexDetectColorSnippetReferenceDataStruct colorSnippetReferenceData_Local;

		if (Cast<USkeletalMesh>(snippetMeshToMove)) {

			if (colorSnippetReferenceDataAsset->skeletalMeshesColorSnippets.Contains(snippetMeshToMove)) {

				colorSnippetReferenceData_Local = colorSnippetReferenceDataAsset->skeletalMeshesColorSnippets.FindRef(snippetMeshToMove);

				if (colorSnippetReferenceData_Local.colorSnippetsStorageInfo.Contains(colorSnippetID)) {

					FVertexDetectStoredColorSnippetInfo storedColorSnippetInfoTemp = colorSnippetReferenceData_Local.colorSnippetsStorageInfo.FindRef(colorSnippetID);
					storedColorSnippetInfoTemp.colorSnippetDataAssetStoredOn = colorSnippetDataAssetToMoveTo;

					colorSnippetReferenceData_Local.colorSnippetsStorageInfo.Add(colorSnippetID, storedColorSnippetInfoTemp);
					colorSnippetReferenceDataAsset->skeletalMeshesColorSnippets.Add(snippetMeshToMove, colorSnippetReferenceData_Local);
				}
			}
		}

		else if (Cast<UStaticMesh>(snippetMeshToMove)) {

			if (colorSnippetReferenceDataAsset->staticMeshesColorSnippets.Contains(snippetMeshToMove)) {

				colorSnippetReferenceData_Local = colorSnippetReferenceDataAsset->staticMeshesColorSnippets.FindRef(snippetMeshToMove);

				if (colorSnippetReferenceData_Local.colorSnippetsStorageInfo.Contains(colorSnippetID)) {

					FVertexDetectStoredColorSnippetInfo storedColorSnippetInfoTemp = colorSnippetReferenceData_Local.colorSnippetsStorageInfo.FindRef(colorSnippetID);
					storedColorSnippetInfoTemp.colorSnippetDataAssetStoredOn = colorSnippetDataAssetToMoveTo;

					colorSnippetReferenceData_Local.colorSnippetsStorageInfo.Add(colorSnippetID, storedColorSnippetInfoTemp);
					colorSnippetReferenceDataAsset->staticMeshesColorSnippets.Add(snippetMeshToMove, colorSnippetReferenceData_Local);
				}
			}
		}


		SavePackageWrapper(colorSnippetDataAssetToMoveFrom);
		SavePackageWrapper(colorSnippetDataAssetToMoveTo);
		SavePackageWrapper(colorSnippetReferenceDataAsset);

		AddEditorNotification(FString::Printf(TEXT("Successfully Moved Color Snippet: %s!"), *colorSnippetID));

		success = true;
	}

	else {

		UE_LOG(LogTemp, Warning, TEXT("Trying to Move Mesh Color Snippet but the Color Snippet isn't registered in the Color Snippet Data Asset. "));

		return;
	}
}


//--------------------------------------------------------

// Move Group Color Snippet

void URVPDPEditorSubsystem::MoveGroupColorSnippet(FString groupColorSnippetID, UVertexPaintColorSnippetDataAsset* colorSnippetDataAssetToMoveTo) {

	if (groupColorSnippetID.IsEmpty() || !colorSnippetDataAssetToMoveTo) return;


	auto colorSnippetReferenceDataAsset = UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset(nullptr);

	if (!colorSnippetReferenceDataAsset) {

		UE_LOG(LogTemp, Warning, TEXT("Trying to Move Group Snippet but there is no Color Snippet Reference Data Asset Set in Project Settings. "));

		return;
	}

	if (colorSnippetReferenceDataAsset->groupSnippetsAndAssociatedMeshes.Contains(groupColorSnippetID)) {

		auto groupSnippetInfo = colorSnippetReferenceDataAsset->groupSnippetsAndAssociatedMeshes.FindRef(groupColorSnippetID);
		groupSnippetInfo.colorSnippetDataAssetStoredOn = colorSnippetDataAssetToMoveTo;

		colorSnippetReferenceDataAsset->groupSnippetsAndAssociatedMeshes.Add(groupColorSnippetID, groupSnippetInfo);

		SavePackageWrapper(colorSnippetReferenceDataAsset);
	}
}

//--------------------------------------------------------

// Add Color Snippet Tag

bool URVPDPEditorSubsystem::AddColorSnippetTag(FString tag) {

	if (!UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset(nullptr) || DoesColorSnippetTagExist(tag)) return false;


	if (auto gameplayTagEditorModule = &IGameplayTagsEditorModule::Get()) {

		if (gameplayTagEditorModule) {

			if (auto gameplayTagManager = &UGameplayTagsManager::Get()) {

				gameplayTagEditorModule->AddNewGameplayTagToINI(tag, colorSnippetDevComments, "");

				return true;
			}
		}
	}

	return false;
}


//--------------------------------------------------------

// Does Color Snippet Tag Exist

bool URVPDPEditorSubsystem::DoesColorSnippetTagExist(FString tag) {


	if (auto gameplayTagManager = &UGameplayTagsManager::Get()) {

		FName colorSnippetTagName(*tag);
		TSharedPtr<FGameplayTagNode> colorSnippetTagNodePtr = gameplayTagManager->FindTagNode(colorSnippetTagName);

		return colorSnippetTagNodePtr.IsValid();
	}

	return false;
}


//--------------------------------------------------------

// Get All Color Snippet Tags As String

TArray<FString> URVPDPEditorSubsystem::GetAllColorSnippetTagsDirectlyFromIni() {


	/* NOTE We DON'T want to use this to get all color snippets since this gets updated when manually added and removed etc., we want to be able to pull them from the .ini directly, so in case the user changes them manually etc. we can clean them up.
	if (!UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset()) return TArray<FString>();


	TArray<FGameplayTag> allAvailableGameplayTags_Local;
	UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset()->allAvailableColorSnippets.GetGameplayTagArray(allAvailableGameplayTags_Local);


	TArray<FString> allAvailableGameplayTagsAsStrings_Local;

	for (auto tag : allAvailableGameplayTags_Local)
		allAvailableGameplayTagsAsStrings_Local.Add(tag.GetTagName().ToString());

	return allAvailableGameplayTagsAsStrings_Local;
	*/


	TArray<FString> tagsAsString;

	// Filters for the tag that has our dev comment
	std::string devCommentToFilterFor = std::string(TCHAR_TO_UTF8(*colorSnippetDevComments));
	std::string pathToProjectRoot = std::string(TCHAR_TO_UTF8(*FPaths::ProjectDir()));

	// Open the DefaultGameplayTags.ini file for reading
	std::ifstream inFile(pathToProjectRoot + "/Config/DefaultGameplayTags.ini");

	// Check if the file was opened successfully
	if (!inFile.is_open()) {
		// Handle error
		return tagsAsString;
	}

	// Read the contents of the file into a string
	std::string fileContents((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());

	// Close the input file
	inFile.close();


	// Find all tags in the file contents that have the specified dev comment
	std::vector<std::string> tags;
	size_t pos = 0;

	while ((pos = fileContents.find("+GameplayTagList=", pos)) != std::string::npos) {

		// Find the end of the line containing this tag
		size_t lineEnd = fileContents.find('\n', pos);

		if (lineEnd == std::string::npos) {
			lineEnd = fileContents.length();
		}

		// Extract this tag's dev comment
		size_t devCommentStart = fileContents.find("DevComment=\"", pos);
		if (devCommentStart == std::string::npos || devCommentStart >= lineEnd) {
			// This tag doesn't have a dev comment, so skip it
			pos = lineEnd + 1;
			continue;
		}

		devCommentStart += strlen("DevComment=\"");
		size_t devCommentEnd = fileContents.find('\"', devCommentStart);
		if (devCommentEnd == std::string::npos || devCommentEnd >= lineEnd) {

			// This tag's dev comment is malformed, so skip it
			pos = lineEnd + 1;
			continue;
		}

		std::string thisDevComment = fileContents.substr(devCommentStart, devCommentEnd - devCommentStart);

		// Check if this tag has the specified dev comment
		if (devCommentToFilterFor.empty() || thisDevComment == devCommentToFilterFor) {

			// Extract this tag's name
			size_t tagStart = fileContents.find("Tag=\"", pos);
			if (tagStart == std::string::npos || tagStart >= lineEnd) {

				// This tag is malformed, so skip it
				pos = lineEnd + 1;
				continue;
			}

			tagStart += strlen("Tag=\"");
			size_t tagEnd = fileContents.find('\"', tagStart);

			if (tagEnd == std::string::npos || tagEnd >= lineEnd) {

				// This tag is malformed, so skip it
				pos = lineEnd + 1;
				continue;
			}

			std::string thisTag = fileContents.substr(tagStart, tagEnd - tagStart);

			// Add this tag to the list of tags with the specified dev comment
			tags.push_back(thisTag);
		}

		// Move to the next line in the file contents
		pos = lineEnd + 1;
	}

	// Convert the vector of tags to an array of strings
	std::vector<const char*> cStrings(tags.size());

	for (size_t i = 0; i < tags.size(); ++i) {

		cStrings[i] = tags[i].c_str();
	}

	// Converts to FString and adds to array
	for (const char* cString : cStrings) {

		tagsAsString.Add(FString(cString));
	}

	return tagsAsString;

}


//--------------------------------------------------------

// Remove Mesh Color Snippet

void URVPDPEditorSubsystem::RemoveMeshColorSnippet(FString colorSnippetID, UVertexPaintColorSnippetDataAsset* colorSnippetDataAsset) {

	if (!colorSnippetDataAsset) return;
	if (colorSnippetID.Len() <= 0) return;

	auto colorSnippetReferenceDataAsset = UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset(nullptr);

	if (!colorSnippetReferenceDataAsset) {

		UE_LOG(LogTemp, Warning, TEXT("Trying to Remove Mesh Color Snippet but there is no Color Snippet Reference Mesh Data Asset Set in Project Settings. "));

		return;
	}


	// Verify references
	FAssetIdentifier TagId = FAssetIdentifier(FGameplayTag::StaticStruct(), (FName)colorSnippetID);
	TArray<FAssetIdentifier> Referencers;

	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	AssetRegistryModule.Get().GetReferencers(TagId, Referencers, UE::AssetRegistry::EDependencyCategory::SearchableName);

	if (Referencers.Num() > 0) {

		AddEditorNotification(FString::Printf(TEXT("Cannot Delete Color Snippet: %s  -  It's Gameplay Tag is stilled Referenced somewhere!"), *colorSnippetID));

		return;
	}

	if (colorSnippetReferenceDataAsset->groupSnippetsAndAssociatedMeshes.Contains(colorSnippetID)) {



		TMap<FString, FVertexDetectStoredColorSnippetInfo> storedColorSnippetInfo = colorSnippetReferenceDataAsset->GetAllColorSnippetsInSpecifiedDataAsset(colorSnippetDataAsset, true);

		TArray<FString> groupChildSnippetIDsTemp;
		storedColorSnippetInfo.GetKeys(groupChildSnippetIDsTemp);

		TArray<FVertexDetectStoredColorSnippetInfo> groupChildSnippetInfoTemp;
		storedColorSnippetInfo.GenerateValueArray(groupChildSnippetInfoTemp);


		// Removes all childs
		for (int i = 0; i < groupChildSnippetInfoTemp.Num(); i++) {

			if (groupChildSnippetInfoTemp[i].isPartOfAGroupSnippet && groupChildSnippetInfoTemp[i].groupSnippetID == colorSnippetID) {

				colorSnippetDataAsset->snippetColorData.Remove(groupChildSnippetIDsTemp[i]);
				colorSnippetReferenceDataAsset->RemoveColorSnippet(groupChildSnippetIDsTemp[i]);
				RemoveColorSnippetTag(groupChildSnippetIDsTemp[i]);
			}
		}

		// And Lastly removes from the Group TMap as well
		colorSnippetReferenceDataAsset->groupSnippetsAndAssociatedMeshes.Remove(colorSnippetID);

		SavePackageWrapper(colorSnippetDataAsset);
		SavePackageWrapper(colorSnippetReferenceDataAsset);
	}

	else {

		if (colorSnippetDataAsset->snippetColorData.Contains(colorSnippetID)) {

			colorSnippetDataAsset->snippetColorData.Remove(colorSnippetID);
			SavePackageWrapper(colorSnippetDataAsset);
		}

		colorSnippetReferenceDataAsset->RemoveColorSnippet(colorSnippetID);
		RemoveColorSnippetTag(colorSnippetID);
		SavePackageWrapper(colorSnippetReferenceDataAsset);
	}


	RefreshAllAvailableCachedColorSnippetTagContainer();
}


//--------------------------------------------------------

// Remove Color Snippet Tag

bool URVPDPEditorSubsystem::RemoveColorSnippetTag(FString tag) {

	if (!UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset(nullptr)) return false;


	if (auto gameplayTagManager = &UGameplayTagsManager::Get()) {

		FName colorSnippetIDTagName(*tag);
		TSharedPtr<FGameplayTagNode> colorSnippetTagNodePtr = gameplayTagManager->FindTagNode(colorSnippetIDTagName);

		if (colorSnippetTagNodePtr.IsValid()) {

			if (auto gameplayTagEditorModule = &IGameplayTagsEditorModule::Get()) {

				gameplayTagEditorModule->DeleteTagFromINI(colorSnippetTagNodePtr);

				return true;
			}
		}
	}

	return false;
}


//--------------------------------------------------------

// Rename Color Snippet Tag

void URVPDPEditorSubsystem::RenameColorSnippetTag(FString oldTag, FString newTag) {


	RemoveColorSnippetTag(oldTag);
	AddColorSnippetTag(newTag);

	/* Couldn't use the RenameTagInINI since it ask you to Restart the Editor
	if (auto gameplayTagManager = &UGameplayTagsManager::Get()) {

		FName prevColorSnippetTagName(*oldTag);
		TSharedPtr<FGameplayTagNode> colorSnippetTagNodePtr = gameplayTagManager->FindTagNode(prevColorSnippetTagName);

		if (colorSnippetTagNodePtr.IsValid()) {

			if (auto gameplayTagEditorModule = &IGameplayTagsEditorModule::Get())
				gameplayTagEditorModule->RenameTagInINI(oldTag, newTag);
		}
	}
	*/
}


//--------------------------------------------------------

// Clear Cached Color Snippet Tag Container

void URVPDPEditorSubsystem::ClearAllAvailableColorSnippetCacheTagContainer() {

	auto colorSnippetReferenceDataAsset = UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset(nullptr);
	if (!colorSnippetReferenceDataAsset) return;


	if (auto gameplayTagManager = &UGameplayTagsManager::Get()) {

		// First clears them
		TArray<FGameplayTag> currentGameplayTags;
		colorSnippetReferenceDataAsset->allAvailableColorSnippets.GetGameplayTagArray(currentGameplayTags);

		if (currentGameplayTags.Num() > 0) {

			FGameplayTagContainer currentGameplayTagContainer = colorSnippetReferenceDataAsset->allAvailableColorSnippets;
			colorSnippetReferenceDataAsset->allAvailableColorSnippets.RemoveTags(currentGameplayTagContainer);
		}
	}

	SavePackageWrapper(colorSnippetReferenceDataAsset);
}


//--------------------------------------------------------

// Refresh Cached Color Snippet Tag Container

void URVPDPEditorSubsystem::RefreshAllAvailableCachedColorSnippetTagContainer() {

	auto colorSnippetReferenceDataAsset = UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset(nullptr);
	if (!colorSnippetReferenceDataAsset) return;


	if (auto gameplayTagManager = &UGameplayTagsManager::Get()) {


		TArray<FVertexDetectColorSnippetReferenceDataStruct> totalColorSnippetReferences;
		TArray<FVertexDetectColorSnippetReferenceDataStruct> staticMeshColorSnippetReference;
		TArray<FVertexDetectColorSnippetReferenceDataStruct> skeletalMeshColorSnippetReference;
		colorSnippetReferenceDataAsset->staticMeshesColorSnippets.GenerateValueArray(staticMeshColorSnippetReference);
		colorSnippetReferenceDataAsset->skeletalMeshesColorSnippets.GenerateValueArray(skeletalMeshColorSnippetReference);


		totalColorSnippetReferences.Append(staticMeshColorSnippetReference);
		totalColorSnippetReferences.Append(skeletalMeshColorSnippetReference);

		int amountOfSnippetsTemp = 0;

		for (auto snippetRef : totalColorSnippetReferences)
			amountOfSnippetsTemp += snippetRef.colorSnippetsStorageInfo.Num();


		bool changeOnDataAssetTemp = false;

		// If different amount then gonna clear later and refresh
		if (amountOfSnippetsTemp != colorSnippetReferenceDataAsset->allAvailableColorSnippets.Num())
			changeOnDataAssetTemp = true;


		TArray<FGameplayTag> tagsToAdd;

		// Then fills it up with whatever is registered to the Static and Skeletal Mesh snippets
		for (auto snippetRef : totalColorSnippetReferences) {

			TArray<FString> colorSnippetStrings;
			snippetRef.colorSnippetsStorageInfo.GetKeys(colorSnippetStrings);

			for (auto snippetString : colorSnippetStrings) {

				FName colorSnippetIDTagName(*snippetString);
				FGameplayTag requestedTag = gameplayTagManager->RequestGameplayTag(colorSnippetIDTagName);

				if (requestedTag.IsValid()) {

					tagsToAdd.Add(requestedTag);

					// If doesn't have a tag, then we set so we clear the data asset later and fill it will all of them. So we only save it if we actually do a change
					if (!colorSnippetReferenceDataAsset->allAvailableColorSnippets.HasTag(requestedTag)) {

						changeOnDataAssetTemp = true;
					}
				}
			}
		}

		// If discovered that all available tags aren't the same amount, or there was tags missing in the all available color snippets, then we clear and then add the correct ones. Has this check so we don't save the color snippet reference data asset unless we actually need to. 
		if (changeOnDataAssetTemp) {


			UE_LOG(LogTemp, Warning, TEXT("Missmatch with amount of Tags Registered on Color Snippet Reference Data Asset, Re-stores them! "));

			ClearAllAvailableColorSnippetCacheTagContainer();

			for (auto tag : tagsToAdd)
				colorSnippetReferenceDataAsset->allAvailableColorSnippets.AddTag(tag);

			SavePackageWrapper(colorSnippetReferenceDataAsset);
		}
	}
}


//--------------------------------------------------------

// Update Mesh Color Snippet ID

void URVPDPEditorSubsystem::UpdateMeshColorSnippetID(FString prevColorSnippetID, FString newColorSnippetID, bool isPartOfGroupSnippet, FString groupSnippedID, UVertexPaintColorSnippetDataAsset* colorSnippetDataAsset, bool& success) {

	success = false;

	if (!colorSnippetDataAsset) return;
	if (prevColorSnippetID.Len() <= 0 || newColorSnippetID.Len() <= 0) return;

	auto colorSnippetReferenceDataAsset = UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset(nullptr);

	if (!colorSnippetReferenceDataAsset) {

		UE_LOG(LogTemp, Warning, TEXT("Trying to Update Mesh Color Snippet but there is no Color Snippet Reference Data Asset Set in Project Settings. "));
	}


	if (!colorSnippetReferenceDataAsset->ContainsColorSnippet(prevColorSnippetID, false, nullptr)) {

		UE_LOG(LogTemp, Warning, TEXT("Trying to Update Color Snippet ID but the Color Snippet isn't registered in the Reference Data Asset. "));

		return;
	}


	// Updates the Color Snippet Data Asset First
	if (colorSnippetDataAsset->snippetColorData.Contains(prevColorSnippetID)) {

		auto colorSnippetStruct_Local = colorSnippetDataAsset->snippetColorData.FindRef(prevColorSnippetID);
		colorSnippetDataAsset->snippetColorData.Remove(prevColorSnippetID);
		colorSnippetDataAsset->snippetColorData.Add(newColorSnippetID, colorSnippetStruct_Local);

		SavePackageWrapper(colorSnippetDataAsset);
	}


	// Then the Color Snippet Reference Data Asset
	auto mesh = colorSnippetReferenceDataAsset->GetObjectFromSnippetID(prevColorSnippetID);


	FVertexDetectColorSnippetReferenceDataStruct colorSnippetReference_Local;

	if (colorSnippetReferenceDataAsset->skeletalMeshesColorSnippets.Contains(mesh.Get())) {

		colorSnippetReference_Local = colorSnippetReferenceDataAsset->skeletalMeshesColorSnippets.FindRef(mesh.Get());
	}

	else if (colorSnippetReferenceDataAsset->staticMeshesColorSnippets.Contains(mesh.Get())) {

		colorSnippetReference_Local = colorSnippetReferenceDataAsset->staticMeshesColorSnippets.FindRef(mesh.Get());
	}


	if (colorSnippetReference_Local.colorSnippetsStorageInfo.Num() > 0) {

		if (colorSnippetReference_Local.colorSnippetsStorageInfo.Contains(prevColorSnippetID)) {

			FVertexDetectStoredColorSnippetInfo storedColorSnippetInfoTemp = colorSnippetReference_Local.colorSnippetsStorageInfo.FindRef(prevColorSnippetID);

			if (isPartOfGroupSnippet)
				storedColorSnippetInfoTemp.groupSnippetID = groupSnippedID;

			colorSnippetReference_Local.colorSnippetsStorageInfo.Remove(prevColorSnippetID);
			colorSnippetReference_Local.colorSnippetsStorageInfo.Add(newColorSnippetID, storedColorSnippetInfoTemp);

			if (Cast<USkeletalMesh>(mesh.Get())) {

				colorSnippetReferenceDataAsset->skeletalMeshesColorSnippets.Add(mesh.Get(), colorSnippetReference_Local);
			}

			else if (Cast<UStaticMesh>(mesh.Get())) {

				colorSnippetReferenceDataAsset->staticMeshesColorSnippets.Add(mesh.Get(), colorSnippetReference_Local);
			}
		}
	}

	success = true;

	AddEditorNotification(FString::Printf(TEXT("Successfully Updated Color Snippet to: %s!"), *newColorSnippetID));

	RenameColorSnippetTag(prevColorSnippetID, newColorSnippetID);

	SavePackageWrapper(colorSnippetReferenceDataAsset);

	RefreshAllAvailableCachedColorSnippetTagContainer();
}


//--------------------------------------------------------

// Update Group Color Snippet ID

void URVPDPEditorSubsystem::UpdateGroupColorSnippetID(FString prevGroupColorSnippetID, FString newGroupColorSnippetID) {

	if (prevGroupColorSnippetID.IsEmpty() || newGroupColorSnippetID.IsEmpty()) return;

	auto colorSnippetReferenceDataAsset = UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset(nullptr);

	if (!colorSnippetReferenceDataAsset) {

		UE_LOG(LogTemp, Warning, TEXT("Trying to Update Group Snippet but there is no Color Snippet Reference Data Asset Set in Project Settings. "));

		return;
	}

	if (colorSnippetReferenceDataAsset->groupSnippetsAndAssociatedMeshes.Contains(prevGroupColorSnippetID)) {

		auto groupSnippetInfo = colorSnippetReferenceDataAsset->groupSnippetsAndAssociatedMeshes.FindRef(prevGroupColorSnippetID);

		groupSnippetInfo.groupSnippetID = newGroupColorSnippetID;

		colorSnippetReferenceDataAsset->groupSnippetsAndAssociatedMeshes.Remove(prevGroupColorSnippetID);
		colorSnippetReferenceDataAsset->groupSnippetsAndAssociatedMeshes.Add(newGroupColorSnippetID, groupSnippetInfo);

		SavePackageWrapper(colorSnippetReferenceDataAsset);
	}
}

//--------------------------------------------------------

// Apply Vertex Color Data To Mesh

bool URVPDPEditorSubsystem::ApplyVertexColorToMeshAtLOD0(UPrimitiveComponent* meshComponent, TArray<FColor> vertexColorsAtLOD0) {

	if (!IsValid(meshComponent) || vertexColorsAtLOD0.Num() <= 0) return false;


	if (auto staticMeshComp = Cast<UStaticMeshComponent>(meshComponent)) {

		bool appliedColorsToAnyLOD_Local = false;
		staticMeshComp->SetLODDataCount(1, staticMeshComp->GetStaticMesh()->GetNumLODs());
		staticMeshComp->Modify();

		if (staticMeshComp->LODData.IsValidIndex(0)) {

			if (staticMeshComp->LODData[0].OverrideVertexColors) {

				staticMeshComp->LODData[0].ReleaseOverrideVertexColorsAndBlock(); // UMeshPaintingToolset::SetInstanceColorDataForLOD ran this and it seem to fix an issue if updating a color snippet, then previewing it again where you couldn't reset it afterwards. 

			}

			staticMeshComp->LODData[0].OverrideVertexColors = new FColorVertexBuffer;
			staticMeshComp->LODData[0].OverrideVertexColors->InitFromColorArray(vertexColorsAtLOD0);

			BeginInitResource(staticMeshComp->LODData[0].OverrideVertexColors);

			staticMeshComp->MarkRenderStateDirty();
			return true;
		}
	}

	else if (auto skeletalMeshComp = Cast<USkeletalMeshComponent>(meshComponent)) {


		USkeletalMesh* skelMesh = nullptr;

#if ENGINE_MAJOR_VERSION == 4

		skelMesh = skeletalMeshComp->SkeletalMesh;

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

		skelMesh = skeletalMeshComp->SkeletalMesh.Get();

#else

		skelMesh = skeletalMeshComp->GetSkeletalMeshAsset();

#endif
#endif


		if (skeletalMeshComp->LODInfo.IsValidIndex(0)) {

			// Dirty the mesh
			skelMesh->SetFlags(RF_Transactional);
			skelMesh->Modify();
			skelMesh->SetHasVertexColors(true);
			skelMesh->SetVertexColorGuid(FGuid::NewGuid());

			// Release the static mesh's resources.
			skelMesh->ReleaseResources();

			// Flush the resource release commands to the rendering thread to ensure that the build doesn't occur while a resource is still
			// allocated, and potentially accessing the USkeletalMesh.
			skelMesh->ReleaseResourcesFence.Wait();

			// const int32 NumLODs = Mesh->GetLODNum();
			const int32 NumLODs = 1;
			if (NumLODs > 0)
			{
				TUniquePtr<FSkinnedMeshComponentRecreateRenderStateContext> RecreateRenderStateContext = MakeUnique<FSkinnedMeshComponentRecreateRenderStateContext>(skelMesh);

				for (int32 LODIndex = 0; LODIndex < NumLODs; ++LODIndex)
				{
					FSkeletalMeshLODRenderData& LODData = skelMesh->GetResourceForRendering()->LODRenderData[LODIndex];
					FPositionVertexBuffer& PositionVertexBuffer = LODData.StaticVertexBuffers.PositionVertexBuffer;


					// Check if the provided vertex colors match the mesh's vertex count
					int32 VertexCount = PositionVertexBuffer.GetNumVertices();
					if (vertexColorsAtLOD0.Num() != VertexCount)
					{
						UE_LOG(LogTemp, Error, TEXT("The number of provided vertex colors does not match the mesh's vertex count. Vertex Colors Num: %i  -  PositionVertexBuffer amount: %i"), vertexColorsAtLOD0.Num(), VertexCount);
						continue;
					}

					// Make sure the existing color buffer is initialized
					if (!LODData.StaticVertexBuffers.ColorVertexBuffer.IsInitialized())
					{
						LODData.StaticVertexBuffers.ColorVertexBuffer.Init(VertexCount);
					}

					for (int32 j = 0; j < VertexCount; j++)
					{
						if (vertexColorsAtLOD0.IsValidIndex(j))
						{
							LODData.StaticVertexBuffers.ColorVertexBuffer.VertexColor(j) = vertexColorsAtLOD0[j];
						}
					}

					ENQUEUE_RENDER_COMMAND(RefreshColorBuffer)(
						[&LODData](FRHICommandListImmediate& RHICmdList)
						{
							BeginInitResource(&LODData.StaticVertexBuffers.ColorVertexBuffer);
						});
				}

				skelMesh->InitResources();
			}

			return true;
		}
	}

	return false;
}


//--------------------------------------------------------

// Set Custom Settings Optimizations Data Asset To Use

void URVPDPEditorSubsystem::SetCustomSettingsOptimizationsDataAssetToUse(UObject* dataAsset) {

	// if (!IsValid(dataAsset)) return; // No valid check here as we should be able to set it to nothing if we want to

	UVertexPaintDetectionSettings* developerSettings_Local = GetMutableDefault<UVertexPaintDetectionSettings>();
	UVertexPaintOptimizationDataAsset* optimizationsDataAsset_Local = Cast<UVertexPaintOptimizationDataAsset>(dataAsset);

	if (developerSettings_Local) {

		if (optimizationsDataAsset_Local)
			developerSettings_Local->vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse = optimizationsDataAsset_Local;
		else
			developerSettings_Local->vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse = nullptr;

		developerSettings_Local->SaveConfig();


#if ENGINE_MAJOR_VERSION == 4

		developerSettings_Local->UpdateDefaultConfigFile();

#elif ENGINE_MAJOR_VERSION == 5

		developerSettings_Local->TryUpdateDefaultConfigFile();
#endif
	}
}


//----------------------------------------------------------------------------------------------------------------

// Set Custom Settings Vertex Paint Material To Use

void URVPDPEditorSubsystem::SetCustomSettingsVertexPaintMaterialToUse(UObject* dataAsset) {

	// if (!IsValid(dataAsset)) return;  // No valid check here as we should be able to set it to nothing if we want to

	UVertexPaintDetectionSettings* developerSettings_Local = GetMutableDefault<UVertexPaintDetectionSettings>();
	UVertexPaintMaterialDataAsset* paintOnMaterialDataAsset_Local = Cast<UVertexPaintMaterialDataAsset>(dataAsset);


	if (developerSettings_Local) {

		if (paintOnMaterialDataAsset_Local)
			developerSettings_Local->vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse = paintOnMaterialDataAsset_Local;
		else
			developerSettings_Local->vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse = nullptr;

		developerSettings_Local->SaveConfig();


#if ENGINE_MAJOR_VERSION == 4

		developerSettings_Local->UpdateDefaultConfigFile();

#elif ENGINE_MAJOR_VERSION == 5

		developerSettings_Local->TryUpdateDefaultConfigFile();
#endif
	}
}


//----------------------------------------------------------------------------------------------------------------

// Set Custom Settings Vertex Paint Color Snippet Reference Data Asset To Use

void URVPDPEditorSubsystem::SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse(UObject* dataAsset) {

	// if (!IsValid(dataAsset)) return; // No valid check here as we should be able to set it to nothing if we want to

	UVertexPaintDetectionSettings* developerSettings_Local = GetMutableDefault<UVertexPaintDetectionSettings>();
	UVertexPaintColorSnippetRefs* skeletalMeshDataAsset_Local = Cast<UVertexPaintColorSnippetRefs>(dataAsset);


	if (developerSettings_Local) {

		if (skeletalMeshDataAsset_Local)
			developerSettings_Local->vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse = skeletalMeshDataAsset_Local;
		else
			developerSettings_Local->vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse = nullptr;

		developerSettings_Local->SaveConfig();


#if ENGINE_MAJOR_VERSION == 4

		developerSettings_Local->UpdateDefaultConfigFile();

#elif ENGINE_MAJOR_VERSION == 5

		developerSettings_Local->TryUpdateDefaultConfigFile();
#endif
	}
}


//--------------------------------------------------------

// Load Essential Data Assets - Used by for instance Editor Widget to make sure they're loaded when it's open, to avoid race condition if you close the editor with the widget open and the next time you open the editor

void URVPDPEditorSubsystem::LoadEssentialDataAssets() {

	UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset(nullptr);
	UVertexPaintFunctionLibrary::GetOptimizationDataAsset(nullptr);
	UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset(nullptr);
}


//--------------------------------------------------------

// Get Objects Of Class

TArray<UObject*> URVPDPEditorSubsystem::GetObjectsOfClass(TSubclassOf<UObject> objectsToGet, bool onlyGetObjectsFromContentFolder) {

	if (!objectsToGet.Get()) return TArray<UObject*>();


	FAssetRegistryModule& AssetRegistryModule_Local = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	TArray<FAssetData> AssetData_Local;
	TArray<UObject*> objects_Local;


#if ENGINE_MAJOR_VERSION == 4

	AssetRegistryModule_Local.Get().GetAssetsByClass(objectsToGet.Get()->GetFName(), AssetData_Local);

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

	AssetRegistryModule_Local.Get().GetAssetsByClass(objectsToGet.Get()->GetFName(), AssetData_Local);


#else

	AssetRegistryModule_Local.Get().GetAssetsByClass(objectsToGet.Get()->GetClassPathName(), AssetData_Local);

#endif
#endif


	for (auto asset_Local : AssetData_Local) {


		// If asset it not in the content folder
		if (!asset_Local.ToSoftObjectPath().ToString().StartsWith("/Game", ESearchCase::IgnoreCase)) {

			if (onlyGetObjectsFromContentFolder)
				continue;
		}

		if (asset_Local.GetAsset())
			objects_Local.Add(asset_Local.GetAsset());
	}

	return objects_Local;
}

//--------------------------------------------------------

// Get Soft Object Path From Soft Object Ptr

FSoftObjectPath URVPDPEditorSubsystem::GetSoftObjectPathFromSoftObjectPtr(TSoftObjectPtr<UObject> object) {

	if (!object) return FSoftObjectPath();

	return object.ToSoftObjectPath();
}


//--------------------------------------------------------

// Get Soft Object Name From Soft Object Ptr

FString URVPDPEditorSubsystem::GetObjectNameFromSoftObjectPtr(TSoftObjectPtr<UObject> object) {

	if (!object) return FString();

	return object.GetAssetName();
}


//--------------------------------------------------------

// Get Object Of Class as Soft Ptrs

TArray<TSoftObjectPtr<UObject>> URVPDPEditorSubsystem::GetObjectsOfClassAsSoftPtrs(TSubclassOf<UObject> objectsToGet, bool loadObjects) {

	if (!objectsToGet.Get()) return TArray<TSoftObjectPtr<UObject>>();


	FAssetRegistryModule& AssetRegistryModule_Local = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	TArray<FAssetData> AssetData_Local;


#if ENGINE_MAJOR_VERSION == 4

	AssetRegistryModule_Local.Get().GetAssetsByClass(objectsToGet.Get()->GetFName(), AssetData_Local);

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

	AssetRegistryModule_Local.Get().GetAssetsByClass(objectsToGet.Get()->GetFName(), AssetData_Local);


#else

	AssetRegistryModule_Local.Get().GetAssetsByClass(objectsToGet.Get()->GetClassPathName(), AssetData_Local);

#endif
#endif


	TArray<TSoftObjectPtr<UObject>> softObjectPtrs_Local;
	TSoftObjectPtr<UObject> tempSoftObject;

	for (auto asset_Local : AssetData_Local) {


		// If asset it not in the content folder
		if (!asset_Local.ToSoftObjectPath().ToString().StartsWith("/Game", ESearchCase::IgnoreCase)) {

			continue;
		}

		tempSoftObject = asset_Local.ToSoftObjectPath();


		if (loadObjects)
			tempSoftObject.LoadSynchronous();

		if (!tempSoftObject) continue;

		softObjectPtrs_Local.Add(tempSoftObject);
	}

	return softObjectPtrs_Local;
}


//-------------------------------------------------------

// Wrappers

int URVPDPEditorSubsystem::GetStaticMeshVerticesAmount_Wrapper(UStaticMesh* mesh, int lod) {

	if (!IsValid(mesh)) return 0;

	if (!mesh->GetRenderData()->LODResources.IsValidIndex(lod)) return 0;


	return mesh->GetRenderData()->LODResources[lod].GetNumVertices();
}

int URVPDPEditorSubsystem::GetSkeletalMeshVerticesAmount_Wrapper(USkeletalMesh* mesh, int lod) {

	if (!IsValid(mesh)) return 0;

	if (!mesh->GetImportedModel()->LODModels.IsValidIndex(lod)) return 0;


	return mesh->GetImportedModel()->LODModels[lod].NumVertices;
}

int URVPDPEditorSubsystem::GetStaticMeshLODCount_Wrapper(UStaticMesh* mesh) {

	if (!mesh) return -1;

	return mesh->GetNumSourceModels();
}

int URVPDPEditorSubsystem::GetSkeletalMeshLODCount_Wrapper(USkeletalMesh* skeletalMesh) {

	if (!skeletalMesh) return -1;

	return skeletalMesh->GetLODNum();
}

int URVPDPEditorSubsystem::GetSkeletalMeshComponentVertexCount_Wrapper(USkeletalMeshComponent* skeletalMeshComponent, int lod) {

	if (!skeletalMeshComponent) return 0;

	if (!skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData.IsValidIndex(lod)) return 0;

	return skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData[lod].GetNumVertices();
}

int URVPDPEditorSubsystem::GetStaticMeshComponentVertexCount_Wrapper(UStaticMeshComponent* staticMeshComponent, int lod) {

	if (!staticMeshComponent) return 0;


	if (staticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources.IsValidIndex(lod))
		return staticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[lod].GetNumVertices();

	return 0;
}

UWorld* URVPDPEditorSubsystem::GetPersistentLevelsWorld_Wrapper(const UObject* worldContext) {

	if (!IsValid(worldContext)) return nullptr;

	return worldContext->GetWorld();
}


//-------------------------------------------------------

// Deinitialize

void URVPDPEditorSubsystem::Deinitialize() {

	UE_LOG(LogTemp, Log, TEXT("Editor Subsystem De-Initialized"));
}
