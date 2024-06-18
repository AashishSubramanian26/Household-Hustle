// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "PaintLimitsPrerequisites.generated.h" 


//-------------------------------------------------------

// Vertex Paint On Mesh Limits

USTRUCT(BlueprintType)
struct FVertexPaintingLimitStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Paint Limits are useful if you have something like light Rain that should be able to make characters completely drenched but only a bit wet. Then you can use this to limit how much the Rain can paint on whatever Channel. "))
	bool usePaintLimits = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If the Color was already over the limit before we Applied any, then should we clamp that color or not. Should be false if you for instance have a water drop that paints with limit of 0.75, that goes over an already fully watered surface, then the drop shouldn't change and make the surface has less water. "))
	bool limitColorIfTheColorWasAlreadyOverTheLimit = false;
};


//-------------------------------------------------------

// Vertex Paint On Mesh Limits - RGBA

USTRUCT(BlueprintType)
struct FVertexPaintingLimitRGBA : public FVertexPaintingLimitStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	float paintLimitOnRedChannel = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	float paintLimitOnGreenChannel = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	float paintLimitOnBlueChannel = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	float paintLimitOnAlphaChannel = 0;
};


//-------------------------------------------------------

// Vertex Paint On Mesh Limits - Physics Surface

USTRUCT(BlueprintType)
struct FVertexPaintingLimitPhysicsSurface : public FVertexPaintingLimitStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	float paintLimitOnPhysicsSurface = 0;
};