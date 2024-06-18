// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#include "VertexPaintDetectionComponent.h"

// Engine 
#include "DrawDebugHelpers.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/AssetManager.h"
#include "PhysicsEngine/BodySetup.h"
#include "PhysicsEngine/PhysicsAsset.h"
#include "Engine/StaticMesh.h"
#include "StaticMeshResources.h"
#include "Engine/SkeletalMesh.h"
#include "Rendering/SkeletalMeshRenderData.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Landscape.h"

// Plugin
#include "VertexPaintDetectionTaskQueue.h"
#include "VertexPaintFunctionLibrary.h"
#include "VertexPaintDetectionSettings.h"
#include "VertexPaintColorSnippetDataAsset.h"
#include "VertexPaintColorSnippetRefs.h"
#include "VertexPaintDetectionLog.h"

// UE5
#if ENGINE_MAJOR_VERSION == 5

#include "GeometryCollection/GeometryCollectionComponent.h"
#include "GeometryCollection/GeometryCollectionObject.h"

#include "Components/DynamicMeshComponent.h"

#endif


//-------------------------------------------------------

// Construct

UVertexPaintDetectionComponent::UVertexPaintDetectionComponent() {

	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
}


//-------------------------------------------------------

// Begin Play

void UVertexPaintDetectionComponent::BeginPlay() {

	Super::BeginPlay();

	if (auto taskQueue = UVertexPaintFunctionLibrary::GetVertexPaintTaskQueue(GetWorld()))
		taskQueue->taskRemovedFromQueueDelegate.AddDynamic(this, &UVertexPaintDetectionComponent::TaskRemovedByTaskQueue);
}


//-------------------------------------------------------

// Task Removed By Task Queue

void UVertexPaintDetectionComponent::TaskRemovedByTaskQueue(const FCalculateColorsInfo& calculateColorsInfo) {


	if (currentGetClosestVertexDataTasks.Contains(calculateColorsInfo.taskID))
		GetClosestVertexDataOnMeshTaskFinished(calculateColorsInfo, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

	else if (currentGetAllVertexColorsOnlyTasks.Contains(calculateColorsInfo.taskID))
		GetAllVertexColorsOnlyTaskFinished(calculateColorsInfo);

	else if (currentGetColorsWithinAreaTasks.Contains(calculateColorsInfo.taskID))
		GetColorsWithinAreaTaskFinished(calculateColorsInfo);

	else if (currentPaintAtLocationTasks.Contains(calculateColorsInfo.taskID))
		PaintOnMeshAtLocationTaskFinished(calculateColorsInfo, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

	else if (currentPaintWithinAreaTasks.Contains(calculateColorsInfo.taskID))
		PaintOnMeshWithinAreaTaskFinished(calculateColorsInfo);

	else if (currentPaintEntireMeshTasks.Contains(calculateColorsInfo.taskID))
		PaintOnEntireMeshTaskFinished(calculateColorsInfo);

	else if (currentPaintColorSnippetTasks.Contains(calculateColorsInfo.taskID))
		PaintColorSnippetOnMeshTaskFinished(calculateColorsInfo);

	else if (currentSetMeshComponentVertexColorsTasks.Contains(calculateColorsInfo.taskID))
		SetMeshComponentVertexColorsTaskFinished(calculateColorsInfo);

	else if (currentSetMeshComponentVertexColorsUsingSerializedStringTasks.Contains(calculateColorsInfo.taskID))
		SetMeshComponentVertexColorsUsingSerializedStringTaskFinished(calculateColorsInfo);
}


//-------------------------------------------------------

// Get Closest Vertex Data On Mesh

void UVertexPaintDetectionComponent::GetClosestVertexDataOnMesh(FVertexDetectInfoStruct getClosestVertexDataStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (!UVertexPaintFunctionLibrary::IsWorldValid(GetWorld())) return;


	CheckIfRegisteredAndInitialized();


	getClosestVertexDataStruct.taskWorld = GetWorld();
	getClosestVertexDataStruct.debugSettings.worldTaskWasCreatedIn = GetWorld();

	if (IsValid(getClosestVertexDataStruct.meshComponent)) {

		if (IsValid(getClosestVertexDataStruct.meshComponent->GetOwner())) {

			getClosestVertexDataStruct.actor = getClosestVertexDataStruct.meshComponent->GetOwner();

			RVPDP_LOG(getClosestVertexDataStruct.debugSettings, FColor::Cyan, "Trying to Get Closest Vertex Data on Actor: %s and Component: %s", *getClosestVertexDataStruct.meshComponent->GetOwner()->GetName(), *getClosestVertexDataStruct.meshComponent->GetName());
		}

		getClosestVertexDataStruct.hitFundementals.hitLocationInComponentSpace = UKismetMathLibrary::InverseTransformLocation(getClosestVertexDataStruct.meshComponent->GetComponentTransform(), getClosestVertexDataStruct.hitFundementals.hitLocation);
	}

	// Clamps these between 0-1 in case the user set a different value
	getClosestVertexDataStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeIfMinColorAmountIs = UKismetMathLibrary::FClamp(getClosestVertexDataStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeIfMinColorAmountIs, 0, 1);


	getClosestVertexDataStruct.getAverageColorInAreaSettings.VertexNormalToHitNormal_MinimumDotProductToBeAccountedFor = UKismetMathLibrary::FClamp(getClosestVertexDataStruct.getAverageColorInAreaSettings.VertexNormalToHitNormal_MinimumDotProductToBeAccountedFor, -1, 1);

	
	FCalculateColorsInfo calculateColorsInfoTemp;
	calculateColorsInfoTemp.vertexDetectSettings = getClosestVertexDataStruct;
	calculateColorsInfoTemp.paintDetectionType = EVertexPaintDetectionType::GetClosestVertexDataDetection;
	calculateColorsInfoTemp.getClosestVertexDataSettings = getClosestVertexDataStruct;
	calculateColorsInfoTemp.taskResult.associatedPaintComponent = this;
	calculateColorsInfoTemp.additionalDataToPassThrough = additionalDataToPassThrough;
	calculateColorsInfoTemp.estimatedColorAtHitLocationSettings = getClosestVertexDataStruct.getEstimatedColorAtHitLocationSettings;
	calculateColorsInfoTemp.fundementalStruct = getClosestVertexDataStruct;


	if (GetClosestVertexDataOnMeshCheckValid(getClosestVertexDataStruct)) {

		RVPDP_LOG(getClosestVertexDataStruct.debugSettings, FColor::Green, "Get Closest Vertex Data On Mesh CheckValid Successfull.");
	}

	else {

		RVPDP_LOG(getClosestVertexDataStruct.debugSettings, FColor::Red, "Check Valid Failed at Get Closest Vertex Data On Mesh!");

		GetClosestVertexDataOnMeshTaskFinished(calculateColorsInfoTemp, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());
		return;
	}

	FillCalculateColorsInfoFundementals(calculateColorsInfoTemp);
	AddTaskToQueue(calculateColorsInfoTemp);
}

bool UVertexPaintDetectionComponent::GetClosestVertexDataOnMeshCheckValid(const FVertexDetectInfoStruct& getClosestVertexDataStruct) {

	return DetectTaskCheckValid(getClosestVertexDataStruct, getClosestVertexDataStruct.meshComponent);
}

void UVertexPaintDetectionComponent::GetClosestVertexDataOnMeshTaskFinished(const FCalculateColorsInfo& calculateColorsInfo, const FVertexDetectClosestVertexDataResultStruct& closestVertexColorResult, const FVertexDetectEstimatedColorAtHitLocationResultStruct& estimatedColorAtHitLocationResult, const FVertexDetectAvarageColorInAreaInfo& avarageColor) {


	if (currentGetClosestVertexDataTasks.Contains(calculateColorsInfo.taskID))
		currentGetClosestVertexDataTasks.Remove(calculateColorsInfo.taskID);
	
	if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackDelegate)
		getClosestVertexDataDelegate.Broadcast(calculateColorsInfo.taskResult, calculateColorsInfo.getClosestVertexDataSettings, closestVertexColorResult, estimatedColorAtHitLocationResult, avarageColor, calculateColorsInfo.additionalDataToPassThrough);
}


//-------------------------------------------------------

// Get Vertex Colors Only

void UVertexPaintDetectionComponent::GetAllVertexColorsOnly(FVertexDetectGetColorsOnlyStruct getAllVertexColorsStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (!UVertexPaintFunctionLibrary::IsWorldValid(GetWorld())) return;


	CheckIfRegisteredAndInitialized();

	getAllVertexColorsStruct.taskWorld = GetWorld();
	getAllVertexColorsStruct.debugSettings.worldTaskWasCreatedIn = GetWorld();

	if (IsValid(getAllVertexColorsStruct.meshComponent)) {

		if (IsValid(getAllVertexColorsStruct.meshComponent->GetOwner())) {

			getAllVertexColorsStruct.actor = getAllVertexColorsStruct.meshComponent->GetOwner();

			RVPDP_LOG(getAllVertexColorsStruct.debugSettings, FColor::Cyan, "Trying to Get Colors Only on Actor: %s and Component: %s", *getAllVertexColorsStruct.meshComponent->GetOwner()->GetName(), *getAllVertexColorsStruct.meshComponent->GetName());
		}
	}

	// Clamps these between 0-1 in case the user set a different value
	getAllVertexColorsStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeIfMinColorAmountIs = UKismetMathLibrary::FClamp(getAllVertexColorsStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeIfMinColorAmountIs, 0, 1);


	FCalculateColorsInfo calculateColorsInfoTemp;
	calculateColorsInfoTemp.vertexDetectSettings = getAllVertexColorsStruct;
	calculateColorsInfoTemp.paintDetectionType = EVertexPaintDetectionType::GetAllVertexColorDetection;
	calculateColorsInfoTemp.getAllVertexColorsSettings = getAllVertexColorsStruct;
	calculateColorsInfoTemp.additionalDataToPassThrough = additionalDataToPassThrough;
	calculateColorsInfoTemp.taskResult.associatedPaintComponent = this;
	calculateColorsInfoTemp.fundementalStruct = getAllVertexColorsStruct;


	if (GetAllVertexColorsOnlyCheckValid(getAllVertexColorsStruct)) {

		RVPDP_LOG(getAllVertexColorsStruct.debugSettings, FColor::Green, "Get All Vertex Colors Only CheckValid Successfull.");
	}

	else {

		RVPDP_LOG(getAllVertexColorsStruct.debugSettings, FColor::Red, "Check Valid Failed at Get All Vertex Colors Only!");

		GetAllVertexColorsOnlyTaskFinished(calculateColorsInfoTemp);
		return;
	}

	FillCalculateColorsInfoFundementals(calculateColorsInfoTemp);
	AddTaskToQueue(calculateColorsInfoTemp);
}

bool UVertexPaintDetectionComponent::GetAllVertexColorsOnlyCheckValid(const FVertexDetectGetColorsOnlyStruct& getAllVertexColorsStruct) {

	return DetectTaskCheckValid(getAllVertexColorsStruct, getAllVertexColorsStruct.meshComponent);
}

void UVertexPaintDetectionComponent::GetAllVertexColorsOnlyTaskFinished(const FCalculateColorsInfo& calculateColorsInfo) {


	if (currentGetAllVertexColorsOnlyTasks.Contains(calculateColorsInfo.taskID))
		currentGetAllVertexColorsOnlyTasks.Remove(calculateColorsInfo.taskID);

	if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackDelegate)
		getAllVertexColorsOnlyDelegate.Broadcast(calculateColorsInfo.taskResult, calculateColorsInfo.getAllVertexColorsSettings, calculateColorsInfo.additionalDataToPassThrough);
}


//-------------------------------------------------------

// Get Colors Within Area

void UVertexPaintDetectionComponent::GetColorsWithinArea(FVertexDetectGetColorsWithinAreaStruct getColorsWithinArea, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (!UVertexPaintFunctionLibrary::IsWorldValid(GetWorld())) return;


	CheckIfRegisteredAndInitialized();

	getColorsWithinArea.taskWorld = GetWorld();
	getColorsWithinArea.debugSettings.worldTaskWasCreatedIn = GetWorld();

	if (IsValid(getColorsWithinArea.meshComponent)) {

		if (IsValid(getColorsWithinArea.meshComponent->GetOwner())) {

			getColorsWithinArea.actor = getColorsWithinArea.meshComponent->GetOwner();

			RVPDP_LOG(getColorsWithinArea.debugSettings, FColor::Cyan, "Trying to Get Colors Within Area on Actor: %s and Component: %s", *getColorsWithinArea.meshComponent->GetOwner()->GetName(), *getColorsWithinArea.meshComponent->GetName());
		}
	}

	getColorsWithinArea.withinAreaSettings.componentsToCheckIfIsWithin = GetWithinAreaComponentsToCheckIfIsWithinSettings(getColorsWithinArea.meshComponent, getColorsWithinArea.withinAreaSettings, FVertexDetectPaintWithinAreaFallOffSettings(), false, 0);

	if (getColorsWithinArea.debugSettings.taskSpecificDebugSymbols.drawTaskDebugSymbols)
		DrawWithinAreaDebugSymbols(getColorsWithinArea.withinAreaSettings.componentsToCheckIfIsWithin, FVertexDetectPaintWithinAreaFallOffSettings(), getColorsWithinArea.debugSettings.taskSpecificDebugSymbols.drawTaskDebugSymbolsDuration, false);


	FCalculateColorsInfo calculateColorsInfoTemp;
	calculateColorsInfoTemp.vertexDetectSettings = getColorsWithinArea;
	calculateColorsInfoTemp.paintDetectionType = EVertexPaintDetectionType::GetColorsWithinArea;
	calculateColorsInfoTemp.getColorsWithinAreaSettings = getColorsWithinArea;
	calculateColorsInfoTemp.additionalDataToPassThrough = additionalDataToPassThrough;
	calculateColorsInfoTemp.taskResult.associatedPaintComponent = this;
	calculateColorsInfoTemp.fundementalStruct = getColorsWithinArea;
	calculateColorsInfoTemp.withinAreaSettings = getColorsWithinArea.withinAreaSettings;

	
	if (GetColorsWithinAreaCheckValid(getColorsWithinArea)) {

		RVPDP_LOG(getColorsWithinArea.debugSettings, FColor::Green, "Get Colors Within Area CheckValid Successfull");
	}

	else {

		RVPDP_LOG(getColorsWithinArea.debugSettings, FColor::Red, "Check Valid Failed at Get Colors Within Area!");

		GetColorsWithinAreaTaskFinished(calculateColorsInfoTemp);
		return;
	}

	FillCalculateColorsInfoFundementals(calculateColorsInfoTemp);
	AddTaskToQueue(calculateColorsInfoTemp);
}

bool UVertexPaintDetectionComponent::GetColorsWithinAreaCheckValid(const FVertexDetectGetColorsWithinAreaStruct& getWithinAreaStruct) {

	if (!DetectTaskCheckValid(getWithinAreaStruct, getWithinAreaStruct.meshComponent))
		return false;

	if (!WithinAreaCheckValid(getWithinAreaStruct.withinAreaSettings, getWithinAreaStruct.debugSettings))
		return false;

	return true;
}

void UVertexPaintDetectionComponent::GetColorsWithinAreaTaskFinished(const FCalculateColorsInfo& calculateColorsInfo) {


	if (currentGetColorsWithinAreaTasks.Contains(calculateColorsInfo.taskID))
		currentGetColorsWithinAreaTasks.Remove(calculateColorsInfo.taskID);

	if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackDelegate)
		getColorsWithinAreaDelegate.Broadcast(calculateColorsInfo.taskResult, calculateColorsInfo.getColorsWithinAreaSettings, calculateColorsInfo.withinAreaResults_BeforeApplyingColors, calculateColorsInfo.additionalDataToPassThrough);
}


//-------------------------------------------------------

// Paint On Mesh At Location

void UVertexPaintDetectionComponent::PaintOnMeshAtLocation(FVertexPaintAtLocationStruct paintAtLocationStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (!UVertexPaintFunctionLibrary::IsWorldValid(GetWorld())) return;


	CheckIfRegisteredAndInitialized();

	paintAtLocationStruct.taskWorld = GetWorld();
	paintAtLocationStruct.debugSettings.worldTaskWasCreatedIn = GetWorld();

	if (IsValid(paintAtLocationStruct.meshComponent)) {

		if (IsValid(paintAtLocationStruct.meshComponent->GetOwner())) {

			paintAtLocationStruct.actor = paintAtLocationStruct.meshComponent->GetOwner();

			RVPDP_LOG(paintAtLocationStruct.debugSettings, FColor::Cyan, "Trying to Paint on Mesh at Location on Actor: %s and Component: %s", *paintAtLocationStruct.meshComponent->GetOwner()->GetName(), *paintAtLocationStruct.meshComponent->GetName());
		}

		paintAtLocationStruct.hitFundementals.hitLocationInComponentSpace = UKismetMathLibrary::InverseTransformLocation(paintAtLocationStruct.meshComponent->GetComponentTransform(), paintAtLocationStruct.hitFundementals.hitLocation);
	}


	// Clamps it so if the user sets like 0.000001, we will paint at the lowest amount of 1 when converted to FColor which range from 0-255. Also clamps paint limits and conditions
	paintAtLocationStruct.applyVertexColorSettings = ClampPaintSettings(paintAtLocationStruct.applyVertexColorSettings);

	// Clamps these between 0-1 in case the user set a different value
	paintAtLocationStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeIfMinColorAmountIs = UKismetMathLibrary::FClamp(paintAtLocationStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeIfMinColorAmountIs, 0, 1);

	paintAtLocationStruct.paintAtAreaSettings.VertexNormalToHitNormal_MinimumDotProductToGetPainted_StaticMesh = UKismetMathLibrary::FClamp(paintAtLocationStruct.paintAtAreaSettings.VertexNormalToHitNormal_MinimumDotProductToGetPainted_StaticMesh, -1, 1);

	paintAtLocationStruct.paintAtAreaSettings.fallOffSettings.colorLimitAtFallOffEdge = UKismetMathLibrary::FClamp(paintAtLocationStruct.paintAtAreaSettings.fallOffSettings.colorLimitAtFallOffEdge, 0, 1);


	// Fall Off Range
	if (paintAtLocationStruct.paintAtAreaSettings.fallOffSettings.paintAtLocationFallOffType == EVertexPaintAtLocationFallOffType::InwardFallOff)
		paintAtLocationStruct.paintAtAreaSettings.paintAtLocationFallOffMaxRange = paintAtLocationStruct.paintAtAreaSettings.areaOfEffectRangeStart;

	else if (paintAtLocationStruct.paintAtAreaSettings.fallOffSettings.paintAtLocationFallOffType == EVertexPaintAtLocationFallOffType::OutwardFallOff)
		paintAtLocationStruct.paintAtAreaSettings.paintAtLocationFallOffMaxRange = paintAtLocationStruct.paintAtAreaSettings.areaOfEffectRangeEnd;

	else if (paintAtLocationStruct.paintAtAreaSettings.fallOffSettings.paintAtLocationFallOffType == EVertexPaintAtLocationFallOffType::SphericalFallOff)
		paintAtLocationStruct.paintAtAreaSettings.paintAtLocationFallOffMaxRange = paintAtLocationStruct.paintAtAreaSettings.areaOfEffectRangeStart - paintAtLocationStruct.paintAtAreaSettings.areaOfEffectRangeEnd;


	// How we scale the Fall Off, from base outwardly or opposite
	if (paintAtLocationStruct.paintAtAreaSettings.fallOffSettings.startFallOffDistanceFrom == EVertexPaintStartFallOffDistanceFrom::BaseOfPaintShape)
		paintAtLocationStruct.paintAtAreaSettings.paintAtLocationScaleFallOffFrom = paintAtLocationStruct.paintAtAreaSettings.fallOffSettings.distanceToStartFallOffFrom;

	else if (paintAtLocationStruct.paintAtAreaSettings.fallOffSettings.startFallOffDistanceFrom == EVertexPaintStartFallOffDistanceFrom::EndOfPaintShape)
		paintAtLocationStruct.paintAtAreaSettings.paintAtLocationScaleFallOffFrom = paintAtLocationStruct.paintAtAreaSettings.areaOfEffectRangeEnd - paintAtLocationStruct.paintAtAreaSettings.fallOffSettings.distanceToStartFallOffFrom;


	FVertexDetectInfoStruct detectSettingsTemp;

	// Sets these if gonna detect before painting so can use them in case we need to do any checks in check valid etc. 
	if (paintAtLocationStruct.getClosestVertexDataCombo.runGetClosestVertexDataOnMeshBeforeApplyingPaint || paintAtLocationStruct.getClosestVertexDataCombo.runGetClosestVertexDataOnMeshAfterApplyingPaint) {

		detectSettingsTemp.SetPaintDetectionFundementals(paintAtLocationStruct);

		detectSettingsTemp.getEstimatedColorAtHitLocationSettings = paintAtLocationStruct.getEstimatedColorAtHitLocationSettings;
		detectSettingsTemp.getAverageColorInAreaSettings = paintAtLocationStruct.getClosestVertexDataCombo.getAverageColorInAreaSettings;
		detectSettingsTemp.getEstimatedColorAtHitLocationSettings = paintAtLocationStruct.getEstimatedColorAtHitLocationSettings;

		if (paintAtLocationStruct.getClosestVertexDataCombo.useCustomHitFundementalsForDetection) {

			detectSettingsTemp.hitFundementals.hitLocation = paintAtLocationStruct.getClosestVertexDataCombo.detectHitFundementals.hitLocation;
			detectSettingsTemp.hitFundementals.hitLocationInComponentSpace = UKismetMathLibrary::InverseTransformLocation(paintAtLocationStruct.meshComponent->GetComponentTransform(), paintAtLocationStruct.getClosestVertexDataCombo.detectHitFundementals.hitLocation);
			detectSettingsTemp.hitFundementals.hitNormal = paintAtLocationStruct.getClosestVertexDataCombo.detectHitFundementals.hitNormal;
			detectSettingsTemp.hitFundementals.runTaskFor = paintAtLocationStruct.getClosestVertexDataCombo.detectHitFundementals.runTaskFor;
			detectSettingsTemp.hitFundementals.hitBone = paintAtLocationStruct.getClosestVertexDataCombo.detectHitFundementals.hitBone;
		}

		else {

			detectSettingsTemp.hitFundementals.hitLocation = paintAtLocationStruct.hitFundementals.hitLocation;
			detectSettingsTemp.hitFundementals.hitLocationInComponentSpace = UKismetMathLibrary::InverseTransformLocation(paintAtLocationStruct.meshComponent->GetComponentTransform(), paintAtLocationStruct.hitFundementals.hitLocation);
			detectSettingsTemp.hitFundementals.hitNormal = paintAtLocationStruct.hitFundementals.hitNormal;
			detectSettingsTemp.hitFundementals.runTaskFor = paintAtLocationStruct.hitFundementals.runTaskFor;
			detectSettingsTemp.hitFundementals.hitBone = paintAtLocationStruct.hitFundementals.hitBone;
		}
	}


	FCalculateColorsInfo calculateColorsInfoTemp;
	calculateColorsInfoTemp.vertexDetectSettings = detectSettingsTemp;
	calculateColorsInfoTemp.paintDetectionType = EVertexPaintDetectionType::PaintAtLocation;
	calculateColorsInfoTemp.paintOnMeshAtLocationSettings = paintAtLocationStruct;
	calculateColorsInfoTemp.estimatedColorAtHitLocationSettings = paintAtLocationStruct.getEstimatedColorAtHitLocationSettings;
	calculateColorsInfoTemp.getClosestVertexDataSettings = detectSettingsTemp;
	calculateColorsInfoTemp.taskResult.associatedPaintComponent = this;
	calculateColorsInfoTemp.additionalDataToPassThrough = additionalDataToPassThrough;
	calculateColorsInfoTemp.paintOnMeshColorSettings = paintAtLocationStruct;
	calculateColorsInfoTemp.vertexPaintSettings = paintAtLocationStruct;
	calculateColorsInfoTemp.fundementalStruct = paintAtLocationStruct;


	if (PaintOnMeshAtLocationCheckValid(paintAtLocationStruct)) {

		if (paintAtLocationStruct.applyVertexColorSettings.applyColorsUsingPhysicsSurface.applyVertexColorUsingPhysicsSurface) {

			RVPDP_LOG(paintAtLocationStruct.debugSettings, FColor::Green, "Paint on Mesh at Location CheckValid Successfull. Trying to Apply Color with Physics Surfaces: %s with Paint Strength: %f  -  Fall Back to RGBA Colors if Failed to Apply Colors Using Physics Surface: %i  -  Paint Strength on Surfaces Without the Physical Surface: %f", *GetAllPhysicsSurfacesToApplyAsString(paintAtLocationStruct), paintAtLocationStruct.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintStrengthToApply, paintAtLocationStruct.applyVertexColorSettings.applyColorsUsingPhysicsSurface.fallbackToRGBAColorsIfFailedToApplyColorsUsingPhysicsSurface, paintAtLocationStruct.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintStrengtOnChannelsWithoutThePhysicsSurface);
		}

		else {

			RVPDP_LOG(paintAtLocationStruct.debugSettings, FColor::Green, "Paint on Mesh at Location CheckValid Successfull. Trying to Apply Color: %s  Area of Effect Min: %f Area of Effect Max: %f  Falloff Strength: %f", *FLinearColor(paintAtLocationStruct.applyVertexColorSettings.applyColorsOnRedChannel.amountToApply, paintAtLocationStruct.applyVertexColorSettings.applyColorsOnGreenChannel.amountToApply, paintAtLocationStruct.applyVertexColorSettings.applyColorsOnBlueChannel.amountToApply, paintAtLocationStruct.applyVertexColorSettings.applyColorsOnAlphaChannel.amountToApply).ToString(), paintAtLocationStruct.paintAtAreaSettings.areaOfEffectRangeStart, paintAtLocationStruct.paintAtAreaSettings.areaOfEffectRangeEnd, paintAtLocationStruct.paintAtAreaSettings.fallOffSettings.fallOffStrength);
		}
	}

	else {

		RVPDP_LOG(paintAtLocationStruct.debugSettings, FColor::Red, "Check Valid Failed at Paint on Mesh at Location!");

		// If fail and set to run detections then we expect fail callbacks on the get closest vertex data delegates as well
		if (paintAtLocationStruct.getClosestVertexDataCombo.runGetClosestVertexDataOnMeshBeforeApplyingPaint)
			GetClosestVertexDataOnMeshTaskFinished(calculateColorsInfoTemp, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());


		PaintOnMeshAtLocationTaskFinished(calculateColorsInfoTemp, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());


		if (paintAtLocationStruct.getClosestVertexDataCombo.runGetClosestVertexDataOnMeshAfterApplyingPaint)
			GetClosestVertexDataOnMeshTaskFinished(calculateColorsInfoTemp, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

		return;
	}


	FillCalculateColorsInfoFundementals(calculateColorsInfoTemp);
	AddTaskToQueue(calculateColorsInfoTemp);
}

bool UVertexPaintDetectionComponent::PaintOnMeshAtLocationCheckValid(const FVertexPaintAtLocationStruct& paintAtLocationStruct) {

	if (!PaintColorsTaskCheckValid(paintAtLocationStruct, paintAtLocationStruct.meshComponent))
		return false;

	if (paintAtLocationStruct.paintAtAreaSettings.areaOfEffectRangeStart > paintAtLocationStruct.paintAtAreaSettings.areaOfEffectRangeEnd) {

		RVPDP_LOG(paintAtLocationStruct.debugSettings, FColor::Red, "Check Valid, Paint at Location Fail: Paint Area of Effect is > than areaOfEffectMax");

		return false;
	}


	if (paintAtLocationStruct.paintAtAreaSettings.areaOfEffectRangeStart <= 0 && paintAtLocationStruct.paintAtAreaSettings.areaOfEffectRangeEnd <= 0) {

		RVPDP_LOG(paintAtLocationStruct.debugSettings, FColor::Red, "Check Valid, Paint at Location Fail: Paint Area of Effect is <= 0");

		return false;
	}

	return true;
}

void UVertexPaintDetectionComponent::PaintOnMeshAtLocationTaskFinished(const FCalculateColorsInfo& calculateColorsInfo, const FVertexDetectClosestVertexDataResultStruct& closestVertexColorResult, const FVertexDetectEstimatedColorAtHitLocationResultStruct& estimatedColorAtHitLocationResult, const FVertexDetectAvarageColorInAreaInfo& avarageColor) {


	if (currentPaintAtLocationTasks.Contains(calculateColorsInfo.taskID))
		currentPaintAtLocationTasks.Remove(calculateColorsInfo.taskID);

	if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackDelegate)
		calculateColorsInfo.taskResult.associatedPaintComponent->vertexColorsPaintedAtLocationDelegate.Broadcast(calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.paintOnMeshAtLocationSettings, closestVertexColorResult, estimatedColorAtHitLocationResult, avarageColor, calculateColorsInfo.additionalDataToPassThrough);
}


