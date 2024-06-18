// Copyright 2022 Alexander Floden, Alias Alex River. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Misc/QueuedThreadPool.h"
#include "CalculateColorsPrerequisites.h"
#include "Engine/EngineTypes.h"
#include "VertexPaintDetectionTaskQueue.generated.h"


DECLARE_DELEGATE_OneParam(FVertexPaintTaskSuccess, const FCalculateColorsInfo&);
DECLARE_DELEGATE_OneParam(FVertexPaintTaskFailed, const FCalculateColorsInfo&);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTaskRemovedFromQueue, const FCalculateColorsInfo&, taskRemoved);



USTRUCT()
struct FTaskQueueIDInfo {

	GENERATED_BODY()

	TArray<int> componentTaskIDs;
};


/**
 * 
 */
UCLASS()
class VERTEXPAINTDETECTIONPLUGIN_API UVertexPaintDetectionTaskQueue : public UObject
{
	GENERATED_BODY()


public:

	//---------- TASK QUEUE ----------//

	// General

	void AddCalculateColorsTaskToQueue(FCalculateColorsInfo calculateColorsInfo, int taskID);

	FVertexPaintTaskSuccess vertexPaintTaskSuccessDelegate;
	FVertexPaintTaskFailed vertexPaintTaskFailedDelegate;
	FTaskRemovedFromQueue taskRemovedFromQueueDelegate;


private:

	void StartCalculateColorsTask(const FCalculateColorsInfo& calculateColorsInfo);

	TArray<int32> GetOnGoingAsyncTasksIDs() { return onGoingAsyncTasksIDs; }

	void CalculateColorsTaskFinished(const FCalculateColorsInfo& calculateColorsInfo);


public:

	// Paint

	TMap<UPrimitiveComponent*, int> GetCalculateColorsPaintTasksAmountPerComponent();

	int GetAmountOfPaintTasksComponentHas(UPrimitiveComponent* meshComp);

	TMap<int, FCalculateColorsInfo> GetCalculateColorsPaintTasks() { return calculateColorsPaintQueue; }

	void RemoveMeshComponentFromPaintTaskQueue(UPrimitiveComponent* meshComp, bool gotRemovedBeforeTaskStarted = false);

private:

	void RemoveTaskIDFromPaintTaskQueue(int taskID, bool gotRemovedBeforeTaskStarted = false);

	void ClearCalculateColorsPaintTasks();

	void RefreshPaintTaskQueueWithValidComponents();


	// Detection

public:

	TMap<UPrimitiveComponent*, int> GetCalculateColorsDetectionTasksAmountPerComponent();

	int GetAmountOfDetectionTasksComponentHas(UPrimitiveComponent* meshComp);

	TMap<int, FCalculateColorsInfo> GetCalculateColorsDetectionTasks() { return calculateColorsDetectionQueue; }

	void RemoveMeshComponentFromDetectionTaskQueue(UPrimitiveComponent* meshComp, bool gotRemovedBeforeTaskStarted = false);


private:

	void RemoveTaskIDFromDetectionTaskQueue(int taskID, bool gotRemovedBeforeTaskStarted = false);

	void ClearCalculateColorsDetectionTasks();

	void RefreshDetectionTaskQueueWithValidComponents();

	void ResetThreadPool();

	void ShouldStartResetThreadPoolTimer();


	//---------- PROPERTIES ----------//

	TArray<int32> onGoingAsyncTasksIDs;

	UPROPERTY()
	FTimerHandle vertexColorPaint_QueueThreadPool_ResetTimer;

	FQueuedThreadPool* vertexColorPaint_QueueThreadPool = nullptr;



	// We use 2 sets of TMaps, one with just the task ID and info of that task, so we don't have any dependency on a pointer to remove or get things from it, and another we're we use the component ptr to the get the amount of tasks and Task IDs of that mesh. By using it, we could make a solution where if a mesh wasn't valid, we could refresh the Task Queue without having to store memory heavy local variables of the task info struct, just check the invalid ptr, get the Tasks IDs that it had and Remove them from the Task queue. 
	UPROPERTY()
	TMap<int, FCalculateColorsInfo> calculateColorsPaintQueue;

	UPROPERTY()
	TMap<UPrimitiveComponent*, FTaskQueueIDInfo> componentPaintTaskIDs;


	UPROPERTY()
	TMap<int, FCalculateColorsInfo> calculateColorsDetectionQueue;

	UPROPERTY()
	TMap<UPrimitiveComponent*, FTaskQueueIDInfo> componentDetectTaskIDs;
};
