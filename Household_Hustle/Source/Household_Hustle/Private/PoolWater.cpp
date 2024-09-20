// Fill out your copyright notice in the Description page of Project Settings.


#include "PoolWater.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameInstanceInfo.h"

// Sets default values
APoolWater::APoolWater()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	trashCount = 0;
}

// Called when the game starts or when spawned
void APoolWater::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APoolWater::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APoolWater::updateLeaf(AActor* leafRef)
{
	
}

