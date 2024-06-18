// Copyright 2023 Alexander Floden, Alias Alex River. All Rights Reserved.


#include "AutoAddColorPaintAtLocComponent.h"
#include "Components/PrimitiveComponent.h"

// Plugin
#include "VertexPaintDetectionLog.h"


//-------------------------------------------------------

// Construct


UAutoAddColorPaintAtLocComponent::UAutoAddColorPaintAtLocComponent() {

	isAllowedToAutoPaintAtBeginPlay = false;
}


//-------------------------------------------------------

// Add Auto Paint At Location

void UAutoAddColorPaintAtLocComponent::AddAutoPaintAtLocation(UPrimitiveComponent* meshComponent, FVertexPaintAtLocationStruct paintAtLocationSettings, FAutoAddColorSettings autoAddColorSettings) {

	if (!meshComponent) return;
	// Note doesn't check if already in TMap since we want to be able to Update the Paint Settings

	paintAtLocationSettings.meshComponent = meshComponent;
	paintAtLocationSettings.actor = meshComponent->GetOwner();
	paintAtLocationSettings.taskWorld = GetWorld();
	paintAtLocationSettings.debugSettings.worldTaskWasCreatedIn = GetWorld();
	debugSettings.worldTaskWasCreatedIn = GetWorld();


	if (!PaintOnMeshAtLocationCheckValid(paintAtLocationSettings)) return;


	AdjustCallbackSettings(paintAtLocationSettings.applyVertexColorSettings, paintAtLocationSettings.callbackSettings);


	RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - Mesh: %s in Actor: %s Has been Added/Updated to be Auto Painted at Location!", *GetName(), *meshComponent->GetName(), *meshComponent->GetOwner()->GetName());

	autoPaintingAtLocationWithSettings.Add(paintAtLocationSettings.meshComponent, paintAtLocationSettings);
	MeshAddedToBeAutoPainted(paintAtLocationSettings.meshComponent, autoAddColorSettings);


	if (!IsMeshBeingPaintedOrIsQueuedUp(meshComponent)) {

		StartAutoPaintTask(paintAtLocationSettings.meshComponent);
	}
}


//-------------------------------------------------------

// Start Auto Paint Task

void UAutoAddColorPaintAtLocComponent::StartAutoPaintTask(UPrimitiveComponent* meshComponent) {

	if (!GetIsAutoPainting()) return;
	if (IsMeshBeingPaintedOrIsQueuedUp(meshComponent)) return;
	if (!autoPaintingAtLocationWithSettings.Contains(meshComponent)) return;

	Super::StartAutoPaintTask(meshComponent);


	RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - StartAutoPaintTask At Location for Mesh: %s", *GetName(), *meshComponent->GetName());

	PaintOnMeshAtLocation(autoPaintingAtLocationWithSettings.FindRef(meshComponent), FVertexDetectAdditionalDataToPassThrough());
}


//-------------------------------------------------------

// Get Apply Vertex Color Settings

bool UAutoAddColorPaintAtLocComponent::GetApplyVertexColorSettings(UPrimitiveComponent* meshComponent, FVertexDetectRGBAStruct& applyVertexColorSettings) {

	applyVertexColorSettings = FVertexDetectRGBAStruct();

	if (!autoPaintingAtLocationWithSettings.Contains(meshComponent)) return false;

	applyVertexColorSettings = autoPaintingAtLocationWithSettings.FindRef(meshComponent).applyVertexColorSettings;

	return true;
}


//-------------------------------------------------------

// Stop All Auto Painting

void UAutoAddColorPaintAtLocComponent::StopAllAutoPainting() {

	Super::StopAllAutoPainting();

	autoPaintingAtLocationWithSettings.Empty();
}


//-------------------------------------------------------

// Verify Mesh Components

void UAutoAddColorPaintAtLocComponent::VerifyAllCachedMeshComponents() {

	Super::VerifyAllCachedMeshComponents();


	if (autoPaintingAtLocationWithSettings.Num() > 0) {

		TArray<UPrimitiveComponent*> meshComponents;
		autoPaintingAtLocationWithSettings.GetKeys(meshComponents);

		TArray<FVertexPaintAtLocationStruct> paintSettings;
		autoPaintingAtLocationWithSettings.GenerateValueArray(paintSettings);

		autoPaintingAtLocationWithSettings.Empty();

		for (int i = 0; i < meshComponents.Num(); i++) {

			if (IsValid(meshComponents[i]))
				autoPaintingAtLocationWithSettings.Add(meshComponents[i], paintSettings[i]);
		}
	}
}


//-------------------------------------------------------

// Stop Auto Painting Mesh

void UAutoAddColorPaintAtLocComponent::StopAutoPaintingMesh(UPrimitiveComponent* meshComponent) {

	Super::StopAutoPaintingMesh(meshComponent);

	if (autoPaintingAtLocationWithSettings.Contains(meshComponent))
		autoPaintingAtLocationWithSettings.Remove(meshComponent);
}