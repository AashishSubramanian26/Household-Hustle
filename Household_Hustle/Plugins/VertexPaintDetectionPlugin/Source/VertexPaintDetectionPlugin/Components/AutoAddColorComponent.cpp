// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved.


#include "AutoAddColorComponent.h"

// Engine
#include "TimerManager.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/World.h"

// Plugin
#include "VertexPaintFunctionLibrary.h"
#include "VertexPaintDetectionGISubSystem.h"
#include "VertexPaintDetectionLog.h"


//-------------------------------------------------------

// Begin Play

void UAutoAddColorComponent::BeginPlay() {

	Super::BeginPlay();

	debugSettings.printLogsToScreen = printDebugLogsToScreen;
	debugSettings.printLogsToScreen_Duration = printDebugLogsToScreen_Duration;
	debugSettings.printLogsToOutputLog = printDebugLogsToOutputLog;
}


//-------------------------------------------------------

// Mesh Added To Be Auto Painted

void UAutoAddColorComponent::MeshAddedToBeAutoPainted(UPrimitiveComponent* meshComponent, FAutoAddColorSettings autoAddColorSettings) {

	if (!meshComponent) return;


	bool hasBindedDestroyOnActor_Local = false;
	for (auto& meshesTemp : autoPaintingMeshes) {

		if (meshesTemp.Key->GetOwner() == meshComponent->GetOwner())
			hasBindedDestroyOnActor_Local = true;
	}


	if (!hasBindedDestroyOnActor_Local)
		meshComponent->GetOwner()->OnDestroyed.AddDynamic(this, &UAutoAddColorComponent::AutoPaintedActorDestroyed);


	// If already added then we can update the settings as well. 
	autoPaintingMeshes.Add(meshComponent, autoAddColorSettings);


	// If not already binded to paint task finished which will run for every finished paint job. 
	if (!isAutoPaintingEnabled)
		UVertexPaintFunctionLibrary::GetVertexPaintGameInstanceSubsystem(this)->vertexPaintTaskFinished.AddDynamic(this, &UAutoAddColorComponent::PaintTaskFinished);

	isAutoPaintingEnabled = true;
}


//-------------------------------------------------------

// Is Mesh Being Painted Or Is Queued Up

bool UAutoAddColorComponent::IsMeshBeingPaintedOrIsQueuedUp(UPrimitiveComponent* meshComponent) {

	FAutoAddColorSettings autoAddColorSettingsTemp = autoPaintingMeshes.FindRef(meshComponent);
	if (autoAddColorSettingsTemp.isQueuedUpWithDelay) return true;

	if (GetCurrentTasksMeshComponents().Contains(meshComponent)) return true;


	return false;
}


//-------------------------------------------------------

// Paint Task Finished

