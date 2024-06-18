// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "VertexPaintDetectionComponent.h"
#include "AutoAddColorComponent.generated.h"


USTRUCT(BlueprintType)
struct FAutoAddColorSettings {

	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin|Auto Paint Component", meta = (ToolTip = "If we should have a delay until we start auto adding colors again. Useful if you're for instance drying a character but don't want it to dry too fast. "))
	float delayBetweenTasks = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Auto Paint|Optimization Settings", meta = (ToolTip = "If True then this will Stop Auto Painting the Mesh if it's Fully Painted of the Channels / Physics Surfaces we're Trying to Apply. "))
	bool stopAutoPaintingMeshIfFullyPainted = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Auto Paint|Optimization Settings", meta = (ToolTip = "If True then this will Stop Auto Painting the Mesh if it's Completely Empty of the Channels / Physics Surfaces we're Trying to Remove. \nCan be useful if you have a centralized system, for example a Singleton that listens to Overlaps of Water Bodies and Starts Auto Paint Entire Mesh on them for Drying to make sure they all can Dry in sync. But if a Mesh leaves the water body and has become fully dried, then it can stop auto painting it, i.e. clean it out of it's list so it only has the relevant Meshes in it. "))
	bool stopAutoPaintingMeshIfCompletelyEmpty = false;



	bool isPaused = false;

	bool isQueuedUpWithDelay = false;

	FTimerHandle delayTimerHandle;

	bool shouldStartAnotherTaskWhenAllIsFinished = false;
};


USTRUCT(BlueprintType)
struct FAutoPaintTaskResults {

	GENERATED_BODY()

	FVertexDetectTaskResultInfo taskResultInfo;
	FVertexDetectPaintTaskResultInfo paintTaskResultInfo;
	FVertexDetectAdditionalDataToPassThrough additionalData;
};



UCLASS(Abstract)
class VERTEXPAINTDETECTIONPLUGIN_API UAutoAddColorComponent : public UVertexPaintDetectionComponent {

	GENERATED_BODY()

public:

	virtual void BeginPlay() override;


	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Auto Paint Component")
	virtual void StopAllAutoPainting();

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Auto Paint Component")
	virtual void StopAutoPaintingMesh(UPrimitiveComponent* meshComponent);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Auto Paint Component")
	virtual void PauseAutoPaintingMesh(UPrimitiveComponent* meshComponent);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Auto Paint Component")
	virtual void ResumeAutoPaintingMesh(UPrimitiveComponent* meshComponent);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Auto Paint Component")
	TMap<UPrimitiveComponent*, FAutoAddColorSettings> GetMeshesBeingAutoPainted() const { return autoPaintingMeshes; }

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Auto Paint Component")
	bool GetIsAutoPainting() const { return isAutoPaintingEnabled; }


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Auto Paint|Fundemental Settings", meta = (ToolTip = "When the Task is Finished, if the instigating auto paint component Shouldn't immediately queue up another task but instead do it after 0.01 seconds even if delay between tasks is set to 0. \nThis is very useful since if several auto paint components is working together, for example a Auto Within Area Component for a Lake, and a Auto Entire Mesh Component for Drying, then it works much better since they let each other jump in and queue up a new task since they're both listening for paint finish task event for that mesh component. "))
	bool applyOneFrameDelayBetweenTasksForInstigatingComponent = true;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Auto Paint|Fundemental Settings", meta = (ToolTip = "If the Auto Paint isn't currently auto painting anything or waiting for a delay to finish to queue up something else, then we start a looping timer to verify the cached meshes so in case any gets destroyed they get cleaned up. Default to 60 which the default GC interval. "))
	float verifyMeshComponentsInterval = 60;


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Auto Paint|Optimization Settings", meta = (ToolTip = "Optional Optimization so we don't start another task if no change was made from the task that got finished. \nThis may be useful if you have several auto paint components that is working together since another component can run tasks and make another component check again if they should start auto painting. \nLike a Auto Paint Within Area for a Lake, and a Auto Paint Entire Mesh for Drying a Character. If this is true for the auto paint entire mesh drying component, then it won't continously attempt to Dry the character if there was no difference, for instance if the Mesh is completely under the water, or standing still in the water and the Mesh is completely dry above it. If the mesh moves, the auto paint within area component for the lake can trigger tasks will which make the entire mesh drying component check if it should start drying, so if they move up from the lake it can start drying the parts that are wet. "))
	bool onlyStartNewTaskIfChangeWasMade = false;


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Auto Paint|Rounds of Tasks Settings", meta = (ToolTip = "If all Tasks has to be Finished before we can Add new ones. This may be useful if this is something like Auto Paint Entire Mesh for Drying of Wet Characters and other Meshes that may have different amount of vertcies. Because then their tasks will not finish exactly the same, meaning they could get dried unevenly fast. \nBut with this, all of the Meshes will run the same amount of Tasks so they would Dry equally fast. \nIf this is true then the Delay Between Tasks set for the Mesh will be ignored since it has to wait for them all to finish, so the one set below will be used instead.  "))
	bool onlyStartNewRoundOfTasksIfAllHasBeenFinished = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Auto Paint|Rounds of Tasks Settings", meta = (ToolTip = "If the Round of Tasks finishes before this duration, we can invoke a delay with the time left to this duration, so if the round has finished in 0.1 second, but you've set this to 0.3, then we will have a 0.2 second delay before the next round starts. \nThis is useful if for example if you have a centralized system that handles all Drying of meshes, but there is only 1 mesh being dried so the task and round finishes very quickly compared to if you're drying 20 meshes, meaning the mesh dries too fast. \nBut with this, you can have a minimum duration of the round, so things can't dry too fast. \nThe issue of uneven drying can still persist where if drying many and heavy meshes the round may take too long and the drying go to slow instead. This is something we can't do anything about, except simply recommending having lighter meshes, and atleast it's better with too slow and realistic drying instead of too fast. "))
	float minimumDurationOfRoundOfTasks = 0;


