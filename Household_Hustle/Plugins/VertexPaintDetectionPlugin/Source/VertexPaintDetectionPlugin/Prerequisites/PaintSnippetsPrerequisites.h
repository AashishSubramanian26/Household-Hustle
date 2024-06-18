// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "PaintFundementalsPrerequisites.h"
#include "ColorSnippetPrerequisites.h"
#include "GameplayTagContainer.h"
#include "PaintSnippetsPrerequisites.generated.h" 


//-------------------------------------------------------

// Paint Color Snippet

USTRUCT(BlueprintType)
struct FVertexPaintColorSnippetStruct : public FVertexPaintPaintColorsDirectlyStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Color Snippet Tag To Paint, should be left to Default if you want to Randomize. Color Snippets can be created in the Editor Widget is very useful for Storing a snippet of exactly how a Skeletal or Static Mesh should look for later use, For instance Variations of Weapon Skins, Zombies, Military or even your Main Character and how they should look in a certain Level or Cutscene."))
	FGameplayTag colorSnippetTag;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Different types of Color Snippet Settings available. "))
	EVertexPaintPaintColorSnippetSetting paintColorSnippetSetting = EVertexPaintPaintColorSnippetSetting::PaintSingleSnippet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Randomize a Snippet from under the choosen Tag Category that is Registered to the Mesh, if there are any. For instance Zombies.Sewer to Randomize a Snippet under the Zombies Sewer Category. You can select the Top Level Category if you want to randomize between All of the Available Snippets the Mesh has. "))
	bool randomizeSnippetUnderChosenTagCategory = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Meshes associated with the Group Snippet, for example if the Group Snippet is made up of several Skeletal Mesh Components if they've been split up where arms and body are different, but the snippet covers both, then both should be put here. For a group snippet to be painted correctly the relative location of the meshes to each has to be the same as when the snippet was created, otherwise it won't get painted. "))
	TArray<UPrimitiveComponent*> paintGroupSnippetMeshes;

	UPROPERTY(BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Color Snippet Tag but in FString Format and the Data Asset the snippet is stored on. "))
	FVertexPaintColorSnippetDataAssetInfo colorSnippetDataAssetInfo;
};


//-------------------------------------------------------

// Paint Group Snippet

USTRUCT(BlueprintType)
struct FVertexPaintGroupSnippetStruct : public FVertexPaintColorSnippetStruct {

	GENERATED_BODY()

	FVertexPaintGroupSnippetStruct() {

		paintColorSnippetSetting = EVertexPaintPaintColorSnippetSetting::PaintGroupSnippet;
	}
};