void UAutoAddColorComponent::PaintTaskFinished(const FVertexDetectTaskResultInfo& taskResultInfo, const FVertexDetectPaintTaskResultInfo& paintTaskResultInfo, const FVertexDetectAdditionalDataToPassThrough& additionalData) {


	UPrimitiveComponent* meshComponent = taskResultInfo.meshVertexData.meshComp.Get();

	// If this is the paint component that instigated the Task
	if (taskResultInfo.associatedPaintComponent == this) {

		// If not valid anymore then cleans up any empty fields. The Destroyed callback should've cleaned it up but so this is just in case. 
		if (meshComponent) {

			RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - Finished Paint Task for Mesh: %s!", *GetName(), *meshComponent->GetName());


			if (onlyStartNewTaskIfChangeWasMade && !paintTaskResultInfo.anyVertexColorGotChanged) {

				RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - Finished Paint Task didn't do any difference on vertex colors, and the auto paint component is set to only start new tasks if change is made so returns!", *GetName());
				return;
			}
		}

		else {

			RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - Finished Paint Task for Mesh that isn't valid anymore!", *GetName());

			VerifyAllCachedMeshComponents();
		}
	}

	if (!meshComponent) return;
	if (!autoPaintingMeshes.Contains(meshComponent)) return;
	if (IsMeshBeingPaintedOrIsQueuedUp(meshComponent)) return;

	FAutoAddColorSettings autoAddColorSettings_Local = autoPaintingMeshes.FindRef(meshComponent);

	if (autoAddColorSettings_Local.isPaused) {

		RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - A Task Finished for Mesh %s but this Paint Component has Paused it's auto Painting on it so doesn't start a new one!", *GetName(), *meshComponent->GetName());
		return;
	}


	// if passThrough_Bool3 is true, that means we invoked this function because all the Tasks was finished, so then we don't want to cache the finished results. 
	if (onlyStartNewRoundOfTasksIfAllHasBeenFinished && !additionalData.passThrough_Bool3) {


		RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s -  Set to Only Start New Task when all is Finished, so doesn't check if should start new task but caches the task results so can do it all when there is no more expected callbacks. ", *GetName());


		FAutoPaintTaskResults startNewRoundOfTasksInfo_Local;
		startNewRoundOfTasksInfo_Local.taskResultInfo = taskResultInfo;
		startNewRoundOfTasksInfo_Local.paintTaskResultInfo = paintTaskResultInfo;
		startNewRoundOfTasksInfo_Local.additionalData = additionalData;
		startNewRoundOfTasksInfo_Local.additionalData.passThrough_Bool3 = true;
		onlyStartNewRoundOfTasksIfAllHasBeenFinished_CachedResults.Add(startNewRoundOfTasksInfo_Local);


		if (minimumDurationOfRoundOfTasks > 0)
			totalDurationRoundOfTasksTook += taskResultInfo.taskDuration;


		// If not expecting any more callbacks either from a task being run or one that's going start after a delay, then we start the next round of Tasks
		if (GetTotalTasksInitiatedByComponent() <= 0 && !IsAnyTaskGoingToStartAfterDelay()) {


			float delayBetweenRoundsOfTasks = 0;

			// If there is a set minimum duration that a round of tasks has to take, but we finished faster, then delay it so we reach the minimum duration
			if (minimumDurationOfRoundOfTasks > 0 && totalDurationRoundOfTasksTook < minimumDurationOfRoundOfTasks)
				delayBetweenRoundsOfTasks = minimumDurationOfRoundOfTasks - totalDurationRoundOfTasksTook;

			totalDurationRoundOfTasksTook = 0;


			// Can have a delay between rounds of tasks as well, so if you for instance have a centralized system that dries meshes in rounds so they dry at the same pace, then you can get more control of the speed of it. 
			if (delayBetweenRoundsOfTasks > 0) {

				if (!GetWorld()->GetTimerManager().IsTimerActive(onlyStartNewRoundOfTasksDelayTimer)) {


					RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - Set to start new round of Tasks after a Delay so does so after %f seconds. ", *GetName(), delayBetweenRoundsOfTasks);

					FTimerDelegate timerDelegate_Local;
					timerDelegate_Local.BindUObject(this, &UAutoAddColorComponent::StartNewRoundOfTasks);

					GetWorld()->GetTimerManager().SetTimer(onlyStartNewRoundOfTasksDelayTimer, timerDelegate_Local, delayBetweenRoundsOfTasks, false);
				}
			}

			else {

				StartNewRoundOfTasks();
			}
		}

		return;
	}


	RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - Checks if Should Start New Task for Component: %s!", *GetName(), *meshComponent->GetName());


	bool isFullyPainted_Local = false;
	bool isCompletelyEmpty_Local = false;

	if (ShouldStartNewTaskOnComponent(taskResultInfo, paintTaskResultInfo.anyVertexColorGotChanged, isFullyPainted_Local, isCompletelyEmpty_Local)) {


		if (GetWorld()->GetTimerManager().IsTimerActive(verifyMeshComponentsTimer))
			GetWorld()->GetTimerManager().ClearTimer(verifyMeshComponentsTimer);

		float delayBetweenTask = autoAddColorSettings_Local.delayBetweenTasks;

		if (applyOneFrameDelayBetweenTasksForInstigatingComponent && taskResultInfo.associatedPaintComponent == this && delayBetweenTask <= 0)
			delayBetweenTask = 0.01f;


		// If this is the component that finished the task, then always use a 1 frame delay to allow for other auto paint components to queue up something as well, for instance if this is a auto paint within area for water, and there is another for entire mesh for drying. 
		if (delayBetweenTask > 0) {


			RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - Starts Another Task on Mesh: %s after %f Delay", *GetName(), *meshComponent->GetName(), delayBetweenTask);


			FTimerDelegate timerDelegate_Local;
			timerDelegate_Local.BindUObject(this, &UAutoAddColorComponent::AutoPaintDelayFinished, meshComponent);

			FTimerHandle timerHandle_Local = FTimerHandle();
			autoAddColorSettings_Local.isQueuedUpWithDelay = true;
			autoAddColorSettings_Local.delayTimerHandle = timerHandle_Local;
			autoPaintingMeshes.Add(meshComponent, autoAddColorSettings_Local);

			GetWorld()->GetTimerManager().SetTimer(timerHandle_Local, timerDelegate_Local, delayBetweenTask, false);
		}

		else {

			RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - Starts Another Task for Mesh: %s", *GetName(), *meshComponent->GetName());

			StartAutoPaintTask(meshComponent);
		}
	}

	else {


		if (isFullyPainted_Local)
			RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - Shouldn't start another Task for Mesh %s as it is Fully Painted with what the user is trying to Add.", *GetName(), *meshComponent->GetName());

		else if (isCompletelyEmpty_Local)
			RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - Shouldn't start another Task for Mesh %s as it is Completely Empty of what the user is trying to remove.", *GetName(), *meshComponent->GetName());

		else
			RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - Shouldn't start another Task for Mesh %s. ", *GetName(), *meshComponent->GetName());



		if (autoAddColorSettings_Local.stopAutoPaintingMeshIfFullyPainted && isFullyPainted_Local) {

			RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - Mesh %s is Fully Painted and is set to Stop being Auto Painted if so, so removes it from the list. ", *GetName(), *meshComponent->GetName());

			StopAutoPaintingMesh(meshComponent);
		}

		if (autoAddColorSettings_Local.stopAutoPaintingMeshIfCompletelyEmpty && isCompletelyEmpty_Local) {

			RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - Mesh %s is Completely Empty and is set to Stop being Auto Painted if so, so removes it from the list. ", *GetName(), *meshComponent->GetName());

			StopAutoPaintingMesh(meshComponent);
		}



		// If nothing is going to start after a delay, then we start a Timer that will periodically verify mesh components, so in case any gets destroyed we can clean it up. 
		if (GetTotalTasksInitiatedByComponent() <= 0 && !GetWorld()->GetTimerManager().IsTimerActive(verifyMeshComponentsTimer)) {


			RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - Finished Painting and nothing more is queued up to start. Starts a timer to verify mesh components. ", *GetName());

			GetWorld()->GetTimerManager().SetTimer(verifyMeshComponentsTimer, this, &UAutoAddColorComponent::VerifyAllCachedMeshComponents, verifyMeshComponentsInterval, true);
		}
	}
}


