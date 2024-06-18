// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

// Prerequisites
#include "CalculateColorsPrerequisites.h"
#include "AdditionalDataPrerequisites.h"

// Paint Prerequisites
#include "SetColorsWithStringPrerequisites.h"
#include "SetMeshColorsPrerequisites.h"
#include "PaintSnippetsPrerequisites.h"
#include "PaintAtLocationPrerequisites.h"
#include "PaintEntireMeshPrerequisites.h"
#include "PaintWithinAreaPrerequisites.h"

//  Detect Prerequisites
#include "GetClosestVertexDataPrerequisites.h"
#include "GetColorsOnlyPrerequisites.h"
#include "GetColorsWithinAreaPrerequisites.h"

#include "Engine/StreamableManager.h"
#include "VertexPaintDetectionComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FVertexColorGetClosestVertexData, const FVertexDetectTaskResultInfo&, taskResultInfo, const FVertexDetectInfoStruct&, detectedMeshWithSettings, const FVertexDetectClosestVertexDataResultStruct&, closestVertexInfo, const FVertexDetectEstimatedColorAtHitLocationResultStruct&, estimatedColorAtHitLocationInfo, const FVertexDetectAvarageColorInAreaInfo&, avarageColorInAreaInfo, const FVertexDetectAdditionalDataToPassThrough&, additionalData);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FVertexColorGetAllVertexColorsOnly, const FVertexDetectTaskResultInfo&, taskResultInfo, const FVertexDetectGetColorsOnlyStruct&, gotAllVertexColorsWithSettings, const FVertexDetectAdditionalDataToPassThrough&, additionalData);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FGetColorsWithinArea, const FVertexDetectTaskResultInfo&, taskResultInfo, const FVertexDetectGetColorsWithinAreaStruct&, getColorsWithinAreaSettings, const FVertexPaintWithinAreaResults&, withinAreaResults, const FVertexDetectAdditionalDataToPassThrough&, additionalData);


DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FVertexColorPaintedAtLocation, const FVertexDetectTaskResultInfo&, taskResultInfo, const FVertexDetectPaintTaskResultInfo&, paintTaskResultInfo, const FVertexPaintAtLocationStruct&, paintedAtLocationWithSettings, const FVertexDetectClosestVertexDataResultStruct&, closestVertexInfoAfterApplyingColor, const FVertexDetectEstimatedColorAtHitLocationResultStruct&, estimatedColorAtHitLocationInfo, const FVertexDetectAvarageColorInAreaInfo&, avarageColorInAreaInfo, const FVertexDetectAdditionalDataToPassThrough&, additionalData);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FVertexColorPaintedWithinArea, const FVertexDetectTaskResultInfo&, taskResultInfo, const FVertexDetectPaintTaskResultInfo&, paintTaskResultInfo, const FVertexPainthWithinAreaStruct&, paintedWithinAreaWithSettings, const FVertexPaintWithinAreaResults&, withinAreaResults, const FVertexDetectAdditionalDataToPassThrough&, additionalData);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FVertexColorPaintedEntireMesh, const FVertexDetectTaskResultInfo&, taskResultInfo, const FVertexDetectPaintTaskResultInfo&, paintTaskResultInfo, const FVertexPaintOnEntireMeshStruct&, entireMeshPaintedWithSettings, const FVertexDetectAdditionalDataToPassThrough&, additionalData);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FVertexColorPaintColorSnippet, const FVertexDetectTaskResultInfo&, taskResultInfo, const FVertexDetectPaintTaskResultInfo&, paintTaskResultInfo, const FVertexPaintColorSnippetStruct&, paintColorSnippetWithSettings, const FVertexDetectAdditionalDataToPassThrough&, additionalData);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSetMeshComponentVertexColors, const FVertexDetectTaskResultInfo&, taskResultInfo, const FVertexDetectPaintTaskResultInfo&, paintTaskResultInfo, const FVertexPaintSetMeshComponentVertexColors&, setMeshComponentVertexColorWithSettings, const FVertexDetectAdditionalDataToPassThrough&, additionalData);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSetMeshComponentVertexColorsUsingSerializedString, const FVertexDetectTaskResultInfo&, taskResultInfo, const FVertexDetectPaintTaskResultInfo&, paintTaskResultInfo, const FVertexPaintSetMeshComponentVertexColorsUsingSerializedString&, setMeshComponentVertexColorUsingSerializedStringWithSettings, const FVertexDetectAdditionalDataToPassThrough&, additionalData);



