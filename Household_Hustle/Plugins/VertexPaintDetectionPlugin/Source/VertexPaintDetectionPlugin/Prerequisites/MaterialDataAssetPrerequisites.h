// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Chaos/ChaosEngineInterface.h"
#include "MaterialDataAssetPrerequisites.generated.h" 


class UMaterialInterface;


//-------------------------------------------------------

// Physics Surface Blending Settings

USTRUCT(BlueprintType)
struct FVertexPaintPhysicsSurfaceBlendingSettings {

	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	TSoftObjectPtr<UMaterialInterface> associatedMaterial = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	TArray<TEnumAsByte<EPhysicalSurface>> physicsSurfacesThatCanBlend;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	float minAmountOnEachSurfaceToBeAbleToBlend = 0.3f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	TEnumAsByte<EPhysicalSurface> physicsSurfaceToResultIn = EPhysicalSurface::SurfaceType_Default;
};


//-------------------------------------------------------

// Vertex Paint Material Data Asset Struct 

USTRUCT(BlueprintType)
struct FVertexPaintMaterialDataAssetStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Will include the default channel when running detection where it will return 1 atDefault value in the VertexPaintDetectionComponent if nothing is painted over it. 0.5 if one thing is painted, 0.33 if two things is fully painted over it etc. \nCan be set to false if you have a material setup where whatever you're painting completely hides what is default."))
	bool includeDefaultChannelWhenDetecting = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	TEnumAsByte<EPhysicalSurface> atDefault = EPhysicalSurface::SurfaceType_Default;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	TEnumAsByte<EPhysicalSurface> paintedAtRed = EPhysicalSurface::SurfaceType_Default;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	TEnumAsByte<EPhysicalSurface> paintedAtGreen = EPhysicalSurface::SurfaceType_Default;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	TEnumAsByte<EPhysicalSurface> paintedAtBlue = EPhysicalSurface::SurfaceType_Default;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	TEnumAsByte<EPhysicalSurface> paintedAtAlpha = EPhysicalSurface::SurfaceType_Default;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	TMap<TEnumAsByte<EPhysicalSurface>, FVertexPaintPhysicsSurfaceBlendingSettings> physicsSurfaceBlendingSettings;
};


//-------------------------------------------------------

// Parent Physics Surface Struct

USTRUCT(BlueprintType)
struct FVertexPaintParentPhysicsSurfaceStruct {

	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	TArray <TEnumAsByte<EPhysicalSurface>> childSurfaces;
};
