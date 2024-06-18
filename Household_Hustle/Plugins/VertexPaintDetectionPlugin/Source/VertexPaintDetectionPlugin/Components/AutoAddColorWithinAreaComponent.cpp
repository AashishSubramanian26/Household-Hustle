// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved.


#include "AutoAddColorWithinAreaComponent.h"
#include "Components/PrimitiveComponent.h"

// Plugin
#include "VertexPaintDetectionLog.h"



//-------------------------------------------------------

// Construct

UAutoAddColorWithinAreaComponent::UAutoAddColorWithinAreaComponent() {

	isAllowedToAutoPaintAtBeginPlay = false;

	PrimaryComponentTick.bStartWithTickEnabled = false;
	PrimaryComponentTick.bCanEverTick = (onlyPaintOnMovingMeshZ || onlyPaintOnMovingMeshXY || onlyPaintOnRotatedMesh || onlyPaintOnReScaledMesh);
}


//-------------------------------------------------------

// Add Auto Paint Within Area

void UAutoAddColorWithinAreaComponent::AddAutoPaintWithinArea(UPrimitiveComponent* meshComponent, FVertexPainthWithinAreaStruct paintWithinAreaSettings, FAutoAddColorSettings autoAddColorSettings) {

	if (!meshComponent) return;

	// Note doesn't check if already in TMap since we want to be able to Update the Paint Settings

	paintWithinAreaSettings.meshComponent = meshComponent;
	paintWithinAreaSettings.actor = meshComponent->GetOwner();
	paintWithinAreaSettings.taskWorld = GetWorld();
	paintWithinAreaSettings.debugSettings.worldTaskWasCreatedIn = GetWorld();
	debugSettings.worldTaskWasCreatedIn = GetWorld();


	if (!PaintOnMeshWithinAreaCheckValid(paintWithinAreaSettings)) return;


	AdjustCallbackSettings(paintWithinAreaSettings.applyVertexColorSettings, paintWithinAreaSettings.callbackSettings);


	RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - Mesh: %s in Actor: %s Has been Added/Updated to be Auto Painted Within Area!  ", *GetName(), *meshComponent->GetName(), *meshComponent->GetOwner()->GetName());


	autoPaintingWithinAreaWithSettings.Add(paintWithinAreaSettings.meshComponent, paintWithinAreaSettings);
	MeshAddedToBeAutoPainted(paintWithinAreaSettings.meshComponent, autoAddColorSettings);


	if (!IsMeshBeingPaintedOrIsQueuedUp(meshComponent)) {

		StartAutoPaintTask(paintWithinAreaSettings.meshComponent);
	}
}


//-------------------------------------------------------

// Start Auto Paint Task

void UAutoAddColorWithinAreaComponent::StartAutoPaintTask(UPrimitiveComponent* meshComponent) {

	if (!GetIsAutoPainting()) return;
	if (IsMeshBeingPaintedOrIsQueuedUp(meshComponent)) return;
	if (!autoPaintingWithinAreaWithSettings.Contains(meshComponent)) return;

	Super::StartAutoPaintTask(meshComponent);


	RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - StartAutoPaintTask Within Area for Mesh: %s", *GetName(), *meshComponent->GetName());

	PaintOnMeshWithinArea(autoPaintingWithinAreaWithSettings.FindRef(meshComponent), FVertexDetectAdditionalDataToPassThrough());
}


//-------------------------------------------------------

// Update

void UAutoAddColorWithinAreaComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {

	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// If these are false then will determine in ShouldStartNewTaskOnComponent if another task should be started. 
	if (!onlyPaintOnMovingMeshZ && !onlyPaintOnMovingMeshXY && !onlyPaintOnRotatedMesh && !onlyPaintOnReScaledMesh) return;


	TArray<UPrimitiveComponent*> meshComponentsToCheck_Local;
	meshComponentsToCheckIfMoved.GetKeys(meshComponentsToCheck_Local);

	TArray<FTransform> lastMeshTransforms_Local;
	meshComponentsToCheckIfMoved.GenerateValueArray(lastMeshTransforms_Local);

	bool refreshCachedMeshComponentsToCheckList_Local = false;


	// Reverse loop so we can remove if not a valid mesh comp or starts paint task on it. 
	for (int i = meshComponentsToCheck_Local.Num() - 1; i >= 0; i--) {

		if (!IsValid(meshComponentsToCheck_Local[i])) {

			lastMeshTransforms_Local.RemoveAt(i);
			meshComponentsToCheck_Local.RemoveAt(i);
			refreshCachedMeshComponentsToCheckList_Local = true;

			continue;
		}


		UPrimitiveComponent* meshComponent = meshComponentsToCheck_Local[i];
		const FVector lastMeshLocation = lastMeshTransforms_Local[i].GetLocation();
		const FRotator lastMeshRotation = lastMeshTransforms_Local[i].GetRotation().Rotator();
		const FVector lastMeshScale = lastMeshTransforms_Local[i].GetScale3D();


		// If something has already queued it up then clear it out from this check. 
		if (IsMeshBeingPaintedOrIsQueuedUp(meshComponent)) {

			meshComponentsToCheckIfMoved.Remove(meshComponent);
		}

		else if (HasMeshMovedSinceLastPaintJob(meshComponent, lastMeshLocation) || HasMeshRotatedSinceLastPaintJob(meshComponent, lastMeshRotation) || HasMeshReScaledSinceLastPaintJob(meshComponent, lastMeshScale)) {

			RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - Mesh: %s, Has Moved or Rotated so starts a new Paint Task!", *GetName(), *meshComponent->GetName());

			meshComponentsToCheckIfMoved.Remove(meshComponent);
			StartAutoPaintTask(meshComponent);
		}
	}


	// If any of the meshes wasn't valid and we removed them from the local TArrays then we can rebuild the global TMap, if there are any left at all. 
	if (meshComponentsToCheck_Local.Num() > 0) {

		if (refreshCachedMeshComponentsToCheckList_Local) {

			meshComponentsToCheckIfMoved.Empty();

			for (int i = 0; i < meshComponentsToCheck_Local.Num(); i++)
				meshComponentsToCheckIfMoved.Add(meshComponentsToCheck_Local[i], lastMeshTransforms_Local[i]);
		}

		if (meshComponentsToCheckIfMoved.Num() <= 0)
			SetComponentTickEnabled(false);

	}

	else {

		meshComponentsToCheckIfMoved.Empty();
		SetComponentTickEnabled(false);
	}
}


