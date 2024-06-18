// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved.


#include "VertexPaintDetectionTaskQueue.h"

// Engine
#include "Kismet/KismetMathLibrary.h"
#include "TimerManager.h"
#include "Async/Async.h"
#include "Async/AsyncWork.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "Components/PrimitiveComponent.h"

// Plugin
#include "VertexPaintCalculateColorsTask.h"
#include "VertexPaintFunctionLibrary.h"
#include "VertexPaintDetectionSettings.h"
#include "VertexPaintDetectionLog.h"



//-------------------------------------------------------

// Get Calculate Colors Paint / Detection Task Amount

TMap<UPrimitiveComponent*, int> UVertexPaintDetectionTaskQueue::GetCalculateColorsPaintTasksAmountPerComponent() {


	TMap<UPrimitiveComponent*, int> meshesAndTaskAmountsTemp;

	for (auto& taskIDsTemp : componentPaintTaskIDs)
		meshesAndTaskAmountsTemp.Add(taskIDsTemp.Key, taskIDsTemp.Value.componentTaskIDs.Num());

	return meshesAndTaskAmountsTemp;
}

TMap<UPrimitiveComponent*, int> UVertexPaintDetectionTaskQueue::GetCalculateColorsDetectionTasksAmountPerComponent() {


	TMap<UPrimitiveComponent*, int> meshesAndTaskAmountsTemp;

	for (auto& taskIDsTemp : componentDetectTaskIDs)
		meshesAndTaskAmountsTemp.Add(taskIDsTemp.Key, taskIDsTemp.Value.componentTaskIDs.Num());

	return meshesAndTaskAmountsTemp;
}


//-------------------------------------------------------

// Remove Mesh Component From Paint / Detection Task Queue

void UVertexPaintDetectionTaskQueue::RemoveMeshComponentFromDetectionTaskQueue(UPrimitiveComponent* meshComp, bool gotRemovedBeforeTaskStarted) {

	if (!IsValid(meshComp)) return;


	if (componentDetectTaskIDs.Contains(meshComp)) {

		TArray<int> componentTaskIDs_Local = componentDetectTaskIDs.FindRef(meshComp).componentTaskIDs;

		// Reverse loops as removes all with the same task ID
		for (int i = componentTaskIDs_Local.Num() - 1; i >= 0; i--)
			RemoveTaskIDFromDetectionTaskQueue(componentTaskIDs_Local[i], gotRemovedBeforeTaskStarted);

		componentDetectTaskIDs.Remove(meshComp);
	}
}

void UVertexPaintDetectionTaskQueue::RemoveMeshComponentFromPaintTaskQueue(UPrimitiveComponent* meshComp, bool gotRemovedBeforeTaskStarted) {

	if (!IsValid(meshComp)) return;


	if (componentPaintTaskIDs.Contains(meshComp)) {

		TArray<int> componentTaskIDs_Local = componentPaintTaskIDs.FindRef(meshComp).componentTaskIDs;

		// Reverse loops as removes all with the same task ID
		for (int i = componentTaskIDs_Local.Num() - 1; i >= 0; i--)
			RemoveTaskIDFromPaintTaskQueue(componentTaskIDs_Local[i], gotRemovedBeforeTaskStarted);

		componentPaintTaskIDs.Remove(meshComp);
	}
}


//-------------------------------------------------------

// Remove Task ID From Paint / Detection Task Queue

void UVertexPaintDetectionTaskQueue::RemoveTaskIDFromPaintTaskQueue(int taskID, bool gotRemovedBeforeTaskStarted) {

	if (calculateColorsPaintQueue.Contains(taskID)) {

		if (gotRemovedBeforeTaskStarted)
			taskRemovedFromQueueDelegate.Broadcast(calculateColorsPaintQueue.FindRef(taskID));

		calculateColorsPaintQueue.Remove(taskID);
	}
};

void UVertexPaintDetectionTaskQueue::RemoveTaskIDFromDetectionTaskQueue(int taskID, bool gotRemovedBeforeTaskStarted) {

	if (calculateColorsDetectionQueue.Contains(taskID)) {

		if (gotRemovedBeforeTaskStarted)
			taskRemovedFromQueueDelegate.Broadcast(calculateColorsDetectionQueue.FindRef(taskID));

		calculateColorsDetectionQueue.Remove(taskID);
	}
};


