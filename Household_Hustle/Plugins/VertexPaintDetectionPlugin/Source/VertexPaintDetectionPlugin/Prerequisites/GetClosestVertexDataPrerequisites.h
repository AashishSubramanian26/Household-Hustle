// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "FundementalsPrerequisites.h"
#include "HitLocationPrerequisites.h"
#include "GetClosestVertexDataPrerequisites.generated.h" 


class UMaterialInterface;


//-------------------------------------------------------

// Found Vertex Position Data Struct

USTRUCT(BlueprintType)
struct FVertexDetectClosestVertexPositionStruct {

	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	FVector closestVertexPositionWorld = FVector(ForceInitToZero);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	FVector closestVertexPositionActorLocal = FVector(ForceInitToZero);
};


//-------------------------------------------------------

// Found Vertex Normala Data Struct

USTRUCT(BlueprintType)
struct FVertexDetectClosestVertexNormalStruct {

	GENERATED_BODY()


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	FVector closestVertexNormal = FVector(ForceInitToZero);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	FVector closestVertexNormalLocal = FVector(ForceInitToZero);
};


//-------------------------------------------------------

// Closest Vertex Data 

USTRUCT(BlueprintType)
struct FVertexDetectClosestVertexGeneralInfoStruct {

	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Closest Vertex inded of Hit Location"))
	int closestVertexIndex = -1;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Closest Section the Closest Vertex was at. May be useful if painting / detecting on skeletal mesh components. "))
	int closestSection = -1;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Closest Vertexes Colors"))
	FLinearColor closestVertexColors = FLinearColor(0, 0, 0, 0);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClosestVertexPositionStruct closestVertexPositionInfo;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClosestVertexNormalStruct closestVertexNormalInfo;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Material at the Closest Vertex"))
	UMaterialInterface* closestVertexMaterial = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "UVs at the Closest Vertex, each element in the array is for each UV Channel"))
	TArray<FVector2D> closestVertexUVAtEachUVChannel;
};


//-------------------------------------------------------

// Vertex Painted Channel Result Struct

USTRUCT(BlueprintType)
struct FVertexDetectClosestVertexDataResultStruct {

	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	bool closestVertexDataSuccessfullyAcquired = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClosestVertexGeneralInfoStruct closestVertexGeneralInfo;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectPhysicsSurfaceDataStruct closestVertexPhysicalSurfaceInfo;
};


//-------------------------------------------------------

// Vertex Detect Info

USTRUCT(BlueprintType)
struct FVertexDetectInfoStruct : public FVertexDetectStruct {

	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Can get the Average Color in an Area Range, which could be useful if you have for instance a Make-up game and want to see if the player has painted the majority of a characters cheek. Area Range has to be higher than 0 to get the average color. "))
	FVertexDetectGetAverageColorStruct getAverageColorInAreaSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectAndPaintFundementalsStruct hitFundementals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "This will Return the color as close to the actual Hit Location as possible, which is very useful if you have Meshes with few vertices and you want to run SFX or VFX based on the Color of the Hit location and not the closest vertex color in case there is a diff, which it might have if the mesh have few vertices. \nThe task may take a bit longer to calculate if Mesh has alot of vertices, so you have the option to only get it if the Mesh has a Max Amount of Vertices. \NOTE If getVertexColorSetting is set to onlyGetColors, but this is True, then it will still loop through colors. "))
	FVertexDetectEstimatedColorAtHitLocationStruct getEstimatedColorAtHitLocationSettings;
};