//-------------------------------------------------------

// Paint Within Area

void UVertexPaintDetectionComponent::PaintOnMeshWithinArea(FVertexPainthWithinAreaStruct paintWithinAreaStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (!UVertexPaintFunctionLibrary::IsWorldValid(GetWorld())) return;


	CheckIfRegisteredAndInitialized();

	paintWithinAreaStruct.taskWorld = GetWorld();
	paintWithinAreaStruct.debugSettings.worldTaskWasCreatedIn = GetWorld();

	if (IsValid(paintWithinAreaStruct.meshComponent)) {

		if (IsValid(paintWithinAreaStruct.meshComponent->GetOwner())) {

			paintWithinAreaStruct.actor = paintWithinAreaStruct.meshComponent->GetOwner();

			RVPDP_LOG(paintWithinAreaStruct.debugSettings, FColor::Cyan, "Trying to Paint On Mesh Within Area on Actor: %s and Component: %s", *paintWithinAreaStruct.meshComponent->GetOwner()->GetName(), *paintWithinAreaStruct.meshComponent->GetName());
		}
	}



	// Clamps it so if the user sets like 0.000001, we will paint at the lowest amount of 1 when converted to FColor which range from 0-255. Also clamps paint limits and conditions
	paintWithinAreaStruct.applyVertexColorSettings = ClampPaintSettings(paintWithinAreaStruct.applyVertexColorSettings);

	// Clamps these between 0-1 in case the user set a different value
	paintWithinAreaStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeIfMinColorAmountIs = UKismetMathLibrary::FClamp(paintWithinAreaStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeIfMinColorAmountIs, 0, 1);

	paintWithinAreaStruct.fallOffSettings.colorLimitAtFallOffEdge = UKismetMathLibrary::FClamp(paintWithinAreaStruct.fallOffSettings.colorLimitAtFallOffEdge, 0, 1);

	paintWithinAreaStruct.withinAreaSettings.componentsToCheckIfIsWithin = GetWithinAreaComponentsToCheckIfIsWithinSettings(paintWithinAreaStruct.meshComponent, paintWithinAreaStruct.withinAreaSettings, paintWithinAreaStruct.fallOffSettings, true, paintWithinAreaStruct.extraExtentToApplyPaintOn);

	if (paintWithinAreaStruct.debugSettings.taskSpecificDebugSymbols.drawTaskDebugSymbols)
		DrawWithinAreaDebugSymbols(paintWithinAreaStruct.withinAreaSettings.componentsToCheckIfIsWithin, paintWithinAreaStruct.fallOffSettings, paintWithinAreaStruct.debugSettings.taskSpecificDebugSymbols.drawTaskDebugSymbolsDuration, true);


	FVertexDetectGetColorsWithinAreaStruct getColorsWithinAreaSettings;

	if (paintWithinAreaStruct.getColorsWithinAreaCombo) {

		getColorsWithinAreaSettings.SetPaintDetectionFundementals(paintWithinAreaStruct);
		getColorsWithinAreaSettings.withinAreaSettings = paintWithinAreaStruct.withinAreaSettings;
	}

	FCalculateColorsInfo calculateColorsInfoTemp;
	calculateColorsInfoTemp.vertexDetectSettings = getColorsWithinAreaSettings;
	calculateColorsInfoTemp.paintDetectionType = EVertexPaintDetectionType::PaintWithinArea;
	calculateColorsInfoTemp.additionalDataToPassThrough = additionalDataToPassThrough;
	calculateColorsInfoTemp.taskResult.associatedPaintComponent = this;
	calculateColorsInfoTemp.paintOnMeshColorSettings = paintWithinAreaStruct;
	calculateColorsInfoTemp.vertexPaintSettings = paintWithinAreaStruct;
	calculateColorsInfoTemp.fundementalStruct = paintWithinAreaStruct;
	calculateColorsInfoTemp.withinAreaSettings = paintWithinAreaStruct.withinAreaSettings;
	calculateColorsInfoTemp.getColorsWithinAreaSettings = getColorsWithinAreaSettings;
	calculateColorsInfoTemp.paintOnMeshWithinAreaSettings = paintWithinAreaStruct;

	if (PaintOnMeshWithinAreaCheckValid(paintWithinAreaStruct)) {

		if (paintWithinAreaStruct.applyVertexColorSettings.applyColorsUsingPhysicsSurface.applyVertexColorUsingPhysicsSurface) {

			RVPDP_LOG(paintWithinAreaStruct.debugSettings, FColor::Green, "Paint on Mesh Within Area CheckValid Successfull. Trying to Apply Color with EPhysicalSurface: %s  with Paint Strength: %f  -  Fall Back to RGBA Colors if Failed to Apply Colors Using Physics Surface: %i  -  Paint Strength on Surfaces Without the Physical Surface: %f", *GetAllPhysicsSurfacesToApplyAsString(paintWithinAreaStruct), paintWithinAreaStruct.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintStrengthToApply, paintWithinAreaStruct.applyVertexColorSettings.applyColorsUsingPhysicsSurface.fallbackToRGBAColorsIfFailedToApplyColorsUsingPhysicsSurface, paintWithinAreaStruct.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintStrengtOnChannelsWithoutThePhysicsSurface);
		}

		else {

			RVPDP_LOG(paintWithinAreaStruct.debugSettings, FColor::Green, "Paint on Mesh Within Area CheckValid Successfull. Trying to Apply Color: %s", *FLinearColor(paintWithinAreaStruct.applyVertexColorSettings.applyColorsOnRedChannel.amountToApply, paintWithinAreaStruct.applyVertexColorSettings.applyColorsOnGreenChannel.amountToApply, paintWithinAreaStruct.applyVertexColorSettings.applyColorsOnBlueChannel.amountToApply, paintWithinAreaStruct.applyVertexColorSettings.applyColorsOnAlphaChannel.amountToApply).ToString());
		}
	}

	else {

		RVPDP_LOG(paintWithinAreaStruct.debugSettings, FColor::Red, "Check Valid Failed at Paint on Mesh Within Area!");

		PaintOnMeshWithinAreaTaskFinished(calculateColorsInfoTemp);
		return;
	}


	FillCalculateColorsInfoFundementals(calculateColorsInfoTemp);
	AddTaskToQueue(calculateColorsInfoTemp);
}

bool UVertexPaintDetectionComponent::PaintOnMeshWithinAreaCheckValid(const FVertexPainthWithinAreaStruct& paintWithinAreaStruct) {

	if (!PaintColorsTaskCheckValid(paintWithinAreaStruct, paintWithinAreaStruct.meshComponent))
		return false;

	if (!WithinAreaCheckValid(paintWithinAreaStruct.withinAreaSettings, paintWithinAreaStruct.debugSettings))
		return false;

	return true;
}

bool UVertexPaintDetectionComponent::WithinAreaCheckValid(const FVertexPaintDetectWithinAreaSettings& withinAreaSettings, const FVertexPaintDebugSettings& debugSettings) {


	if (withinAreaSettings.componentsToCheckIfIsWithin.Num() <= 0) {

		RVPDP_LOG(debugSettings, FColor::Red, "Within Area Check Valid Fail! It has no componentsToCheckIfIsWithin!");

		return false;
	}

	for (auto compToCheckWithinTemp : withinAreaSettings.componentsToCheckIfIsWithin) {

		if (IsValid(compToCheckWithinTemp.componentToCheckIfIsWithin)) {

			// Some component types require a specific shape to be set
			if (Cast<ALandscape>(compToCheckWithinTemp.componentToCheckIfIsWithin->GetOwner())) {

				if (compToCheckWithinTemp.paintWithinAreaShape != Enum_PaintWithinAreaShape::isComplexShape) {

					RVPDP_LOG(debugSettings, FColor::Red, "Within Area Check Valid Failed since one of the componentToCheckIfWithin is a Landscape, but the WithinArea Shape is not set to be Complex Shape which is required to check if you're within Landscapes!");

					return false;
				}
			}

			else if (Cast<USphereComponent>(compToCheckWithinTemp.componentToCheckIfIsWithin)) {

				if (compToCheckWithinTemp.paintWithinAreaShape != Enum_PaintWithinAreaShape::isSphereShape) {

					RVPDP_LOG(debugSettings, FColor::Red, "Within Area Check Valid Failed since one of the componentToCheckIfWithin is a Sphere Component, but the WithinArea Shape is not set to be sphereShape!");

					return false;
				}
			}

			else if (Cast<UBoxComponent>(compToCheckWithinTemp.componentToCheckIfIsWithin)) {

				if (compToCheckWithinTemp.paintWithinAreaShape != Enum_PaintWithinAreaShape::isSquareOrRectangleShape) {

					RVPDP_LOG(debugSettings, FColor::Red, "Within Area Check Valid Failed since one of the componentToCheckIfWithin is a Box Component, but the WithinArea Shape is not set to be Square or Rectangle Shape!");

					return false;
				}
			}

			else if (Cast<USkeletalMeshComponent>(compToCheckWithinTemp.componentToCheckIfIsWithin)) {

				if (compToCheckWithinTemp.paintWithinAreaShape != Enum_PaintWithinAreaShape::isComplexShape) {

					RVPDP_LOG(debugSettings, FColor::Red, "Within Area Check Valid Failed since one of the componentToCheckIfWithin is a Skeletal Mesh Component, but the WithinArea Shape is not set to be Complex!");

					return false;
				}
			}

			else if (Cast<USplineMeshComponent>(compToCheckWithinTemp.componentToCheckIfIsWithin)) {

				if (compToCheckWithinTemp.paintWithinAreaShape != Enum_PaintWithinAreaShape::isComplexShape) {

					RVPDP_LOG(debugSettings, FColor::Red, "Within Area Check Valid Failed since one of the componentToCheckIfWithin is a Spline Mesh Component, but the WithinArea Shape is not set to be Complex!");

					return false;
				}
			}

#if ENGINE_MAJOR_VERSION == 5

			else if (Cast<UDynamicMeshComponent>(compToCheckWithinTemp.componentToCheckIfIsWithin)) {

				RVPDP_LOG(debugSettings, FColor::Red, "Within Area Check Valid Failed since one of the componentToCheckIfWithin is a Dynamic Mesh Component, but we don't support those types of components for use with Within Area");

				return false;
			}

			else if (Cast<UGeometryCollectionComponent>(compToCheckWithinTemp.componentToCheckIfIsWithin)) {

				RVPDP_LOG(debugSettings, FColor::Red, "Within Area Check Valid Failed since one of the componentToCheckIfWithin is a Geometry Collection Component, but we don't support those types of components for use with Within Area");

				return false;
			}
#endif

		}

		else {

			RVPDP_LOG(debugSettings, FColor::Red, "Within Area Check Valid Fail! One of the componentsToCheckIfIsWithin is Not Valid!");

			return false;
		}
	}

	return true;
}

void UVertexPaintDetectionComponent::PaintOnMeshWithinAreaTaskFinished(const FCalculateColorsInfo& calculateColorsInfo) {

	if (calculateColorsInfo.taskResult.associatedPaintComponent != this) return;


	if (currentPaintWithinAreaTasks.Contains(calculateColorsInfo.taskID))
		currentPaintWithinAreaTasks.Remove(calculateColorsInfo.taskID);

	if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackDelegate)
		vertexColorsPaintedMeshWithinAreaDelegate.Broadcast(calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.paintOnMeshWithinAreaSettings, calculateColorsInfo.withinAreaResults, calculateColorsInfo.additionalDataToPassThrough);
}