//-------------------------------------------------------

// Clear Calculate Colors Paint / Detection Tasks

void UVertexPaintDetectionTaskQueue::ClearCalculateColorsPaintTasks() {

	calculateColorsPaintQueue.Empty();
}

void UVertexPaintDetectionTaskQueue::ClearCalculateColorsDetectionTasks() {

	calculateColorsDetectionQueue.Empty();
}


//-------------------------------------------------------

// Get Amount Of Paint / Detection Tasks Component Has

int UVertexPaintDetectionTaskQueue::GetAmountOfDetectionTasksComponentHas(UPrimitiveComponent* meshComp) {

	if (!IsValid(meshComp) || componentDetectTaskIDs.Num() <= 0) return 0;


	if (componentDetectTaskIDs.Contains(meshComp))
		return componentDetectTaskIDs.FindRef(meshComp).componentTaskIDs.Num();


	return 0;
}

int UVertexPaintDetectionTaskQueue::GetAmountOfPaintTasksComponentHas(UPrimitiveComponent* meshComp) {

	if (!IsValid(meshComp) || componentPaintTaskIDs.Num() <= 0) return 0;


	if (componentPaintTaskIDs.Contains(meshComp))
		return componentPaintTaskIDs.FindRef(meshComp).componentTaskIDs.Num();


	return 0;
}


//-------------------------------------------------------

// Refreshes Paint /Detection Task Queue With Valid Mesh Components

void UVertexPaintDetectionTaskQueue::RefreshDetectionTaskQueueWithValidComponents() {

	if (GetCalculateColorsDetectionTasks().Num() <= 0 && componentDetectTaskIDs.Num() <= 0) return;


	TArray<int> invalidTasksTemp;
	TMap<UPrimitiveComponent*, FTaskQueueIDInfo> validComponentTaskIDsTemp;

	// Rebuilds the Component and Task Array TMap with only valid components
	for (auto& componentTaskIDTemp : componentDetectTaskIDs) {

		if (IsValid(componentTaskIDTemp.Key)) {

			validComponentTaskIDsTemp.Add(componentTaskIDTemp.Key, componentTaskIDTemp.Value);
		}

		else {

			invalidTasksTemp.Append(componentTaskIDTemp.Value.componentTaskIDs);
		}
	}

	componentDetectTaskIDs = validComponentTaskIDsTemp;


	if (GetCalculateColorsDetectionTasks().Num() > 0) {

		// Removes all of the Invalid IDs without having to store a bunch of heavy local vars
		for (int i = invalidTasksTemp.Num() - 1; i >= 0; i--)
			RemoveTaskIDFromDetectionTaskQueue(i);
	}
}

void UVertexPaintDetectionTaskQueue::RefreshPaintTaskQueueWithValidComponents() {

	if (GetCalculateColorsPaintTasks().Num() <= 0 && componentPaintTaskIDs.Num() <= 0) return;


	TArray<int> invalidTasksTemp;
	TMap<UPrimitiveComponent*, FTaskQueueIDInfo> validComponentTaskIDsTemp;

	// Rebuilds the Component and Task Array TMap with only valid components
	for (auto& componentTaskIDTemp : componentPaintTaskIDs) {

		if (IsValid(componentTaskIDTemp.Key)) {

			validComponentTaskIDsTemp.Add(componentTaskIDTemp.Key, componentTaskIDTemp.Value);
		}

		else {

			invalidTasksTemp.Append(componentTaskIDTemp.Value.componentTaskIDs);
		}
	}

	componentPaintTaskIDs = validComponentTaskIDsTemp;


	if (GetCalculateColorsPaintTasks().Num() > 0) {

		// Removes all of the Invalid IDs without having to store a bunch of heavy local vars
		for (int i = invalidTasksTemp.Num() - 1; i >= 0; i--)
			RemoveTaskIDFromPaintTaskQueue(i);
	}
}


//-------------------------------------------------------

// Add Calculate Colors Task To Job Queue

