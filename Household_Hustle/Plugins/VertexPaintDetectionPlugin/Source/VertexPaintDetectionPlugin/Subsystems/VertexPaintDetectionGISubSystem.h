// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CalculateColorsPrerequisites.h"
#include "VertexPaintDetectionGISubSystem.generated.h"


class UVertexPaintDetectionTaskQueue;
class UVertexPaintMaterialDataAsset;
class UVertexPaintOptimizationDataAsset;
class UVertexPaintColorSnippetRefs;


// Paint Job Delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FVertexPaintTaskFinished, const FVertexDetectTaskResultInfo&, taskResultInfo, const FVertexDetectPaintTaskResultInfo&, paintTaskResultInfo, const FVertexDetectAdditionalDataToPassThrough&, additionalData);

// Detection Job Delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVertexDetectTaskFinished, const FVertexDetectTaskResultInfo&, taskResultInfo, const FVertexDetectAdditionalDataToPassThrough&, additionalData);


/**
 *
 */
UCLASS()
class VERTEXPAINTDETECTIONPLUGIN_API UVertexPaintDetectionGISubSystem : public UGameInstanceSubsystem {

	GENERATED_BODY()

public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;


	TMap<TEnumAsByte<EPhysicalSurface>, UPhysicalMaterial*> GetAllCachedPhysicsMaterialAssetss() { return cachedPhysicalMaterialAssets; }