TArray<FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo> UVertexPaintDetectionComponent::GetWithinAreaComponentsToCheckIfIsWithinSettings(UPrimitiveComponent* meshComponent, FVertexPaintDetectWithinAreaSettings withinAreaSettings, FVertexDetectPaintWithinAreaFallOffSettings fallOffSettings, bool forPaintWithinArea, float extraExtent) {

	TArray<FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo> componentsToCheckIfWithin;

	if (!IsValid(meshComponent)) return componentsToCheckIfWithin;
	if (withinAreaSettings.componentsToCheckIfIsWithin.Num() <= 0) return componentsToCheckIfWithin;


	FTransform origoTransform = FTransform();
	origoTransform.SetIdentity(); 


	// Within Area - We can cache all the things we need such as transform, forward vector etc. so we know where the component was and it's necessary values When the task was created, so in case there is a high task queue and it won't be run until a few seconds later, it will still be calculated from the same place as created. 


	for (auto compsToCheckIfWithinTemp : withinAreaSettings.componentsToCheckIfIsWithin) {

		if (!IsValid(compsToCheckIfWithinTemp.componentToCheckIfIsWithin)) continue;


		compsToCheckIfWithinTemp.componentForwardVector = compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetForwardVector();
		compsToCheckIfWithinTemp.componentRightVector = compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetRightVector();
		compsToCheckIfWithinTemp.componentUpVector = compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetUpVector();

		compsToCheckIfWithinTemp.componentBounds = compsToCheckIfWithinTemp.componentToCheckIfIsWithin->Bounds;
		compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetOwner()->GetActorBounds(false, compsToCheckIfWithinTemp.actorBounds_Origin, compsToCheckIfWithinTemp.actorBounds_Extent, true);

		// Caches World Transform as well and adjusts it down below so we can save Location, Rotation, Scale in mesh compoent to paint component space. Then when we actually do the Task, we transform those back into World Space, and then re-sets this to be them. So even if the task starts much later then when it was created, and things may have moved since then, we can check things relative to how it was when task was created. 
		compsToCheckIfWithinTemp.componentWorldTransform = compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetComponentTransform();


		if (UBoxComponent* boxComp = Cast<UBoxComponent>(compsToCheckIfWithinTemp.componentToCheckIfIsWithin)) {

			compsToCheckIfWithinTemp.isBoxComponent = true;

			compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareXHalfSize = boxComp->GetScaledBoxExtent().X;
			compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareYHalfSize = boxComp->GetScaledBoxExtent().Y;
			compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareZHalfSize = boxComp->GetScaledBoxExtent().Z;


			if (forPaintWithinArea) {

				compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareXHalfSize += extraExtent;
				compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareYHalfSize += extraExtent;
				compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareZHalfSize += extraExtent;
			}
		}

		else if (USphereComponent* sphereComp = Cast<USphereComponent>(compsToCheckIfWithinTemp.componentToCheckIfIsWithin)) {

			compsToCheckIfWithinTemp.isSphereComponent = true;
			compsToCheckIfWithinTemp.isVertexWithinArea_Sphere_Radius = sphereComp->GetScaledSphereRadius();


			if (forPaintWithinArea)
				compsToCheckIfWithinTemp.isVertexWithinArea_Sphere_Radius += extraExtent;
		}

		else if (UStaticMeshComponent* staticMeshComp = Cast<UStaticMeshComponent>(compsToCheckIfWithinTemp.componentToCheckIfIsWithin)) {

			// Since we can get Get Location on Spline Mesh Components we have to use their Box Get Center so we could still use cached World_Transform for somethings
			if (Cast<USplineMeshComponent>(compsToCheckIfWithinTemp.componentToCheckIfIsWithin)) {


				compsToCheckIfWithinTemp.isSplineMeshComponent = true;
				compsToCheckIfWithinTemp.componentWorldTransform.SetLocation(compsToCheckIfWithinTemp.componentBounds.GetBox().GetCenter());


				// Gets the AggGeom Bounds so we can get the thickness with any added box collisions the mesh may have. 
				FBoxSphereBounds boundsTemp;
				compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.CalcBoxSphereBounds(boundsTemp, compsToCheckIfWithinTemp.componentWorldTransform);

				// Updated the extent thickness so we have the proper one with any added collisions
				compsToCheckIfWithinTemp.componentBounds.BoxExtent.Z = boundsTemp.BoxExtent.Z;

				// Spline Mesh should be complex shape and doesn't support Extra Extent, so don't bother doing anything with it here. Leaves this here though as a reminder in case we can figure out a is vertex within area thing on spline meshes using just math without any traces, i.e. it doesn't have to require complex shape 
				// if (calculateColorsInfo.paintOnMeshWithinAreaSettings.actor)
					// compsToCheckIfWithinTemp.componentBounds.BoxExtent.Z += calculateColorsInfo.paintOnMeshWithinAreaSettings.extraExtentToApplyPaintOn;

				FVector adjustedLocationWithMeshBoxOffsetTakenIntoAccount = compsToCheckIfWithinTemp.componentToCheckIfIsWithin->Bounds.GetBox().GetCenter();

				// To get the extent from the correct center location we take added collisions into account as well so the bounds match
				if (staticMeshComp->GetStaticMesh()->GetBodySetup()) {

					if (staticMeshComp->GetStaticMesh()->GetBodySetup()->AggGeom.GetElementCount() > 0) {

						float differenceFromMeshLocationAndBoxCollisionZ = 0;


						for (int i = 0; i < staticMeshComp->GetStaticMesh()->GetBodySetup()->AggGeom.BoxElems.Num(); i++)
							differenceFromMeshLocationAndBoxCollisionZ += staticMeshComp->GetStaticMesh()->GetBodySetup()->AggGeom.BoxElems[i].Center.Z;

						for (int i = 0; i < compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.ConvexElems.Num(); i++)
							differenceFromMeshLocationAndBoxCollisionZ += compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.ConvexElems[i].GetTransform().GetLocation().Z;

						for (int i = 0; i < compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.SphereElems.Num(); i++)
							differenceFromMeshLocationAndBoxCollisionZ += compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.SphereElems[i].Center.Z;

						for (int i = 0; i < compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.SphylElems.Num(); i++)
							differenceFromMeshLocationAndBoxCollisionZ += compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.SphylElems[i].Center.Z;

						for (int i = 0; i < compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.TaperedCapsuleElems.Num(); i++)
							differenceFromMeshLocationAndBoxCollisionZ += compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.TaperedCapsuleElems[i].Center.Z;


						differenceFromMeshLocationAndBoxCollisionZ /= staticMeshComp->GetStaticMesh()->GetBodySetup()->AggGeom.GetElementCount();
						adjustedLocationWithMeshBoxOffsetTakenIntoAccount.Z += differenceFromMeshLocationAndBoxCollisionZ;

						// Sets World Transform Location to be the adjusted location so it's at the Real Center
						compsToCheckIfWithinTemp.componentWorldTransform.SetLocation(adjustedLocationWithMeshBoxOffsetTakenIntoAccount);
					}
				}
			}

			else {

				compsToCheckIfWithinTemp.isStaticMeshComponent = true;

				// Calc Box Sphere Bounds Without taking the Rotation into account, this is because if for instance a rectangle is rotated, then that affects the bounds and the result we would get here would be the correct extents of the mesh and it's collision, and it is the Extent that is what we're after
				FTransform transformWithoutRotation_Local;
				transformWithoutRotation_Local.SetLocation(compsToCheckIfWithinTemp.componentWorldTransform.GetLocation());
				transformWithoutRotation_Local.SetScale3D(FVector(1, 1, 1));

				// Always runs this so we have proper Bounds no matter what paint within area type, so even if complex shape on static mesh component etc. 
				compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.CalcBoxSphereBounds(compsToCheckIfWithinTemp.cleanAggGeomBounds, transformWithoutRotation_Local);

				// Also gets the Bounds but with Actual Rotation and Scale taken into account
				transformWithoutRotation_Local.SetScale3D(compsToCheckIfWithinTemp.componentWorldTransform.GetScale3D());
				transformWithoutRotation_Local.SetRotation(compsToCheckIfWithinTemp.componentWorldTransform.GetRotation());
				compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.CalcBoxSphereBounds(compsToCheckIfWithinTemp.componentBounds, transformWithoutRotation_Local);


				// If a Cube / Rectangle then checks if it has box collisions in it's static mesh, if so then we have to adjust the world transform so that it's location is in the center between the actor and the collision. For instance if you have a floor, with added box collision underneath it that stretches 1M, without this we would get the bounds offset since the location of the actor is at the floor height. But with this we can get the actual center location of the Bounds since it takes into account the box collision
				if (compsToCheckIfWithinTemp.paintWithinAreaShape == Enum_PaintWithinAreaShape::isSquareOrRectangleShape) {

					// To get the extent from the correct center location that takes added box collision into account we had to do this. 
					if (compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()) {


						FVector adjustedLocationWithMeshBoxOffsetTakenIntoAccount = compsToCheckIfWithinTemp.componentToCheckIfIsWithin->Bounds.GetBox().GetCenter();
						float differenceFromMeshLocationAndBoxCollisionZ = 0;


						if (compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.BoxElems.Num() > 0) {

							// Sets them to a very high values so we will always set the min and max values down below. If they where 0 we would've had an issue where if for instance there where two boxes at -50 and -100, then none would be higher then maxValue 0 and -50 wouldn't get set to be the maxValue as it should. 
							float maxZValue_Local = -10000000;
							float minZValue_Local = 10000000;

							for (int i = 0; i < compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.BoxElems.Num(); i++) {

								// Gets the current min and max values based on their position and their extent
								float currentBoxMaxZ = compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.BoxElems[i].Center.Z + (compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.BoxElems[i].Z / 2);

								float currentBoxMinZ = compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.BoxElems[i].Center.Z - (compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.BoxElems[i].Z / 2);


								// Caches the the Highest and Lowest Z, so we can get the correct center point of them for the bounds
								if (currentBoxMaxZ > maxZValue_Local)
									maxZValue_Local = currentBoxMaxZ;

								if (currentBoxMinZ < minZValue_Local)
									minZValue_Local = currentBoxMinZ;
							}

							// The Middle point between the max and min values
							differenceFromMeshLocationAndBoxCollisionZ = (maxZValue_Local + minZValue_Local) / 2;
						}

						adjustedLocationWithMeshBoxOffsetTakenIntoAccount.Z += differenceFromMeshLocationAndBoxCollisionZ;


						// Sets World Transform Location to be the adjusted location so it's at the Real Center
						compsToCheckIfWithinTemp.componentWorldTransform.SetLocation(adjustedLocationWithMeshBoxOffsetTakenIntoAccount);

						// If there's more than 1 Box, and they're not centered on top of eachother then it seizes to be a Square or Rectangle, so throws a Error warning about that if there's more than 1. Should be a pretty rare case though. 
						/*
						if (compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.BoxElems.Num() > 1) {

							RVPDP_LOG(colorSettings.debugSettings, FColor::Orange, "Paint Within Area with Square or Rectangle for Static Mesh Component. NOTE That the Static Mesh has more than 1 Box Collision under it. If they're not centered then then it's not a Square or Rectangle anymore and the Result may not be the expected one. ");
						}
						*/
					}

					compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareXHalfSize = compsToCheckIfWithinTemp.cleanAggGeomBounds.GetBox().GetExtent().X * compsToCheckIfWithinTemp.componentWorldTransform.GetScale3D().X;

					compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareYHalfSize = compsToCheckIfWithinTemp.cleanAggGeomBounds.GetBox().GetExtent().Y * compsToCheckIfWithinTemp.componentWorldTransform.GetScale3D().Y;

					compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareZHalfSize = compsToCheckIfWithinTemp.cleanAggGeomBounds.GetBox().GetExtent().Z * compsToCheckIfWithinTemp.componentWorldTransform.GetScale3D().Z;


					if (forPaintWithinArea) {

						compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareXHalfSize += extraExtent;
						compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareYHalfSize += extraExtent;
						compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareZHalfSize += extraExtent;
					}
				}

				// Uses AggGeom Bounds so we get the correct bounds even if the mesh is 1, 1, 1 in scale but much larger than 50cm radius
				else if (compsToCheckIfWithinTemp.paintWithinAreaShape == Enum_PaintWithinAreaShape::isSphereShape) {

					compsToCheckIfWithinTemp.isVertexWithinArea_Sphere_Radius = (compsToCheckIfWithinTemp.cleanAggGeomBounds.SphereRadius * compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetComponentTransform().GetScale3D().X);

					if (forPaintWithinArea)
						compsToCheckIfWithinTemp.isVertexWithinArea_Sphere_Radius += extraExtent;
				}
			}
		}

		else if (USkeletalMeshComponent* skeletalMeshComp = Cast<USkeletalMeshComponent>(compsToCheckIfWithinTemp.componentToCheckIfIsWithin)) {


			USkeletalMesh* paintWithinAreaSkelMeshTemp = nullptr;

#if ENGINE_MAJOR_VERSION == 4

			paintWithinAreaSkelMeshTemp = skeletalMeshComp->SkeletalMesh;

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

			paintWithinAreaSkelMeshTemp = skeletalMeshComp->SkeletalMesh.Get();

#else

			paintWithinAreaSkelMeshTemp = skeletalMeshComp->GetSkeletalMeshAsset();

#endif

#endif

			// The Engines own CalcAABB has a requirement that the scale has to be uniform for some reason, so it doesn't work if for instance the characters scale is 1, 1, 0.5. So we only run it if uniform, otherwise we fall back to a custom one where i've copied over the exact same logic but commented out the uniform check, which works as intended despite the scale not being uniform..
			if (skeletalMeshComp->GetComponentTransform().GetScale3D().IsUniform()) {

				compsToCheckIfWithinTemp.componentBounds = paintWithinAreaSkelMeshTemp->GetPhysicsAsset()->CalcAABB(skeletalMeshComp, skeletalMeshComp->GetComponentTransform());
			}
			else {

				compsToCheckIfWithinTemp.componentBounds = UVertexPaintFunctionLibrary::CalcAABBWithoutUniformCheck(skeletalMeshComp, skeletalMeshComp->GetComponentTransform());
			}

			// Note Skeletal Mesh should be complex shape and doesn't support Extra Extent, so don't bother doing anything with it here. 

			FVector locationTemp = compsToCheckIfWithinTemp.componentWorldTransform.GetLocation();
			locationTemp.Z += compsToCheckIfWithinTemp.componentBounds.GetBox().GetCenter().Z - compsToCheckIfWithinTemp.componentWorldTransform.GetLocation().Z;
			compsToCheckIfWithinTemp.componentWorldTransform.SetLocation(locationTemp);

			compsToCheckIfWithinTemp.isSkeletalMeshComponent = true;
		}

		else if (Cast<ALandscape>(compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetOwner())) {

			compsToCheckIfWithinTemp.isLandscape = true;

			// Landscape require complex shape which doesn't support extra extent so doesn't bother setting anything of it here
		}

		else {

			continue;
		}


		// Stores the Relative Location, Rotation and Scale so we can transform it back when the task actually starts, so we can do calculations based on where the component to check if within actually was when task got created. 
		const FVector compsToCheckIfWithinRelativeLocation_Local = UKismetMathLibrary::InverseTransformLocation(origoTransform, compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetComponentLocation());
		compsToCheckIfWithinTemp.componentRelativeLocationToMeshBeingPainted = compsToCheckIfWithinRelativeLocation_Local;


		const FRotator compsToCheckIfWithinRelativeRotation_Local = UKismetMathLibrary::InverseTransformRotation(origoTransform, compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetComponentRotation());
		compsToCheckIfWithinTemp.componentRelativeRotationToMeshBeingPainted = compsToCheckIfWithinRelativeRotation_Local;


		const FVector compsToCheckIfWithinRelativeScale_Local = UKismetMathLibrary::InverseTransformLocation(origoTransform, compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetComponentScale());
		compsToCheckIfWithinTemp.componentRelativeScaleToMeshBeingPainted = compsToCheckIfWithinRelativeScale_Local;


		// Paint Within Area FallOff Specific
		if (forPaintWithinArea) {

			switch (compsToCheckIfWithinTemp.paintWithinAreaShape) {

			case Enum_PaintWithinAreaShape::isSquareOrRectangleShape:

				if (fallOffSettings.startFallOffDistanceFrom == EVertexPaintStartFallOffDistanceFrom::BaseOfPaintShape) {

					compsToCheckIfWithinTemp.paintWithinAreaScaleFallOffFrom = fallOffSettings.distanceToStartFallOffFrom;
				}

				// Substracts distance from the very Edge of the area, to where the user wants to base the fall off from. So you can have it start to fade always for instance 20cm from the edge.  
				else if (fallOffSettings.startFallOffDistanceFrom == EVertexPaintStartFallOffDistanceFrom::EndOfPaintShape) {

					compsToCheckIfWithinTemp.paintWithinAreaScaleFallOffFrom = compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareZHalfSize * 2;
					compsToCheckIfWithinTemp.paintWithinAreaScaleFallOffFrom -= fallOffSettings.distanceToStartFallOffFrom;
				}


				// AoE is used for falloff calculation when paint within area
				if (fallOffSettings.paintWithinAreaFallOffType == EVertexPaintWithinAreaFallOffType::SphericalFromCenter) {

					compsToCheckIfWithinTemp.withinAreaOfEffect = FVector(
						compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareXHalfSize,
						compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareYHalfSize,
						compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareZHalfSize).Size();
				}

				// For Gradiants that go across the entire area (unlike falloff type spherical that go from center outwards) we *2 so it covers it all. 
				else if (fallOffSettings.paintWithinAreaFallOffType == EVertexPaintWithinAreaFallOffType::GradiantUpward || fallOffSettings.paintWithinAreaFallOffType == EVertexPaintWithinAreaFallOffType::GradiantDownward) {

					compsToCheckIfWithinTemp.withinAreaOfEffect = compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareZHalfSize * 2;
				}


				break;

			case Enum_PaintWithinAreaShape::isSphereShape:

				if (fallOffSettings.startFallOffDistanceFrom == EVertexPaintStartFallOffDistanceFrom::BaseOfPaintShape) {

					compsToCheckIfWithinTemp.paintWithinAreaScaleFallOffFrom = fallOffSettings.distanceToStartFallOffFrom;
				}

				else if (fallOffSettings.startFallOffDistanceFrom == EVertexPaintStartFallOffDistanceFrom::EndOfPaintShape) {

					compsToCheckIfWithinTemp.paintWithinAreaScaleFallOffFrom = compsToCheckIfWithinTemp.isVertexWithinArea_Sphere_Radius * 2;
					compsToCheckIfWithinTemp.paintWithinAreaScaleFallOffFrom -= fallOffSettings.distanceToStartFallOffFrom;
				}


				if (fallOffSettings.paintWithinAreaFallOffType == EVertexPaintWithinAreaFallOffType::SphericalFromCenter) {

					compsToCheckIfWithinTemp.withinAreaOfEffect = compsToCheckIfWithinTemp.isVertexWithinArea_Sphere_Radius;
				}

				// *2 so it covers from bottom all the way to the top, not just the radie
				else if (fallOffSettings.paintWithinAreaFallOffType == EVertexPaintWithinAreaFallOffType::GradiantUpward || fallOffSettings.paintWithinAreaFallOffType == EVertexPaintWithinAreaFallOffType::GradiantDownward) {

					compsToCheckIfWithinTemp.withinAreaOfEffect = compsToCheckIfWithinTemp.isVertexWithinArea_Sphere_Radius * 2;
				}


				break;

			case Enum_PaintWithinAreaShape::isComplexShape:

				if (fallOffSettings.startFallOffDistanceFrom == EVertexPaintStartFallOffDistanceFrom::BaseOfPaintShape) {

					compsToCheckIfWithinTemp.paintWithinAreaScaleFallOffFrom = fallOffSettings.distanceToStartFallOffFrom;
				}

				else if (fallOffSettings.startFallOffDistanceFrom == EVertexPaintStartFallOffDistanceFrom::EndOfPaintShape) {

					compsToCheckIfWithinTemp.paintWithinAreaScaleFallOffFrom = compsToCheckIfWithinTemp.actorBounds_Extent.Size();
					compsToCheckIfWithinTemp.paintWithinAreaScaleFallOffFrom -= fallOffSettings.distanceToStartFallOffFrom;
				}


				if (compsToCheckIfWithinTemp.isSkeletalMeshComponent) {

					if (fallOffSettings.paintWithinAreaFallOffType == EVertexPaintWithinAreaFallOffType::SphericalFromCenter) {

						compsToCheckIfWithinTemp.withinAreaOfEffect = (compsToCheckIfWithinTemp.componentBounds.GetBox().GetExtent() * compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetComponentScale()).Size();
					}

					else if (fallOffSettings.paintWithinAreaFallOffType == EVertexPaintWithinAreaFallOffType::GradiantUpward || fallOffSettings.paintWithinAreaFallOffType == EVertexPaintWithinAreaFallOffType::GradiantDownward) {

						compsToCheckIfWithinTemp.withinAreaOfEffect = (compsToCheckIfWithinTemp.componentBounds.GetBox().GetExtent().Z * 2) * compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetComponentScale().Z;
					}
				}

				else if (compsToCheckIfWithinTemp.isStaticMeshComponent) {

					// Uses cleanAggGeomBounds when static mesh and complex since the shape can be Any shape
					if (fallOffSettings.paintWithinAreaFallOffType == EVertexPaintWithinAreaFallOffType::SphericalFromCenter) {

						compsToCheckIfWithinTemp.withinAreaOfEffect = (compsToCheckIfWithinTemp.cleanAggGeomBounds.GetBox().GetExtent() * compsToCheckIfWithinTemp.componentWorldTransform.GetScale3D()).Size();
					}

					else if (fallOffSettings.paintWithinAreaFallOffType == EVertexPaintWithinAreaFallOffType::GradiantUpward || fallOffSettings.paintWithinAreaFallOffType == EVertexPaintWithinAreaFallOffType::GradiantDownward) {

						compsToCheckIfWithinTemp.withinAreaOfEffect = (compsToCheckIfWithinTemp.cleanAggGeomBounds.GetBox().GetExtent().Z * 2) * compsToCheckIfWithinTemp.componentWorldTransform.GetScale3D().Z;
					}
				}

				else if (compsToCheckIfWithinTemp.isSplineMeshComponent) {

					// Can't calculate AoE based off the componentToCheckIfIsWithin_Bounds since they only cover each indvidual part. actorBounds_Extent covers all of them 
					if (fallOffSettings.paintWithinAreaFallOffType == EVertexPaintWithinAreaFallOffType::SphericalFromCenter) {

						compsToCheckIfWithinTemp.withinAreaOfEffect = compsToCheckIfWithinTemp.actorBounds_Extent.Size();
					}

					else if (fallOffSettings.paintWithinAreaFallOffType == EVertexPaintWithinAreaFallOffType::GradiantUpward || fallOffSettings.paintWithinAreaFallOffType == EVertexPaintWithinAreaFallOffType::GradiantDownward) {

						compsToCheckIfWithinTemp.withinAreaOfEffect = compsToCheckIfWithinTemp.actorBounds_Extent.Z * 2;
					}
				}

				break;

			default:
				break;
			}

			// Want the fall off scale be from the pure range not whatever is added to extra extent, otherwise the user has to remember to counter that extra extent with distanceToStartFallOffFrom for it to make a difference
			compsToCheckIfWithinTemp.paintWithinAreaScaleFallOffFrom -= extraExtent;
		}


		componentsToCheckIfWithin.Add(compsToCheckIfWithinTemp);
	}


	return componentsToCheckIfWithin;
}

void UVertexPaintDetectionComponent::DrawWithinAreaDebugSymbols(TArray<FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo> componentsToCheckIfIsWithin, FVertexDetectPaintWithinAreaFallOffSettings fallOffSettings, float duration, bool forPaintWithinArea) {

	if (componentsToCheckIfIsWithin.Num() <= 0) return;


	for (auto compsToCheckIfWithinTemp : componentsToCheckIfIsWithin) {

		if (UBoxComponent* boxComp = Cast<UBoxComponent>(compsToCheckIfWithinTemp.componentToCheckIfIsWithin)) {

			FVector debugExtent = FVector(ForceInitToZero);
			debugExtent.X = compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareXHalfSize;
			debugExtent.Y = compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareYHalfSize;
			debugExtent.Z = compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareZHalfSize;


			// Scales the thickness depending on the size, since it was very difficult to see the debug box if the size was big and it was too thin. Min of 5 though so if the size is very small it's still easy to see up close. 
			float maxDebugThickness = debugExtent.Size() / 1000;
			float debugThickness = UKismetMathLibrary::MapRangeClamped(debugExtent.Size(), 0, debugExtent.Size(), 5, maxDebugThickness);
			debugThickness = UKismetMathLibrary::FClamp(debugThickness, 5, maxDebugThickness);

			DrawDebugBox(GetWorld(), compsToCheckIfWithinTemp.componentBounds.GetBox().GetCenter(), debugExtent, boxComp->GetComponentRotation().Quaternion(), FColor::Red, false, duration, 0, debugThickness);
		}

		else if (USphereComponent* sphereComp = Cast<USphereComponent>(compsToCheckIfWithinTemp.componentToCheckIfIsWithin)) {

			float sphereShapeRadius = compsToCheckIfWithinTemp.isVertexWithinArea_Sphere_Radius;
			float maxDebugThickness = sphereShapeRadius / 1000;
			float debugThickness = UKismetMathLibrary::MapRangeClamped(sphereShapeRadius, 0, sphereShapeRadius, 5, maxDebugThickness);
			debugThickness = UKismetMathLibrary::FClamp(debugThickness, 5, maxDebugThickness);

			DrawDebugSphere(GetWorld(), compsToCheckIfWithinTemp.componentBounds.GetBox().GetCenter(), sphereShapeRadius, 10, FColor::Red, false, duration, 0, debugThickness);
		}

		else if (UStaticMeshComponent* staticMeshComp = Cast<UStaticMeshComponent>(compsToCheckIfWithinTemp.componentToCheckIfIsWithin)) {

			if (Cast<USplineMeshComponent>(compsToCheckIfWithinTemp.componentToCheckIfIsWithin)) {

				auto debugExtent = compsToCheckIfWithinTemp.componentBounds.BoxExtent;
				float maxDebugThickness = debugExtent.Size() / 1000;
				float debugThickness = UKismetMathLibrary::MapRangeClamped(debugExtent.Size(), 0, debugExtent.Size(), 5, maxDebugThickness);
				debugThickness = UKismetMathLibrary::FClamp(debugThickness, 5, maxDebugThickness);

				DrawDebugBox(GetWorld(), compsToCheckIfWithinTemp.componentWorldTransform.GetLocation(), debugExtent * compsToCheckIfWithinTemp.componentWorldTransform.GetScale3D(), compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetComponentRotation().Quaternion(), FColor::Red, false, duration, 0, debugThickness);
			}

			else {

				if (compsToCheckIfWithinTemp.paintWithinAreaShape == Enum_PaintWithinAreaShape::isSquareOrRectangleShape) {

					FVector debugExtent = FVector(ForceInitToZero);
					debugExtent.X = compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareXHalfSize;
					debugExtent.Y = compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareYHalfSize;
					debugExtent.Z = compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareZHalfSize;

					float maxDebugThickness = debugExtent.Size() / 1000;
					float debugThickness = UKismetMathLibrary::MapRangeClamped(debugExtent.Size(), 0, debugExtent.Size(), 5, maxDebugThickness);
					debugThickness = UKismetMathLibrary::FClamp(debugThickness, 5, maxDebugThickness);

					DrawDebugBox(GetWorld(), compsToCheckIfWithinTemp.componentWorldTransform.GetLocation(), debugExtent, compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetComponentRotation().Quaternion(), FColor::Red, false, duration, 0, debugThickness);
				}

				else if (compsToCheckIfWithinTemp.paintWithinAreaShape == Enum_PaintWithinAreaShape::isSphereShape) {

					float sphereShapeRadius = compsToCheckIfWithinTemp.isVertexWithinArea_Sphere_Radius;
					float maxDebugThickness = sphereShapeRadius / 1000;
					float debugThickness = UKismetMathLibrary::MapRangeClamped(sphereShapeRadius, 0, sphereShapeRadius, 5, maxDebugThickness);
					debugThickness = UKismetMathLibrary::FClamp(debugThickness, 5, maxDebugThickness);

					DrawDebugSphere(GetWorld(), compsToCheckIfWithinTemp.componentBounds.GetBox().GetCenter(), sphereShapeRadius, 10, FColor::Red, false, duration, 0, debugThickness);
				}
			}
		}

		else if (USkeletalMeshComponent* skeletalMeshComp = Cast<USkeletalMeshComponent>(compsToCheckIfWithinTemp.componentToCheckIfIsWithin)) {

			auto debugExtent = compsToCheckIfWithinTemp.componentBounds.BoxExtent;
			float maxDebugThickness = debugExtent.Size() / 1000;
			float debugThickness = UKismetMathLibrary::MapRangeClamped(debugExtent.Size(), 0, debugExtent.Size(), 5, maxDebugThickness);
			debugThickness = UKismetMathLibrary::FClamp(debugThickness, 5, maxDebugThickness);

			DrawDebugBox(GetWorld(), compsToCheckIfWithinTemp.componentWorldTransform.GetLocation(), debugExtent, FQuat::Identity, FColor::Red, false, duration, 0, debugThickness);
		}

		else if (Cast<ALandscape>(compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetOwner())) {

			auto debugExtent = compsToCheckIfWithinTemp.componentBounds.BoxExtent;
			float maxDebugThickness = debugExtent.Size() / 1000;
			float debugThickness = UKismetMathLibrary::MapRangeClamped(debugExtent.Size(), 0, debugExtent.Size(), 5, maxDebugThickness);
			debugThickness = UKismetMathLibrary::FClamp(debugThickness, 5, maxDebugThickness);

			DrawDebugBox(GetWorld(), compsToCheckIfWithinTemp.componentBounds.GetBox().GetCenter(), debugExtent, compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetComponentRotation().Quaternion(), FColor::Red, false, duration, 0, debugThickness);
		}


		// If paint within area then draws an arrow from bottom->top or top->bottom depending on where we base the falloff from. Start takes distanceToStart from to indicate that as well. 
		if (forPaintWithinArea) {

			
			FVector startLocationWithDistanceFromBase = compsToCheckIfWithinTemp.componentWorldTransform.GetLocation();
			FVector endLocationOnArea = compsToCheckIfWithinTemp.componentWorldTransform.GetLocation();

			if (compsToCheckIfWithinTemp.paintWithinAreaShape == Enum_PaintWithinAreaShape::isSquareOrRectangleShape) {

				if (fallOffSettings.startFallOffDistanceFrom == EVertexPaintStartFallOffDistanceFrom::BaseOfPaintShape) {

					startLocationWithDistanceFromBase.Z = compsToCheckIfWithinTemp.componentWorldTransform.GetLocation().Z - compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareZHalfSize;
					endLocationOnArea.Z = compsToCheckIfWithinTemp.componentWorldTransform.GetLocation().Z + compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareZHalfSize;
				}

				else if (fallOffSettings.startFallOffDistanceFrom == EVertexPaintStartFallOffDistanceFrom::EndOfPaintShape) {

					startLocationWithDistanceFromBase.Z = compsToCheckIfWithinTemp.componentWorldTransform.GetLocation().Z + compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareZHalfSize;
					endLocationOnArea.Z = compsToCheckIfWithinTemp.componentWorldTransform.GetLocation().Z - compsToCheckIfWithinTemp.isVertexWithinArea_CubeOrRectangle_SquareZHalfSize;
				}
			}

			else if (compsToCheckIfWithinTemp.paintWithinAreaShape == Enum_PaintWithinAreaShape::isSphereShape) {

				if (fallOffSettings.startFallOffDistanceFrom == EVertexPaintStartFallOffDistanceFrom::BaseOfPaintShape) {

					startLocationWithDistanceFromBase.Z = compsToCheckIfWithinTemp.componentWorldTransform.GetLocation().Z - compsToCheckIfWithinTemp.isVertexWithinArea_Sphere_Radius;
					endLocationOnArea.Z = compsToCheckIfWithinTemp.componentWorldTransform.GetLocation().Z + compsToCheckIfWithinTemp.isVertexWithinArea_Sphere_Radius;
				}

				else if (fallOffSettings.startFallOffDistanceFrom == EVertexPaintStartFallOffDistanceFrom::EndOfPaintShape) {

					startLocationWithDistanceFromBase.Z = compsToCheckIfWithinTemp.componentWorldTransform.GetLocation().Z + compsToCheckIfWithinTemp.isVertexWithinArea_Sphere_Radius;
					endLocationOnArea.Z = compsToCheckIfWithinTemp.componentWorldTransform.GetLocation().Z - compsToCheckIfWithinTemp.isVertexWithinArea_Sphere_Radius;
				}
			}

			else if (compsToCheckIfWithinTemp.paintWithinAreaShape == Enum_PaintWithinAreaShape::isComplexShape) {

				if (fallOffSettings.startFallOffDistanceFrom == EVertexPaintStartFallOffDistanceFrom::BaseOfPaintShape) {

					startLocationWithDistanceFromBase.Z = compsToCheckIfWithinTemp.componentWorldTransform.GetLocation().Z - compsToCheckIfWithinTemp.componentBounds.BoxExtent.Size();
					endLocationOnArea.Z = compsToCheckIfWithinTemp.componentWorldTransform.GetLocation().Z + compsToCheckIfWithinTemp.componentBounds.BoxExtent.Size();
				}

				else if (fallOffSettings.startFallOffDistanceFrom == EVertexPaintStartFallOffDistanceFrom::EndOfPaintShape) {

					startLocationWithDistanceFromBase.Z = compsToCheckIfWithinTemp.componentWorldTransform.GetLocation().Z + compsToCheckIfWithinTemp.componentBounds.BoxExtent.Size();
					endLocationOnArea.Z = compsToCheckIfWithinTemp.componentWorldTransform.GetLocation().Z - compsToCheckIfWithinTemp.componentBounds.BoxExtent.Size();
				}
			}


			if (fallOffSettings.startFallOffDistanceFrom == EVertexPaintStartFallOffDistanceFrom::BaseOfPaintShape)
				startLocationWithDistanceFromBase.Z += fallOffSettings.distanceToStartFallOffFrom;

			else if (fallOffSettings.startFallOffDistanceFrom == EVertexPaintStartFallOffDistanceFrom::EndOfPaintShape)
				startLocationWithDistanceFromBase.Z -= fallOffSettings.distanceToStartFallOffFrom;


			DrawDebugDirectionalArrow(GetWorld(), startLocationWithDistanceFromBase, endLocationOnArea, 10, FColor::Yellow, false, duration, 0, 5);
		}
	}
}