void UVertexPaintDetectionTaskQueue::AddCalculateColorsTaskToQueue(FCalculateColorsInfo calculateColorsInfo, int taskID) {

	if (!UVertexPaintFunctionLibrary::IsWorldValid(calculateColorsInfo.fundementalStruct.taskWorld)) return;


	calculateColorsInfo.taskID = taskID;


	// If Setting colors to something, either regularly, with Color Snippets or just Applying Colors Directly, then tasks that are before the one we want to create doesn't matter since what we are setting now is what it should be, we don't want to Add what we're setting now to what's there before. 
	if (calculateColorsInfo.vertexPaintSettings.actor) {

		if (calculateColorsInfo.paintDetectionType == EVertexPaintDetectionType::SetMeshVertexColorsDirectly || calculateColorsInfo.paintDetectionType == EVertexPaintDetectionType::SetMeshVertexColorsDirectlyUsingSerializedString || calculateColorsInfo.paintDetectionType == EVertexPaintDetectionType::PaintColorSnippet) {


			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Mesh %s got Painted with Set, Color Snippet or SetMeshComponentWithVertexColors, or any other paint job that applies colors directly. So we Clears the Paint Task Queue for that Mesh since the previous tasks is irrelevant since these Sets the colors to be something, not Adds onto old ones. ", *calculateColorsInfo.vertexPaintComponent->GetName());


			// Will only run for tasks this queue has added, so if it was a color snippet or set mesh comp colors that want to clear out all previous tasks because they're irrelevant, then they themselves won't get removed from the components cached since this is run before we add them to the queue

			RemoveMeshComponentFromDetectionTaskQueue(calculateColorsInfo.vertexPaintComponent, true);
			RemoveMeshComponentFromPaintTaskQueue(calculateColorsInfo.vertexPaintComponent, true);
		}
	}


	FTaskQueueIDInfo taskQueueIDsTemp;

	if (calculateColorsInfo.vertexPaintSettings.actor) {

		if (componentPaintTaskIDs.Contains(calculateColorsInfo.vertexPaintComponent))
			taskQueueIDsTemp = componentPaintTaskIDs.FindRef(calculateColorsInfo.vertexPaintComponent);

		taskQueueIDsTemp.componentTaskIDs.Add(calculateColorsInfo.taskID);
		componentPaintTaskIDs.Add(calculateColorsInfo.vertexPaintComponent, taskQueueIDsTemp);


		calculateColorsPaintQueue.Add(calculateColorsInfo.taskID, calculateColorsInfo);

		// If Paint Within Area with Complex Shape, then throws a warning if the task queue is over a limit about how the result may not be 100% what you expect
		if (IsValid(calculateColorsInfo.paintOnMeshWithinAreaSettings.actor) && taskQueueIDsTemp.componentTaskIDs.Num() > 5) {

			for (auto compToCheckWithinTemp : calculateColorsInfo.paintOnMeshWithinAreaSettings.withinAreaSettings.componentsToCheckIfIsWithin) {

				if (compToCheckWithinTemp.paintWithinAreaShape == Enum_PaintWithinAreaShape::isComplexShape) {

					RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Warning that task Paint Within Area with Complex may not yield expected result since the Task Queue for the Mesh is over 5, meaning it may take a few frames until the task runs, and if the Mesh you want to paint paint, and componentToCheckIfWithin has moved away from eachother you may not get the expected result. ");
				}
			}
		}
	}

	else if (calculateColorsInfo.vertexDetectSettings.actor) {


		if (componentDetectTaskIDs.Contains(calculateColorsInfo.vertexPaintComponent))
			taskQueueIDsTemp = componentDetectTaskIDs.FindRef(calculateColorsInfo.vertexPaintComponent);

		taskQueueIDsTemp.componentTaskIDs.Add(calculateColorsInfo.taskID);
		componentDetectTaskIDs.Add(calculateColorsInfo.vertexPaintComponent, taskQueueIDsTemp);


		calculateColorsDetectionQueue.Add(calculateColorsInfo.taskID, calculateColorsInfo);
	}


	// If had any tasks before the one we just added
	if (taskQueueIDsTemp.componentTaskIDs.Num() > 1) {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Added another Task for Mesh: %s  -  with ID:  %i  -  Current Amount of Tasks for Mesh: %i", *calculateColorsInfo.vertexPaintComponent->GetName(), calculateColorsInfo.taskID, taskQueueIDsTemp.componentTaskIDs.Num());
	}

	else {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Starts a new Task Queue for Actor: %s and Mesh: %s and Task ID: %i", *calculateColorsInfo.vertexPaintActor->GetName(), *calculateColorsInfo.vertexPaintComponent->GetName(), calculateColorsInfo.taskID);

		// Sets this here instead of in StartCalculateColorsTask() so we can use a by ref with StartCalculateColorsTask() to save Memory since, FCalculateColorsInfo is a very heavy struct. 
		calculateColorsInfo.taskStartedTimeStamp = calculateColorsInfo.fundementalStruct.taskWorld->RealTimeSeconds;

		StartCalculateColorsTask(calculateColorsInfo);
	}
}


