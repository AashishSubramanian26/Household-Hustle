// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PoolTrashItem.h"
#include "Components/BoxComponent.h"
#include "PoolWater.generated.h"

UCLASS()
class HOUSEHOLD_HUSTLE_API APoolWater : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APoolWater();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	 
	// Array of trash items in the water
	UPROPERTY(BlueprintReadWrite, meta = (DisplayName = "TrashArray"))
	TArray<AActor*> trashActorArr;

	UPROPERTY(BlueprintReadWrite, meta = (DisplayName="TrashCount"))
	int trashCount;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UBoxComponent* poolBox = CreateDefaultSubobject<UBoxComponent>(TEXT("PoolBox"));

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void updateLeaf(AActor* leafRef);

};