//-------------------------------------------------------

// Paint On Entire Mesh

void UVertexPaintDetectionComponent::PaintOnEntireMesh(FVertexPaintOnEntireMeshStruct paintOnEntireMeshStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (!UVertexPaintFunctionLibrary::IsWorldValid(GetWorld())) return;


	CheckIfRegisteredAndInitialized();

	paintOnEntireMeshStruct.taskWorld = GetWorld();
	paintOnEntireMeshStruct.debugSettings.worldTaskWasCreatedIn = GetWorld();

	if (IsValid(paintOnEntireMeshStruct.meshComponent)) {

		if (IsValid(paintOnEntireMeshStruct.meshComponent->GetOwner())) {

			paintOnEntireMeshStruct.actor = paintOnEntireMeshStruct.meshComponent->GetOwner();

			RVPDP_LOG(paintOnEntireMeshStruct.debugSettings, FColor::Cyan, "Trying to Paint Entire Mesh on Actor: %s and Component: %s", *paintOnEntireMeshStruct.meshComponent->GetOwner()->GetName(), *paintOnEntireMeshStruct.meshComponent->GetName());
		}
	}


	// Clamps it so if the user sets like 0.000001, we will paint at the lowest amount of 1 when converted to FColor which range from 0-255. Also clamps paint limits and conditions
	paintOnEntireMeshStruct.applyVertexColorSettings = ClampPaintSettings(paintOnEntireMeshStruct.applyVertexColorSettings);

	// Clamps these between 0-1 in case the user set a different value
	paintOnEntireMeshStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeIfMinColorAmountIs = UKismetMathLibrary::FClamp(paintOnEntireMeshStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeIfMinColorAmountIs, 0, 1);


	FCalculateColorsInfo calculateColorsInfoTemp;
	calculateColorsInfoTemp.paintDetectionType = EVertexPaintDetectionType::PaintEntireMesh;
	calculateColorsInfoTemp.paintOnEntireMeshSettings = paintOnEntireMeshStruct;
	calculateColorsInfoTemp.taskResult.associatedPaintComponent = this;
	calculateColorsInfoTemp.additionalDataToPassThrough = additionalDataToPassThrough;
	calculateColorsInfoTemp.paintOnMeshColorSettings = paintOnEntireMeshStruct;
	calculateColorsInfoTemp.vertexPaintSettings = paintOnEntireMeshStruct;
	calculateColorsInfoTemp.fundementalStruct = paintOnEntireMeshStruct;


	if (PaintOnEntireMeshCheckValid(paintOnEntireMeshStruct)) {

		if (paintOnEntireMeshStruct.applyVertexColorSettings.applyColorsUsingPhysicsSurface.applyVertexColorUsingPhysicsSurface) {

			RVPDP_LOG(paintOnEntireMeshStruct.debugSettings, FColor::Green, "Paint on Entire Mesh CheckValid Successfull. Trying to Apply Color with EPhysicalSurface: %s  with Paint Strength: %f  -  Fall Back to RGBA Colors if Failed to Apply Colors Using Physics Surface: %i  -  Paint Strength on Surfaces Without the Physical Surface: %f", *GetAllPhysicsSurfacesToApplyAsString(paintOnEntireMeshStruct), paintOnEntireMeshStruct.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintStrengthToApply, paintOnEntireMeshStruct.applyVertexColorSettings.applyColorsUsingPhysicsSurface.fallbackToRGBAColorsIfFailedToApplyColorsUsingPhysicsSurface, paintOnEntireMeshStruct.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintStrengtOnChannelsWithoutThePhysicsSurface);
		}

		else {

			RVPDP_LOG(paintOnEntireMeshStruct.debugSettings, FColor::Green, "Paint on Entire Mesh CheckValid Successfull. Trying to Apply Color: %s", *FLinearColor(paintOnEntireMeshStruct.applyVertexColorSettings.applyColorsOnRedChannel.amountToApply, paintOnEntireMeshStruct.applyVertexColorSettings.applyColorsOnGreenChannel.amountToApply, paintOnEntireMeshStruct.applyVertexColorSettings.applyColorsOnBlueChannel.amountToApply, paintOnEntireMeshStruct.applyVertexColorSettings.applyColorsOnAlphaChannel.amountToApply).ToString());
		}
	}

	else {

		RVPDP_LOG(paintOnEntireMeshStruct.debugSettings, FColor::Red, "Check Valid Failed at Paint on Entire Mesh!");

		PaintOnEntireMeshTaskFinished(calculateColorsInfoTemp);
		return;
	}


	FillCalculateColorsInfoFundementals(calculateColorsInfoTemp);
	AddTaskToQueue(calculateColorsInfoTemp);
}

bool UVertexPaintDetectionComponent::PaintOnEntireMeshCheckValid(const FVertexPaintOnEntireMeshStruct& paintOnEntireMeshStruct) {

	if (!PaintColorsTaskCheckValid(paintOnEntireMeshStruct, paintOnEntireMeshStruct.meshComponent))
		return false;

	if (paintOnEntireMeshStruct.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh) {

		if (paintOnEntireMeshStruct.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint <= 0) {

			RVPDP_LOG(paintOnEntireMeshStruct.debugSettings, FColor::Red, "Check Valid, Paint at Entire Mesh Fail: Set to Paint Random Vertices Spread Out Over the Entire Mesh but the Percent to Spread out is 0 when it should be between 0-100. ");

			return false;
		}
		else if (paintOnEntireMeshStruct.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint >= 100) {

			RVPDP_LOG(paintOnEntireMeshStruct.debugSettings, FColor::Red, "Check Valid, Paint at Entire Mesh Fail: Set to Paint Random Vertices Spread Out Over the Entire Mesh to 100%, meaning the Entire Mesh should be painted, which makes it unnecessary and un-optimized to use Paint at Random Vertices when you can just turn that off and just use Paint Entire Mesh the regular way. ");

			return false;
		}
	}

	int numberOfVertices_Local = 0;

	if (auto skelMeshComp = Cast<USkeletalMeshComponent>(paintOnEntireMeshStruct.meshComponent)) {

		if (skelMeshComp->GetSkeletalMeshRenderData()) {

			if (skelMeshComp->GetSkeletalMeshRenderData()->LODRenderData.IsValidIndex(0))
				numberOfVertices_Local = skelMeshComp->GetSkeletalMeshRenderData()->LODRenderData[0].GetNumVertices();
		}
	}

	else if (auto staticMeshComp = Cast<UStaticMeshComponent>(paintOnEntireMeshStruct.meshComponent)) {

		if (staticMeshComp->GetStaticMesh()) {

			if (staticMeshComp->GetStaticMesh()->GetRenderData()) {

				if (staticMeshComp->GetStaticMesh()->GetRenderData()->LODResources.IsValidIndex(0))
					numberOfVertices_Local = staticMeshComp->GetStaticMesh()->GetRenderData()->LODResources[0].GetNumVertices();
			}
		}
	}


	if (paintOnEntireMeshStruct.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh) {

		if (numberOfVertices_Local > 0) {

			if (UKismetMathLibrary::MapRangeClamped(paintOnEntireMeshStruct.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint, 0, 100, 0, numberOfVertices_Local) < 1) {

				RVPDP_LOG(paintOnEntireMeshStruct.debugSettings, FColor::Red, "Check Valid, Paint at Entire Mesh Fail: Set to Paint Random Vertices Spread Out Over the Entire Mesh but the Percent set to Spread out is so low that not even a single vertex at LOD0 would get painted.");

				return false;
			}
		}
	}

	else if (paintOnEntireMeshStruct.paintOnRandomVerticesSettings.onlyRandomizeWithinAreaOfEffectAtLocation) {

		RVPDP_LOG(paintOnEntireMeshStruct.debugSettings, FColor::Cyan, "Paint Entire Mesh Set to Randomize Vertices to Paint Within Area of Effect: %f", paintOnEntireMeshStruct.paintOnRandomVerticesSettings.onlyRandomizeWithinAreaOfEffectAtLocation_AreaOfEffect);
	}


	return true;
}

void UVertexPaintDetectionComponent::PaintOnEntireMeshTaskFinished(const FCalculateColorsInfo& calculateColorsInfo) {


	if (currentPaintEntireMeshTasks.Contains(calculateColorsInfo.taskID))
		currentPaintEntireMeshTasks.Remove(calculateColorsInfo.taskID);

	if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackDelegate)
		vertexColorsPaintedEntireMeshDelegate.Broadcast(calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.paintOnEntireMeshSettings, calculateColorsInfo.additionalDataToPassThrough);
}


//--------------------------------------------------------

// Paint Color Snippet on Mesh

void UVertexPaintDetectionComponent::PaintColorSnippetOnMesh(FVertexPaintColorSnippetStruct paintColorSnippetStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (!UVertexPaintFunctionLibrary::IsWorldValid(GetWorld())) return;


	CheckIfRegisteredAndInitialized();

	paintColorSnippetStruct.taskWorld = GetWorld();
	paintColorSnippetStruct.debugSettings.worldTaskWasCreatedIn = GetWorld();

	// If was run with invalid meshComponent, but as Group Snippet and vid valid group snippet meshes, which can easily happen if you call this from C++, then we manually set the meshComponent to be 0 of the group snippet meshes since the check valids etc. requires a valid meshComponent. 
	if (!IsValid(paintColorSnippetStruct.meshComponent) && paintColorSnippetStruct.paintColorSnippetSetting == EVertexPaintPaintColorSnippetSetting::PaintGroupSnippet) {

		if (paintColorSnippetStruct.paintGroupSnippetMeshes.Num() > 0)
			paintColorSnippetStruct.meshComponent = paintColorSnippetStruct.paintGroupSnippetMeshes[0];
	}


	if (IsValid(paintColorSnippetStruct.meshComponent)) {

		if (IsValid(paintColorSnippetStruct.meshComponent->GetOwner()))
			paintColorSnippetStruct.actor = paintColorSnippetStruct.meshComponent->GetOwner();
	}


	// Clamps these between 0-1 in case the user set a different value
	paintColorSnippetStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeIfMinColorAmountIs = UKismetMathLibrary::FClamp(paintColorSnippetStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeIfMinColorAmountIs, 0, 1);

	paintColorSnippetStruct.vertexColorChannelsLimitWhenDirectlySettingColors = ClampPaintLimitsForApplyColorsDirectlySettings(paintColorSnippetStruct.vertexColorChannelsLimitWhenDirectlySettingColors);


	// Fills this up here as well eventhough we're gonna have to wait for a load callback and do it again later, so even if check valid fails we can return correct things using this
	FCalculateColorsInfo calculateColorsInfoTemp;
	calculateColorsInfoTemp.taskResult.associatedPaintComponent = this;
	calculateColorsInfoTemp.paintDetectionType = EVertexPaintDetectionType::PaintColorSnippet;
	calculateColorsInfoTemp.vertexPaintSettings = paintColorSnippetStruct;
	calculateColorsInfoTemp.paintOnColorSnippetSettings = paintColorSnippetStruct;
	calculateColorsInfoTemp.paintColorsDirectlySettings = paintColorSnippetStruct;
	calculateColorsInfoTemp.additionalDataToPassThrough = additionalDataToPassThrough;
	calculateColorsInfoTemp.fundementalStruct = paintColorSnippetStruct;


	if (PaintColorSnippetCheckValid(paintColorSnippetStruct)) {

		FString paintColorSnippetType = "";

		if (paintColorSnippetStruct.paintColorSnippetSetting == EVertexPaintPaintColorSnippetSetting::PaintSingleSnippet)
			paintColorSnippetType = "Single Snippet";

		else if (paintColorSnippetStruct.paintColorSnippetSetting == EVertexPaintPaintColorSnippetSetting::PaintGroupSnippet)
			paintColorSnippetType = "Group Snippet";


		RVPDP_LOG(paintColorSnippetStruct.debugSettings, FColor::Green, "Paint Color Snippet CheckValid Successfull. Trying to Apply Color Snippet Type: %s", *paintColorSnippetType);
	}

	else {

		RVPDP_LOG(paintColorSnippetStruct.debugSettings, FColor::Red, "Check Valid Failed at Paint Color Snippet!");

		PaintColorSnippetOnMeshTaskFinished(calculateColorsInfoTemp);
		return;
	}


	FillCalculateColorsInfoFundementals(calculateColorsInfoTemp);

	TMap<FGameplayTag, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>> availableColorSnippetTags_Local;
	UVertexPaintFunctionLibrary::GetAllMeshColorSnippetsAsTags_Wrapper(paintColorSnippetStruct.meshComponent, availableColorSnippetTags_Local);


	// If colorSnippetTag isn't set, or it's set but the Mesh doesn't have the Color Snippet Tag, and the randomizeAnyColorSnippetTagUnderThisCategory is set, then we can Randomize any available color snippet tag under the category, if there are any. 
	if (paintColorSnippetStruct.colorSnippetTag.IsValid()) {


		switch (paintColorSnippetStruct.paintColorSnippetSetting) {

		case EVertexPaintPaintColorSnippetSetting::PaintSingleSnippet:

			if (paintColorSnippetStruct.randomizeSnippetUnderChosenTagCategory) {

				TMap<FGameplayTag, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>> availableColorSnippetTagsAndDataAssets;
				TArray<FGameplayTag> meshTagsUnderCategory_Local;

				// Get All Snippets for the Mesh under this Category, so if we get any at all we know we got something this mesh can use. 
				UVertexPaintFunctionLibrary::GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper(paintColorSnippetStruct.meshComponent, paintColorSnippetStruct.colorSnippetTag, availableColorSnippetTagsAndDataAssets);
				availableColorSnippetTagsAndDataAssets.GetKeys(meshTagsUnderCategory_Local);

				if (availableColorSnippetTagsAndDataAssets.Num() > 0) {

					paintColorSnippetStruct.colorSnippetDataAssetInfo.colorSnippetID = meshTagsUnderCategory_Local[UKismetMathLibrary::RandomIntegerInRange(0, availableColorSnippetTagsAndDataAssets.Num() - 1)].GetTagName().ToString();

					// So even if randomizing, the colorSnippetToPaint Tag will match the randomized snippet ID. 
					paintColorSnippetStruct.colorSnippetTag = FGameplayTag::RequestGameplayTag(FName(*paintColorSnippetStruct.colorSnippetDataAssetInfo.colorSnippetID));
				}

				else {

					RVPDP_LOG(paintColorSnippetStruct.debugSettings, FColor::Red, "Paint Color Snippet Task Failed as it was set to Randomize a Snippet under Category, but we couldn't find any Snippet Tag under the Category for the Mesh: %s", *paintColorSnippetStruct.meshComponent->GetName());

					PaintColorSnippetOnMeshTaskFinished(calculateColorsInfoTemp);
					return;
				}
			}

			if (availableColorSnippetTags_Local.Contains(paintColorSnippetStruct.colorSnippetTag)) {

				paintColorSnippetStruct.colorSnippetDataAssetInfo.colorSnippetID = paintColorSnippetStruct.colorSnippetTag.GetTagName().ToString();
			}

			else {

				RVPDP_LOG(paintColorSnippetStruct.debugSettings, FColor::Red, "Check Valid Failed at Paint Color Snippet, trying to paint regular snippet but couldn't find a snippet associated with the Mesh that matches the choosen tag. Makes sure you choose a snippet tag that you know belongs the Mesh you're trying to paint. You can always append the Source Mesh name to the snippet ID. ");

				PaintColorSnippetOnMeshTaskFinished(calculateColorsInfoTemp);
				return;
			}

			break;

		case EVertexPaintPaintColorSnippetSetting::PaintGroupSnippet:


			if (paintColorSnippetStruct.paintGroupSnippetMeshes.Num() > 1) {


				if (paintColorSnippetStruct.randomizeSnippetUnderChosenTagCategory) {

					TArray<FString> groupSnippetsInCategoryTemp;

					for (auto& groupSnippetsAndMeshes : UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset(this)->groupSnippetsAndAssociatedMeshes) {

						if (groupSnippetsAndMeshes.Key.StartsWith(paintColorSnippetStruct.colorSnippetTag.ToString()))
							groupSnippetsInCategoryTemp.Add(groupSnippetsAndMeshes.Key);
					}


					if (groupSnippetsInCategoryTemp.Num() > 0) {

						paintColorSnippetStruct.colorSnippetDataAssetInfo.colorSnippetID = groupSnippetsInCategoryTemp[UKismetMathLibrary::RandomIntegerInRange(0, groupSnippetsInCategoryTemp.Num() - 1)];

						// So even if randomizing, the colorSnippetToPaint Tag will match the randomized snippet ID. 
						paintColorSnippetStruct.colorSnippetTag = FGameplayTag::RequestGameplayTag(FName(*paintColorSnippetStruct.colorSnippetDataAssetInfo.colorSnippetID));
					}

					else {

						RVPDP_LOG(paintColorSnippetStruct.debugSettings, FColor::Red, "Paint Group Snippet Task Failed as it was set to Randomize a Snippet under Category, but we couldn't find any Snippet Tag under the Category for the Mesh: %s", *paintColorSnippetStruct.meshComponent->GetName());

						PaintColorSnippetOnMeshTaskFinished(calculateColorsInfoTemp);
						return;
					}
				}


				TMap<FString, UPrimitiveComponent*> childSnippetsAndMatchingMeshesTemp;
				if (UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset(this)->CheckAndGetTheComponentsThatMatchGroupChildSnippets(this, paintColorSnippetStruct.colorSnippetTag.ToString(), paintColorSnippetStruct.paintGroupSnippetMeshes, childSnippetsAndMatchingMeshesTemp)) {

					TArray<UPrimitiveComponent*> meshComponentsToPaintGroupSnippetsOnTemp;
					childSnippetsAndMatchingMeshesTemp.GenerateValueArray(meshComponentsToPaintGroupSnippetsOnTemp);

					// Updates the Paint Group Snippet Meshes array with the ones actually associated with the snippet, in case the user sends other meshes as well. 
					paintColorSnippetStruct.paintGroupSnippetMeshes = meshComponentsToPaintGroupSnippetsOnTemp;

					// Since Paint Group Snippet Queues up other regular Paint Snippet tasks, we remove the initial one added 
					currentPaintColorSnippetTasks.Remove(calculateColorsInfoTemp.taskID);

					RVPDP_LOG(paintColorSnippetStruct.debugSettings, FColor::Cyan, "Paint Color Snippet, Trying to Paint Group Snippet and Successfully associated the right amount of Tags to Meshes, so loops through and starts regular Paint Color Snippet Single for those Meshes with the right Tag.");

					for (auto snippetAndMatchingMeshTemp : childSnippetsAndMatchingMeshesTemp) {

						FName tagNameTemp = FName(*snippetAndMatchingMeshTemp.Key);
						FGameplayTag colorSnippetTagTemp;
						colorSnippetTagTemp = FGameplayTag::RequestGameplayTag(tagNameTemp, true);

						FVertexPaintColorSnippetStruct childSnippetSettingsTemp = paintColorSnippetStruct;
						childSnippetSettingsTemp.colorSnippetTag = colorSnippetTagTemp;
						childSnippetSettingsTemp.meshComponent = snippetAndMatchingMeshTemp.Value;
						childSnippetSettingsTemp.actor = snippetAndMatchingMeshTemp.Value->GetOwner();
						childSnippetSettingsTemp.paintColorSnippetSetting = EVertexPaintPaintColorSnippetSetting::PaintSingleSnippet;
						childSnippetSettingsTemp.randomizeSnippetUnderChosenTagCategory = false;

						PaintColorSnippetOnMesh(childSnippetSettingsTemp, additionalDataToPassThrough);
					}

					return;
				}

				RVPDP_LOG(paintColorSnippetStruct.debugSettings, FColor::Red, "Paint Color Snippet Task Failed, trying to paint group snippet but didn't associate correct Meshes to the tags under the group. Most likely incorrect Meshes where connected or their relative location/rotation isn't the same as when the group snippet was created.");

				PaintColorSnippetOnMeshTaskFinished(calculateColorsInfoTemp);
				return;
			}

			else {

				RVPDP_LOG(paintColorSnippetStruct.debugSettings, FColor::Red, "Check Valid Failed at Paint Color Snippet, trying to Paint Group Snippet but no meshes has been connected. ");

				PaintColorSnippetOnMeshTaskFinished(calculateColorsInfoTemp);
				return;
			}

			break;

		default:
			break;
		
		}
	}


	if (paintColorSnippetStruct.colorSnippetDataAssetInfo.colorSnippetID.IsEmpty()) {

		RVPDP_LOG(paintColorSnippetStruct.debugSettings, FColor::Red, "Check Valid Failed at Paint Color Snippet, couldn't get Valid Snippet ID to Apply!");

		PaintColorSnippetOnMeshTaskFinished(calculateColorsInfoTemp);
		return;
	}


	// Updates this after setting colorSnippetID
	calculateColorsInfoTemp.paintOnColorSnippetSettings = paintColorSnippetStruct;


	// If Color Snippet ID has been set and matches the tag
	if (paintColorSnippetStruct.colorSnippetDataAssetInfo.colorSnippetID == paintColorSnippetStruct.colorSnippetTag.GetTagName().ToString()) {

		if (availableColorSnippetTags_Local.FindRef(paintColorSnippetStruct.colorSnippetTag).ToSoftObjectPath().ToString().Len() > 0) {

			if (availableColorSnippetTags_Local.FindRef(paintColorSnippetStruct.colorSnippetTag).Get()) {


				RVPDP_LOG(paintColorSnippetStruct.debugSettings, FColor::Cyan, "Successfull in getting the Color Snippet Data Asset as it was already loaded!");

				paintColorSnippetStruct.colorSnippetDataAssetInfo.colorSnippetDataAssetSnippetIsStoredIn = availableColorSnippetTags_Local.FindRef(paintColorSnippetStruct.colorSnippetTag).Get();

				// Updates after setting data asset ref
				calculateColorsInfoTemp.paintOnColorSnippetSettings = paintColorSnippetStruct;

				WrapUpLoadedColorSnippetDataAsset(calculateColorsInfoTemp, paintColorSnippetStruct.colorSnippetDataAssetInfo.colorSnippetID, ELoadColorSnippetDataAssetOptions::LoadPaintColorSnippetDataAsset);
			}

			else {

				if (LoadColorSnippetDataAsset(calculateColorsInfoTemp, paintColorSnippetStruct.colorSnippetDataAssetInfo.colorSnippetID, availableColorSnippetTags_Local.FindRef(paintColorSnippetStruct.colorSnippetTag).ToSoftObjectPath(), ELoadColorSnippetDataAssetOptions::LoadPaintColorSnippetDataAsset)) {

					//
				}

				else {

					RVPDP_LOG(paintColorSnippetStruct.debugSettings, FColor::Red, "Failed to Start Color Snippet Async Load Request and thus the Task!");

					calculateColorsInfoTemp.paintOnColorSnippetSettings = paintColorSnippetStruct; // Since we set ID etc. we update this before returning

					PaintColorSnippetOnMeshTaskFinished(calculateColorsInfoTemp);
					return;
				}
			}
		}

		else {

			RVPDP_LOG(paintColorSnippetStruct.debugSettings, FColor::Red, "Paint Color Snippet Fail as we the Snippet Found didn't point to a valid color snippet data asset soft pointer.");
		}
	}

	else {

		RVPDP_LOG(paintColorSnippetStruct.debugSettings, FColor::Red, "Paint Color Snippet Fail as the Color Snippet ID didn't get set correctly. The Tag you tried to Paint is probably not Registered to this Mesh. If you know it is, try saving and restarting the editor.");
	}

}

