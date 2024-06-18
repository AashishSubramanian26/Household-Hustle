// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Chaos/ChaosEngineInterface.h"
#include "Engine/EngineTypes.h"
#include "AdditionalDataPrerequisites.generated.h" 



//-------------------------------------------------------

// Additional Data To Pass Through

USTRUCT(BlueprintType)
struct FVertexDetectAdditionalDataToPassThrough {

	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	AActor* passThrough_Actor1 = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	AActor* passThrough_Actor2 = nullptr;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	UPrimitiveComponent* passThrough_PrimitiveComponent1 = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	UPrimitiveComponent* passThrough_PrimitiveComponent2 = nullptr;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	bool passThrough_Bool1 = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	bool passThrough_Bool2 = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	bool passThrough_Bool3 = false;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	uint8 passThrough_Byte1 = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	uint8 passThrough_Byte2 = 0;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	float passThrough_Float1 = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	float passThrough_Float2 = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	float passThrough_Float3 = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	float passThrough_Float4 = 0;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	int passThrough_Int1 = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	int passThrough_Int2 = 0;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. \nThis could for instance Location, Direction, Velocity, Normal etc. "))
	FVector passThrough_Vector1 = FVector(ForceInitToZero);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. \nThis could for instance Location, Direction, Velocity etc. "))
	FVector passThrough_Vector2 = FVector(ForceInitToZero);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. \nThis could for instance Location, Direction, Velocity etc. "))
	FVector passThrough_Vector3 = FVector(ForceInitToZero);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. \nThis could for instance Location, Direction, Velocity etc. "))
	FVector passThrough_Vector4 = FVector(ForceInitToZero);


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished."))
	FRotator passThrough_Rotator1 = FRotator(ForceInitToZero);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished."))
	FRotator passThrough_Rotator2 = FRotator(ForceInitToZero);


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	FString passThrough_String1 = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	FString passThrough_String2 = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	FName passThrough_Name1 = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	FName passThrough_Name2 = "";


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	TEnumAsByte<EPhysicalSurface> passThrough_PhysicsSurface1 = EPhysicalSurface::SurfaceType_Default;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	TEnumAsByte<EPhysicalSurface> passThrough_PhysicsSurface2 = EPhysicalSurface::SurfaceType_Default;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	UPhysicalMaterial* passThrough_PhysicalMaterial1 = nullptr;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	TEnumAsByte<ECollisionChannel> passThrough_ObjectCollisionChannel = ECollisionChannel::ECC_WorldStatic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	TEnumAsByte<EObjectTypeQuery> passThrough_ObjectType = EObjectTypeQuery::ObjectTypeQuery1;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	UObject* passThrough_UObject1 = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "These can be used effectively if several tasks is dependent on the results of eachother, so you don't have to cache global variables but can just pass through the ones you want when the task is finished. "))
	UObject* passThrough_UObject2 = nullptr;
};

