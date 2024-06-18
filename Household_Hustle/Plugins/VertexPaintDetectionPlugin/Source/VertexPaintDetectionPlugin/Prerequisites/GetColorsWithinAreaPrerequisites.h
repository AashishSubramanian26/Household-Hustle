// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "FundementalsPrerequisites.h"
#include "WithinAreaPrerequisites.h"
#include "GetColorsWithinAreaPrerequisites.generated.h" 


//-------------------------------------------------------

// Get Colors Within Area

USTRUCT(BlueprintType)
struct FVertexDetectGetColorsWithinAreaStruct : public FVertexDetectStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Within Area Settings such as the Primitive Components to check if within, for example a Cube, Rectangle, Sphere or even a Skeletal Mesh if you opt for Complex Shape, and if we should return any vertex data of the vertices that's within the area, and the colors of each channel info like average color, % etc. "))
	FVertexPaintDetectWithinAreaSettings withinAreaSettings;
};