bool UVertexPaintDetectionComponent::PaintColorSnippetCheckValid(const FVertexPaintColorSnippetStruct& paintColorSnippetStruct) {

	if (!PaintTaskCheckValid(paintColorSnippetStruct, paintColorSnippetStruct.meshComponent))
		return false;

	if (!paintColorSnippetStruct.colorSnippetTag.IsValid()) {


		RVPDP_LOG(paintColorSnippetStruct.debugSettings, FColor::Red, "PaintColorSnippet Failed because no Snippet Tag was provided and it's not set to Randomize a Snippet Tag either!");

		return false;
	}

	return true;
}

void UVertexPaintDetectionComponent::PaintColorSnippetOnMeshTaskFinished(const FCalculateColorsInfo& calculateColorsInfo) {


	if (currentPaintColorSnippetTasks.Contains(calculateColorsInfo.taskID))
		currentPaintColorSnippetTasks.Remove(calculateColorsInfo.taskID);

	if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackDelegate)
		vertexColorsPaintColorSnippetDelegate.Broadcast(calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.paintOnColorSnippetSettings, calculateColorsInfo.additionalDataToPassThrough);
}


//--------------------------------------------------------

// Set Mesh Component Vertex Colors

void UVertexPaintDetectionComponent::SetMeshComponentVertexColors(FVertexPaintSetMeshComponentVertexColors setMeshComponentVertexColorsSettings, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (!UVertexPaintFunctionLibrary::IsWorldValid(GetWorld())) return;


	CheckIfRegisteredAndInitialized();

	setMeshComponentVertexColorsSettings.taskWorld = GetWorld();
	setMeshComponentVertexColorsSettings.debugSettings.worldTaskWasCreatedIn = GetWorld();

	if (IsValid(setMeshComponentVertexColorsSettings.meshComponent)) {

		if (IsValid(setMeshComponentVertexColorsSettings.meshComponent->GetOwner())) {

			setMeshComponentVertexColorsSettings.actor = setMeshComponentVertexColorsSettings.meshComponent->GetOwner();

			RVPDP_LOG(setMeshComponentVertexColorsSettings.debugSettings, FColor::Cyan, "Trying to Set Mesh Component Vertex Colors on Actor: %s and Component: %s", *setMeshComponentVertexColorsSettings.meshComponent->GetOwner()->GetName(), *setMeshComponentVertexColorsSettings.meshComponent->GetName());
		}
	}

	setMeshComponentVertexColorsSettings.vertexColorChannelsLimitWhenDirectlySettingColors = ClampPaintLimitsForApplyColorsDirectlySettings(setMeshComponentVertexColorsSettings.vertexColorChannelsLimitWhenDirectlySettingColors);

	FCalculateColorsInfo calculateColorsInfoTemp;
	calculateColorsInfoTemp.paintDetectionType = EVertexPaintDetectionType::SetMeshVertexColorsDirectly;
	calculateColorsInfoTemp.vertexPaintSettings = setMeshComponentVertexColorsSettings;
	calculateColorsInfoTemp.setMeshComponentVertexColorsSettings = setMeshComponentVertexColorsSettings;
	calculateColorsInfoTemp.paintColorsDirectlySettings = setMeshComponentVertexColorsSettings;
	calculateColorsInfoTemp.additionalDataToPassThrough = additionalDataToPassThrough;
	calculateColorsInfoTemp.taskResult.associatedPaintComponent = this;
	calculateColorsInfoTemp.fundementalStruct = setMeshComponentVertexColorsSettings;


	if (SetMeshComponentVertexColorsCheckValid(setMeshComponentVertexColorsSettings)) {

		RVPDP_LOG(setMeshComponentVertexColorsSettings.debugSettings, FColor::Green, "Check Valid Successfull for Set Mesh Component Vertex Colors");
	}

	else {

		RVPDP_LOG(setMeshComponentVertexColorsSettings.debugSettings, FColor::Red, "Check Valid Failed for Set Mesh Component Vertex Colors");

		SetMeshComponentVertexColorsTaskFinished(calculateColorsInfoTemp);
		return;
	}


	FillCalculateColorsInfoFundementals(calculateColorsInfoTemp);
	AddTaskToQueue(calculateColorsInfoTemp);
}

bool UVertexPaintDetectionComponent::SetMeshComponentVertexColorsCheckValid(const FVertexPaintSetMeshComponentVertexColors& setMeshComponentVertexColorsSettings) {

	if (!PaintTaskCheckValid(setMeshComponentVertexColorsSettings, setMeshComponentVertexColorsSettings.meshComponent))
		return false;

	// If passed fundamental checks, then checks set mesh component vertex colors specific ones
	if (setMeshComponentVertexColorsSettings.vertexColorsAtLOD0ToSet.Num() <= 0) {

		RVPDP_LOG(setMeshComponentVertexColorsSettings.debugSettings, FColor::Red, "Trying to Set Mesh Component Vertex Colors but the color array passed in are 0 in length!");

		return false;
	}

	return true;
}

void UVertexPaintDetectionComponent::SetMeshComponentVertexColorsTaskFinished(const FCalculateColorsInfo& calculateColorsInfo) {


	if (currentSetMeshComponentVertexColorsTasks.Contains(calculateColorsInfo.taskID))
		currentSetMeshComponentVertexColorsTasks.Remove(calculateColorsInfo.taskID);

	if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackDelegate)
		vertexColorsSetMeshColorsDelegate.Broadcast(calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.setMeshComponentVertexColorsSettings, calculateColorsInfo.additionalDataToPassThrough);
}


//--------------------------------------------------------

// Set Mesh Component Vertex Colors Using SerializedString

void UVertexPaintDetectionComponent::SetMeshComponentVertexColorsUsingSerializedString(FVertexPaintSetMeshComponentVertexColorsUsingSerializedString setMeshComponentVertexColorsUsingSerializedStringSettings, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (!UVertexPaintFunctionLibrary::IsWorldValid(GetWorld())) return;


	CheckIfRegisteredAndInitialized();

	setMeshComponentVertexColorsUsingSerializedStringSettings.taskWorld = GetWorld();
	setMeshComponentVertexColorsUsingSerializedStringSettings.debugSettings.worldTaskWasCreatedIn = GetWorld();

	if (IsValid(setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent)) {

		if (IsValid(setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent->GetOwner())) {

			setMeshComponentVertexColorsUsingSerializedStringSettings.actor = setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent->GetOwner();

			RVPDP_LOG(setMeshComponentVertexColorsUsingSerializedStringSettings.debugSettings, FColor::Cyan, "Trying to Set Mesh Component Vertex Colors Using Serialized String on Actor: %s and Component: %s", *setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent->GetOwner()->GetName(), *setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent->GetName());
		}
	}

	setMeshComponentVertexColorsUsingSerializedStringSettings.vertexColorChannelsLimitWhenDirectlySettingColors = ClampPaintLimitsForApplyColorsDirectlySettings(setMeshComponentVertexColorsUsingSerializedStringSettings.vertexColorChannelsLimitWhenDirectlySettingColors);

	FCalculateColorsInfo calculateColorsInfoTemp;
	calculateColorsInfoTemp.paintDetectionType = EVertexPaintDetectionType::SetMeshVertexColorsDirectlyUsingSerializedString;
	calculateColorsInfoTemp.vertexPaintSettings = setMeshComponentVertexColorsUsingSerializedStringSettings;
	calculateColorsInfoTemp.setMeshComponentVertexColorsUsingSerializedStringSettings = setMeshComponentVertexColorsUsingSerializedStringSettings;
	calculateColorsInfoTemp.paintColorsDirectlySettings = setMeshComponentVertexColorsUsingSerializedStringSettings;
	calculateColorsInfoTemp.additionalDataToPassThrough = additionalDataToPassThrough;
	calculateColorsInfoTemp.taskResult.associatedPaintComponent = this;
	calculateColorsInfoTemp.fundementalStruct = setMeshComponentVertexColorsUsingSerializedStringSettings;

	
	if (SetMeshComponentVertexColorsUsingSerializedStringCheckValid(setMeshComponentVertexColorsUsingSerializedStringSettings)) {

		RVPDP_LOG(setMeshComponentVertexColorsUsingSerializedStringSettings.debugSettings, FColor::Green, "Check Valid Successfull for Set Mesh Component Vertex Colors Using Serialized String");
	}

	else {

		RVPDP_LOG(setMeshComponentVertexColorsUsingSerializedStringSettings.debugSettings, FColor::Red, "Check Valid Failed for Set Mesh Component Vertex Colors Using Serialized String");

		SetMeshComponentVertexColorsUsingSerializedStringTaskFinished(calculateColorsInfoTemp);
		return;
	}


	FillCalculateColorsInfoFundementals(calculateColorsInfoTemp);
	AddTaskToQueue(calculateColorsInfoTemp);
}

bool UVertexPaintDetectionComponent::SetMeshComponentVertexColorsUsingSerializedStringCheckValid(const FVertexPaintSetMeshComponentVertexColorsUsingSerializedString& setMeshComponentVertexColorsUsingSerializedStringSettings) {

	if (!PaintTaskCheckValid(setMeshComponentVertexColorsUsingSerializedStringSettings, setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent))
		return false;

	if (setMeshComponentVertexColorsUsingSerializedStringSettings.serializedColorDataAtLOD0.Len() <= 0) {

		RVPDP_LOG(setMeshComponentVertexColorsUsingSerializedStringSettings.debugSettings, FColor::Red, "Trying to Set Mesh Component Vertex Colors Using Serialized String but the serializedColorData String passed in are 0 in length!");

		return false;
	}


	return true;
}

void UVertexPaintDetectionComponent::SetMeshComponentVertexColorsUsingSerializedStringTaskFinished(const FCalculateColorsInfo& calculateColorsInfo) {


	if (currentSetMeshComponentVertexColorsUsingSerializedStringTasks.Contains(calculateColorsInfo.taskID))
		currentSetMeshComponentVertexColorsUsingSerializedStringTasks.Remove(calculateColorsInfo.taskID);

	if (calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackDelegate)
		vertexColorsSetMeshColorsUsingSerializedStringDelegate.Broadcast(calculateColorsInfo.taskResult, calculateColorsInfo.paintTaskResult, calculateColorsInfo.setMeshComponentVertexColorsUsingSerializedStringSettings, calculateColorsInfo.additionalDataToPassThrough);
}


//--------------------------------------------------------

// Load Color Snippet Data Asset for Paint Color Snippet / Compare with Color Snippet

bool UVertexPaintDetectionComponent::ShouldLoadCompareColorSnippet(FCalculateColorsInfo calculateColorsInfo) {

	if (!calculateColorsInfo.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.compareMeshColorsToStoredColorSnippet) return false;
	if (!calculateColorsInfo.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.compareWithColorsSnippetTag.IsValid()) return false;
	if (!calculateColorsInfo.fundementalStruct.meshComponent) return false;
	if (calculateColorsInfo.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.compareWithColorsSnippetDataAssetInfo.colorSnippetDataAssetSnippetIsStoredIn) return false; // If already set


	FGameplayTag colorSnippetTag_Local = calculateColorsInfo.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.compareWithColorsSnippetTag;
	TMap<FGameplayTag, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>> availableColorSnippetTags_Local;
	UVertexPaintFunctionLibrary::GetAllMeshColorSnippetsAsTags_Wrapper(calculateColorsInfo.fundementalStruct.meshComponent, availableColorSnippetTags_Local);

	if (availableColorSnippetTags_Local.Contains(colorSnippetTag_Local)) {


		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Set to Compare with Color Snippet: %s", *colorSnippetTag_Local.ToString());

		// If already loaded
		if (availableColorSnippetTags_Local.FindRef(colorSnippetTag_Local).Get()) {
			calculateColorsInfo.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.compareWithColorsSnippetDataAssetInfo.colorSnippetDataAssetSnippetIsStoredIn = availableColorSnippetTags_Local.FindRef(colorSnippetTag_Local).Get();

			WrapUpLoadedColorSnippetDataAsset(calculateColorsInfo, colorSnippetTag_Local.ToString(), ELoadColorSnippetDataAssetOptions::LoadCompareWithColorSnippetDataAsset);

			return true;
		}

		else if (availableColorSnippetTags_Local.FindRef(colorSnippetTag_Local).ToSoftObjectPath().ToString().Len() > 0) {

			return LoadColorSnippetDataAsset(calculateColorsInfo, colorSnippetTag_Local.ToString(), availableColorSnippetTags_Local.FindRef(colorSnippetTag_Local).ToSoftObjectPath(), ELoadColorSnippetDataAssetOptions::LoadCompareWithColorSnippetDataAsset);
		}
	}

	else {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Set to Compare with Color Snippet but the Color Snippet Tag %s isn't available, but is valid. Perhaps you've selected a 'Parent' Tag, for instance if you have Floor.Oily registered and choose Floor.  ", *colorSnippetTag_Local.ToString());
	}


	return false;
}

bool UVertexPaintDetectionComponent::LoadColorSnippetDataAsset(const FCalculateColorsInfo& calculateColorsInfo, FString colorSnippedID, FSoftObjectPath colorSnippetDataAssetPath, ELoadColorSnippetDataAssetOptions loadColorSnippetDataAssetSetting) {

	if (colorSnippedID.IsEmpty() || colorSnippetDataAssetPath.IsNull()) return false;

	TArray<int> currentColorSnippetRequestAsyncTaskIDs_Local;
	colorSnippetAsyncLoadHandleMap.GenerateKeyArray(currentColorSnippetRequestAsyncTaskIDs_Local);

	int taskID_Local = 0;

	do {
		taskID_Local = UKismetMathLibrary::RandomIntegerInRange(0, 100000);
	} while (currentColorSnippetRequestAsyncTaskIDs_Local.Contains(taskID_Local)); // Randomized to get a unique task ID. 



	TAsyncLoadPriority asyncLoadPriority = FStreamableManager::AsyncLoadHighPriority;

	auto callbackLambda = [this, calculateColorsInfo, colorSnippedID, loadColorSnippetDataAssetSetting, taskID_Local]() {

		this->FinishedLoadingColorSnippetDataAsset(taskID_Local, calculateColorsInfo, colorSnippedID, loadColorSnippetDataAssetSetting);

		return;
	};

	FStreamableDelegate callbackDelegate;
	callbackDelegate.BindLambda(callbackLambda);

	colorSnippetAsyncLoadHandleMap.Add(taskID_Local, UAssetManager::GetStreamableManager().RequestAsyncLoad(colorSnippetDataAssetPath, callbackDelegate, asyncLoadPriority, false, false, "Async Loading Color Snippet Data Asset"));


	switch (loadColorSnippetDataAssetSetting) {

	case ELoadColorSnippetDataAssetOptions::LoadCompareWithColorSnippetDataAsset:

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Couldn't Resolve Soft Ptr so started Loading Color Snippet Data Asset that stores Snippet ID: %s to Compare Colors with Task ID: %i. ", *colorSnippedID, taskID_Local);

		break;

	case ELoadColorSnippetDataAssetOptions::LoadPaintColorSnippetDataAsset:

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Couldn't Resolve Soft Ptr so started Loading Color Snippet Data Asset that stores Snippet ID: %s for Paint Color Snippet Paint Job with Task ID: %i ", *colorSnippedID, taskID_Local);

		break;

	default:
		break;
	}


	return true;
}

void UVertexPaintDetectionComponent::FinishedLoadingColorSnippetDataAsset(int finishedTaskID, FCalculateColorsInfo calculateColorsInfo, FString colorSnippedID, ELoadColorSnippetDataAssetOptions loadColorSnippetDataAssetSetting) {

	if (!IsInGameThread()) return;
	if (!UVertexPaintFunctionLibrary::IsWorldValid(calculateColorsInfo.fundementalStruct.taskWorld)) return;


	FString loadColorSnippetSetting = "";

	if (loadColorSnippetDataAssetSetting == ELoadColorSnippetDataAssetOptions::LoadPaintColorSnippetDataAsset)
		loadColorSnippetSetting = "Paint Color Snippet";

	else if (loadColorSnippetDataAssetSetting == ELoadColorSnippetDataAssetOptions::LoadCompareWithColorSnippetDataAsset)
		loadColorSnippetSetting = "Compare Color Snippet";


	RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Loading Color Snippet Data Asset Callback: %s for Task: %i  -  Trying to Load Data Asset for Snippet: %s", *loadColorSnippetSetting, finishedTaskID, *colorSnippedID);


	TSharedPtr<FStreamableHandle> finishedStreamableHandle_Local;

	TArray<int> taskIDs_Local;
	colorSnippetAsyncLoadHandleMap.GenerateKeyArray(taskIDs_Local);

	TArray<TSharedPtr<FStreamableHandle>> streamableHandles_Local;
	colorSnippetAsyncLoadHandleMap.GenerateValueArray(streamableHandles_Local);

	// Finds the streamable handle assocaited with the finished handle ID and then removes the ID from the TMap
	for (int i = 0; i < taskIDs_Local.Num(); i++) {

		if (taskIDs_Local[i] == finishedTaskID) {

			finishedStreamableHandle_Local = streamableHandles_Local[i];
			colorSnippetAsyncLoadHandleMap.Remove(taskIDs_Local[i]);

			break;
		}
	}


	bool passedChecks_Local = true;

	if (finishedStreamableHandle_Local.Get()) {

		if (finishedStreamableHandle_Local.Get()->GetLoadedAsset()) {

			if (auto colorSnippetDataAsset_Local = Cast<UVertexPaintColorSnippetDataAsset>(finishedStreamableHandle_Local.Get()->GetLoadedAsset())) {

				if (colorSnippetDataAsset_Local->snippetColorData.Contains(colorSnippedID)) {

					if (colorSnippetDataAsset_Local->snippetColorData.FindRef(colorSnippedID).colorSnippetDataPerLOD.IsValidIndex(0)) {


						RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Successfully Loaded Color Snippet Data Asset: %s for Color Snippet: %s", *colorSnippetDataAsset_Local->GetName(), *colorSnippedID);


						if (loadColorSnippetDataAssetSetting == ELoadColorSnippetDataAssetOptions::LoadPaintColorSnippetDataAsset)
							calculateColorsInfo.paintOnColorSnippetSettings.colorSnippetDataAssetInfo.colorSnippetDataAssetSnippetIsStoredIn = colorSnippetDataAsset_Local;

						else if (loadColorSnippetDataAssetSetting == ELoadColorSnippetDataAssetOptions::LoadCompareWithColorSnippetDataAsset)calculateColorsInfo.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.compareWithColorsSnippetDataAssetInfo.colorSnippetDataAssetSnippetIsStoredIn = colorSnippetDataAsset_Local;
					}

					else {

						passedChecks_Local = false;

						RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "PaintColorSnippet Fail! - The Color Snippet Data Per LOD doesn't have a valid LOD0 index. ");
					}
				}

				else {

					passedChecks_Local = false;

					RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "PaintColorSnippet Fail! - The Color Snippet Data Asset: %s the Mesh have referenced to store their color snippet doesn't have the Snippet ID: %s Registered! Try removing the snippet from the Editor Widget and adding it again.");
				}
			}

			else {

				passedChecks_Local = false;

				RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "PaintColorSnippet Fail! - The Color Snippet Data Asset could not be loaded. If you have deleted it after storing snippets on it then recommend opening up the Editor Utility widget which will refresh and clear up if any mesh has references to old data assets ");
			}
		}

		else {

			passedChecks_Local = false;

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "PaintColorSnippet Fail! - The Color Snippet Data Asset could not be loaded. If you have deleted it after storing snippets on it then recommend opening up the Editor Utility widget which will refresh and clear up if any mesh has references to old data assets ");
		}
	}

	else {

		passedChecks_Local = false;

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "PaintColorSnippet Fail! - After Attempting to Load the Color Snippet Data Asset the FStreamableHandle wasn't Valid! ");
	}


	// Checks if things are still valid after loading data asset

	switch (calculateColorsInfo.paintDetectionType) {

	case EVertexPaintDetectionType::GetClosestVertexDataDetection:

		if (!GetClosestVertexDataOnMeshCheckValid(calculateColorsInfo.getClosestVertexDataSettings)) {

			if (loadColorSnippetDataAssetSetting == ELoadColorSnippetDataAssetOptions::LoadCompareWithColorSnippetDataAsset) {

				RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "Check Valid Failed for GetClosestVertexData after Loading Compare Color Snippet Data Asset.");
			}

			GetClosestVertexDataOnMeshTaskFinished(calculateColorsInfo, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());
			return;
		}

		break;

	case EVertexPaintDetectionType::GetAllVertexColorDetection:

		if (!GetAllVertexColorsOnlyCheckValid(calculateColorsInfo.getAllVertexColorsSettings)) {

			if (loadColorSnippetDataAssetSetting == ELoadColorSnippetDataAssetOptions::LoadCompareWithColorSnippetDataAsset) {

				RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "Check Valid Failed for GetAllVertexColorsOnly after Loading Compare Color Snippet Data Asset.");
			}

			GetAllVertexColorsOnlyTaskFinished(calculateColorsInfo);
			return;
		}

		break;


	case EVertexPaintDetectionType::GetColorsWithinArea:

		if (!GetColorsWithinAreaCheckValid(calculateColorsInfo.getColorsWithinAreaSettings)) {

			if (loadColorSnippetDataAssetSetting == ELoadColorSnippetDataAssetOptions::LoadCompareWithColorSnippetDataAsset) {

				RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "Check Valid Failed for GetColorsWithinArea after Loading Compare Color Snippet Data Asset.");
			}

			GetColorsWithinAreaTaskFinished(calculateColorsInfo);
			return;
		}

		break;

	case EVertexPaintDetectionType::PaintAtLocation:

		if (!PaintOnMeshAtLocationCheckValid(calculateColorsInfo.paintOnMeshAtLocationSettings)) {

			if (loadColorSnippetDataAssetSetting == ELoadColorSnippetDataAssetOptions::LoadCompareWithColorSnippetDataAsset) {

				RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "Check Valid Failed for Paint at Location after Loading Compare Color Snippet Data Asset.");
			}

			// If fail and set to run detections then we expect fail callbacks on the get closest vertex data delegates as well
			if (calculateColorsInfo.paintOnMeshAtLocationSettings.getClosestVertexDataCombo.runGetClosestVertexDataOnMeshBeforeApplyingPaint)
				GetClosestVertexDataOnMeshTaskFinished(calculateColorsInfo, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

			PaintOnMeshAtLocationTaskFinished(calculateColorsInfo, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

			if (calculateColorsInfo.paintOnMeshAtLocationSettings.getClosestVertexDataCombo.runGetClosestVertexDataOnMeshAfterApplyingPaint)
				GetClosestVertexDataOnMeshTaskFinished(calculateColorsInfo, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

			return;
		}

		break;

	case EVertexPaintDetectionType::PaintWithinArea:

		if (!PaintOnMeshWithinAreaCheckValid(calculateColorsInfo.paintOnMeshWithinAreaSettings)) {

			if (loadColorSnippetDataAssetSetting == ELoadColorSnippetDataAssetOptions::LoadCompareWithColorSnippetDataAsset) {

				RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "Check Valid Failed for Paint Within Area after Loading Compare Color Snippet Data Asset.");
			}

			PaintOnMeshWithinAreaTaskFinished(calculateColorsInfo);
			return;
		}

		break;

	case EVertexPaintDetectionType::PaintEntireMesh:

		if (!PaintOnEntireMeshCheckValid(calculateColorsInfo.paintOnEntireMeshSettings)) {

			if (loadColorSnippetDataAssetSetting == ELoadColorSnippetDataAssetOptions::LoadCompareWithColorSnippetDataAsset) {

				RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "Check Valid Failed for Paint Entire Mesh after Loading Compare Color Snippet Data Asset.");
			}

			PaintOnEntireMeshTaskFinished(calculateColorsInfo);
			return;
		}

		break;

	case EVertexPaintDetectionType::PaintColorSnippet:

		if (!PaintColorSnippetCheckValid(calculateColorsInfo.paintOnColorSnippetSettings)) {

			if (loadColorSnippetDataAssetSetting == ELoadColorSnippetDataAssetOptions::LoadPaintColorSnippetDataAsset) {

				RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "Check Valid Failed for Paint Color Snippet after Loading Paint Color Snippet Data Asset!");
			}

			else if (loadColorSnippetDataAssetSetting == ELoadColorSnippetDataAssetOptions::LoadCompareWithColorSnippetDataAsset) {

				RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "Check Valid Failed for Paint Color Snippet after Loading Compare Color Snippet Data Asset.");
			}

			PaintColorSnippetOnMeshTaskFinished(calculateColorsInfo);
			return;
		}

		break;

	case EVertexPaintDetectionType::SetMeshVertexColorsDirectly:

		if (!SetMeshComponentVertexColorsCheckValid(calculateColorsInfo.setMeshComponentVertexColorsSettings)) {

			if (loadColorSnippetDataAssetSetting == ELoadColorSnippetDataAssetOptions::LoadPaintColorSnippetDataAsset) {

				RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "Check Valid Failed for Set Mesh Component Vertex Colors after Loading Paint Color Snippet Data Asset!");
			}

			else if (loadColorSnippetDataAssetSetting == ELoadColorSnippetDataAssetOptions::LoadCompareWithColorSnippetDataAsset) {

				RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "Check Valid Failed for Set Mesh Component Vertex Colors after Loading Compare Color Snippet Data Asset.");
			}

			SetMeshComponentVertexColorsTaskFinished(calculateColorsInfo);
			return;
		}

		break;

	case EVertexPaintDetectionType::SetMeshVertexColorsDirectlyUsingSerializedString:

		if (!SetMeshComponentVertexColorsUsingSerializedStringCheckValid(calculateColorsInfo.setMeshComponentVertexColorsUsingSerializedStringSettings)) {

			if (loadColorSnippetDataAssetSetting == ELoadColorSnippetDataAssetOptions::LoadPaintColorSnippetDataAsset) {

				RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "Check Valid Failed for Set Mesh Component Vertex Colors Using Serialized String after Loading Paint Color Snippet Data Asset!");
			}

			else if (loadColorSnippetDataAssetSetting == ELoadColorSnippetDataAssetOptions::LoadCompareWithColorSnippetDataAsset) {

				RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "Check Valid Failed for Set Mesh Component Vertex Colors Using Serialized String after Loading Compare Color Snippet Data Asset.");
			}

			SetMeshComponentVertexColorsUsingSerializedStringTaskFinished(calculateColorsInfo);
			return;
		}

		break;

	default:
		break;
	}


	WrapUpLoadedColorSnippetDataAsset(calculateColorsInfo, colorSnippedID, loadColorSnippetDataAssetSetting);
}