UENUM()
enum class ELoadColorSnippetDataAssetOptions : uint8 {

	LoadPaintColorSnippetDataAsset,
	LoadCompareWithColorSnippetDataAsset
};



UCLASS(Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent), DisplayName = "Runtime Vertex Paint Component", ClassGroup = (Custom))
class VERTEXPAINTDETECTIONPLUGIN_API UVertexPaintDetectionComponent : public UActorComponent {

	GENERATED_BODY()


protected:

	UVertexPaintDetectionComponent();
	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void TaskRemovedByTaskQueue(const FCalculateColorsInfo& calculateColorsInfo);


public:

	//---------- TASKS ----------//

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin")
	TMap<int, UPrimitiveComponent*> GetCurrentGetClosestVertexDataTasks() { return currentGetClosestVertexDataTasks; }

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin")
	TMap<int, UPrimitiveComponent*> GetCurrentGetAllVertexColorsOnlyTasks() { return currentGetAllVertexColorsOnlyTasks; }

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin")
	TMap<int, UPrimitiveComponent*> GetCurrentGetColorsWithinAreaTasks() { return currentGetColorsWithinAreaTasks; }

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin")
	TMap<int, UPrimitiveComponent*> GetCurrentPaintAtLocationTasks() { return currentPaintAtLocationTasks; }

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin")
	TMap<int, UPrimitiveComponent*> GetCurrentPaintWithinAreaTasks() { return currentPaintWithinAreaTasks; }

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin")
	TMap<int, UPrimitiveComponent*> GetCurrentPaintEntireMeshTasks() { return currentPaintEntireMeshTasks; }

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin")
	TMap<int, UPrimitiveComponent*> GetCurrentPaintColorSnippetTasks() { return currentPaintColorSnippetTasks; }

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin")
	TMap<int, UPrimitiveComponent*> GetCurrentSetMeshComponentVertexColorsTasks() { return currentSetMeshComponentVertexColorsTasks; }

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin")
	TMap<int, UPrimitiveComponent*> GetCurrentSetMeshComponentVertexColorsUsingSerializedStringTasks() { return currentSetMeshComponentVertexColorsUsingSerializedStringTasks; }

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "This returns the amount of Tasks that this component has queued up but have not finished yet. Can be useful if you for instance want to make sure another task of a certain type doesn't start if there's already one going. "))
	void GetCurrentTasksInitiatedByComponent(int& totalAmountOfTasks, int& amountOfGetClosestVertexDataTasks, int& amountOfGetAllVertexColorsOnlyTasks, int& amountOfGetColorsWithinAreaTasks, int& amountOfPaintAtLocationTasks, int& amountOfPaintWithinAreaTasks, int& amountOfPaintEntireMeshTasks, int& amountOfPaintColorSnippetTasks, int& amountOfSetMeshComponentVertexColorsTasks, int& amountOfSetMeshComponentVertexColorsUsingSerializedStringTasks);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Gets all Primitive Components actively being painted or detected. "))
	TArray<UPrimitiveComponent*> GetCurrentTasksMeshComponents();

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Total Tasks this Component has Queued up but haven't finished yet. "))
	int GetTotalTasksInitiatedByComponent();

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If this Component have any Tasks Queued up. "))
	bool HasAnyTasksQueuedUp() { return (GetTotalTasksInitiatedByComponent() <= 0); }


public:


	//---------- PAINT & DETECT ----------//

	virtual void GetClosestVertexDataOnMesh(FVertexDetectInfoStruct getClosestVertexDataStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough);

	virtual void GetAllVertexColorsOnly(FVertexDetectGetColorsOnlyStruct getAllVertexColorsStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough);

	virtual void GetColorsWithinArea(FVertexDetectGetColorsWithinAreaStruct getColorsWithinArea, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough);

	virtual void PaintOnMeshAtLocation(FVertexPaintAtLocationStruct paintAtLocationStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough);

	virtual void PaintOnMeshWithinArea(FVertexPainthWithinAreaStruct paintWithinAreaStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough);

	virtual void PaintOnEntireMesh(FVertexPaintOnEntireMeshStruct paintOnEntireMeshStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough);

	virtual void PaintColorSnippetOnMesh(FVertexPaintColorSnippetStruct paintColorSnippetStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough);

	virtual void SetMeshComponentVertexColors(FVertexPaintSetMeshComponentVertexColors setMeshComponentVertexColorsSettings, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough);

	virtual void SetMeshComponentVertexColorsUsingSerializedString(FVertexPaintSetMeshComponentVertexColorsUsingSerializedString setMeshComponentVertexColorsUsingSerializedStringSettings, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough);