//-------------------------------------------------------

// Auto Paint Delay Finished

void UAutoAddColorComponent::AutoPaintDelayFinished(UPrimitiveComponent* meshComponent) {

	if (meshComponent) {

		// If during the delay removed the mesh to be auto painted
		if (!autoPaintingMeshes.Contains(meshComponent)) return;


		FAutoAddColorSettings autoAddColorSettingsTemp = autoPaintingMeshes.FindRef(meshComponent);
		autoAddColorSettingsTemp.isQueuedUpWithDelay = false;
		autoAddColorSettingsTemp.delayTimerHandle = FTimerHandle();
		autoPaintingMeshes.Add(meshComponent, autoAddColorSettingsTemp);


		if (autoAddColorSettingsTemp.isPaused) return;
		if (!isAutoPaintingEnabled) return;


		RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - AutoPaintDelayFinished Finished for Mesh %s, Starts Auto Paint Task", *GetName(), *meshComponent->GetName());

		StartAutoPaintTask(meshComponent);
	}

	// If not valid mesh anymore after the delay we cleanup any null keys
	else {

		VerifyAllCachedMeshComponents();
	}
}


//-------------------------------------------------------

// Start New Round Of Tasks Delay Finished

void UAutoAddColorComponent::StartNewRoundOfTasks() {

	if (!isAutoPaintingEnabled) return;


	RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - Starts New Round Of Tasks. ", *GetName());

	for (auto finishedTaskInfo : onlyStartNewRoundOfTasksIfAllHasBeenFinished_CachedResults)
		PaintTaskFinished(finishedTaskInfo.taskResultInfo, finishedTaskInfo.paintTaskResultInfo, finishedTaskInfo.additionalData);

	onlyStartNewRoundOfTasksIfAllHasBeenFinished_CachedResults.Empty();
}


//-------------------------------------------------------

// Should Start New Task On Component