void UVertexPaintDetectionComponent::WrapUpLoadedColorSnippetDataAsset(FCalculateColorsInfo calculateColorsInfo, FString colorSnippedID, ELoadColorSnippetDataAssetOptions loadColorSnippetDataAssetSetting) {


	switch (loadColorSnippetDataAssetSetting) {

	case ELoadColorSnippetDataAssetOptions::LoadCompareWithColorSnippetDataAsset:

		calculateColorsInfo.vertexPaintSettings.callbackSettings = calculateColorsInfo.fundementalStruct.callbackSettings;

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Compare Colors Load Color Snippet Data Asset Successfull. Adding Task and Set to Compare with Snippet: %s", *colorSnippedID);

		break;

	case ELoadColorSnippetDataAssetOptions::LoadPaintColorSnippetDataAsset:

		// Updates this as we've updated the struct with results
		calculateColorsInfo.paintOnColorSnippetSettings = calculateColorsInfo.paintOnColorSnippetSettings;
		calculateColorsInfo.vertexPaintSettings = calculateColorsInfo.paintOnColorSnippetSettings;

		// Failed and getting the data asset which is crucial for the paint job then bails out
		if (!calculateColorsInfo.paintOnColorSnippetSettings.colorSnippetDataAssetInfo.colorSnippetDataAssetSnippetIsStoredIn) {

			PaintColorSnippetOnMeshTaskFinished(calculateColorsInfo);
			return;
		}

		if (ShouldLoadCompareColorSnippet(calculateColorsInfo)) {

			// If should Load Color Snippet for Compare Colors then we don't want to Add to Task Queue now but rather when this function runs again after the compare colors data asset has finished loading. 
			return;
		}

		else {

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Paint Color Snippet Load Color Snippet Data Asset Successfull. Trying to Apply Snippet: %s", *colorSnippedID);
		}


		break;

	default:
		break;
	}


	AddTaskToQueue(calculateColorsInfo);
}


//-------------------------------------------------------

// Add Task To Queue

void UVertexPaintDetectionComponent::AddTaskToQueue(const FCalculateColorsInfo& calculateColorsInfo) {

	if (ShouldLoadCompareColorSnippet(calculateColorsInfo)) {

		// If should Load Color Snippet for Compare Colors then Loads that data asset in first and sets the reference in callback settings then we Add the task to the queue
	}

	else {

		// Sets the Task ID here so we could set it on our cached TMaps before starting the Task, which was necessary in case the task failed immediately and callback events ran 
		TMap<int, FCalculateColorsInfo> paintTaskQueueTemp = UVertexPaintFunctionLibrary::GetVertexPaintTaskQueue(GetWorld())->GetCalculateColorsPaintTasks();
		TMap<int, FCalculateColorsInfo> detectionTaskQueueTemp = UVertexPaintFunctionLibrary::GetVertexPaintTaskQueue(GetWorld())->GetCalculateColorsDetectionTasks();

		int randomTaskID_Local = 0;


		if (calculateColorsInfo.vertexPaintSettings.actor) {

			do {
				randomTaskID_Local = UKismetMathLibrary::RandomIntegerInRange(0, 10000);
			} while (paintTaskQueueTemp.Contains(randomTaskID_Local) || detectionTaskQueueTemp.Contains(randomTaskID_Local));
		}

		else if (calculateColorsInfo.vertexDetectSettings.actor) {

			do {
				randomTaskID_Local = UKismetMathLibrary::RandomIntegerInRange(0, 10000);
			} while (detectionTaskQueueTemp.Contains(randomTaskID_Local) || paintTaskQueueTemp.Contains(randomTaskID_Local));
		}


		switch (calculateColorsInfo.paintDetectionType) {

		case EVertexPaintDetectionType::GetClosestVertexDataDetection:

			currentGetClosestVertexDataTasks.Add(randomTaskID_Local, calculateColorsInfo.vertexPaintComponent);
			break;

		case EVertexPaintDetectionType::GetAllVertexColorDetection:

			currentGetAllVertexColorsOnlyTasks.Add(randomTaskID_Local, calculateColorsInfo.vertexPaintComponent);
			break;

		case EVertexPaintDetectionType::GetColorsWithinArea:
			
			currentGetColorsWithinAreaTasks.Add(randomTaskID_Local, calculateColorsInfo.vertexPaintComponent);
			break;

		case EVertexPaintDetectionType::PaintAtLocation:

			currentPaintAtLocationTasks.Add(randomTaskID_Local, calculateColorsInfo.vertexPaintComponent);
			break;

		case EVertexPaintDetectionType::PaintWithinArea:
	
			currentPaintWithinAreaTasks.Add(randomTaskID_Local, calculateColorsInfo.vertexPaintComponent);
			break;

		case EVertexPaintDetectionType::PaintEntireMesh:

			currentPaintEntireMeshTasks.Add(randomTaskID_Local, calculateColorsInfo.vertexPaintComponent);
			break;

		case EVertexPaintDetectionType::PaintColorSnippet:

			currentPaintColorSnippetTasks.Add(randomTaskID_Local, calculateColorsInfo.vertexPaintComponent);
			break;

		case EVertexPaintDetectionType::SetMeshVertexColorsDirectly:

			currentSetMeshComponentVertexColorsTasks.Add(randomTaskID_Local, calculateColorsInfo.vertexPaintComponent);
			break;

		case EVertexPaintDetectionType::SetMeshVertexColorsDirectlyUsingSerializedString:

			currentSetMeshComponentVertexColorsUsingSerializedStringTasks.Add(randomTaskID_Local, calculateColorsInfo.vertexPaintComponent);
			break;

		default:
			break;
		}


		if (auto taskQueue = UVertexPaintFunctionLibrary::GetVertexPaintTaskQueue(GetWorld()))
			taskQueue->AddCalculateColorsTaskToQueue(calculateColorsInfo, randomTaskID_Local);
	}
}


//-------------------------------------------------------

// Get Current Tasks Initiated By Component

void UVertexPaintDetectionComponent::GetCurrentTasksInitiatedByComponent(int& totalAmountOfTasks, int& amountOfGetClosestVertexDataTasks, int& amountOfGetAllVertexColorsOnlyTasks, int& amountOfGetColorsWithinAreaTasks, int& amountOfPaintAtLocationTasks, int& amountOfPaintWithinAreaTasks, int& amountOfPaintEntireMeshTasks, int& amountOfPaintColorSnippetTasks, int& amountOfSetMeshComponentVertexColorsTasks, int& amountOfSetMeshComponentVertexColorsUsingSerializedStringTasks) {

	totalAmountOfTasks = currentGetClosestVertexDataTasks.Num() + currentGetAllVertexColorsOnlyTasks.Num() + currentGetColorsWithinAreaTasks.Num() + currentPaintAtLocationTasks.Num() + currentPaintWithinAreaTasks.Num() + currentPaintEntireMeshTasks.Num() + currentPaintColorSnippetTasks.Num() + currentSetMeshComponentVertexColorsTasks.Num() + currentSetMeshComponentVertexColorsUsingSerializedStringTasks.Num();

	amountOfGetClosestVertexDataTasks = currentGetClosestVertexDataTasks.Num();
	amountOfGetAllVertexColorsOnlyTasks = currentGetAllVertexColorsOnlyTasks.Num();
	amountOfGetColorsWithinAreaTasks = currentGetColorsWithinAreaTasks.Num();
	amountOfPaintAtLocationTasks = currentPaintAtLocationTasks.Num();
	amountOfPaintWithinAreaTasks = currentPaintWithinAreaTasks.Num();
	amountOfPaintEntireMeshTasks = currentPaintEntireMeshTasks.Num();
	amountOfPaintColorSnippetTasks = currentPaintColorSnippetTasks.Num();
	amountOfSetMeshComponentVertexColorsTasks = currentSetMeshComponentVertexColorsTasks.Num();
	amountOfSetMeshComponentVertexColorsUsingSerializedStringTasks = currentSetMeshComponentVertexColorsUsingSerializedStringTasks.Num();
}


//-------------------------------------------------------

// Get Total Tasks Initiated By Component

int UVertexPaintDetectionComponent::GetTotalTasksInitiatedByComponent() {

	int totalAmountOfTasks;
	int amountOfGetClosestVertexDataTasks;
	int amountOfGetAllVertexColorsOnlyTasks;
	int amountOfGetColorsWithinAreaTasks;
	int amountOfPaintAtLocationTasks;
	int amountOfPaintWithinAreaTasks;
	int amountOfPaintEntireMeshTasks;
	int amountOfPaintColorSnippetTasks;
	int amountOfSetMeshComponentColorsTasks;
	int amountOfSetMeshComponentColorsUsingSerializedStringTasks;

	GetCurrentTasksInitiatedByComponent(totalAmountOfTasks, amountOfGetClosestVertexDataTasks, amountOfGetAllVertexColorsOnlyTasks, amountOfGetColorsWithinAreaTasks, amountOfPaintAtLocationTasks, amountOfPaintWithinAreaTasks, amountOfPaintEntireMeshTasks, amountOfPaintColorSnippetTasks, amountOfSetMeshComponentColorsTasks, amountOfSetMeshComponentColorsUsingSerializedStringTasks);

	return totalAmountOfTasks;
}


//-------------------------------------------------------

// Get Current Tasks Mesh Components

TArray<UPrimitiveComponent*> UVertexPaintDetectionComponent::GetCurrentTasksMeshComponents() {

	TArray<UPrimitiveComponent*> totalMeshComponents_Local;
	TArray<UPrimitiveComponent*> tasksMeshComponents_Local;


	if (currentGetClosestVertexDataTasks.Num() > 0) {

		currentGetClosestVertexDataTasks.GenerateValueArray(tasksMeshComponents_Local);
		totalMeshComponents_Local.Append(tasksMeshComponents_Local);
	}


	if (currentGetAllVertexColorsOnlyTasks.Num() > 0) {

		currentGetAllVertexColorsOnlyTasks.GenerateValueArray(tasksMeshComponents_Local);
		totalMeshComponents_Local.Append(tasksMeshComponents_Local);
	}


	if (currentGetColorsWithinAreaTasks.Num() > 0) {

		currentGetColorsWithinAreaTasks.GenerateValueArray(tasksMeshComponents_Local);
		totalMeshComponents_Local.Append(tasksMeshComponents_Local);
	}


	if (currentGetColorsWithinAreaTasks.Num() > 0) {

		currentGetColorsWithinAreaTasks.GenerateValueArray(tasksMeshComponents_Local);
		totalMeshComponents_Local.Append(tasksMeshComponents_Local);
	}


	if (currentPaintAtLocationTasks.Num() > 0) {

		currentPaintAtLocationTasks.GenerateValueArray(tasksMeshComponents_Local);
		totalMeshComponents_Local.Append(tasksMeshComponents_Local);
	}


	if (currentPaintWithinAreaTasks.Num() > 0) {

		currentPaintWithinAreaTasks.GenerateValueArray(tasksMeshComponents_Local);
		totalMeshComponents_Local.Append(tasksMeshComponents_Local);
	}


	if (currentPaintEntireMeshTasks.Num() > 0) {

		currentPaintEntireMeshTasks.GenerateValueArray(tasksMeshComponents_Local);
		totalMeshComponents_Local.Append(tasksMeshComponents_Local);
	}


	if (currentPaintColorSnippetTasks.Num() > 0) {

		currentPaintColorSnippetTasks.GenerateValueArray(tasksMeshComponents_Local);
		totalMeshComponents_Local.Append(tasksMeshComponents_Local);
	}


	if (currentSetMeshComponentVertexColorsTasks.Num() > 0) {

		currentSetMeshComponentVertexColorsTasks.GenerateValueArray(tasksMeshComponents_Local);
		totalMeshComponents_Local.Append(tasksMeshComponents_Local);
	}


	if (currentSetMeshComponentVertexColorsUsingSerializedStringTasks.Num() > 0) {

		currentSetMeshComponentVertexColorsUsingSerializedStringTasks.GenerateValueArray(tasksMeshComponents_Local);
		totalMeshComponents_Local.Append(tasksMeshComponents_Local);
	}


	return totalMeshComponents_Local;
}


//-------------------------------------------------------

// Get All Physics Surfaces To Apply As String

FString UVertexPaintDetectionComponent::GetAllPhysicsSurfacesToApplyAsString(const FVertexPaintColorSettingStruct& colorSettings) {

	FString physicsSurfaceToApplyTotal_Local = "";

	for (int i = 0; i < colorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.physicsSurfacesToApply.Num(); i++) {

		physicsSurfaceToApplyTotal_Local += *StaticEnum<EPhysicalSurface>()->GetDisplayNameTextByValue(colorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.physicsSurfacesToApply[i].GetValue()).ToString();

		// If not last index
		if (i + 1 != colorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.physicsSurfacesToApply.Num())
			physicsSurfaceToApplyTotal_Local += ", ";
	}

	return physicsSurfaceToApplyTotal_Local;
}


//-------------------------------------------------------

// Check If Registered And Initialized

void UVertexPaintDetectionComponent::CheckIfRegisteredAndInitialized() {

	if (!UVertexPaintFunctionLibrary::IsWorldValid(GetWorld())) return;


	// Necessary in case you Add the Component in Runtime in BP, then immediately call Paint Jobs. Otherwise you would have to use a Delay which is undesirable. 
	if (!IsRegistered() || !HasBeenInitialized() || !IsActive() || !IsValid(this)) {

		if (!IsRegistered())
			RegisterComponent();

		if (!HasBeenInitialized())
			InitializeComponent();

		if (!IsActive())
			SetActive(true);
	}
}


//-------------------------------------------------------

// Clamp Paint Settings

FVertexDetectRGBAStruct UVertexPaintDetectionComponent::ClampPaintSettings(FVertexDetectRGBAStruct applyVertexColorSettings) {

	// Clamps it so if the user sets like 0.000001, we will paint at the lowest amount of 1 when converted to FColor which range from 0-255
	applyVertexColorSettings.applyColorsOnRedChannel.amountToApply = GetClampedPaintStrength(applyVertexColorSettings.applyColorsOnRedChannel.amountToApply);
	applyVertexColorSettings.applyColorsOnGreenChannel.amountToApply = GetClampedPaintStrength(applyVertexColorSettings.applyColorsOnGreenChannel.amountToApply);
	applyVertexColorSettings.applyColorsOnBlueChannel.amountToApply = GetClampedPaintStrength(applyVertexColorSettings.applyColorsOnBlueChannel.amountToApply);
	applyVertexColorSettings.applyColorsOnAlphaChannel.amountToApply = GetClampedPaintStrength(applyVertexColorSettings.applyColorsOnAlphaChannel.amountToApply);

	applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintStrengthToApply = GetClampedPaintStrength(applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintStrengthToApply);
	applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintStrengtOnChannelsWithoutThePhysicsSurface = GetClampedPaintStrength(applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintStrengtOnChannelsWithoutThePhysicsSurface);


	applyVertexColorSettings.applyColorsUsingPhysicsSurface.physicsSurfacePaintLimit.paintLimitOnPhysicsSurface = UKismetMathLibrary::FClamp(applyVertexColorSettings.applyColorsUsingPhysicsSurface.physicsSurfacePaintLimit.paintLimitOnPhysicsSurface, 0, 1);

	applyVertexColorSettings.vertexColorChannelsPaintLimit.paintLimitOnRedChannel = UKismetMathLibrary::FClamp(applyVertexColorSettings.vertexColorChannelsPaintLimit.paintLimitOnRedChannel, 0, 1);
	applyVertexColorSettings.vertexColorChannelsPaintLimit.paintLimitOnGreenChannel = UKismetMathLibrary::FClamp(applyVertexColorSettings.vertexColorChannelsPaintLimit.paintLimitOnGreenChannel, 0, 1);
	applyVertexColorSettings.vertexColorChannelsPaintLimit.paintLimitOnBlueChannel = UKismetMathLibrary::FClamp(applyVertexColorSettings.vertexColorChannelsPaintLimit.paintLimitOnBlueChannel, 0, 1);
	applyVertexColorSettings.vertexColorChannelsPaintLimit.paintLimitOnAlphaChannel = UKismetMathLibrary::FClamp(applyVertexColorSettings.vertexColorChannelsPaintLimit.paintLimitOnAlphaChannel, 0, 1);

	return applyVertexColorSettings;
}


//-------------------------------------------------------

// Clamp Paint Limits For Apply Colors Directly Settings

FVertexPaintingLimitRGBA UVertexPaintDetectionComponent::ClampPaintLimitsForApplyColorsDirectlySettings(FVertexPaintingLimitRGBA applyColorsDirectlyPaintLimit) {

	applyColorsDirectlyPaintLimit.paintLimitOnRedChannel = UKismetMathLibrary::FClamp(applyColorsDirectlyPaintLimit.paintLimitOnRedChannel, 0, 1);
	applyColorsDirectlyPaintLimit.paintLimitOnGreenChannel = UKismetMathLibrary::FClamp(applyColorsDirectlyPaintLimit.paintLimitOnGreenChannel, 0, 1);
	applyColorsDirectlyPaintLimit.paintLimitOnBlueChannel = UKismetMathLibrary::FClamp(applyColorsDirectlyPaintLimit.paintLimitOnBlueChannel, 0, 1);
	applyColorsDirectlyPaintLimit.paintLimitOnAlphaChannel = UKismetMathLibrary::FClamp(applyColorsDirectlyPaintLimit.paintLimitOnAlphaChannel, 0, 1);


	return applyColorsDirectlyPaintLimit;
}


//-------------------------------------------------------

// Get Clamped Paint Strength

float UVertexPaintDetectionComponent::GetClampedPaintStrength(float paintStrength) {

	if (paintStrength > 0)
		paintStrength = UKismetMathLibrary::FClamp(paintStrength, 0.005, 1);

	else if (paintStrength < 0)
		paintStrength = UKismetMathLibrary::FClamp(paintStrength, -1, -0.005);

	return paintStrength;
}


//-------------------------------------------------------

// Resolve Paint Conditions