//-------------------------------------------------------

// Start Calculate Colors Task

void UVertexPaintDetectionTaskQueue::StartCalculateColorsTask(const FCalculateColorsInfo& calculateColorsInfo) {

	if (onGoingAsyncTasksIDs.Contains(calculateColorsInfo.taskID)) return;


	FVertexPaintCalculateColorsTask calculateColorsTask_Local;
	calculateColorsTask_Local.SetCalculateColorsInfo(calculateColorsInfo);
	calculateColorsTask_Local.asyncTaskFinishedDelegate.BindUObject(this, &UVertexPaintDetectionTaskQueue::CalculateColorsTaskFinished);


	if (FPlatformProcess::SupportsMultithreading() && calculateColorsInfo.fundementalStruct.multiThreadSettings.useMultithreadingForCalculations) {


		// Clears reset timer if new Tasks is going to be started
		if (vertexColorPaint_QueueThreadPool_ResetTimer.IsValid() && GetWorld()) {

			if (GetWorld()->GetTimerManager().TimerExists(vertexColorPaint_QueueThreadPool_ResetTimer))
				GetWorld()->GetTimerManager().ClearTimer(vertexColorPaint_QueueThreadPool_ResetTimer);
		}


		bool successfullAtCreatingThreadPool = true;

		// If threadpool hasn't already been created. It gets destroyed when a task is finished and there are no more left
		if (!vertexColorPaint_QueueThreadPool) {


			int32 numberOfThreads_Local = FGenericPlatformMisc::NumberOfWorkerThreadsToSpawn();
			EThreadPriority threadPriority_Local = EThreadPriority::TPri_Highest;
			FString threadPrioString = "Highest"; // EThreadPriority isn't UENUM so couldn't comfortably print it as string below so using this instead


			if (auto vertexPaintDetectionSettings_Local = GetDefault<UVertexPaintDetectionSettings>()) {


				if (vertexPaintDetectionSettings_Local->vertexPaintAndDetectionPlugin_UseMaximumAmountOfCoresForMultithreading)
					numberOfThreads_Local = FGenericPlatformMisc::NumberOfCoresIncludingHyperthreads();


				switch (vertexPaintDetectionSettings_Local->vertexPaintAndDetectionPlugin_MultithreadPriority) {

				case ETVertexPaintThreadPriority::TimeCritical:
					threadPriority_Local = EThreadPriority::TPri_TimeCritical;
					threadPrioString = "Time Critical";
					break;

				case ETVertexPaintThreadPriority::Highest:
					threadPriority_Local = EThreadPriority::TPri_Highest;
					threadPrioString = "Highest";
					break;

				case ETVertexPaintThreadPriority::Normal:
					threadPriority_Local = EThreadPriority::TPri_Normal;
					threadPrioString = "Normal";
					break;

				case ETVertexPaintThreadPriority::Slowest:
					threadPriority_Local = EThreadPriority::TPri_Lowest;
					threadPrioString = "Slowest";
					break;

				default:
					break;
				}
			}


			vertexColorPaint_QueueThreadPool = FQueuedThreadPool::Allocate();

			// Default Stack Size of 1MB since we're doing such heavy stuff. 
			successfullAtCreatingThreadPool = vertexColorPaint_QueueThreadPool->Create(numberOfThreads_Local, 1024 * 1024, threadPriority_Local, TEXT("Runtime Vertex Paint and Detection Plugin Thread"));
			

			if (successfullAtCreatingThreadPool) {

				RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Creating Thread Pool with Priority: %s  -  Num of Threads: %i", *threadPrioString, numberOfThreads_Local);
			}

			else {

				if (vertexColorPaint_QueueThreadPool)
					delete vertexColorPaint_QueueThreadPool;

				vertexColorPaint_QueueThreadPool = nullptr;

				RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Failed at Creating Thread Pool. ");
			}
		}


		if (successfullAtCreatingThreadPool && vertexColorPaint_QueueThreadPool) {

			onGoingAsyncTasksIDs.Add(calculateColorsInfo.taskID);

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Starting Task %i on Async Thread", calculateColorsInfo.taskID);

			(new FAutoDeleteAsyncTask<FVertexPaintCalculateColorsTask>(calculateColorsTask_Local))->StartBackgroundTask(vertexColorPaint_QueueThreadPool);
		}
	}

	else {

		if (calculateColorsInfo.fundementalStruct.multiThreadSettings.useMultithreadingForCalculations) {

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Orange, "Trying to run Calculations on Multithread but platform does not support it. Falling back to Game Thread instead!");
		}
		else {

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Start Synchronous Calculate Colors Task for Actor: %s", *calculateColorsInfo.vertexPaintActor->GetName());
		}

		onGoingAsyncTasksIDs.Add(calculateColorsInfo.taskID);

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Starting Task %i on Game Thread", calculateColorsInfo.taskID);

		(new FAutoDeleteAsyncTask<FVertexPaintCalculateColorsTask>(calculateColorsTask_Local))->StartSynchronousTask();
	}
}