bool UAutoAddColorComponent::ShouldStartNewTaskOnComponent(const FVertexDetectTaskResultInfo& taskResultInfo, const bool& anyVertexColorsGotChanged, bool& isFullyPainted, bool& isCompletelyEmpty) {

	isFullyPainted = false;

	if (!isAutoPaintingEnabled) return false;
	if (!taskResultInfo.taskSuccessfull) return false;

	UPrimitiveComponent* meshComponent = taskResultInfo.meshVertexData.meshComp.Get();

	if (!meshComponent) return false;
	if (!autoPaintingMeshes.Contains(meshComponent)) return false;
	if (IsMeshBeingPaintedOrIsQueuedUp(meshComponent)) return false;


	FVertexDetectRGBAStruct applyVertexColorSettings_Local;
	if (!GetApplyVertexColorSettings(meshComponent, applyVertexColorSettings_Local)) return false;


	if (taskResultInfo.amountOfPaintedColorsOfEachChannel.successfullyGotColorChannelResultsAtMinAmount) {


		TArray<EVertexColorChannel> paintsOnChannels_Local;
		TArray<float> paintStrengthsForEachChannel_Local;

		if (DoesAutoPaintOnMeshPaintUsingVertexColorChannels(meshComponent, paintsOnChannels_Local, paintStrengthsForEachChannel_Local, applyVertexColorSettings_Local)) {


			FVertexDetectAmountOfPaintedColorsOfEachChannel_Results channelResult_Local;
			int fullOnAmountOfChannels = 0;
			int emptyOnAmountOfChannels = 0;

			for (int i = 0; i < paintsOnChannels_Local.Num(); i++) {

				switch (paintsOnChannels_Local[i]) {

				case EVertexColorChannel::RedChannel:
					channelResult_Local = taskResultInfo.amountOfPaintedColorsOfEachChannel.redChannelResult;
					break;

				case EVertexColorChannel::GreenChannel:
					channelResult_Local = taskResultInfo.amountOfPaintedColorsOfEachChannel.greenChannelResult;
					break;

				case EVertexColorChannel::BlueChannel:
					channelResult_Local = taskResultInfo.amountOfPaintedColorsOfEachChannel.blueChannelResult;
					break;

				case EVertexColorChannel::AlphaChannel:
					channelResult_Local = taskResultInfo.amountOfPaintedColorsOfEachChannel.alphaChannelResult;
					break;

				default:
					break;
				}


				// If Adding color for this channel, then checks if fully painting, otherwise keeps adding
				if (paintStrengthsForEachChannel_Local[i] > 0) {

					// Keep adding until full
					if (channelResult_Local.averageColorAmountAtMinAmount < 1)
						return true;
					else
						fullOnAmountOfChannels++;
				}

				// If Removing on this channel, then Checks if Empty, if not then keep removing
				else if (paintStrengthsForEachChannel_Local[i] < 0) {

					// Keep removing until there is no vertices left
					if (channelResult_Local.averageColorAmountAtMinAmount > 0)
						return true;
					else
						emptyOnAmountOfChannels++;
				}
			}


			// If fully painted or emptied on all channels and that's why we're not starting any new ones. 
			if (paintsOnChannels_Local.Num() == fullOnAmountOfChannels)
				isFullyPainted = true;

			if (paintsOnChannels_Local.Num() == emptyOnAmountOfChannels)
				isCompletelyEmpty = true;


			RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - Successfully Got Colors of Each Channel Result, and all channels are either Fully Painted if Adding, or Completely Empty if Removing, so shouldn't start another Task for Mesh %s. ", *GetName(), *meshComponent->GetName());

			return false;
		}
	}


	if (taskResultInfo.amountOfPaintedColorsOfEachChannel.successfullyGotPhysicsSurfaceResultsAtMinAmount) {


		TArray<TEnumAsByte<EPhysicalSurface>> applyingPhysicsSurfaces_Local;
		float physicsSurfacePaintStrength_Local = 0;

		if (DoesAutoPaintOnMeshPaintUsingPhysicsSurface(meshComponent, applyingPhysicsSurfaces_Local, physicsSurfacePaintStrength_Local, applyVertexColorSettings_Local)) {


			int fullOnAmountOfPhysicsSurfaces = 0;
			int emptyOnAmountOfPhysicsSurfaces = 0;

			for (auto& physicsSurfaceResult_Local : taskResultInfo.amountOfPaintedColorsOfEachChannel.physicsSurfacesResult) {


				auto parentPhysicsSurfaces_Local = UVertexPaintFunctionLibrary::GetParentsOfPhysicsSurface_Wrapper(this, physicsSurfaceResult_Local.Key);


				// If has Physics Parents, then checks if the applied surface is the parent. For instance if applying Wet, on a material that may not have Wet, but a child like Cobble-Wet, so the physicsSurfacesResult doesn't have Wet but Cobble-Wet, it can still check the parent if that's a match. 
				if (parentPhysicsSurfaces_Local.Num() > 0)
				{

					for (auto physicsSurfaceResultParent_Local : parentPhysicsSurfaces_Local) {

						for (auto appliedPhysicsSurface_Local : applyingPhysicsSurfaces_Local) {

							if (appliedPhysicsSurface_Local == physicsSurfaceResultParent_Local || taskResultInfo.amountOfPaintedColorsOfEachChannel.physicsSurfacesResult.Contains(appliedPhysicsSurface_Local)) {

								// If Adding colors, then checks if fully painting, otherwise keeps adding
								if (physicsSurfacePaintStrength_Local > 0) {

									if (physicsSurfaceResult_Local.Value.averageColorAmountAtMinAmount < 1)
										return true;
								}

								// If Removing, then Checks if Empty, if not then keep removing
								else if (physicsSurfacePaintStrength_Local < 0) {

									if (physicsSurfaceResult_Local.Value.averageColorAmountAtMinAmount > 0)
										return true;
								}
							}
						}
					}
				}

				// If no physics parents then checks the applied physics surface if it was a part of the result. 
				else
				{

					for (auto appliedPhysicsSurface_Local : applyingPhysicsSurfaces_Local) {


						if (taskResultInfo.amountOfPaintedColorsOfEachChannel.physicsSurfacesResult.Contains(appliedPhysicsSurface_Local)) {

							// If Adding colors, then checks if fully painting, otherwise keeps adding
							if (physicsSurfacePaintStrength_Local > 0) {

								if (physicsSurfaceResult_Local.Value.averageColorAmountAtMinAmount < 1)
									return true;
							}

							// If Removing, then Checks if Empty, if not then keep removing
							else if (physicsSurfacePaintStrength_Local < 0) {

								if (physicsSurfaceResult_Local.Value.averageColorAmountAtMinAmount > 0)
									return true;
							}
						}
					}
				}
			}


			// If fully painted or emptied on all surfaces and that's why we're not starting any new ones. 
			if (applyingPhysicsSurfaces_Local.Num() == fullOnAmountOfPhysicsSurfaces)
				isFullyPainted = true;

			if (applyingPhysicsSurfaces_Local.Num() == emptyOnAmountOfPhysicsSurfaces)
				isCompletelyEmpty = true;


			RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s - Successfully Got Physics Surface Result, and the surface we're applying on is either Fully Painted if Adding, or Completely Empty if Removing, so shouldn't start another Task for Mesh %s. ", *GetName(), *meshComponent->GetName());

			return false;
		}
	}


	return false;
}


