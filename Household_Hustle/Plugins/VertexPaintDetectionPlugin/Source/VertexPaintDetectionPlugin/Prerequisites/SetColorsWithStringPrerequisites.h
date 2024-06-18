// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "PaintFundementalsPrerequisites.h"
#include "SetColorsWithStringPrerequisites.generated.h" 



//-------------------------------------------------------

// Set Mesh Component Vertex Colors Using Serialized String

USTRUCT(BlueprintType)
struct FVertexPaintSetMeshComponentVertexColorsUsingSerializedString : public FVertexPaintPaintColorsDirectlyStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Color Array Data that's been Serialized into a FString for LOD0. We will De-Serialize this on the Async Thread and if the number of elements matches what the meshComponent has, we will apply it. "))
	FString serializedColorDataAtLOD0;
};