protected:

	virtual bool CheckValidFundementals(const FVertexDetectFundementalStruct& taskFundementals, UPrimitiveComponent* component);
	virtual bool CheckValidVertexPaintSettings(const FVertexPaintStruct& vertexPaintSettings);
	virtual bool CheckValidVertexPaintColorSettings(const FVertexPaintColorSettingStruct& colorSettings);
	virtual bool CheckHaveReachedMaxDetectionTask(const FVertexDetectFundementalStruct& fundementalSettings);

	virtual bool DetectTaskCheckValid(const FVertexDetectFundementalStruct& taskFundementals, UPrimitiveComponent* component);
	virtual bool PaintColorsTaskCheckValid(const FVertexPaintColorSettingStruct& colorSettings, UPrimitiveComponent* component);
	virtual bool PaintTaskCheckValid(const FVertexPaintStruct& paintSettings, UPrimitiveComponent* component);
	virtual bool WithinAreaCheckValid(const FVertexPaintDetectWithinAreaSettings& withinAreaSettings, const FVertexPaintDebugSettings& debugSettings);

	virtual bool GetClosestVertexDataOnMeshCheckValid(const FVertexDetectInfoStruct& getClosestVertexDataStruct);
	virtual bool GetAllVertexColorsOnlyCheckValid(const FVertexDetectGetColorsOnlyStruct& getAllVertexColorsStruct);
	virtual bool GetColorsWithinAreaCheckValid(const FVertexDetectGetColorsWithinAreaStruct& getWithinAreaStruct);
	virtual bool PaintOnMeshAtLocationCheckValid(const FVertexPaintAtLocationStruct& paintAtLocationStruct);
	virtual bool PaintOnMeshWithinAreaCheckValid(const FVertexPainthWithinAreaStruct& paintWithinAreaStruct);
	virtual bool PaintOnEntireMeshCheckValid(const FVertexPaintOnEntireMeshStruct& paintOnEntireMeshStruct);
	virtual bool PaintColorSnippetCheckValid(const FVertexPaintColorSnippetStruct& paintColorSnippetStruct);
	virtual bool SetMeshComponentVertexColorsCheckValid(const FVertexPaintSetMeshComponentVertexColors& setMeshComponentVertexColorsSettings);
	virtual bool SetMeshComponentVertexColorsUsingSerializedStringCheckValid(const FVertexPaintSetMeshComponentVertexColorsUsingSerializedString& setMeshComponentVertexColorsUsingSerializedStringSettings);