//-------------------------------------------------------

// Start Auto Paint Task

void UAutoAddColorComponent::StartAutoPaintTask(UPrimitiveComponent* meshComponent) {

	// Should be Overriden by children with super and with their specific task they want to start. 

	if (GetWorld()->GetTimerManager().IsTimerActive(verifyMeshComponentsTimer))
		GetWorld()->GetTimerManager().ClearTimer(verifyMeshComponentsTimer);
}


//-------------------------------------------------------

// Get Apply Vertex Color Settings

bool UAutoAddColorComponent::GetApplyVertexColorSettings(UPrimitiveComponent* meshComponent, FVertexDetectRGBAStruct& applyVertexColorSettings) {

	// Should be overriden by children

	return false;
}


//-------------------------------------------------------

// Does Auto Paint On Mesh Paint Using Vertex Color Channels

bool UAutoAddColorComponent::DoesAutoPaintOnMeshPaintUsingVertexColorChannels(UPrimitiveComponent* meshComponent, TArray<EVertexColorChannel>& paintsOnChannels, TArray<float>& paintStrengthsForEachChannel, const FVertexDetectRGBAStruct& applyVertexColorsSettings) {

	// If painting with physics surface then we shouldn't check channels
	if (applyVertexColorsSettings.applyColorsUsingPhysicsSurface.applyVertexColorUsingPhysicsSurface) return false;


	if (applyVertexColorsSettings.applyColorsOnRedChannel.amountToApply != 0) {

		paintsOnChannels.Add(EVertexColorChannel::RedChannel);
		paintStrengthsForEachChannel.Add(applyVertexColorsSettings.applyColorsOnRedChannel.amountToApply);
	}

	if (applyVertexColorsSettings.applyColorsOnGreenChannel.amountToApply != 0) {

		paintsOnChannels.Add(EVertexColorChannel::GreenChannel);
		paintStrengthsForEachChannel.Add(applyVertexColorsSettings.applyColorsOnGreenChannel.amountToApply);
	}

	if (applyVertexColorsSettings.applyColorsOnBlueChannel.amountToApply != 0) {

		paintsOnChannels.Add(EVertexColorChannel::BlueChannel);
		paintStrengthsForEachChannel.Add(applyVertexColorsSettings.applyColorsOnBlueChannel.amountToApply);
	}

	if (applyVertexColorsSettings.applyColorsOnAlphaChannel.amountToApply != 0) {

		paintsOnChannels.Add(EVertexColorChannel::AlphaChannel);
		paintStrengthsForEachChannel.Add(applyVertexColorsSettings.applyColorsOnAlphaChannel.amountToApply);
	}

	return true;
}