//-------------------------------------------------------

// Should Start New Task On Component

bool UAutoAddColorWithinAreaComponent::ShouldStartNewTaskOnComponent(const FVertexDetectTaskResultInfo& taskResultInfo, const bool& anyVertexColorsGotChanged, bool& isFullyPainted, bool& isCompletelyEmpty) {

	// If not gonna check on tick if any change in location, rotation or scale then we can let the parent decide if we should start new task based on the amount of colors of each channel etc. 
	if (!onlyPaintOnMovingMeshZ && !onlyPaintOnMovingMeshXY && !onlyPaintOnRotatedMesh && !onlyPaintOnReScaledMesh)
		return Super::ShouldStartNewTaskOnComponent(taskResultInfo, anyVertexColorsGotChanged, isFullyPainted, isCompletelyEmpty);


	if (UPrimitiveComponent* meshComponent = taskResultInfo.meshVertexData.meshComp.Get()) {

		if (!isAutoPaintingEnabled) return false;
		if (!taskResultInfo.taskSuccessfull) return false;
		if (!autoPaintingMeshes.Contains(meshComponent)) return false;
		if (IsMeshBeingPaintedOrIsQueuedUp(meshComponent)) return false;


		// If going to check if moved or rotated etc. then we add it to the list and make sure tick is on. 
		if (!meshComponentsToCheckIfMoved.Contains(meshComponent)) {

			meshComponentsToCheckIfMoved.Add(meshComponent, meshComponent->GetComponentTransform());

			SetComponentTickEnabled(true);

			RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Within Area Component: %s - ShouldStartNewTaskOnComponent() Doesn't start new Task because we should check in Tick if the Mesh should get painted if there has been any difference in it's location, rotation or scale. ", *GetName());

			return false;
		}
	}

	return false;
}


//-------------------------------------------------------

// Has Mesh Moved Since Last Paint Job

bool UAutoAddColorWithinAreaComponent::HasMeshMovedSinceLastPaintJob(UPrimitiveComponent* meshComponent, FVector lastMeshLocation) {

	if (!onlyPaintOnMovingMeshZ && !onlyPaintOnMovingMeshXY) return false;


	// Can optimize further by requiring that the Mesh is Moving on either XYZ for another auto paint job to start, otherwise we don't, so if a mesh is still in the area and no difference would occur there is no need to start another. 

	if (onlyPaintOnMovingMeshZ) {

		// If has moved more than 1 up or down in Z
		if (meshComponent->GetComponentLocation().Z < lastMeshLocation.Z - .1f || meshComponent->GetComponentLocation().Z > lastMeshLocation.Z + .1f)
			return true;
	}

	if (onlyPaintOnMovingMeshXY) {

		// If has moved on XY
		if (meshComponent->GetComponentLocation().X < lastMeshLocation.X - .1f || meshComponent->GetComponentLocation().X > lastMeshLocation.X + .1f)
			return true;

		else if (meshComponent->GetComponentLocation().Y < lastMeshLocation.Y - .1f || meshComponent->GetComponentLocation().Y > lastMeshLocation.Y + .1f)
			return true;
	}

	return false;
}


//-------------------------------------------------------

// Has Mesh Rotated Since Last Paint Job