//-------------------------------------------------------

// Calculate Colors Task Finished

void UVertexPaintDetectionTaskQueue::CalculateColorsTaskFinished(const FCalculateColorsInfo& calculateColorsInfo) {

	if (!UVertexPaintFunctionLibrary::IsWorldValid(calculateColorsInfo.fundementalStruct.taskWorld)) return;


	if (onGoingAsyncTasksIDs.Contains(calculateColorsInfo.taskID))
		onGoingAsyncTasksIDs.Remove(calculateColorsInfo.taskID);


	if (IsInGameThread()) {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Calculate Colors Task Finished for Task ID: %i", calculateColorsInfo.taskID);
	}

	else {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "Calculate Colors Task Finished for Task: %i but NOT in Game Thread as it should!", calculateColorsInfo.taskID);

		return;
	}



	// Updates Cached Amount of Tasks, removes if there's no left. 
	if (IsValid(calculateColorsInfo.vertexPaintComponent)) {


		FTaskQueueIDInfo taskQueueIDsTemp;


		if (calculateColorsInfo.vertexPaintSettings.actor && componentPaintTaskIDs.Contains(calculateColorsInfo.vertexPaintComponent)) {


			taskQueueIDsTemp = componentPaintTaskIDs.FindRef(calculateColorsInfo.vertexPaintComponent);

			if (taskQueueIDsTemp.componentTaskIDs.IsValidIndex(0))
				taskQueueIDsTemp.componentTaskIDs.RemoveAt(0);


			if (taskQueueIDsTemp.componentTaskIDs.Num() <= 0)
				componentPaintTaskIDs.Remove(calculateColorsInfo.vertexPaintComponent);

			else
				componentPaintTaskIDs.Add(calculateColorsInfo.vertexPaintComponent, taskQueueIDsTemp);
		}

		if (calculateColorsInfo.vertexDetectSettings.actor && componentDetectTaskIDs.Contains(calculateColorsInfo.vertexPaintComponent)) {


			taskQueueIDsTemp = componentDetectTaskIDs.FindRef(calculateColorsInfo.vertexPaintComponent);

			if (taskQueueIDsTemp.componentTaskIDs.IsValidIndex(0))
				taskQueueIDsTemp.componentTaskIDs.RemoveAt(0);


			if (taskQueueIDsTemp.componentTaskIDs.Num() <= 0)
				componentDetectTaskIDs.Remove(calculateColorsInfo.vertexPaintComponent);

			else
				componentDetectTaskIDs.Add(calculateColorsInfo.vertexPaintComponent, taskQueueIDsTemp);
		}


		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan,"Amount of Tasks left for Component: %s  -  %i", *calculateColorsInfo.vertexPaintComponent->GetName(), taskQueueIDsTemp.componentTaskIDs.Num());
	}


	bool validTask_Local = false;

	if (calculateColorsInfo.vertexPaintSettings.actor) {

		if (calculateColorsPaintQueue.Contains(calculateColorsInfo.taskID)) {

			validTask_Local = true;
			RemoveTaskIDFromPaintTaskQueue(calculateColorsInfo.taskID);
		}
	}

	if (calculateColorsInfo.vertexDetectSettings.actor) {

		if (calculateColorsDetectionQueue.Contains(calculateColorsInfo.taskID)) {

			validTask_Local = true;
			RemoveTaskIDFromDetectionTaskQueue(calculateColorsInfo.taskID);
		}
	}


	RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Total Amount of Paint Tasks Left: %i  -  Total Amount of Detect Tasks Left: %i  -  Task still Valid: %i", calculateColorsPaintQueue.Num(), calculateColorsDetectionQueue.Num(), validTask_Local);


	bool sourceMeshHasChangedTemp = false;