FVertexPaintColorSettingStruct UVertexPaintDetectionComponent::ResolvePaintConditions(FVertexPaintColorSettingStruct paintColorSettings) {

	if (!IsValid(paintColorSettings.actor)) return paintColorSettings;


	TArray<FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation> onlyAffectWithDirToLocTemp;
	TArray<FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation> onlyAffectWithinDirectionTemp;
	TArray<FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ> ifAboveOrBelowWorldZTemp;
	TArray<FVertexDetectPaintColorCondition_IsWithinColorRangeStruct> isWithinColorRangeTemp;
	TArray<FVertexDetectPaintColorCondition_IsBoneStruct> isBoneTemp;
	TArray<FVertexDetectPaintColorCondition_HasLineOfSightStruct> lineOfSightTemp;


	for (int i = 0; i < 5; i++) {

		// Gets the initial condition settings

		switch (i) {

		case 0:

			onlyAffectWithDirToLocTemp = paintColorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintUsingPhysicsSurfaceConditions.onlyAffectVerticesWithDirectionToActorOrLocation;
			onlyAffectWithinDirectionTemp = paintColorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintUsingPhysicsSurfaceConditions.onlyAffectVerticesWithinDirectionFromActorOrLocation;
			ifAboveOrBelowWorldZTemp = paintColorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintUsingPhysicsSurfaceConditions.ifVertexIsAboveOrBelowWorldZ;
			isWithinColorRangeTemp = paintColorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintUsingPhysicsSurfaceConditions.ifVertexColorIsWithinRange;
			isBoneTemp = paintColorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintUsingPhysicsSurfaceConditions.ifVertexIsOnBone;
			lineOfSightTemp = paintColorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintUsingPhysicsSurfaceConditions.ifVertexHasLineOfSightTo;
			break;

		case 1:

			onlyAffectWithDirToLocTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnRedChannel.paintConditions.onlyAffectVerticesWithDirectionToActorOrLocation;
			onlyAffectWithinDirectionTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnRedChannel.paintConditions.onlyAffectVerticesWithinDirectionFromActorOrLocation;
			ifAboveOrBelowWorldZTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnRedChannel.paintConditions.ifVertexIsAboveOrBelowWorldZ;
			isWithinColorRangeTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnRedChannel.paintConditions.ifVertexColorIsWithinRange;
			isBoneTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnRedChannel.paintConditions.ifVertexIsOnBone;
			lineOfSightTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnRedChannel.paintConditions.ifVertexHasLineOfSightTo;
			break;

		case 2:
			onlyAffectWithDirToLocTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnGreenChannel.paintConditions.onlyAffectVerticesWithDirectionToActorOrLocation;
			onlyAffectWithinDirectionTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnGreenChannel.paintConditions.onlyAffectVerticesWithinDirectionFromActorOrLocation;
			ifAboveOrBelowWorldZTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnGreenChannel.paintConditions.ifVertexIsAboveOrBelowWorldZ;
			isWithinColorRangeTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnGreenChannel.paintConditions.ifVertexColorIsWithinRange;
			isBoneTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnGreenChannel.paintConditions.ifVertexIsOnBone;
			lineOfSightTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnGreenChannel.paintConditions.ifVertexHasLineOfSightTo;
			break;

		case 3:
			onlyAffectWithDirToLocTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.paintConditions.onlyAffectVerticesWithDirectionToActorOrLocation;
			onlyAffectWithinDirectionTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.paintConditions.onlyAffectVerticesWithinDirectionFromActorOrLocation;
			ifAboveOrBelowWorldZTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.paintConditions.ifVertexIsAboveOrBelowWorldZ;
			isWithinColorRangeTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.paintConditions.ifVertexColorIsWithinRange;
			isBoneTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.paintConditions.ifVertexIsOnBone;
			lineOfSightTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.paintConditions.ifVertexHasLineOfSightTo;
			break;

		case 4:
			onlyAffectWithDirToLocTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.paintConditions.onlyAffectVerticesWithDirectionToActorOrLocation;
			onlyAffectWithinDirectionTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.paintConditions.onlyAffectVerticesWithinDirectionFromActorOrLocation;
			ifAboveOrBelowWorldZTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.paintConditions.ifVertexIsAboveOrBelowWorldZ;
			isWithinColorRangeTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.paintConditions.ifVertexColorIsWithinRange;
			isBoneTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.paintConditions.ifVertexIsOnBone;
			lineOfSightTemp = paintColorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.paintConditions.ifVertexHasLineOfSightTo;
			break;
		}


		// Clamps the Strengths if Condition is not met as well, like the other strengths

		for (int j = 0; j < onlyAffectWithDirToLocTemp.Num(); j++) {

			onlyAffectWithDirToLocTemp[j].colorStrengthIfThisConditionIsNotMet = GetClampedPaintStrength(onlyAffectWithDirToLocTemp[j].colorStrengthIfThisConditionIsNotMet);

			if (IsValid(onlyAffectWithDirToLocTemp[j].actor))
				onlyAffectWithDirToLocTemp[j].location = onlyAffectWithDirToLocTemp[j].actor->GetActorLocation();
		}

		for (int j = 0; j < onlyAffectWithinDirectionTemp.Num(); j++) {

			onlyAffectWithinDirectionTemp[j].colorStrengthIfThisConditionIsNotMet = GetClampedPaintStrength(onlyAffectWithinDirectionTemp[j].colorStrengthIfThisConditionIsNotMet);

			if (IsValid(onlyAffectWithinDirectionTemp[j].actor))
				onlyAffectWithinDirectionTemp[j].location = onlyAffectWithinDirectionTemp[j].actor->GetActorLocation();
		}

		for (int j = 0; j < ifAboveOrBelowWorldZTemp.Num(); j++) {

			ifAboveOrBelowWorldZTemp[j].colorStrengthIfThisConditionIsNotMet = GetClampedPaintStrength(ifAboveOrBelowWorldZTemp[j].colorStrengthIfThisConditionIsNotMet);
		}

		for (int j = 0; j < isWithinColorRangeTemp.Num(); j++) {

			isWithinColorRangeTemp[j].colorStrengthIfThisConditionIsNotMet = GetClampedPaintStrength(isWithinColorRangeTemp[j].colorStrengthIfThisConditionIsNotMet);
		}

		for (int j = 0; j < isBoneTemp.Num(); j++) {

			isBoneTemp[j].colorStrengthIfThisConditionIsNotMet = GetClampedPaintStrength(isBoneTemp[j].colorStrengthIfThisConditionIsNotMet);
		}

		for (int j = 0; j < lineOfSightTemp.Num(); j++) {

			lineOfSightTemp[j].colorStrengthIfThisConditionIsNotMet = GetClampedPaintStrength(lineOfSightTemp[j].colorStrengthIfThisConditionIsNotMet);

			if (IsValid(lineOfSightTemp[j].ifVertexHasLineOfSightToActor))
				lineOfSightTemp[j].ifVertexHasLineOfSightToPosition = lineOfSightTemp[j].ifVertexHasLineOfSightToActor->GetActorLocation();
		}



		// Updates paintColorSettings with the clamped settings and resolved actor locations

		switch (i) {

		case 0:
			paintColorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintUsingPhysicsSurfaceConditions.onlyAffectVerticesWithDirectionToActorOrLocation = onlyAffectWithDirToLocTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintUsingPhysicsSurfaceConditions.onlyAffectVerticesWithinDirectionFromActorOrLocation = onlyAffectWithinDirectionTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintUsingPhysicsSurfaceConditions.ifVertexIsAboveOrBelowWorldZ = ifAboveOrBelowWorldZTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintUsingPhysicsSurfaceConditions.ifVertexColorIsWithinRange = isWithinColorRangeTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintUsingPhysicsSurfaceConditions.ifVertexIsOnBone = isBoneTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintUsingPhysicsSurfaceConditions.ifVertexHasLineOfSightTo = lineOfSightTemp;
			
			break;
		case 1:
			paintColorSettings.applyVertexColorSettings.applyColorsOnRedChannel.paintConditions.onlyAffectVerticesWithDirectionToActorOrLocation = onlyAffectWithDirToLocTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsOnRedChannel.paintConditions.onlyAffectVerticesWithinDirectionFromActorOrLocation = onlyAffectWithinDirectionTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsOnRedChannel.paintConditions.ifVertexIsAboveOrBelowWorldZ = ifAboveOrBelowWorldZTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsOnRedChannel.paintConditions.ifVertexColorIsWithinRange = isWithinColorRangeTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsOnRedChannel.paintConditions.ifVertexIsOnBone = isBoneTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsOnRedChannel.paintConditions.ifVertexHasLineOfSightTo = lineOfSightTemp;
			break;
		case 2:
			paintColorSettings.applyVertexColorSettings.applyColorsOnGreenChannel.paintConditions.onlyAffectVerticesWithDirectionToActorOrLocation = onlyAffectWithDirToLocTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsOnGreenChannel.paintConditions.onlyAffectVerticesWithinDirectionFromActorOrLocation = onlyAffectWithinDirectionTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsOnGreenChannel.paintConditions.ifVertexIsAboveOrBelowWorldZ = ifAboveOrBelowWorldZTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsOnGreenChannel.paintConditions.ifVertexColorIsWithinRange = isWithinColorRangeTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsOnGreenChannel.paintConditions.ifVertexIsOnBone = isBoneTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsOnGreenChannel.paintConditions.ifVertexHasLineOfSightTo = lineOfSightTemp;
			break;
		case 3:
			paintColorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.paintConditions.onlyAffectVerticesWithDirectionToActorOrLocation = onlyAffectWithDirToLocTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.paintConditions.onlyAffectVerticesWithinDirectionFromActorOrLocation = onlyAffectWithinDirectionTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.paintConditions.ifVertexIsAboveOrBelowWorldZ = ifAboveOrBelowWorldZTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.paintConditions.ifVertexColorIsWithinRange = isWithinColorRangeTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.paintConditions.ifVertexIsOnBone = isBoneTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.paintConditions.ifVertexHasLineOfSightTo = lineOfSightTemp;
			break;
		case 4:
			paintColorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.paintConditions.onlyAffectVerticesWithDirectionToActorOrLocation = onlyAffectWithDirToLocTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.paintConditions.onlyAffectVerticesWithinDirectionFromActorOrLocation = onlyAffectWithinDirectionTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.paintConditions.ifVertexIsAboveOrBelowWorldZ = ifAboveOrBelowWorldZTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.paintConditions.ifVertexColorIsWithinRange = isWithinColorRangeTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.paintConditions.ifVertexIsOnBone = isBoneTemp;
			paintColorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.paintConditions.ifVertexHasLineOfSightTo = lineOfSightTemp;
			break;
		}
	}

	return paintColorSettings;
}


//-------------------------------------------------------

// Fill Calculate Colors Info Fundementals

void UVertexPaintDetectionComponent::FillCalculateColorsInfoFundementals(FCalculateColorsInfo& calculateColorsInfo) {

	if (!IsValid(calculateColorsInfo.fundementalStruct.meshComponent) || !IsValid(calculateColorsInfo.fundementalStruct.taskWorld)) return;


	UStaticMeshComponent* staticMeshComponentTemp = nullptr;
	USplineMeshComponent* splineMeshComponentTemp = nullptr;
	USkeletalMeshComponent* skeletalMeshComponentTemp = nullptr;
	UInstancedStaticMeshComponent* instancedStaticMeshComponentTemp = nullptr;

	const UObject* sourceMeshTemp = UVertexPaintFunctionLibrary::GetMeshComponentSourceMesh(calculateColorsInfo.fundementalStruct.meshComponent);
	USkeletalMesh* skelMeshTemp = nullptr;
	USkinnedMeshComponent* skinnedMeshComp_Local = nullptr;
	USkinnedMeshComponent* skinnedMasterComp_Local = nullptr;


	staticMeshComponentTemp = Cast<UStaticMeshComponent>(calculateColorsInfo.fundementalStruct.meshComponent);

	if (staticMeshComponentTemp) {

		calculateColorsInfo.lodsToLoopThrough = staticMeshComponentTemp->GetStaticMesh()->GetRenderData()->LODResources.Num();

		splineMeshComponentTemp = Cast<USplineMeshComponent>(calculateColorsInfo.fundementalStruct.meshComponent);

		if (!splineMeshComponentTemp)
			instancedStaticMeshComponentTemp = Cast<UInstancedStaticMeshComponent>(calculateColorsInfo.fundementalStruct.meshComponent);
	}

	else {

		skeletalMeshComponentTemp = Cast<USkeletalMeshComponent>(calculateColorsInfo.fundementalStruct.meshComponent);
	}


#if ENGINE_MAJOR_VERSION == 5

	UDynamicMeshComponent* dynamicMeshComponentTemp = nullptr;
	UGeometryCollectionComponent* geometryCollectionCompTemp = nullptr;

	if (!staticMeshComponentTemp && !skeletalMeshComponentTemp) {

		dynamicMeshComponentTemp = Cast<UDynamicMeshComponent>(calculateColorsInfo.fundementalStruct.meshComponent);

		if (!dynamicMeshComponentTemp)
			geometryCollectionCompTemp = Cast<UGeometryCollectionComponent>(calculateColorsInfo.fundementalStruct.meshComponent);
	}

#endif


	if (skeletalMeshComponentTemp) {

		calculateColorsInfo.lodsToLoopThrough = skeletalMeshComponentTemp->GetSkeletalMeshRenderData()->LODRenderData.Num();
		skeletalMeshComponentTemp->GetBoneNames(calculateColorsInfo.skeletalMeshBonesNames);
		skinnedMeshComp_Local = skeletalMeshComponentTemp;

#if ENGINE_MAJOR_VERSION == 4

		skelMeshTemp = skeletalMeshComponentTemp->SkeletalMesh;

		// If it has a Master Component then we had to use that when calling CacheRefToLocalMatrices, otherwise we got a crash
		if (skeletalMeshComponentTemp->MasterPoseComponent.Get())
			skinnedMasterComp_Local = skeletalMeshComponentTemp->MasterPoseComponent.Get();


#elif ENGINE_MAJOR_VERSION == 5


#if ENGINE_MINOR_VERSION == 0

		skelMeshTemp = skeletalMeshComponentTemp->SkeletalMesh.Get();

		// If it has a Master Component then we had to use that when calling CacheRefToLocalMatrices, otherwise we got a crash
		if (skeletalMeshComponentTemp->MasterPoseComponent.Get())
			skinnedMasterComp_Local = skeletalMeshComponentTemp->MasterPoseComponent.Get();

#else

		skelMeshTemp = skeletalMeshComponentTemp->GetSkeletalMeshAsset();

		// If it has a Master Component then we had to use that when calling CacheRefToLocalMatrices, otherwise we got a crash
		if (skeletalMeshComponentTemp->LeaderPoseComponent.Get())
			skinnedMasterComp_Local = skeletalMeshComponentTemp->LeaderPoseComponent.Get();

#endif
#endif

		// Only if we actually had a Master component we set the MasterSkinned to that, ohterwise the skeletal mesh comp is the Master
		if (skinnedMasterComp_Local)
			calculateColorsInfo.vertexPaintSkelComponentsMasterSkinnedComp = skinnedMasterComp_Local;
		else
			calculateColorsInfo.vertexPaintSkelComponentsMasterSkinnedComp = skeletalMeshComponentTemp;

		// Caches the Ref To Local as well when creating the task, so when the task starts, which could be several frames later if the task queue is high, we will still base the calculations of the same skeletal mesh pose as when the task got created. 
		if (calculateColorsInfo.vertexPaintSkelComponentsMasterSkinnedComp/* && calculateColorsInfo.fundementalStruct.skeletalMeshCachePoseOnTaskCreation*/)
			calculateColorsInfo.vertexPaintSkelComponentsMasterSkinnedComp->CacheRefToLocalMatrices(calculateColorsInfo.skeletalMeshRefToLocals);
	}


	// If Painting
	if (calculateColorsInfo.vertexPaintSettings.actor) {

		calculateColorsInfo.lodsToLoopThrough = UVertexPaintFunctionLibrary::GetAmountOfLODsToPaintOn(calculateColorsInfo.fundementalStruct.meshComponent, calculateColorsInfo.vertexPaintSettings.overrideLOD.overrideLODToPaintUpTo, calculateColorsInfo.vertexPaintSettings.overrideLOD.amountOfLODsToPaint);
	}

	// If Detecting, and set to only include vertex data for lod 0 in the callback, there's no reason to loop through more LODs, unlike painting, where you still need to paint on all LODs even though you only want LOD0 in the callback. 
	else if (calculateColorsInfo.vertexDetectSettings.actor) {

		if (calculateColorsInfo.fundementalStruct.callbackSettings.includeVertexDataOnlyForLOD0)
			calculateColorsInfo.lodsToLoopThrough = 1;
	}

	calculateColorsInfo.initialMeshVertexData.meshComp = calculateColorsInfo.fundementalStruct.meshComponent;
	calculateColorsInfo.initialMeshVertexData.meshSource = sourceMeshTemp;

	calculateColorsInfo.initialMeshVertexData.meshDataPerLOD.SetNum(calculateColorsInfo.lodsToLoopThrough, true);
	for (int i = 0; i < calculateColorsInfo.initialMeshVertexData.meshDataPerLOD.Num(); i++)
		calculateColorsInfo.initialMeshVertexData.meshDataPerLOD[i].lod = i;

	calculateColorsInfo.taskResult.meshVertexData = calculateColorsInfo.initialMeshVertexData; // Sets this as well in case the task immediately fails in between filling this and starting task, so we atleast can return the meshComp etc. with the task result. 
	calculateColorsInfo.vertexPaintActor = calculateColorsInfo.fundementalStruct.meshComponent->GetOwner();
	calculateColorsInfo.vertexPaintComponent = calculateColorsInfo.fundementalStruct.meshComponent;
	calculateColorsInfo.vertexPaintStaticMeshComponent = staticMeshComponentTemp;
	calculateColorsInfo.vertexPaintSplineMeshComponent = splineMeshComponentTemp;
	calculateColorsInfo.vertexPaintInstancedStaticMeshComponent = instancedStaticMeshComponentTemp;
	calculateColorsInfo.vertexPaintSkelComponent = skeletalMeshComponentTemp;
	calculateColorsInfo.vertexPaintSkelComponentsSkeletalMesh = skelMeshTemp;
	calculateColorsInfo.vertexPaintSourceMesh = sourceMeshTemp;
	calculateColorsInfo.vertexPaintMaterialDataAsset = UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset(calculateColorsInfo.fundementalStruct.meshComponent);
	calculateColorsInfo.paintOnMeshColorSettings = ResolvePaintConditions(calculateColorsInfo.paintOnMeshColorSettings);


	// If haven't specified an actor to run interfaces on then we default to the actor we're painting/detecting on
	if (!calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn)
		calculateColorsInfo.fundementalStruct.callbackSettings.objectToRunInterfacesOn = calculateColorsInfo.fundementalStruct.actor;


#if ENGINE_MAJOR_VERSION == 5

	calculateColorsInfo.vertexPaintDynamicMeshComponent = dynamicMeshComponentTemp;

	if (geometryCollectionCompTemp) {

		if (const UGeometryCollection* geometryCollection = geometryCollectionCompTemp->GetRestCollection()) {

			calculateColorsInfo.vertexPaintGeometryCollectionComponent = geometryCollectionCompTemp;
			calculateColorsInfo.vertexPaintGeometryCollection = const_cast<UGeometryCollection*>(geometryCollection);
			calculateColorsInfo.vertexPaintGeometryCollectionData = geometryCollection->GetGeometryCollection().Get();
		}
	}

#endif


	calculateColorsInfo.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.comparisonErrorTolerance = UKismetMathLibrary::MapRangeClamped(calculateColorsInfo.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.comparisonErrorTolerance, 0, 1, 0, 255);

	// If set to compare mesh colors to a color snippet, it has to be set, otherwise we set it to false so we don't loop through vertices for no reason if it for instance was a color snippet paint job and this was true. 
	if (calculateColorsInfo.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.compareMeshColorsToStoredColorSnippet && calculateColorsInfo.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.compareWithColorsSnippetTag.IsValid()) {

		// If valid then we makes sure the other variant to compare colors to color array is false and can't affect any logic
		calculateColorsInfo.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.compareMeshColorsToColorArrayAtLOD0 = false;

		// Sets the Snippet ID from the Tag
		TMap<FGameplayTag, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>> availableColorSnippetTags_Local;
		UVertexPaintFunctionLibrary::GetAllMeshColorSnippetsAsTags_Wrapper(calculateColorsInfo.fundementalStruct.meshComponent, availableColorSnippetTags_Local);

		if (calculateColorsInfo.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.compareWithColorsSnippetTag.IsValid() && availableColorSnippetTags_Local.Contains(calculateColorsInfo.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.compareWithColorsSnippetTag)) {

			calculateColorsInfo.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.compareWithColorsSnippetDataAssetInfo.colorSnippetID = calculateColorsInfo.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.compareWithColorsSnippetTag.GetTagName().ToString();
		}
	}

	else {

		// If not valid, maybe because not valid tag then makes sure the bool is false as well
		calculateColorsInfo.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.compareMeshColorsToStoredColorSnippet = false;
	}

	// If set to compare mesh colors to a color array, it has to be set, otherwise we set it to false so we don't loop through vertices for no reason if it for instance was a color snippet paint job and this was true. 
	if (calculateColorsInfo.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.compareMeshColorsToColorArrayAtLOD0 && calculateColorsInfo.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.colorArrayToCompareWith.Num() > 0) {

		// If valid then we makes sure the other variant to compare colors to color snippet is false and can't affect any logic
		calculateColorsInfo.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.compareMeshColorsToStoredColorSnippet = false;
	}

	else {

		// If not valid, maybe because not set color array, then makes sure the bool is false as well
		calculateColorsInfo.fundementalStruct.callbackSettings.compareMeshColorsToColorArray.compareMeshColorsToColorArrayAtLOD0 = false;
	}


	// Paint Color Snippets, Set Mesh Component Verte Colors regularly or with Serialized String only use LOD0 data, so for them we always propogate to other LODs. Paint Randomly over the Entire Mesh however has the option to do this since you might want to randomize on each LOD to save performance
	if (calculateColorsInfo.paintOnColorSnippetSettings.actor || calculateColorsInfo.setMeshComponentVertexColorsSettings.actor || calculateColorsInfo.setMeshComponentVertexColorsUsingSerializedStringSettings.actor || (calculateColorsInfo.paintOnEntireMeshSettings.actor && calculateColorsInfo.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh && calculateColorsInfo.paintOnEntireMeshSettings.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh_PropogateLOD0ToAllLODsMethod == Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod::ModifiedEngineMethod)) {

		if (calculateColorsInfo.lodsToLoopThrough > 1)
			calculateColorsInfo.propogateLOD0ToAllLODs = true;
	}


	if (calculateColorsInfo.fundementalStruct.multiThreadSettings.useMultithreadingForCalculations) {

		if (calculateColorsInfo.fundementalStruct.debugSettings.gameThreadSpecificDebugSymbols.drawVertexPositionDebugPoint || calculateColorsInfo.fundementalStruct.debugSettings.gameThreadSpecificDebugSymbols.drawVertexPositionDebugPointIfGotPaintApplied || calculateColorsInfo.fundementalStruct.debugSettings.gameThreadSpecificDebugSymbols.drawClothVertexPositionDebugPoint || calculateColorsInfo.fundementalStruct.debugSettings.gameThreadSpecificDebugSymbols.drawVertexNormalDebugArrow) {


			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Paint/Detect Task is set to Draw Debug Symbols at Vertices but it only works if not Multithreading, i.e. on the Game Thread.");
		}
	}
}


//-------------------------------------------------------

// Check Valids