public:

	//---------- CALLBACKS ----------//

	virtual void GetClosestVertexDataOnMeshTaskFinished(const FCalculateColorsInfo& calculateColorsInfo, const FVertexDetectClosestVertexDataResultStruct& closestVertexColorResult, const FVertexDetectEstimatedColorAtHitLocationResultStruct& estimatedColorAtHitLocationResult, const FVertexDetectAvarageColorInAreaInfo& avarageColor);
	virtual void GetAllVertexColorsOnlyTaskFinished(const FCalculateColorsInfo& calculateColorsInfo);
	virtual void GetColorsWithinAreaTaskFinished(const FCalculateColorsInfo& calculateColorsInfo);
	virtual void PaintOnMeshAtLocationTaskFinished(const FCalculateColorsInfo& calculateColorsInfo, const FVertexDetectClosestVertexDataResultStruct& closestVertexColorResult, const FVertexDetectEstimatedColorAtHitLocationResultStruct& estimatedColorAtHitLocationResult, const FVertexDetectAvarageColorInAreaInfo& avarageColor);
	virtual void PaintOnMeshWithinAreaTaskFinished(const FCalculateColorsInfo& calculateColorsInfo);
	virtual void PaintOnEntireMeshTaskFinished(const FCalculateColorsInfo& calculateColorsInfo);
	virtual void PaintColorSnippetOnMeshTaskFinished(const FCalculateColorsInfo& calculateColorsInfo);
	virtual void SetMeshComponentVertexColorsTaskFinished(const FCalculateColorsInfo& calculateColorsInfo);
	virtual void SetMeshComponentVertexColorsUsingSerializedStringTaskFinished(const FCalculateColorsInfo& calculateColorsInfo);


	UPROPERTY(BlueprintAssignable, Category = "Runtime Vertex Paint and Detection Plugin|Detection")
		FVertexColorGetClosestVertexData getClosestVertexDataDelegate; // Broadcasts when Finished Getting Vertex Data, either successfully or unsuccessfully. NOTE you may have to type in .AddDynamic() manually if it doesn't show

	UPROPERTY(BlueprintAssignable, Category = "Runtime Vertex Paint and Detection Plugin|Detection", meta = (ToolTip = "Broadcasts when Finished Getting All Vertex Colors Only, either successfully or unsuccessfully."))
		FVertexColorGetAllVertexColorsOnly getAllVertexColorsOnlyDelegate; // Broadcasts when Finished Getting Vertex Data, either successfully or unsuccessfully. NOTE you may have to type in .AddDynamic() manually if it doesn't show

	UPROPERTY(BlueprintAssignable, Category = "Runtime Vertex Paint and Detection Plugin|Detection", meta = (ToolTip = "Broadcasts when Finished Getting Colors Within Area, either successfully or unsuccessfully."))
	FGetColorsWithinArea getColorsWithinAreaDelegate; // Broadcasts when Finished Getting Vertex Data, either successfully or unsuccessfully. NOTE you may have to type in .AddDynamic() manually if it doesn't show


	UPROPERTY(BlueprintAssignable, Category = "Runtime Vertex Paint and Detection Plugin|Painting", meta = (ToolTip = "Broadcasts when Finished Painting Vertex Colors, either successfully or unsuccessfully."))
		FVertexColorPaintedAtLocation vertexColorsPaintedAtLocationDelegate; // Broadcasts when Finished Painting Vertex Colors, either successfully or unsuccessfully. NOTE you may have to type in .AddDynamic() manually if it doesn't show

	UPROPERTY(BlueprintAssignable, Category = "Runtime Vertex Paint and Detection Plugin|Painting", meta = (ToolTip = "Broadcasts when Finished Painting Vertex Colors on Mesh within Area, either successfully or unsuccessfully."))
		FVertexColorPaintedWithinArea vertexColorsPaintedMeshWithinAreaDelegate; // Broadcasts when Finished Painting Vertex Colors on Mesh within Area, either successfully or unsuccessfully. NOTE you may have to type in .AddDynamic() manually if it doesn't show

	UPROPERTY(BlueprintAssignable, Category = "Runtime Vertex Paint and Detection Plugin|Painting", meta = (ToolTip = "Broadcasts when Finished Painting Vertex Colors on Entire Mesh, either successfully or unsuccessfully."))
		FVertexColorPaintedEntireMesh vertexColorsPaintedEntireMeshDelegate; // Broadcasts when Finished Painting Vertex Colors on Entire Mesh, either successfully or unsuccessfully. NOTE you may have to type in .AddDynamic() manually if it doesn't show

	UPROPERTY(BlueprintAssignable, Category = "Runtime Vertex Paint and Detection Plugin|Painting", meta = (ToolTip = "Broadcasts when Finished Paint Color Snippet, either successfully or unsuccessfully. "))
		FVertexColorPaintColorSnippet vertexColorsPaintColorSnippetDelegate; // Broadcasts when Finished Paint Color Snippet, either successfully or unsuccessfully. NOTE you may have to type in .AddDynamic() manually if it doesn't show

	UPROPERTY(BlueprintAssignable, Category = "Runtime Vertex Paint and Detection Plugin|Painting", meta = (ToolTip = "Broadcasts when VertexPaintDetectionGISubSystem has run it's SetMeshComponentVertexColors IF you provided a component. Useful if you're loading vertex data and want to start each task when the previous is finished. "))
		FSetMeshComponentVertexColors vertexColorsSetMeshColorsDelegate; // Broadcasts when VertexPaintDetectionGISubSystem has run it's SetMeshComponentVertexColors IF you provided a component. Useful if you're loading vertex data and want to start each task when the previous is finished. NOTE you may have to type in .AddDynamic() manually if it doesn't show

	UPROPERTY(BlueprintAssignable, Category = "Runtime Vertex Paint and Detection Plugin|Painting", meta = (ToolTip = "Broadcasts when VertexPaintDetectionGISubSystem has run it's SetMeshComponentVertexColorsUsingSerializedString IF you provided a component. Useful if you're loading vertex data and want to start each task when the previous is finished. "))
		FSetMeshComponentVertexColorsUsingSerializedString vertexColorsSetMeshColorsUsingSerializedStringDelegate; // Broadcasts when VertexPaintDetectionGISubSystem has run it's SetMeshComponentVertexColorsUsingSerializedString IF you provided a component. Useful if you're loading vertex data and want to start each task when the previous is finished. NOTE you may have to type in .AddDynamic() manually if it doesn't show

