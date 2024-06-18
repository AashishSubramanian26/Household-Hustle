// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "PaintFundementalsPrerequisites.h"
#include "WithinAreaPrerequisites.h"
#include "FallOffPrerequisites.h"
#include "PaintWithinAreaPrerequisites.generated.h" 


//-------------------------------------------------------

// Paint Within Area Falloff Type

UENUM(BlueprintType)
enum class EVertexPaintWithinAreaFallOffType : uint8 {

	SphericalFromCenter = 0 UMETA(DisplayName = "Spherical From Center", Tooltip = "Falloff from Center outward. "),
	GradiantUpward = 1 UMETA(DisplayName = "Gradiant Upward", Tooltip = "Falloff from bottom Upward in World Space. "),
	GradiantDownward = 2 UMETA(DisplayName = "Gradiant Downward", Tooltip = "Falloff from top Downward in World Space. "),
};


//-------------------------------------------------------

// Paint Within Area FallOff Settings

USTRUCT(BlueprintType)
struct FVertexDetectPaintWithinAreaFallOffSettings : public FVertexDetectFallOffSettings {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Whether we calculate the Falloff from the components center or from the components Z Height, so only the distance from the components Z will matter. This is great for large components like oceans if you want some falloff but the mesh being painted is very far from the components X and Y, but they won't matter since we only use the Z. "))
	EVertexPaintWithinAreaFallOffType paintWithinAreaFallOffType = EVertexPaintWithinAreaFallOffType::SphericalFromCenter;
};


//-------------------------------------------------------

// Vertex Paint On Mesh if within Area

USTRUCT(BlueprintType)
struct FVertexPainthWithinAreaStruct : public FVertexPaintColorSettingStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Within Area Settings such as the Primitive Components to check if within, for example a Cube, Rectangle, Sphere or even a Skeletal Mesh if you opt for Complex Shape, and if we should return any vertex data of the vertices that's within the area, and the colors of each channel info like average color, % etc. "))
	FVertexPaintDetectWithinAreaSettings withinAreaSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Runs Get Colors Within Area as well, which will get the colors, amount of colors of each channel and % etc. within the area Before applying the colors from this paint within area. Useful if you want to see how much of a difference the Paint Within Area did. "))
	bool getColorsWithinAreaCombo = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Extra Extent to apply Paint, useful if for instance a character is standing in a body of water, and you want them to get wet slightly above where the water is as well, as if their clothes is soaking up the water. \nNOTE Only supports Square/Rectangle and Sphere Shapes, not Complex. "))
	float extraExtentToApplyPaintOn = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Paint Within Area supports Falloff as well, where you could have it so at the center of a Sphere/Cube you get more strength than at the edges. Can be useful if you have for instance a Torch that should Melt Snow with stronger effect at it's center, or some falloff on the topside of a lake so it looks like water is smoothly being soaked up to a characters clothes. \nNote that with Cube/Rectangle it will scale the falloff to the outmost corner of the rectangle if using Spherical From Center. If using Gradiant Upward/Downward then it will scale it just to the Z Extent of the Bounds (plus any Extra Extent of course). "))
	FVertexDetectPaintWithinAreaFallOffSettings fallOffSettings;
};