bool UVertexPaintDetectionComponent::CheckValidFundementals(const FVertexDetectFundementalStruct& taskFundementals, UPrimitiveComponent* component) {


	if (!IsValid(component)) {

		if (taskFundementals.debugSettings.printLogsToOutputLog)
			UE_LOG(RuntimeVertexColorPlugin, Warning, TEXT("Trying to Paint/Detect but Component provided is not Valid! Have you connected anything to the component pin on the Node?"));

		return false;
	}

	if (!UVertexPaintFunctionLibrary::IsWorldValid(component->GetWorld())) {

		if (taskFundementals.debugSettings.printLogsToOutputLog)
			UE_LOG(RuntimeVertexColorPlugin, Warning, TEXT("World not Valid"));

		return false;
	}

	if (!IsInGameThread()) {

		RVPDP_LOG(taskFundementals.debugSettings, FColor::Red, "Trying to Start a Task but not from Game Thread!");

		return false;
	}


	UStaticMeshComponent* staticMeshComp_Local = nullptr;
	USkeletalMeshComponent* skelMeshComp_Local = nullptr;
	UInstancedStaticMeshComponent* instancedMeshComp_Local = nullptr;
	USkeletalMesh* skelMesh_Local = nullptr;

	staticMeshComp_Local = Cast<UStaticMeshComponent>(component);

	if (!staticMeshComp_Local) {

		skelMeshComp_Local = Cast<USkeletalMeshComponent>(component);
	}
	else {

		instancedMeshComp_Local = Cast<UInstancedStaticMeshComponent>(component);
	}



#if ENGINE_MAJOR_VERSION == 5

	UDynamicMeshComponent* dynamicMeshComp_Local = nullptr;
	UGeometryCollectionComponent* geometryCollectionComp_Local = nullptr;

	if (!staticMeshComp_Local && !skelMeshComp_Local) {

		dynamicMeshComp_Local = Cast<UDynamicMeshComponent>(component);

		if (!dynamicMeshComp_Local)
			geometryCollectionComp_Local = Cast<UGeometryCollectionComponent>(component);
	}


	if (!staticMeshComp_Local && !skelMeshComp_Local && !dynamicMeshComp_Local && !geometryCollectionComp_Local && !instancedMeshComp_Local) {

		RVPDP_LOG(taskFundementals.debugSettings, FColor::Red, "Trying to Paint/Detect but Component %s is not a Static, Spline, Skeletal, Dynamic, Instanced or Geometry Collection Mesh!", *component->GetName());

		return false;
	}

#else

	if (!staticMeshComp_Local && !skelMeshComp_Local) {

		RVPDP_LOG(taskFundementals.debugSettings, FColor::Red, "Trying to Paint/Detect but Component %s is not a Static, Spline or Skeletal Mesh!", *component->GetName());

		return false;
	}

#endif


	if (staticMeshComp_Local) {

		if (!IsValid(staticMeshComp_Local->GetStaticMesh())) {


			RVPDP_LOG(taskFundementals.debugSettings, FColor::Red, "Trying to Paint/Detect on Static Mesh Component %s but it has no Mesh is Set", *staticMeshComp_Local->GetName());

			return false;
		}

		if (!staticMeshComp_Local->GetStaticMesh()->bAllowCPUAccess) {

			RVPDP_LOG(taskFundementals.debugSettings, FColor::Red, "Trying to Paint/Detect on Static Mesh but it's CPU Access is not set to True");

			return false;
		}


#if ENGINE_MAJOR_VERSION == 5

		// Note ->NaniteSettings was only available in Editor, so had to use this to check if nanite is enabled. 
		if (staticMeshComp_Local->GetStaticMesh().Get()->HasValidNaniteData()) {

			RVPDP_LOG(taskFundementals.debugSettings, FColor::Red, "Trying to Paint/Detect on Static Mesh that has Nanite Enabled! Vertex Painting on Nanite Meshes is currently not supported.");

			return false;
		}

#endif


		if (!staticMeshComp_Local->GetBodySetup()) {

			RVPDP_LOG(taskFundementals.debugSettings, FColor::Red, "Trying to Paint/Detect on Static Mesh but it doesn't have a Body Setup");

			return false;
		}


		RVPDP_LOG(taskFundementals.debugSettings, FColor::Cyan, "Trying to Paint/Detect on Static Mesh Component, with Source Mesh: %s", *staticMeshComp_Local->GetStaticMesh()->GetName());
	}

	else if (skelMeshComp_Local) {


#if ENGINE_MAJOR_VERSION == 4

		skelMesh_Local = skelMeshComp_Local->SkeletalMesh;

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

		skelMesh_Local = skelMeshComp_Local->SkeletalMesh.Get();

#else

		skelMesh_Local = skelMeshComp_Local->GetSkeletalMeshAsset();

#endif
#endif


		if (!IsValid(skelMesh_Local)) {

			RVPDP_LOG(taskFundementals.debugSettings, FColor::Red, "Trying to Paint/Detect on Skeletal Mesh Component but source mesh is null");

			return false;
		}

		else {

			RVPDP_LOG(taskFundementals.debugSettings, FColor::Cyan, "Trying to Paint/Detect on Skeletal Mesh Component, with Source Mesh: %s", *skelMesh_Local->GetName());
		}


		if (!skelMeshComp_Local->GetSkeletalMeshRenderData()) {

			RVPDP_LOG(taskFundementals.debugSettings, FColor::Red, "Trying to Paint/Detect on Skeletal Mesh but it hasn't properly been initialized yet because it's Skeletal Mesh Render Data isn't valid. ");

			return false;
		}

		if (!skelMeshComp_Local->GetSkeletalMeshRenderData()->IsInitialized()) {

			RVPDP_LOG(taskFundementals.debugSettings, FColor::Red, "Trying to Paint/Detect on Skeletal Mesh %s but it's SkeletalMeshRenderData isn't Initialized yet. ", *component->GetOwner()->GetName());

			return false;
		}


		if (!skelMesh_Local->GetResourceForRendering()) {

			RVPDP_LOG(taskFundementals.debugSettings, FColor::Red, "Trying to Paint/Detect on Skeletal Mesh %s but it has invalid ResourceForRendering!", *component->GetOwner()->GetName());

			return false;
		}


		// Could get a crash very rarely if switching skeletal meshes and painting every frame, so added these for extra checks so we hopefully can't create a task if these aren't valid. We also have these in the task itself in case they become invalid after this. 
		for (int currentLOD_Local = 0; currentLOD_Local < skelMeshComp_Local->GetSkeletalMeshRenderData()->LODRenderData.Num(); currentLOD_Local++) {


			const FSkeletalMeshLODRenderData& skelMeshRenderData_Local = skelMeshComp_Local->GetSkeletalMeshRenderData()->LODRenderData[currentLOD_Local];

			if (skelMeshRenderData_Local.HasClothData()) {

				if (!skelMeshRenderData_Local.ClothVertexBuffer.IsInitialized()) {

					RVPDP_LOG(taskFundementals.debugSettings, FColor::Red, "Trying to Paint/Detect on Skeletal Mesh with Cloth but cloth vertex buffer hasn't properly been initialized yet.");

					return false;
				}
			}

			if (!skelMeshRenderData_Local.StaticVertexBuffers.StaticMeshVertexBuffer.IsInitialized() || !skelMeshRenderData_Local.StaticVertexBuffers.StaticMeshVertexBuffer.TangentsVertexBuffer.IsInitialized() || !skelMeshRenderData_Local.StaticVertexBuffers.StaticMeshVertexBuffer.GetTangentData()) {

				RVPDP_LOG(taskFundementals.debugSettings, FColor::Red, "Trying to Paint/Detect on Skeletal Mesh but LOD %i StaticMeshVertexBuffer, TangentVertexBuffer or TangentData isn't initialized yet. ", currentLOD_Local);

				return false;
			}
		}
	}

	else if (instancedMeshComp_Local) {

		if (taskFundementals.componentItem < 0) {

			RVPDP_LOG(taskFundementals.debugSettings, FColor::Red, "Trying to Paint/Detect on Instanced Mesh %s but the Item provided is less than 0, so we can't get the specific instance and can calculate location properly. ", *instancedMeshComp_Local->GetName());

			return false;
		}
	}

#if ENGINE_MAJOR_VERSION == 5

	else if (dynamicMeshComp_Local) {

		if (dynamicMeshComp_Local->GetDynamicMesh()) {


			UE::Geometry::FDynamicMesh3* dynamicMesh3 = nullptr;
			dynamicMesh3 = &dynamicMeshComp_Local->GetDynamicMesh()->GetMeshRef();

			if (dynamicMesh3) {

				// Enable Vertex Colors so we can get them when running paint / Detect jobs
				if (!dynamicMesh3->HasVertexColors()) {

					dynamicMesh3->EnableVertexColors(FVector3f(0, 0, 0));
				}

				/*
				* If we Enable Normals and UVs, we apparently Set them to be whatever the initial value we give here as well, which may mess up something that the user want to have depending on the shape they've made. Think this is meant to be set somewhere where the dynamic mesh is being created, and if set correct there, the HasUVs and HasVertexNormals should be true and we should be able to get them later .
				*
				if (!dynamicMeshComp_Local->GetDynamicMesh()->GetMeshPtr()->HasVertexUVs())
					dynamicMeshComp_Local->GetDynamicMesh()->GetMeshPtr()->EnableVertexUVs(FVector2f(0, 1));

				if (!dynamicMeshComp_Local->GetDynamicMesh()->GetMeshPtr()->HasVertexNormals())
					dynamicMeshComp_Local->GetDynamicMesh()->GetMeshPtr()->EnableVertexNormals(FVector3f(0, 0, 1));
				*/

				RVPDP_LOG(taskFundementals.debugSettings, FColor::Cyan, "Trying to Paint/Detect on Dynamic Mesh Component: %s", *dynamicMeshComp_Local->GetName());
			}

			else {

				RVPDP_LOG(taskFundementals.debugSettings, FColor::Red, "Trying to Paint/Detect on Dynamic Mesh Component: %s but DynamicMesh Object GetMeshPtr is null. ", *dynamicMeshComp_Local->GetName());

				return false;
			}
		}

		else {

			RVPDP_LOG(taskFundementals.debugSettings, FColor::Red, "Trying to Paint/Detect on Dynamic Mesh Component: %s but couldn't GetDynamicMesh Object. ", *dynamicMeshComp_Local->GetName());

			return false;
		}
	}

	else if (geometryCollectionComp_Local) {


		// Geometry Collection RebuildRenderData is only available from 5.3 so any version before that unfortunately can't paint on Geometry Collection Components. 

#if WITH_EDITOR



#if ENGINE_MINOR_VERSION >= 3

		if (geometryCollectionComp_Local->GetRestCollection()) {

			TSharedPtr<FGeometryCollection, ESPMode::ThreadSafe> geometryCollectionData = geometryCollectionComp_Local->GetRestCollection()->GetGeometryCollection();


			if (geometryCollectionData.Get()) {

				RVPDP_LOG(taskFundementals.debugSettings, FColor::Cyan, "Trying to Paint/Detect on Geometry Collection Component with Rest Collection: %s", *geometryCollectionComp_Local->GetRestCollection()->GetName());
			}

			else {

				RVPDP_LOG(taskFundementals.debugSettings, FColor::Red, "Trying to Paint/Detect on Geometry Collection Component Geometry Collection Data isn't valid!");
			}
		}

		else {

			RVPDP_LOG(taskFundementals.debugSettings, FColor::Red, "Trying to Paint/Detect on Geometry Collection Component but couldn't get Rest Collection!");
		}

#else

		RVPDP_LOG(taskFundementals.debugSettings, FColor::Red, "Trying to Paint/Detect on Geometry Collection Component but Engine Version is not 5.3 or up!");

		return false;

#endif

#else

		RVPDP_LOG(taskFundementals.debugSettings, FColor::Red, "Trying to Paint/Detect on Geometry Collection Component but Not in Editor Time. You can currently only paint on them in Editor since the GeometryCollection->RebuildRenderData is Editor Only!");

		return false;

#endif

	}
#endif 

	return true;
}

bool UVertexPaintDetectionComponent::CheckValidVertexPaintSettings(const FVertexPaintStruct& vertexPaintSettings) {

	if (!IsValid(vertexPaintSettings.actor)) return false;
	if (!IsValid(vertexPaintSettings.actor->GetWorld())) return false;
	if (!IsValid(vertexPaintSettings.meshComponent)) return false;

	// Can ignore the task queue limit, in case you need to load a game and queue a bunch of paint task but just once
	if (!vertexPaintSettings.ignoreTaskQueueLimit) {

		int maxAllowedTasks_Local = GetDefault<UVertexPaintDetectionSettings>()->vertexPaintAndDetectionPlugin_MaxAmountOfAllowedTasksPerMesh;
		int taskAmount_Local = 0;

		if (UVertexPaintFunctionLibrary::GetVertexPaintTaskQueue(vertexPaintSettings.meshComponent))
			taskAmount_Local = UVertexPaintFunctionLibrary::GetVertexPaintTaskQueue(vertexPaintSettings.meshComponent)->GetAmountOfPaintTasksComponentHas(vertexPaintSettings.meshComponent);

		if (taskAmount_Local >= maxAllowedTasks_Local) {

			// Always prints this to log so users can see in the output that something may not be fully optimized
			UKismetSystemLibrary::PrintString(vertexPaintSettings.actor->GetWorld(), FString::Printf(TEXT("Mesh: %s Has over %i Allowed Paint Tasks Queue Limit and we don't Allow any more per Mesh as the Performance gets affected if the queue per mesh becomes too big since the TMaps become more expensive to use! You can change this in the Project Settings, but if the queue grows to big you will get unwanted result as well since it may take a while for a paint job to show it's effect. \nRecommend Reviewing how often you Add new Tasks. You can for instance Add a New Task when the Old one is Finished instead of adding them every frame. "), *vertexPaintSettings.meshComponent->GetName(), maxAllowedTasks_Local), vertexPaintSettings.debugSettings.printLogsToScreen, true, FColor::Red, vertexPaintSettings.debugSettings.printLogsToScreen_Duration);

			return false;
		}
	}


	if (vertexPaintSettings.overrideLOD.overrideLODToPaintUpTo) {

		if (vertexPaintSettings.overrideLOD.amountOfLODsToPaint <= 0) {

			RVPDP_LOG(vertexPaintSettings.debugSettings, FColor::Red, "Trying to Paint and Override LOD to paint on but LOD given is <= 0!");

			return false;
		}
	}


	// If anything is added onto the array
	if (vertexPaintSettings.canOnlyApplyPaintOnTheseActors.Num() > 0) {

		// If the actor we're trying to paint on isn't in the array. 
		if (!vertexPaintSettings.canOnlyApplyPaintOnTheseActors.Contains(vertexPaintSettings.actor)) {

			RVPDP_LOG(vertexPaintSettings.debugSettings, FColor::Red, "Actor: %s  isn't in the canOnlyApplyPaintOnTheseActors array that has been set. Either add the actor to it, or don't fill the array.", *vertexPaintSettings.actor->GetName());

			return false;
		}
	}


	if (auto skelMeshComp = Cast<USkeletalMeshComponent>(vertexPaintSettings.meshComponent)) {

		if (skelMeshComp->GetSkeletalMeshRenderData()) {

			if (skelMeshComp->GetSkeletalMeshRenderData()->LODRenderData.IsValidIndex(skelMeshComp->GetPredictedLODLevel())) {

				// If current viewable LOD has cloth then requires bWaitForParallelClothTask to be true
				if (skelMeshComp->GetSkeletalMeshRenderData()->LODRenderData[skelMeshComp->GetPredictedLODLevel()].HasClothData()) {

					if (!skelMeshComp->bWaitForParallelClothTask && vertexPaintSettings.affectClothPhysics) {

						RVPDP_LOG(vertexPaintSettings.debugSettings, FColor::Red, "Trying to Detect/Paint on Skeletal Mesh with Cloth, with affectClothPhysics to True but the Skeletal Mesh Component bWaitForParallelClothTask is false! You can set it to True by selecting the skeletal mesh component and set bWaitForParallelClothTask to True in the Details. ");

						return false;
					}
				}
			}
		}
	}


	if (vertexPaintSettings.overrideVertexColorsToApplySettings.overrideVertexColorsToApply && !IsValid(vertexPaintSettings.overrideVertexColorsToApplySettings.objectToRunOverrideVertexColorsInterface)) {

		RVPDP_LOG(vertexPaintSettings.debugSettings, FColor::Orange, "Trying to Paint and Override Vertex Colors To Apply, but the neither the Actor or Component set to run the Override Vertex Colors Interface is valid! Task will still run but the interface won't be called. ");
	}

	return true;
}

bool UVertexPaintDetectionComponent::CheckValidVertexPaintColorSettings(const FVertexPaintColorSettingStruct& colorSettings) {

	if (!IsValid(colorSettings.actor)) return false;
	if (!IsValid(colorSettings.actor->GetWorld())) return false;
	if (!IsValid(colorSettings.meshComponent)) return false;

	bool applyUsingPhysicsSurface_GotColorsToApplyOnMaterial = false;


	if (colorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.applyVertexColorUsingPhysicsSurface) {


		if (!UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset(colorSettings.meshComponent)) {

			RVPDP_LOG(colorSettings.debugSettings, FColor::Red, "Set to Apply Colors Using Physics Surface, but no Material Data Asset is set in the Project Settings. This means that we can't get what Physics Surface is on each Vertex Color Channel. ");

			return false;
		}


		// If set to paint with Physics Surface with Add, but the Paint Strength is 0 so no difference will be made
		if (colorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintStrengthToApply == 0 && colorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintStrengtOnChannelsWithoutThePhysicsSurface == 0 && colorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) {

			
			if (colorSettings.overrideVertexColorsToApplySettings.overrideVertexColorsToApply && IsValid(colorSettings.overrideVertexColorsToApplySettings.objectToRunOverrideVertexColorsInterface)) {

				RVPDP_LOG(colorSettings.debugSettings, FColor::Orange, "Set to Apply Colors Using Physics Surface, but with Paint Strength 0. But since the task is also set to Override Vertex Colors, the task will be allowed to run in case the override interface returns to apply any colors.");
			}

			else {

				// If not trying to lerp to a target either. 
				if (!colorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.lerpPhysicsSurfaceToTarget.lerpToTarget) {

					RVPDP_LOG(colorSettings.debugSettings, FColor::Red, "Trying to Apply Colors using Physics Surface but Paint Strength is 0, which wouldn't make any difference. ");

					return false;
				}

				else if (colorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.lerpPhysicsSurfaceToTarget.lerpStrength == 0) {

					RVPDP_LOG(colorSettings.debugSettings, FColor::Red, "Trying to Apply Colors using Physics Surface but Paint Strength is 0, which wouldn't make any difference. Set to Lerp to a value but the lerp strength is set to 0. ");

					return false;
				}
			}
		}


		if (colorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.physicsSurfacesToApply.Num() <= 0) {

			RVPDP_LOG(colorSettings.debugSettings, FColor::Red, "Set to Apply Colors Using Physics Surface, but no Physics Surfaces has been added to the Array. ");

			return false;
		}

		bool validPhysicsSurfaceToApply_Local = true;

		for (auto physicsSurfaceTemp : colorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.physicsSurfacesToApply) {

			if (physicsSurfaceTemp == EPhysicalSurface::SurfaceType_Default) {

				validPhysicsSurfaceToApply_Local = false;
				break;
			}
		}

		if (!validPhysicsSurfaceToApply_Local) {

			RVPDP_LOG(colorSettings.debugSettings, FColor::Red, "Set to Apply Colors Using Physics Surfaces, but one of them set to apply Default Physics Surface which isn't possible. ");

			return false;
		}


		for (int i = 0; i < colorSettings.meshComponent->GetNumMaterials(); i++) {

			for (auto physicsSurfaceToApplyTemp : colorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.physicsSurfacesToApply) {

				float redColorToApplyTemp = 0;
				float greenColorToApplyTemp = 0;
				float blueColorToApplyTemp = 0;
				float alphaColorToApplyTemp = 0;

				bool redColorToApplySuccessfullyGotTemp = false;
				bool greenColorToApplySuccessfullyGotTemp = false;
				bool blueColorToApplySuccessfullyGotTemp = false;
				bool alphaColorToApplySuccessfullyGotTemp = false;

				bool successfullyGotVertexColorsToApplyTemp = false;

				UVertexPaintFunctionLibrary::GetColorsToApplyFromPhysicsSurface_Wrapper(colorSettings.meshComponent, colorSettings.meshComponent->GetMaterial(i), physicsSurfaceToApplyTemp, redColorToApplyTemp, redColorToApplySuccessfullyGotTemp, greenColorToApplyTemp, greenColorToApplySuccessfullyGotTemp, blueColorToApplyTemp, blueColorToApplySuccessfullyGotTemp, alphaColorToApplyTemp, alphaColorToApplySuccessfullyGotTemp, successfullyGotVertexColorsToApplyTemp, colorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintStrengthToApply, colorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.paintStrengtOnChannelsWithoutThePhysicsSurface, colorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.applyOnChannelsThatIsAParentOfPhysicsSurface, colorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.applyOnChannelsThatsChildOfPhysicsSurface, colorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.applyOnChannelsThatResultsInBlendableSurfaces);


				if (successfullyGotVertexColorsToApplyTemp) {

					applyUsingPhysicsSurface_GotColorsToApplyOnMaterial = true;
					break;
				}
			}

			if (applyUsingPhysicsSurface_GotColorsToApplyOnMaterial)
				break;
		}

		if (!applyUsingPhysicsSurface_GotColorsToApplyOnMaterial) {

			if (colorSettings.applyVertexColorSettings.applyColorsUsingPhysicsSurface.fallbackToRGBAColorsIfFailedToApplyColorsUsingPhysicsSurface) {

				RVPDP_LOG(colorSettings.debugSettings, FColor::Orange, "Set to Apply Colors Using Physics Surface, but was unable to get Colors To Apply on any of the Mesh's Materials. Double check if the physics surfaces is registered to it, as well as physics surface families is setup correctly. Is set to Fallback to RGBA Colors so will check if those will make a difference.");
			}
			else {

				RVPDP_LOG(colorSettings.debugSettings, FColor::Red, "Set to Apply Colors Using Physics Surface, but was unable to get Colors To Apply on any of the Mesh's Materials, and is set to Not fallback to the RGBA Colors. Double check if the physics surfaces is registered to it, as well as physics surface families is setup correctly.");

				return false;
			}
		}
	}


	// Checks if any difference is going to be made by any of the RGBA channels if intend to use them and not applying with physics surface
	else {

		// If all set to apply with Add but with no amount
		if ((colorSettings.applyVertexColorSettings.applyColorsOnRedChannel.amountToApply == 0 && colorSettings.applyVertexColorSettings.applyColorsOnRedChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) && (colorSettings.applyVertexColorSettings.applyColorsOnGreenChannel.amountToApply == 0 && colorSettings.applyVertexColorSettings.applyColorsOnGreenChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) && (colorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.amountToApply == 0 && colorSettings.applyVertexColorSettings.applyColorsOnBlueChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor) && (colorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.amountToApply == 0 && colorSettings.applyVertexColorSettings.applyColorsOnAlphaChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor)) {


			// If not overriding colors either than we for sure know no difference will occur. 
			if (colorSettings.overrideVertexColorsToApplySettings.overrideVertexColorsToApply && IsValid(colorSettings.overrideVertexColorsToApplySettings.objectToRunOverrideVertexColorsInterface)) {

				RVPDP_LOG(colorSettings.debugSettings, FColor::Orange, "Trying to Apply Colors with RGBA with 0 Strength in Colors. But since the Task is also set to Override Vertex Colors, it will be allowed to run.");
			}

			else {
				
				if (!colorSettings.applyVertexColorSettings.IsAnyColorChannelSetToSetToLerpToTarget()) {

					RVPDP_LOG(colorSettings.debugSettings, FColor::Red, "Trying to Apply Colors with RGBA with 0 Strength in Colors which wouldn't make any difference. ");

					return false;
				}
			}
		}
	}


	return true;
}

bool UVertexPaintDetectionComponent::CheckHaveReachedMaxDetectionTask(const FVertexDetectFundementalStruct& fundementalSettings) {

	if (!IsValid(fundementalSettings.actor)) return false;
	if (!IsValid(fundementalSettings.actor->GetWorld())) return false;
	if (!IsValid(fundementalSettings.meshComponent)) return false;


	// Can ignore the Task queue limit, which may be useful for Save / Load Systems, in case you need to detect on a bunch of meshes but just once
	if (!fundementalSettings.ignoreTaskQueueLimit) {

		int maxAllowedTasks_Local = GetDefault<UVertexPaintDetectionSettings>()->vertexPaintAndDetectionPlugin_MaxAmountOfAllowedTasksPerMesh;
		int taskAmount_Local = 0;

		if (UVertexPaintFunctionLibrary::GetVertexPaintTaskQueue(fundementalSettings.meshComponent))
			taskAmount_Local = UVertexPaintFunctionLibrary::GetVertexPaintTaskQueue(fundementalSettings.meshComponent)->GetAmountOfDetectionTasksComponentHas(fundementalSettings.meshComponent);

		if (taskAmount_Local >= maxAllowedTasks_Local) {

			// Always prints this to log so users can see in the output that something may not be fully optimized
			UKismetSystemLibrary::PrintString(fundementalSettings.meshComponent->GetWorld(), FString::Printf(TEXT("Mesh: %s Has over %i Allowed Detect Tasks Queue Limit and we don't Allow any more per Mesh as the Performance gets affected if the queue per mesh becomes to big since the TMaps become more expensive to use! You can change this in the Project Settings, but if the queue grows too big you will get unwanted result as well since it may take a while for a detect job run and the callback will run. \nRecommend Reviewing how often you Add new Tasks. You can for instance Add a New Task when the Old one is Finished instead of adding them every frame. "), *fundementalSettings.meshComponent->GetName(), maxAllowedTasks_Local), fundementalSettings.debugSettings.printLogsToScreen, true, FColor::Red, fundementalSettings.debugSettings.printLogsToScreen_Duration);

			return true;
		}
	}

	else {

		return false;
	}


	return false;
}

bool UVertexPaintDetectionComponent::DetectTaskCheckValid(const FVertexDetectFundementalStruct& taskFundementals, UPrimitiveComponent* component) {

	if (!CheckValidFundementals(taskFundementals, component))
		return false;

	if (CheckHaveReachedMaxDetectionTask(taskFundementals))
		return false;

	return true;
}

bool UVertexPaintDetectionComponent::PaintColorsTaskCheckValid(const FVertexPaintColorSettingStruct& colorSettings, UPrimitiveComponent* component) {

	if (!CheckValidFundementals(colorSettings, component))
		return false;

	if (!CheckValidVertexPaintSettings(colorSettings))
		return false;

	if (!CheckValidVertexPaintColorSettings(colorSettings))
		return false;

	return true;
}

bool UVertexPaintDetectionComponent::PaintTaskCheckValid(const FVertexPaintStruct& paintSettings, UPrimitiveComponent* component) {

	if (!CheckValidFundementals(paintSettings, component))
		return false;

	if (!CheckValidVertexPaintSettings(paintSettings))
		return false;

	return true;
}
