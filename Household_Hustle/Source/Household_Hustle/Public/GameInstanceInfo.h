// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameInstanceInfo.generated.h"

/**
 * 
 */
UCLASS()
class HOUSEHOLD_HUSTLE_API UGameInstanceInfo : public UGameInstance
{
	GENERATED_BODY()

public:
	UGameInstanceInfo();
	int getDay() { return day; }

protected:
	UPROPERTY(BlueprintReadWrite, meta = (DisplayName = "Day"))
	int day;
	UPROPERTY(BlueprintReadWrite, meta = (DisplayName = "Allowance"))
	int allowance;
	UPROPERTY(BlueprintReadWrite, meta = (DisplayName = "Paused?"))
	bool paused;
};
