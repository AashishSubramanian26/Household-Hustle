// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "ColorSnippetPrerequisites.h"
#include "GameplayTagContainer.h"
#include "CompareMeshColorsPrerequisites.generated.h" 


//-------------------------------------------------------

// Compare Mesh Colors To Color Array

USTRUCT(BlueprintType)
struct FVertexDetectCompareMeshColorsToColorArrayStruct {

	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If True and colorArrayToCompareWith is set, then in the Task Result Info struct we will fill a CompareMeshColorsToColorArrayResult where you can get the Matching Percent between the Meshes Current Vertex Colors (If paint job then colors after paint was applied) and the ones we send in here. \n\nThis is useful if you for instance have a Drawing Game, or a Tutorial where the player has to fill in a pattern that has been pre-filled, or just Mimick the pattern an AI is painting. "))
	bool compareMeshColorsToColorArrayAtLOD0 = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Color Array we will compare it to. Have to match the Vertex Color Array Amount of the Mesh we're going to Paint/Detect. You can get both the vertex color array from any paint or detect job if you set to include them in the callback settings, so you can get them from a mesh and store it for later use. "))
	TArray<FColor> colorArrayToCompareWith;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Compare using a color snippet tag instead of an array. If both this and compareMeshColorsToColorArrayAtLOD0 is True, it will prioritize this Color Snippet Variant. Useful if you've for instance have a Color Snippet of a Tatoo or a Pattern, and you want to check how close to it the player has painted. "))
	bool compareMeshColorsToStoredColorSnippet = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Color Snippet we will compare to. Useful if you've for instance have a Color Snippet of a Tatoo or a Pattern, and you want to check how close to it the player has painted. "))
	FGameplayTag compareWithColorsSnippetTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If True then will only Compare against those Vertices in the compare array that actually has any colors instead of All of them. For instance if you have a floor and comparing to an array where its a circle in the middle, then only painting/removing colors at the circle will actually make the % go up and down. Otherwise if this is false, then all vertices around the circle will affect the % as well. "))
	bool skipEmptyVertices = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "When we Compare we run a Float Nearly Equal Check for every Vertex Channel on the Compare Vertex Colors and Mesh Vertex Colors. This is the Error Tolerance of that check, meaning every Vertex Channel has to be within this range close to eachother on both the compare and mesh vertex colors. "))
	float comparisonErrorTolerance = 0.2;

	UPROPERTY(BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Color Snippet Tag but in FString Format and the Data Asset the snippet is stored on. "))
	FVertexPaintColorSnippetDataAssetInfo compareWithColorsSnippetDataAssetInfo;
};