//-------------------------------------------------------

// Does Auto Paint On Mesh Paint Using Physics Surface

bool UAutoAddColorComponent::DoesAutoPaintOnMeshPaintUsingPhysicsSurface(UPrimitiveComponent* meshComponent, TArray<TEnumAsByte<EPhysicalSurface>>& physicsSurfaces, float& paintStrength, const FVertexDetectRGBAStruct& applyVertexColorsSettings) {

	if (!applyVertexColorsSettings.applyColorsUsingPhysicsSurface.applyVertexColorUsingPhysicsSurface) return false;

	paintStrength = applyVertexColorsSettings.applyColorsUsingPhysicsSurface.paintStrengthToApply;
	physicsSurfaces = applyVertexColorsSettings.applyColorsUsingPhysicsSurface.physicsSurfacesToApply;

	return true;
}


//-------------------------------------------------------

// Adjust Callback Settings

void UAutoAddColorComponent::AdjustCallbackSettings(const FVertexDetectRGBAStruct& applyVertexColorSettings, FVertexDetectEventSettings& callbackSettings) {


	callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeIfMinColorAmountIs = 0.001f;

	// Makes sure we Include what we need from the Callback settings so when PaintTaskFinished runs for a job we've instigated here, we can properly check if we should start another task. 
	if (applyVertexColorSettings.applyColorsUsingPhysicsSurface.applyVertexColorUsingPhysicsSurface) {


		callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includePhysicsSurfaceResultOfEachChannel = true;
		callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel = applyVertexColorSettings.applyColorsUsingPhysicsSurface.physicsSurfacesToApply;


		RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s  -  Adjusts Callback Setting to Include Amount of Colors Result for Physics Surface since it's set to Paint with Physics Surface.  ", *GetName());
	}

	else {

		callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeVertexColorChannelResultOfEachChannel = true;

		RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s  -  Adjusts Callback Setting to Include Amount of Painted Colors of Each Channel Results since it's set to Paint with RGBA and not Physics Surface. ", *GetName());
	}
}


//-------------------------------------------------------

// Auto Painted Actor Destroyed

void UAutoAddColorComponent::AutoPaintedActorDestroyed(AActor* destroyedActor) {

	for (auto& meshTemp : autoPaintingMeshes) {

		if (meshTemp.Key->GetOwner() == destroyedActor) {

			RVPDP_LOG(debugSettings, FColor::Cyan, "Stops Auto Painting Component: %s related to Actor: %s because the actor was Destroyed!", *meshTemp.Key->GetName(), *destroyedActor->GetName());

			StopAutoPaintingMesh(meshTemp.Key);
			return;
		}
	}
}


//-------------------------------------------------------

// Stop All Auto Painting

void UAutoAddColorComponent::StopAllAutoPainting() {


	RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s  -  Set to Stop All Auto Painting. ", *GetName());

	for (auto& meshTemp : autoPaintingMeshes)
		StopAutoPaintingMesh(meshTemp.Key);
}


//-------------------------------------------------------

// Stop Auto Painting Mesh