	UPROPERTY(VisibleAnywhere, Category = "Auto Paint|Auto Paint Root Mesh at Begin Play", meta = (ToolTip = "Some children may not support auto painting at begin play, like Paint At Location since it requires a location. Had to be VisibleAnywhere for EditConditions to work. "))
	bool isAllowedToAutoPaintAtBeginPlay = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Auto Paint|Auto Paint Root Mesh at Begin Play", meta = (ToolTip = "If the we should start Auto Painting the Root Component of the Actor this component is on on begin play, if the root comp is a Primitive Component, like static or skeletal mesh. \nThis is useful if the Actor may not be a Blueprint, but just a Static/Skeletal Mesh Actor in the level that you may want to Dry if they become Wet or something. ", EditCondition = "isAllowedToAutoPaintAtBeginPlay"))
	bool autoPaintRootMeshAtBeginPlay = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Auto Paint|Auto Paint Root Mesh at Begin Play", meta = (ToolTip = "The Delay Settings when starting auto paint at begin play on the root mesh comp. ", EditCondition = "isAllowedToAutoPaintAtBeginPlay"))
	FAutoAddColorSettings autoPaintRootMeshAtBeginPlay_DelaySettings;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Auto Paint|Debug Settings")
	bool printDebugLogsToScreen = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Auto Paint|Debug Settings")
	float printDebugLogsToScreen_Duration = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Auto Paint|Debug Settings")
	bool printDebugLogsToOutputLog = false;


protected:

	void MeshAddedToBeAutoPainted(UPrimitiveComponent* meshComponent, FAutoAddColorSettings autoAddColorSettings);

	virtual bool IsMeshBeingPaintedOrIsQueuedUp(UPrimitiveComponent* meshComponent);

	virtual void StartAutoPaintTask(UPrimitiveComponent* meshComponent);

	UFUNCTION()
	virtual void PaintTaskFinished(const FVertexDetectTaskResultInfo& taskResultInfo, const FVertexDetectPaintTaskResultInfo& paintTaskResultInfo, const FVertexDetectAdditionalDataToPassThrough& additionalData);

	virtual bool ShouldStartNewTaskOnComponent(const FVertexDetectTaskResultInfo& taskResultInfo, const bool& anyVertexColorsGotChanged, bool& isFullyPainted, bool& isCompletelyEmpty);

	virtual bool GetApplyVertexColorSettings(UPrimitiveComponent* meshComponent, FVertexDetectRGBAStruct& applyVertexColorSettings);

	virtual bool DoesAutoPaintOnMeshPaintUsingPhysicsSurface(UPrimitiveComponent* meshComponent, TArray<TEnumAsByte<EPhysicalSurface>>& physicsSurfaces, float& paintStrength, const FVertexDetectRGBAStruct& applyVertexColorsSettings);

	virtual void VerifyAllCachedMeshComponents();

	void AdjustCallbackSettings(const FVertexDetectRGBAStruct& applyVertexColorSettings, FVertexDetectEventSettings& callbackSettings);


	UPROPERTY()
	TMap<UPrimitiveComponent*, FAutoAddColorSettings> autoPaintingMeshes;

	bool isAutoPaintingEnabled = false;

	FVertexPaintDebugSettings debugSettings;

	FTimerHandle verifyMeshComponentsTimer;


private:

	UFUNCTION()
	void AutoPaintedActorDestroyed(AActor* destroyedActor);

	UFUNCTION()
	void AutoPaintDelayFinished(UPrimitiveComponent* meshComponent);

	UFUNCTION()
	void StartNewRoundOfTasks();

	bool DoesAutoPaintOnMeshPaintUsingVertexColorChannels(UPrimitiveComponent* meshComponent, TArray<EVertexColorChannel>& paintsOnChannels, TArray<float>& paintStrengthsForEachChannel, const FVertexDetectRGBAStruct& applyVertexColorsSettings);

	bool IsAnyTaskGoingToStartAfterDelay();

	UPROPERTY()
	TArray<FAutoPaintTaskResults> onlyStartNewRoundOfTasksIfAllHasBeenFinished_CachedResults;

	FTimerHandle onlyStartNewRoundOfTasksDelayTimer;

	float totalDurationRoundOfTasksTook = 0;
};
