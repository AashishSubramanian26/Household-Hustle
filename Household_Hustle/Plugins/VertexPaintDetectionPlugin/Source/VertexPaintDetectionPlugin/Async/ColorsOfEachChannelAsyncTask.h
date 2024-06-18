// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "VertexPaintFunctionLibrary.h"
#include "Async/Async.h"
#include "TaskResultsPrerequisites.h"
#include "Async/AsyncWork.h"


struct FColorsOfEachChannelAsyncTask {


	DECLARE_DELEGATE_OneParam(FOnTaskComplete, const FVertexDetectAmountOfPaintedColorsOfEachChannel&);
	FOnTaskComplete OnColorsOfEachChannelAsyncTaskCompleteDelegate;


	TStatId GetStatId() const {

		RETURN_QUICK_DECLARE_CYCLE_STAT(FColorsOfEachChannelAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
	}


	bool CanAbandon() {

		return true;
	}

	void Abandon() {

		// Cleanup or finalize any remaining logic if the task is abandoned
	}


	TArray<FColor> vertexColorsToGetAmountOfForEachChannel;
	float minColorAmountToBeConsideredToUse = 0;

	FColorsOfEachChannelAsyncTask(TArray<FColor> vertexColors, float minColorAmountToBeConsidered) {

		vertexColorsToGetAmountOfForEachChannel = vertexColors;
		minColorAmountToBeConsideredToUse = minColorAmountToBeConsidered;
	}


	void DoWork() {

		const FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannelResult_Local = UVertexPaintFunctionLibrary::GetAmountOfPaintedColorsForEachChannel(vertexColorsToGetAmountOfForEachChannel, minColorAmountToBeConsideredToUse);


		if (IsInGameThread()) {

			OnColorsOfEachChannelAsyncTaskCompleteDelegate.ExecuteIfBound(amountOfPaintedColorsOfEachChannelResult_Local);
		}

		else {

			FOnTaskComplete onTaskCompleteDelegate_Local = OnColorsOfEachChannelAsyncTaskCompleteDelegate;

			// Broadcasts on Game Thread so the actual Applying of colors happens there
			AsyncTask(ENamedThreads::GameThread, [this, onTaskCompleteDelegate_Local, amountOfPaintedColorsOfEachChannelResult_Local]() mutable {

				onTaskCompleteDelegate_Local.ExecuteIfBound(amountOfPaintedColorsOfEachChannelResult_Local);
			});
		}
	}
};