#if ENGINE_MAJOR_VERSION == 5

	sourceMeshHasChangedTemp = (calculateColorsInfo.vertexPaintSourceMesh != UVertexPaintFunctionLibrary::GetMeshComponentSourceMesh(calculateColorsInfo.vertexPaintComponent) && !calculateColorsInfo.vertexPaintDynamicMeshComponent);

#elif ENGINE_MAJOR_VERSION == 4

	sourceMeshHasChangedTemp = (calculateColorsInfo.vertexPaintSourceMesh != UVertexPaintFunctionLibrary::GetMeshComponentSourceMesh(calculateColorsInfo.vertexPaintComponent));

#endif


	if (sourceMeshHasChangedTemp || !IsValid(calculateColorsInfo.vertexPaintComponent) || !validTask_Local) {


		// If Task Valid, it was still a part of the detect or paint task queues, but either the source mesh has changed or paint component isn't valid
		if (validTask_Local) {

			// If Source Mesh has completely changed, but the component is still valid, then we want to completely clear out any old tasks since they're not relevant anymore and can do so using the ptr. Otherwise if not valid paint comp then we need can't rely on the ptr but need to refresh the task queue

			if (calculateColorsInfo.vertexPaintSettings.actor) {

				if (sourceMeshHasChangedTemp && IsValid(calculateColorsInfo.vertexPaintComponent))
					RemoveMeshComponentFromPaintTaskQueue(calculateColorsInfo.vertexPaintComponent);

				else if (!IsValid(calculateColorsInfo.vertexPaintComponent))
					RefreshPaintTaskQueueWithValidComponents();
			}

			if (calculateColorsInfo.vertexDetectSettings.actor) {


				if (sourceMeshHasChangedTemp && IsValid(calculateColorsInfo.vertexPaintComponent))
					RemoveMeshComponentFromDetectionTaskQueue(calculateColorsInfo.vertexPaintComponent);

				else if (!IsValid(calculateColorsInfo.vertexPaintComponent))
					RefreshDetectionTaskQueueWithValidComponents();
			}
		}

		else {

			RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "Finished Task: %i is not Valid anymore. Possibly a paint job that Sets the colors was created After this task, which makes this task invalid since there's no use for it's result. ", calculateColorsInfo.taskID);
		}


		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "Task: %i Failed. Source Mesh, Paint Component or the Task isn't valid anymore. ", calculateColorsInfo.taskID);


		if (vertexPaintTaskFailedDelegate.IsBound())
			vertexPaintTaskFailedDelegate.Execute(calculateColorsInfo);
	}

	else if (calculateColorsInfo.taskResult.taskSuccessfull) {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Green, "Task Successfully Finished for Actor: %s on Mesh Component: %s  -  Runs Wrap Up!", *calculateColorsInfo.vertexPaintActor->GetName(), *calculateColorsInfo.vertexPaintComponent->GetName());


		if (vertexPaintTaskSuccessDelegate.IsBound())
			vertexPaintTaskSuccessDelegate.Execute(calculateColorsInfo);
	}

	else {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Red, "Task Failed with ID: %i!", calculateColorsInfo.taskID);

		if (vertexPaintTaskFailedDelegate.IsBound())
			vertexPaintTaskFailedDelegate.Execute(calculateColorsInfo);
	}


	// If wasn't fail because invalid mesh then checks if there's another queued up for it and starts it. 

	ShouldStartResetThreadPoolTimer();

	FCalculateColorsInfo taskToStartNext_Local;


	if (calculateColorsInfo.vertexPaintSettings.actor) {

		if (componentPaintTaskIDs.Contains(calculateColorsInfo.vertexPaintComponent)) {

			int taskIDTemp = componentPaintTaskIDs.FindRef(calculateColorsInfo.vertexPaintComponent).componentTaskIDs[0];

			if (calculateColorsPaintQueue.Contains(taskIDTemp))
				taskToStartNext_Local = calculateColorsPaintQueue.FindRef(taskIDTemp);
		}
	}

	if (calculateColorsInfo.vertexDetectSettings.actor) {

		// If it exists at all it means that it has more tasks for the mesh, we grabs the first one
		if (componentDetectTaskIDs.Contains(calculateColorsInfo.vertexPaintComponent)) {


			int taskIDTemp = componentDetectTaskIDs.FindRef(calculateColorsInfo.vertexPaintComponent).componentTaskIDs[0];

			if (calculateColorsDetectionQueue.Contains(taskIDTemp))
				taskToStartNext_Local = calculateColorsDetectionQueue.FindRef(taskIDTemp);
		}
	}

	// If there was any other tasks for the mesh in the queue
	if (IsValid(taskToStartNext_Local.vertexPaintComponent)) {

		RVPDP_LOG(calculateColorsInfo.fundementalStruct.debugSettings, FColor::Cyan, "Starts the next Task in Queue for Actor: %s and Mesh: %s with Task ID: %i", *taskToStartNext_Local.vertexPaintActor->GetName(), *taskToStartNext_Local.vertexPaintComponent->GetName(), taskToStartNext_Local.taskID);

		// Sets this here instead of in StartCalculateColorsTask() so we can use a by ref with StartCalculateColorsTask() to save Memory since, FCalculateColorsInfo is a very heavy struct. 
		taskToStartNext_Local.taskStartedTimeStamp = taskToStartNext_Local.fundementalStruct.taskWorld->RealTimeSeconds;

		StartCalculateColorsTask(taskToStartNext_Local);
	}
}


