// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Chaos/ChaosEngineInterface.h"
#include "CorePrerequisites.generated.h" 


//-------------------------------------------------------

// Paint and Detection Types

enum class EVertexPaintDetectionType : uint8 {

	GetClosestVertexDataDetection, 
	GetAllVertexColorDetection,
	GetColorsWithinArea,
	PaintAtLocation,
	PaintWithinArea,
	PaintEntireMesh,
	PaintColorSnippet,
	SetMeshVertexColorsDirectly,
	SetMeshVertexColorsDirectlyUsingSerializedString
};


//-------------------------------------------------------

// Vertex Color Channel

UENUM(BlueprintType)
enum class EVertexColorChannel : uint8 {

	RedChannel = 0 UMETA(DisplayName = "Red Channel"),
	GreenChannel = 1 UMETA(DisplayName = "Green Channel"),
	BlueChannel = 2 UMETA(DisplayName = "Blue Channel"),
	AlphaChannel = 3 UMETA(DisplayName = "Alpha Channel"),
};


//-------------------------------------------------------

// Surface At Channel

UENUM(BlueprintType)
enum class Enum_SurfaceAtChannel : uint8 {

	Default = 0 UMETA(DisplayName = "Default"),
	RedChannel = 1 UMETA(DisplayName = "Red Channel"),
	GreenChannel = 2 UMETA(DisplayName = "Green Channel"),
	BlueChannel = 3 UMETA(DisplayName = "Blue Channel"),
	AlphaChannel = 4 UMETA(DisplayName = "Alpha Channel"),
};


//-------------------------------------------------------

// Vertex Color Channels Struct

USTRUCT(BlueprintType)
struct FVertexPaintColorChannelsStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	TArray<EVertexColorChannel> vertexColorChannels;
};


//-------------------------------------------------------

// Serialized Colors Per LOD Struct 

USTRUCT(BlueprintType)
struct FVertexDetectSerializedColorsPerLODStruct {

	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	int lod = 0;

	UPROPERTY(/*VisibleAnywhere, */BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FString colorsAtLODAsJSonString;
};


//-------------------------------------------------------

// Vertex Detect Mesh Data Per LOD Struct

USTRUCT(BlueprintType)
struct FVertexDetectMeshDataPerLODStruct {

	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	int lod = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	int amountOfVerticesAtLOD = 0;

	UPROPERTY(/*VisibleAnywhere, */BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Only returns filled in the callback event if set to include vertex colors in the callback settings. "))
	TArray<FColor> meshVertexColorsPerLODArray;

	UPROPERTY(/*VisibleAnywhere, */BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectSerializedColorsPerLODStruct serializedVertexColorsData;

	UPROPERTY(/*VisibleAnywhere, */BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Only returns filled in the callback event if set to include vertex positions in the callback settings. "))
	TArray<FVector> meshVertexPositionsInComponentSpacePerLODArray;

	UPROPERTY(/*VisibleAnywhere, */BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Only returns filled in the callback event if set to include vertex normals in the callback settings. "))
	TArray<FVector> meshVertexNormalsPerLODArray;
};


//-------------------------------------------------------

// Mesh Component Data Struct

USTRUCT(BlueprintType)
struct FVertexDetectMeshDataStruct {

	GENERATED_BODY()


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Skeletal or Static Mesh Source"))
	TSoftObjectPtr<UObject> meshSource = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Soft ptr to the Primitive Mesh Component"))
	TSoftObjectPtr<UPrimitiveComponent> meshComp = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Vertex Data Per LOD"))
	TArray<FVertexDetectMeshDataPerLODStruct> meshDataPerLOD;

	TArray<FColor> GetVertexColorDataAtLOD0() {

		if (meshDataPerLOD.Num() > 0)
			return meshDataPerLOD[0].meshVertexColorsPerLODArray;

		return TArray<FColor>();
	}

	TArray<FVector> GetVertexPositionDataAtLOD0() {

		if (meshDataPerLOD.Num() > 0)
			return meshDataPerLOD[0].meshVertexPositionsInComponentSpacePerLODArray;

		return TArray<FVector>();
	}

	TArray<FVector> GetVertexNormalDataAtLOD0() {

		if (meshDataPerLOD.Num() > 0)
			return meshDataPerLOD[0].meshVertexNormalsPerLODArray;

		return TArray<FVector>();
	}
};
