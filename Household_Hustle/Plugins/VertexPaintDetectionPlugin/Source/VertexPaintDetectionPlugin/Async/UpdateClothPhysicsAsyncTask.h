// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "VertexPaintFunctionLibrary.h"
#include "Async/Async.h"
#include "Async/AsyncWork.h"


struct FUpdateClothPhysicsAsyncTask {

	DECLARE_DELEGATE_OneParam(FOnTaskComplete, const TArray<FVertexDetectChaosClothPhysicsSettings>&);
	FOnTaskComplete OnUpdateClothPhysicsAsyncTaskCompleteDelegate;


	TStatId GetStatId() const {

		RETURN_QUICK_DECLARE_CYCLE_STAT(FUpdateClothPhysicsAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
	}

	bool CanAbandon() {

		return true;
	}

	void Abandon() {

		// Cleanup or finalize any remaining logic if the task is abandoned
	}


	UPROPERTY()
	USkeletalMeshComponent* skelMeshComponent = nullptr;

	TArray<FVertexDetectChaosClothPhysicsSettings> chaosClothPhysicsSettings;


	FUpdateClothPhysicsAsyncTask(USkeletalMeshComponent* skeletalMeshComponent) {

		skelMeshComponent = skeletalMeshComponent;
	}


	void DoWork() {


#if ENGINE_MAJOR_VERSION >= 5

		if (skelMeshComponent) {

			TMap<UClothingAssetBase*, FVertexDetectChaosClothPhysicsSettings> clothPhysicsSettingsResult_Local = UVertexPaintFunctionLibrary::GetChaosClothPhysicsSettingsBasedOnExistingColors(skelMeshComponent);

			clothPhysicsSettingsResult_Local.GenerateValueArray(chaosClothPhysicsSettings);
		}

#endif


		if (IsInGameThread()) {

			OnUpdateClothPhysicsAsyncTaskCompleteDelegate.ExecuteIfBound(chaosClothPhysicsSettings);
		}

		else {

			FOnTaskComplete OnUpdateClothPhysicsAsyncTaskComplete_Local = OnUpdateClothPhysicsAsyncTaskCompleteDelegate;
			TArray<FVertexDetectChaosClothPhysicsSettings> chaosClothPhysicsSettings_Local = chaosClothPhysicsSettings;

			// Broadcasts on Game Thread so the actual Applying of colors happens there
			AsyncTask(ENamedThreads::GameThread, [this, OnUpdateClothPhysicsAsyncTaskComplete_Local, chaosClothPhysicsSettings_Local]() mutable {

				OnUpdateClothPhysicsAsyncTaskComplete_Local.ExecuteIfBound(chaosClothPhysicsSettings_Local);
			});
		}
	}
};