//-------------------------------------------------------

// Reset Thread Pool

void UVertexPaintDetectionTaskQueue::ResetThreadPool() {

	if (vertexColorPaint_QueueThreadPool && GetCalculateColorsPaintTasks().Num() <= 0 && GetCalculateColorsDetectionTasks().Num() <= 0) {

		UE_LOG(RuntimeVertexColorPlugin, Log, TEXT("Reset Thread Pool!"));

		vertexColorPaint_QueueThreadPool->Destroy();
		delete vertexColorPaint_QueueThreadPool;
		vertexColorPaint_QueueThreadPool = nullptr;
	}
}


//-------------------------------------------------------

// Should Start Reset Thread Pool Timer

void UVertexPaintDetectionTaskQueue::ShouldStartResetThreadPoolTimer() {


	// If no more tasks left then starts a timer to reset the threadpool
	if (GetCalculateColorsPaintTasks().Num() <= 0 && GetCalculateColorsDetectionTasks().Num() <= 0) {

		if (IsValid(GetWorld())) {

			GetWorld()->GetTimerManager().SetTimer(vertexColorPaint_QueueThreadPool_ResetTimer, this, &UVertexPaintDetectionTaskQueue::ResetThreadPool, 5, false, 5);
		}
		else {

			ResetThreadPool();
		}
	}

	else {

		if (GetWorld()) {

			if (GetWorld()->GetTimerManager().TimerExists(vertexColorPaint_QueueThreadPool_ResetTimer))
				GetWorld()->GetTimerManager().ClearTimer(vertexColorPaint_QueueThreadPool_ResetTimer);
		}
	}
}
