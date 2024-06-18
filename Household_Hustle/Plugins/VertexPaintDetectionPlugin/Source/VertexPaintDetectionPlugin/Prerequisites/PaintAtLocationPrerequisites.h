// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "PaintFundementalsPrerequisites.h"
#include "HitLocationPrerequisites.h"
#include "FallOffPrerequisites.h"
#include "PaintAtLocationPrerequisites.generated.h" 


//-------------------------------------------------------

// Paint At Location Falloff Type

UENUM(BlueprintType)
enum class EVertexPaintAtLocationFallOffType : uint8 {

	OutwardFallOff = 0 UMETA(DisplayName = "Outward Fall Off", Tooltip = "Fall Off Outwardly, Gets Weaker Toward the Max AoE and Stronger toward the Min AoE, from distanceToBaseFallOffFrom. This will most likely be the most common in many cases. "),
	InwardFallOff = 1 UMETA(DisplayName = "Inward Fall Off", Tooltip = "Fall Off Inwardly, Gets Weaker Toward the Min AoE and Stronger toward the Max AoE, from distanceToBaseFallOffFrom. "),
	SphericalFallOff = 2 UMETA(DisplayName = "Spherical Fall Off", Tooltip = "Fall Offs evenly In and Outwards to all directions. For instance if you change the distanceToBaseFallOffFrom to be Between the Min and Max AoE, then it will be stronger there, and weaker out toward Min and Max range. "),
};


//-------------------------------------------------------

// Paint at Location FallOff Settings

USTRUCT(BlueprintType)
struct FVertexDetectPaintAtLocationFallOffSettings : public FVertexDetectFallOffSettings {

	GENERATED_BODY()


	FVertexDetectPaintAtLocationFallOffSettings() {

		// For Paint at Location we want this to be 1 by default as it's the expected behaviour
		fallOffStrength = 1;
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Which type of FallOff we should use. The Default is the most common use case. Hover over each of them to get more info of what they do. "))
	EVertexPaintAtLocationFallOffType paintAtLocationFallOffType = EVertexPaintAtLocationFallOffType::OutwardFallOff;
};


//-------------------------------------------------------

// Paint at Location Area Settings

USTRUCT(BlueprintType)
struct FVertexDetectPaintAtLocationAreaSettings {

	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Area of Effect Range to Start at. Doesn't have to be 0, can for example be 100 if the max is for example 200 if you want to paint a Hollow circle. "))
	float areaOfEffectRangeStart = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Area of Effect Range to End at"))
	float areaOfEffectRangeEnd = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Falloff Settings such as strength, distance to base it on, and type of FallOff we should use. The Default is the most common use case. Hover over each of them to get more info of what they do. "))
	FVertexDetectPaintAtLocationFallOffSettings fallOffSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If the Vertex Normal and Hit Normal Dot is Min this then apply colors. Great if you for instance have a Snow Storm and you only want one side of a House or something to get Painted with Snow as the Particles hits it. \nIf 1, then only the vertices on the same side of the Hit Normal get affected, so if it's a wall only the same wall. With -0.1 the vertices around Corners can get painted as well, with -1 to Paint all Vertices within the Area of effect gets painted. Note that this means Paint can become applied on the other side of a wall as well which may be undesirable. "))
	float VertexNormalToHitNormal_MinimumDotProductToGetPainted_StaticMesh = -1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If the Vertex Normal and Hit Normal Dot is Min this then apply colors. Great if you for instance have a Snow Storm and you only want one side of a House or something to get Painted with Snow as the Particles hits it. \nIf 1, then only the vertices on the same side of the Hit Normal get affected, so if it's a wall only the same wall. With -0.1 the vertices around Corners can get painted as well, with -1 to Paint all Vertices within the Area of effect gets painted. Note that this means Paint can become applied on the other side of a wall as well which may be undesirable. "))
	float VertexNormalToHitNormal_MinimumDotProductToGetPainted_SkeletalMesh = -1;

	float paintAtLocationScaleFallOffFrom = 0;
	float paintAtLocationFallOffMaxRange = 0;
};


//-------------------------------------------------------

// Detect When Painting

USTRUCT(BlueprintType)
struct FVertexDetectWhenPaintingSettings {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we run Get Closest Vertex Data on Mesh and it's Event Before Painting. Useful if you for instance want to Run SFX based on the colors before we applied the Paint Job, like if a Rain Drop landed on a Dry Cap, so it's SFX could be that of the Dry Cap and not the Wet Cap, since it wasn't wet before the rain drop hit, but it got wet when it did. "))
	bool runGetClosestVertexDataOnMeshBeforeApplyingPaint = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we run Get Closest Vertex Data on Mesh and it's Event After Painting. "))
	bool runGetClosestVertexDataOnMeshAfterApplyingPaint = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Can get the Average Color in an Area Range, which could be useful if you have for instance a Make-up game and want to see if the player has painted the majority of a characters cheek. Area Range has to be above 0 to get the average in that range. "))
	FVertexDetectGetAverageColorStruct getAverageColorInAreaSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If false it will use the Paint at Location Hit Fundementals. If true will use the detect fundementals passed through here. "))
	bool useCustomHitFundementalsForDetection = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "By having a seperate detect hit, you can Paint on one location, but Detect on another location, within the same job. For instance if you have something dripping on a wall, and you want to detect ahead of where you want to paint, and depending on the result shrink/enlarge the drip. "))
	FVertexDetectAndPaintFundementalsStruct detectHitFundementals;
};


//-------------------------------------------------------

// Paint At Location

USTRUCT(BlueprintType)
struct FVertexPaintAtLocationStruct : public FVertexPaintColorSettingStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectAndPaintFundementalsStruct hitFundementals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Area of Effect of the Paint Job"))
	FVertexDetectPaintAtLocationAreaSettings paintAtAreaSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "This will Return the color as close to the actual Hit Location as possible, which is very useful if you have Meshes with few vertices and you want to run SFX or VFX based on the Color of the Hit location and not the closest vertex color in case there is a diff, which it might have if the mesh have few vertices. \nThe task may take a bit longer to calculate if Mesh has alot of vertices, so you have the option to only get it if the Mesh has a Max Amount of Vertices. "))
	FVertexDetectEstimatedColorAtHitLocationStruct getEstimatedColorAtHitLocationSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we should run Get Closest Vertex Data before and/or after Painting, useful if you for instance want to Run SFX before Painting, like if a Rain Drop landed on a Dry Cap, then the SFX of that should be that of a Dry Cap, then it should Paint it Wet. You can even run the Get Closest Vertex Data at a different hit location if you wish, so for instance if you have something dripping on a wall, and you want to detect ahead of where you want to paint, and depending on the result shrink/enlarge the drip.  "))
	FVertexDetectWhenPaintingSettings getClosestVertexDataCombo;
};