void UAutoAddColorComponent::StopAutoPaintingMesh(UPrimitiveComponent* meshComponent) {

	if (!meshComponent) return;
	if (!autoPaintingMeshes.Contains(meshComponent)) return;


	RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s  -  Stops Auto Painting on Mesh: %s", *GetName(), *meshComponent->GetName());


	autoPaintingMeshes.Remove(meshComponent);


	// if no other mesh components from the same actor is being painted then we can unbind from the OnDestroyed
	bool hasBindedDestroyOnActor_Local = false;
	for (auto& meshesTemp : autoPaintingMeshes) {

		if (meshesTemp.Key->GetOwner() == meshComponent->GetOwner())
			hasBindedDestroyOnActor_Local = true;
	}

	if (!hasBindedDestroyOnActor_Local)
		meshComponent->GetOwner()->OnDestroyed.RemoveDynamic(this, &UAutoAddColorComponent::AutoPaintedActorDestroyed);


	if (autoPaintingMeshes.Num() <= 0) {

		isAutoPaintingEnabled = false;
		UVertexPaintFunctionLibrary::GetVertexPaintGameInstanceSubsystem(this)->vertexPaintTaskFinished.RemoveDynamic(this, &UAutoAddColorComponent::PaintTaskFinished);

		if (GetWorld()->GetTimerManager().IsTimerActive(verifyMeshComponentsTimer))
			GetWorld()->GetTimerManager().ClearTimer(verifyMeshComponentsTimer);
	}
}


//-------------------------------------------------------

// Pause Auto Painting Mesh

void UAutoAddColorComponent::PauseAutoPaintingMesh(UPrimitiveComponent* meshComponent) {

	if (!meshComponent) return;
	if (!autoPaintingMeshes.Contains(meshComponent)) return;

	FAutoAddColorSettings autoAddColorSettingsTemp = autoPaintingMeshes.FindRef(meshComponent);

	if (autoAddColorSettingsTemp.isPaused) return;

	autoAddColorSettingsTemp.isPaused = true;
	autoPaintingMeshes.Add(meshComponent, autoAddColorSettingsTemp);


	RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s  -  Set to Pause Auto Painting on Mesh: %s", *GetName(), *meshComponent->GetName());
}


//-------------------------------------------------------

// Resume Auto Painting Mesh

void UAutoAddColorComponent::ResumeAutoPaintingMesh(UPrimitiveComponent* meshComponent) {

	if (!meshComponent) return;
	if (!autoPaintingMeshes.Contains(meshComponent)) return;

	FAutoAddColorSettings autoAddColorSettingsTemp = autoPaintingMeshes.FindRef(meshComponent);

	if (!autoAddColorSettingsTemp.isPaused) return;

	autoAddColorSettingsTemp.isPaused = false;
	autoPaintingMeshes.Add(meshComponent, autoAddColorSettingsTemp);


	RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s  -  Set to Resume Auto Painting on Mesh: %s", *GetName(), *meshComponent->GetName());

	StartAutoPaintTask(meshComponent);
}


//-------------------------------------------------------

// Is Any Task Going To Start After Delay

bool UAutoAddColorComponent::IsAnyTaskGoingToStartAfterDelay() {

	for (auto& autoTasks : autoPaintingMeshes)
		if (autoTasks.Value.isQueuedUpWithDelay) return true;

	return false;
}


//-------------------------------------------------------

// Verify Mesh Components

void UAutoAddColorComponent::VerifyAllCachedMeshComponents() {


	RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s  -  Verify All Cached Mesh Components.", *GetName());

	if (autoPaintingMeshes.Num() > 0) {

		TArray<UPrimitiveComponent*> meshComponents;
		autoPaintingMeshes.GetKeys(meshComponents);

		TArray<FAutoAddColorSettings> autoAddColorSettings;
		autoPaintingMeshes.GenerateValueArray(autoAddColorSettings);

		autoPaintingMeshes.Empty();

		for (int i = 0; i < meshComponents.Num(); i++) {

			if (IsValid(meshComponents[i]))
				autoPaintingMeshes.Add(meshComponents[i], autoAddColorSettings[i]);
		}
	}

	else {

		RVPDP_LOG(debugSettings, FColor::Cyan, "Auto Paint Component: %s  -  Nothing cached to verify so clears verify timer. ", *GetName());

		if (GetWorld()->GetTimerManager().IsTimerActive(verifyMeshComponentsTimer))
			GetWorld()->GetTimerManager().ClearTimer(verifyMeshComponentsTimer);
	}
}