	UPROPERTY(BlueprintAssignable, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Broadcasts when Finished a Paint Task."))
	FVertexPaintTaskFinished vertexPaintTaskFinished; // Broadcasts when Finished a Paint Task. NOTE you may have to type in .AddDynamic() manually if it doesn't show

	UPROPERTY(BlueprintAssignable, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Broadcasts when Finished a Detect Task."))
	FVertexDetectTaskFinished vertexDetectTaskFinished; // Broadcasts when Finished a Detect Task. NOTE you may have to type in .AddDynamic() manually if it doesn't show


private:

	//---------- PAINT / DETECTION WRAP UPS ----------//

	void CalculateColorsSuccess(const FCalculateColorsInfo& calculateColorsInfo);

	void CalculateColorsFailed(const FCalculateColorsInfo& calculateColorsInfo);

	void GetClosestVertexDataOnMesh_WrapUp(const FCalculateColorsInfo& calculateColorsInfo, const FVertexDetectInfoStruct& detectStruct, const FColor& closestColor, const FColor& avarageColor, const FLinearColor& estimatedColorAtHitLocation, const TArray<FVector2D>& closestVertexUV_Detection);

	void GetAllVertexColorsOnly_WrapUp(const FCalculateColorsInfo& calculateColorsInfo);

	void GetColorsWithinArea_WrapUp(const FCalculateColorsInfo& calculateColorsInfo);

	bool PaintOnMeshAtLocation_WrapUp(const FCalculateColorsInfo& calculateColorsInfo, const TArray<FVector2D>& closestVertexUV_Painting);

	bool PaintWithinArea_WrapUp(const FCalculateColorsInfo& calculateColorsInfo);

	bool PaintOnEntireMesh_WrapUp(const FCalculateColorsInfo& calculateColorsInfo);

	bool PaintColorSnippet_WrapUp(const FCalculateColorsInfo& calculateColorsInfo);

	bool SetMeshComponentVertexColors_WrapUp(const FCalculateColorsInfo& calculateColorsInfo);

	bool SetMeshComponentVertexColorsUsingSerializedString_WrapUp(const FCalculateColorsInfo& calculateColorsInfo);


	//---------- UTILITIES ----------//

public:

	UVertexPaintDetectionTaskQueue* GetVertexPaintTaskQueue() { return taskQueue; }

	UVertexPaintMaterialDataAsset* GetCachedMaterialDataAsset() { return vertexPaintMaterialDataAssetCache; }

	UVertexPaintOptimizationDataAsset* GetCachedOptimizationDataAsset() { return vertexPaintOptimizationDataAssetCache; }

	UVertexPaintColorSnippetRefs* GetCachedColorSnippetReferenceDataAsset() { return vertexPaintColorSnippetReferenceDataAssetCache; }


private:

	FVertexDetectClosestVertexDataResultStruct GetClosestVertexDataResult(UPrimitiveComponent* meshComp, FVertexDetectClosestVertexDataResultStruct closestVertexDataResult, const int& closestVertexIndex, const FColor& closestVertexColor, const FVector& closestVertexPosition, const FVector& closestVertexNormal, const FCalculateColorsInfo& calculateColorsInfo);

	FString GetPhysicsSurfaceAsString(TEnumAsByte<EPhysicalSurface> physicsSurface) { return *StaticEnum<EPhysicalSurface>()->GetDisplayNameTextByValue(physicsSurface.GetValue()).ToString(); }

	FVertexDetectPhysicsSurfaceDataStruct GetPhysicsSurfaceData(const FColor& vertexColor, const FCalculateColorsInfo& calculateColorsInfo, UMaterialInterface* material);

	void PrintClosestVertexColorResults(const FVertexDetectClosestVertexDataResultStruct& closestVertexDataResult, const FVertexDetectEstimatedColorAtHitLocationResultStruct& estimatedColorAtHitLocationResult, const float& avarageColorAreaOfEffect, const FCalculateColorsInfo& calculateColorsInfo);

	void AddColorVertexBufferToBufferCleanup(FColorVertexBuffer* colorVertexBuffer);
	
	void CleanUpOldVertexColorBuffer();

	void ApplyVertexColorsToMeshComponent(UPrimitiveComponent* meshComp, const FCalculateColorsInfo& calculateColorsInfo);

	void BroadcastFinishedPaintTask(const FCalculateColorsInfo& calculateColorsInfo);

	void BroadcastFinishedDetectTask(const FCalculateColorsInfo& calculateColorsInfo);


	//---------- CALLBACKS ----------//

	void RunGetClosestVertexDataCallbacks(const FCalculateColorsInfo& calculateColorsInfo, const FVertexDetectClosestVertexDataResultStruct& closestVertexColorResult, const FVertexDetectEstimatedColorAtHitLocationResultStruct& estimatedColorAtHitLocationResult, const FVertexDetectAvarageColorInAreaInfo& avarageColor);

	void RunGetAllColorsOnlyCallbacks(const FCalculateColorsInfo& calculateColorsInfo);

	void RunGetColorsWithinAreaCallbacks(const FCalculateColorsInfo& calculateColorsInfo);

	void RunPaintAtLocationCallbacks(const FCalculateColorsInfo& calculateColorsInfo, const FVertexDetectClosestVertexDataResultStruct& closestVertexColorResult, const FVertexDetectEstimatedColorAtHitLocationResultStruct& estimatedColorAtHitLocationResult, const FVertexDetectAvarageColorInAreaInfo& avarageColor);

	void RunPaintWithinAreaCallbacks(const FCalculateColorsInfo& calculateColorsInfo);

	void RunPaintEntireMeshCallbacks(const FCalculateColorsInfo& calculateColorsInfo);

	void RunPaintColorSnippetCallbacks(const FCalculateColorsInfo& calculateColorsInfo);

	void RunPaintSetMeshColorsCallbacks(const FCalculateColorsInfo& calculateColorsInfo);

	void RunPaintSetMeshColorsUsingSerializedStringCallbacks(const FCalculateColorsInfo& calculateColorsInfo);


	//---------- PROPERTIES ----------//

	TArray<FColorVertexBuffer*> oldVertexColorBufferPtrs;
	
	UPROPERTY()
	 	TArray<FTimerHandle> cleanupOldVertexColorBufferTimers;


	// Caches

	UPROPERTY()
		TMap<TEnumAsByte<EPhysicalSurface>, UPhysicalMaterial*> cachedPhysicalMaterialAssets;

	UPROPERTY()
		UVertexPaintColorSnippetRefs* vertexPaintColorSnippetReferenceDataAssetCache; // Caches these so they're in memory at all time, so we don't have to worry about a use case where they may not be in memory when a asynctask has started, and that we will get a crash because we can't load them on the async thread

	UPROPERTY()
		UVertexPaintOptimizationDataAsset* vertexPaintOptimizationDataAssetCache;

	UPROPERTY()
		UVertexPaintMaterialDataAsset* vertexPaintMaterialDataAssetCache;


	UPROPERTY()
		UVertexPaintDetectionTaskQueue* taskQueue;
};
