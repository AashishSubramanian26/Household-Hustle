// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "PaintFundementalsPrerequisites.h"
#include "SetMeshColorsPrerequisites.generated.h" 


//-------------------------------------------------------

// Set Mesh Component Vertex Colors

USTRUCT(BlueprintType)
struct FVertexPaintSetMeshComponentVertexColors : public FVertexPaintPaintColorsDirectlyStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Vertex Colors to Set at LOD0. "))
	TArray<FColor> vertexColorsAtLOD0ToSet;
};