// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved.


#include "AutoAddColorEntireMeshComponent.h"
#include "Components/PrimitiveComponent.h"

// Plugin
#include "VertexPaintDetectionLog.h"


//-------------------------------------------------------

// Begin Play

void UAutoAddColorEntireMeshComponent::BeginPlay() {

	Super::BeginPlay();

	if (autoPaintRootMeshAtBeginPlay) {

		if (auto meshTemp = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent())) {

			AddAutoPaintEntireMesh(meshTemp, autoPaintRootMeshAtBeginPlay_PaintEntireMeshSettings, autoPaintRootMeshAtBeginPlay_DelaySettings);
		}
	}
}


//-------------------------------------------------------

// Add Auto Paint Entire Mesh

void UAutoAddColorEntireMeshComponent::AddAutoPaintEntireMesh(UPrimitiveComponent* meshComponent, FVertexPaintOnEntireMeshStruct paintEntireMeshSettings, FAutoAddColorSettings autoAddColorSettings) {

	if (!meshComponent) return;

	// Note doesn't check if already in TMap since we want to be able to Update the Paint Settings

	paintEntireMeshSettings.meshComponent = meshComponent;
	paintEntireMeshSettings.actor = meshComponent->GetOwner();
	paintEntireMeshSettings.taskWorld = GetWorld();
	paintEntireMeshSettings.debugSettings.worldTaskWasCreatedIn = GetWorld();
	debugSettings.worldTaskWasCreatedIn = GetWorld();


	if (!PaintOnEntireMeshCheckValid(paintEntireMeshSettings)) return;


	AdjustCallbackSettings(paintEntireMeshSettings.applyVertexColorSettings, paintEntireMeshSettings.callbackSettings);


	RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - Mesh: %s in Actor: %s Has been Added/Updated to be Auto Painted over the Entire Mesh!", *GetName(), *meshComponent->GetName(), *meshComponent->GetOwner()->GetName());

	autoPaintingEntireMeshesWithSettings.Add(paintEntireMeshSettings.meshComponent, paintEntireMeshSettings);
	MeshAddedToBeAutoPainted(paintEntireMeshSettings.meshComponent, autoAddColorSettings);


	if (!IsMeshBeingPaintedOrIsQueuedUp(meshComponent)) {

		StartAutoPaintTask(paintEntireMeshSettings.meshComponent);
	}
}


//-------------------------------------------------------

// Start Auto Paint Task

void UAutoAddColorEntireMeshComponent::StartAutoPaintTask(UPrimitiveComponent* meshComponent) {

	if (!GetIsAutoPainting()) return;
	if (IsMeshBeingPaintedOrIsQueuedUp(meshComponent)) return;
	if (!autoPaintingEntireMeshesWithSettings.Contains(meshComponent)) return;

	Super::StartAutoPaintTask(meshComponent);


	RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - StartAutoPaintTask Entire Mesh for Mesh: %s", *GetName(), *meshComponent->GetName());

	PaintOnEntireMesh(autoPaintingEntireMeshesWithSettings.FindRef(meshComponent), FVertexDetectAdditionalDataToPassThrough());
}


//-------------------------------------------------------

// Get Apply Vertex Color Settings

bool UAutoAddColorEntireMeshComponent::GetApplyVertexColorSettings(UPrimitiveComponent* meshComponent, FVertexDetectRGBAStruct& applyVertexColorSettings) {

	applyVertexColorSettings = FVertexDetectRGBAStruct();

	if (!autoPaintingEntireMeshesWithSettings.Contains(meshComponent)) return false;

	applyVertexColorSettings = autoPaintingEntireMeshesWithSettings.FindRef(meshComponent).applyVertexColorSettings;

	return true;
}


//-------------------------------------------------------

// Stop All Auto Painting

void UAutoAddColorEntireMeshComponent::StopAllAutoPainting() {

	Super::StopAllAutoPainting();

	autoPaintingEntireMeshesWithSettings.Empty();
}


//-------------------------------------------------------

// Verify Mesh Components

void UAutoAddColorEntireMeshComponent::VerifyAllCachedMeshComponents() {

	Super::VerifyAllCachedMeshComponents();


	if (autoPaintingEntireMeshesWithSettings.Num() > 0) {

		TArray<UPrimitiveComponent*> meshComponents;
		autoPaintingEntireMeshesWithSettings.GetKeys(meshComponents);

		TArray<FVertexPaintOnEntireMeshStruct> paintSettings;
		autoPaintingEntireMeshesWithSettings.GenerateValueArray(paintSettings);

		autoPaintingEntireMeshesWithSettings.Empty();

		for (int i = 0; i < meshComponents.Num(); i++) {

			if (IsValid(meshComponents[i]))
				autoPaintingEntireMeshesWithSettings.Add(meshComponents[i], paintSettings[i]);
		}
	}
}


//-------------------------------------------------------

// Stop Auto Painting Mesh

void UAutoAddColorEntireMeshComponent::StopAutoPaintingMesh(UPrimitiveComponent* meshComponent) {

	Super::StopAutoPaintingMesh(meshComponent);

	if (autoPaintingEntireMeshesWithSettings.Contains(meshComponent))
		autoPaintingEntireMeshesWithSettings.Remove(meshComponent);
}