bool UAutoAddColorWithinAreaComponent::HasMeshRotatedSinceLastPaintJob(UPrimitiveComponent* meshComponent, FRotator lastMeshRotation) {

	if (!onlyPaintOnRotatedMesh) return false;


	if (meshComponent->GetComponentRotation().Pitch < lastMeshRotation.Pitch - .1f || meshComponent->GetComponentRotation().Pitch > lastMeshRotation.Pitch + .1f)
		return true;

	if (meshComponent->GetComponentRotation().Roll < lastMeshRotation.Roll - .1f || meshComponent->GetComponentRotation().Roll > lastMeshRotation.Roll + .1f)
		return true;

	if (meshComponent->GetComponentRotation().Yaw < lastMeshRotation.Yaw - .1f || meshComponent->GetComponentRotation().Yaw > lastMeshRotation.Yaw + .1f)
		return true;


	return false;
}


//-------------------------------------------------------

// Has Mesh ReScaled Since Last Paint Job

bool UAutoAddColorWithinAreaComponent::HasMeshReScaledSinceLastPaintJob(UPrimitiveComponent* meshComponent, FVector lastMeshScale) {

	if (!onlyPaintOnReScaledMesh) return false;


	if (meshComponent->GetComponentScale().X < lastMeshScale.X - .01f || meshComponent->GetComponentScale().X > lastMeshScale.X + .01f)
		return true;

	if (meshComponent->GetComponentScale().Y < lastMeshScale.Y - .01f || meshComponent->GetComponentScale().Y > lastMeshScale.Y + .01f)
		return true;

	if (meshComponent->GetComponentScale().Z < lastMeshScale.Z - .01f || meshComponent->GetComponentScale().Z > lastMeshScale.Z + .01f)
		return true;


	return false;
}


//-------------------------------------------------------

// Get Apply Vertex Color Settings

bool UAutoAddColorWithinAreaComponent::GetApplyVertexColorSettings(UPrimitiveComponent* meshComponent, FVertexDetectRGBAStruct& applyVertexColorSettings) {

	applyVertexColorSettings = FVertexDetectRGBAStruct();

	if (!autoPaintingWithinAreaWithSettings.Contains(meshComponent)) return false;

	applyVertexColorSettings = autoPaintingWithinAreaWithSettings.FindRef(meshComponent).applyVertexColorSettings;

	return true;
}


//-------------------------------------------------------

// Stop All Auto Painting

void UAutoAddColorWithinAreaComponent::StopAllAutoPainting() {

	Super::StopAllAutoPainting();

	autoPaintingWithinAreaWithSettings.Empty();
	meshComponentsToCheckIfMoved.Empty();

	PrimaryComponentTick.bStartWithTickEnabled = false;
}


//-------------------------------------------------------

// Verify Mesh Components

void UAutoAddColorWithinAreaComponent::VerifyAllCachedMeshComponents() {

	Super::VerifyAllCachedMeshComponents();


	if (autoPaintingWithinAreaWithSettings.Num() > 0) {

		TArray<UPrimitiveComponent*> meshComponents;
		autoPaintingWithinAreaWithSettings.GetKeys(meshComponents);

		TArray<FVertexPainthWithinAreaStruct> paintSettings;
		autoPaintingWithinAreaWithSettings.GenerateValueArray(paintSettings);

		autoPaintingWithinAreaWithSettings.Empty();

		for (int i = 0; i < meshComponents.Num(); i++) {

			if (IsValid(meshComponents[i]))
				autoPaintingWithinAreaWithSettings.Add(meshComponents[i], paintSettings[i]);
		}
	}

	if (meshComponentsToCheckIfMoved.Num() > 0) {

		TArray<UPrimitiveComponent*> lastAutoPaintWithinAreaMeshes_Local;
		meshComponentsToCheckIfMoved.GetKeys(lastAutoPaintWithinAreaMeshes_Local);

		TArray<FTransform> lastMeshTransforms_Local;
		meshComponentsToCheckIfMoved.GenerateValueArray(lastMeshTransforms_Local);

		meshComponentsToCheckIfMoved.Empty();

		for (int i = 0; i < lastAutoPaintWithinAreaMeshes_Local.Num(); i++) {

			if (IsValid(lastAutoPaintWithinAreaMeshes_Local[i])) {

				meshComponentsToCheckIfMoved.Add(lastAutoPaintWithinAreaMeshes_Local[i], lastMeshTransforms_Local[i]);
			}
		}
	}
}


//-------------------------------------------------------

// Stop Auto Painting Mesh

void UAutoAddColorWithinAreaComponent::StopAutoPaintingMesh(UPrimitiveComponent* meshComponent) {

	Super::StopAutoPaintingMesh(meshComponent);

	if (autoPaintingWithinAreaWithSettings.Contains(meshComponent))
		autoPaintingWithinAreaWithSettings.Remove(meshComponent);

	if (meshComponentsToCheckIfMoved.Contains(meshComponent))
		meshComponentsToCheckIfMoved.Remove(meshComponent);

	if (meshComponentsToCheckIfMoved.Num() <= 0)
		PrimaryComponentTick.bStartWithTickEnabled = false;
}