private:


	//---------- UTILITIES ----------//

	void FillCalculateColorsInfoFundementals(FCalculateColorsInfo& calculateColorsInfo);

	void AddTaskToQueue(const FCalculateColorsInfo& calculateColorsInfo);

	bool ShouldLoadCompareColorSnippet(FCalculateColorsInfo calculateColorsInfo);

	bool LoadColorSnippetDataAsset(const FCalculateColorsInfo& calculateColorsInfo, FString colorSnippedID, FSoftObjectPath colorSnippetDataAssetPath, ELoadColorSnippetDataAssetOptions loadColorSnippetDataAssetSetting);

	void FinishedLoadingColorSnippetDataAsset(int finishedTaskID, FCalculateColorsInfo calculateColorsInfo, FString colorSnippedID, ELoadColorSnippetDataAssetOptions loadColorSnippetDataAssetSetting);

	void WrapUpLoadedColorSnippetDataAsset(FCalculateColorsInfo calculateColorsInfo, FString colorSnippedID, ELoadColorSnippetDataAssetOptions loadColorSnippetDataAssetSetting);

	FString GetAllPhysicsSurfacesToApplyAsString(const FVertexPaintColorSettingStruct& colorSettings);

	void CheckIfRegisteredAndInitialized();

	FVertexDetectRGBAStruct ClampPaintSettings(FVertexDetectRGBAStruct applyVertexColorSettings);

	float GetClampedPaintStrength(float paintStrength);

	FVertexPaintingLimitRGBA ClampPaintLimitsForApplyColorsDirectlySettings(FVertexPaintingLimitRGBA applyColorsDirectlyPaintLimit);

	TArray<FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo> GetWithinAreaComponentsToCheckIfIsWithinSettings(UPrimitiveComponent* meshComponent, FVertexPaintDetectWithinAreaSettings withinAreaSettings, FVertexDetectPaintWithinAreaFallOffSettings fallOffSettings, bool forPaintWithinArea, float extraExtent);

	void DrawWithinAreaDebugSymbols(TArray<FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo> componentsToCheckIfIsWithin, FVertexDetectPaintWithinAreaFallOffSettings fallOffSettings, float duration, bool forPaintWithinArea);

	FVertexPaintColorSettingStruct ResolvePaintConditions(FVertexPaintColorSettingStruct paintColorSettings);


protected:

	//---------- PROPERTIES ----------//

	TMap<int, TSharedPtr<FStreamableHandle>> colorSnippetAsyncLoadHandleMap;

	UPROPERTY()
	TMap<int, UPrimitiveComponent*> currentGetClosestVertexDataTasks;

	UPROPERTY()
	TMap<int, UPrimitiveComponent*> currentGetAllVertexColorsOnlyTasks;

	UPROPERTY()
	TMap<int, UPrimitiveComponent*> currentGetColorsWithinAreaTasks;

	UPROPERTY()
	TMap<int, UPrimitiveComponent*> currentPaintAtLocationTasks;

	UPROPERTY()
	TMap<int, UPrimitiveComponent*> currentPaintWithinAreaTasks;

	UPROPERTY()
	TMap<int, UPrimitiveComponent*> currentPaintEntireMeshTasks;

	UPROPERTY()
	TMap<int, UPrimitiveComponent*> currentPaintColorSnippetTasks;

	UPROPERTY()
	TMap<int, UPrimitiveComponent*> currentSetMeshComponentVertexColorsTasks;

	UPROPERTY()
	TMap<int, UPrimitiveComponent*> currentSetMeshComponentVertexColorsUsingSerializedStringTasks;
};
