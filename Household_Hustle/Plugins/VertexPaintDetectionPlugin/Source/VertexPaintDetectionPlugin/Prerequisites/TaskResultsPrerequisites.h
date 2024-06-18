// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "HitLocationPrerequisites.h"
#include "Chaos/ChaosEngineInterface.h"
#include "TaskResultsPrerequisites.generated.h" 


class UVertexPaintDetectionComponent;


//-------------------------------------------------------

// Avarage Color In Area Info

USTRUCT(BlueprintType)
struct FVertexDetectAvarageColorInAreaInfo {

	GENERATED_BODY()


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Avarage Vertex Colors within the Area when Detecting (if set an AoE), or the Avarage Vertex Colors when Painting at Location After Applying Vertex Colors. "))
	FLinearColor avarageVertexColorsWithinAreaOfEffect = FLinearColor(0, 0, 0, 0);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectPhysicsSurfaceDataStruct avaragePhysicalSurfaceInfoBasedOffTheClosestVertexMaterial;
};


//-------------------------------------------------------

// Bone Colors Struct

USTRUCT(BlueprintType)
struct FVertexDetectBoneColorsStruct {

	GENERATED_BODY()

	UPROPERTY(/*VisibleAnywhere, */BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	TArray<FColor> boneVertexColors;
};


//-------------------------------------------------------

// Vertex Colors on Each Bone

USTRUCT(BlueprintType)
struct FVertexDetectVertexColorsOnEachBone {

	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	bool successFullyGotColorsForEachBone = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	TMap<FName, FVertexDetectBoneColorsStruct> nameAndColorOfEachBone;
};


//-------------------------------------------------------

// Compare Mesh Colors To Color Array

USTRUCT(BlueprintType)
struct FVertexDetectCompareMeshColorsToColorArrayResultStruct {

	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we successfully compared the Vertex Colors from the Mesh, and the ones the user sent in to compare them with. "))
	bool successfullyComparedMeshColorsToColorArray = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Matching Percent between 0-100, this also includes vertices that had no color, as long as the mesh vertex color and the compare vertex colors where the same and within range, they're taken into account here. "))
	float matchingPercent = 0;

};



//-------------------------------------------------------

// Amount of Painted Colors of Each Channel Results

USTRUCT(BlueprintType)
struct FVertexDetectAmountOfPaintedColorsOfEachChannel_Results {

	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	float amountOfVerticesPaintedAtMinAmount = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	float percentPaintedAtMinAmount = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	float averageColorAmountAtMinAmount = 0;

	float amountOfVerticesConsidered = 0;
};


//-------------------------------------------------------

// Amount of Painted Colors of Each Channel

USTRUCT(BlueprintType)
struct FVertexDetectAmountOfPaintedColorsOfEachChannel {

	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	bool successfullyGotColorChannelResultsAtMinAmount = false;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectAmountOfPaintedColorsOfEachChannel_Results redChannelResult;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectAmountOfPaintedColorsOfEachChannel_Results greenChannelResult;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectAmountOfPaintedColorsOfEachChannel_Results blueChannelResult;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectAmountOfPaintedColorsOfEachChannel_Results alphaChannelResult;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we actually got the physics surface result and the IncludePhysicsSurfaceResult Setting in the Callback Setting was set to True. \nGetting the Physics Surface colors requires a couple of more loops for every vertex and can possible increase the time to finish the task by a very small amount, but we still make it optional since there are tasks like Paint Color Snippet, that usually doesn't need to loop through all of the sections etc., which may take noticable longer if it has to do that. "))
	bool successfullyGotPhysicsSurfaceResultsAtMinAmount = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If IncludePhysicsSurfaceResult and if there are any Registered Physics Surface on the Material Detected/Painted on, then we can get the amount of vertices, percent and average amount of each physics surface. We sort this as well so the first element in this TMap is the one with the highest %. "))
	TMap<TEnumAsByte<EPhysicalSurface>, FVertexDetectAmountOfPaintedColorsOfEachChannel_Results> physicsSurfacesResult;
};


//-------------------------------------------------------

// Within Area Results

USTRUCT(BlueprintType)
struct FVertexPaintWithinAreaResults {

	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Vertex Colors, Position and Normal Within the Area, if set to Include them when calling PaintWithinArea. "))
	TArray<FVertexDetectMeshDataPerLODStruct> meshVertexDataWithinArea;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Average, Amount and % of Colors of Each Channel & Physics Surface within the Area, if set to Include them when calling Paint Within Area. "))
	FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannelWithinArea;
};


//-------------------------------------------------------

// Task Result

USTRUCT(BlueprintType)
struct FVertexDetectTaskResultInfo {

	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If the Paint/Detect Task was Successfull"))
	bool taskSuccessfull = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "How long in Seconds the Task took to finish. \nCan be useful to sync paint jobs if you for instance is Painting many meshes at the same time, like if it's raining and you're running Paint Entire Mesh at Random Vertices. In those cases some tasks may finish much faster than others since they may have different amount of vertices, and if you start a new task when the old one is finished it means that some meshes will get wet too fast compared to other meshes. With this you can check, what is the highest duration a task ever took, and if a task finishes before that, maybe add a delay before you start a new task or something similar with the delay duration to be the difference to the finished task duration and the highest duration. "))
	float taskDuration = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If Painted using Paint Component then it was used with this. There are some paint jobs like SetMeshComponentVertexColors and SetMeshComponentVertexColorsUsingSerializedString where using a component is optional. "))
	UVertexPaintDetectionComponent* associatedPaintComponent = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Mesh Component, Source Mesh and includes Vertex Color, Position and Normal for each LOD if they've been set to be included in the Paint/Detect Jobs Callback Settings.  "))
	FVertexDetectMeshDataStruct meshVertexData;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If you in the Callback Settings set to Compare Vertex Colors to a Color Array, to for exmaple check if the player has painted a certain pattern or something, then this will be the result of that. "))
	FVertexDetectCompareMeshColorsToColorArrayResultStruct compareMeshColorsToColorArrayResult;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we included in the Callback Settings to get colors of each channel (is true by default) then you will get the Percent, Average Amount, and How many vertices on each RGBA Vertex Color Channel, so you can for instance check if the Red Channel has is over a certain %. \nYou can in the callback settings also set to include the results for each physics surface, then you will get %, average and amount for each physics surface as well, otherwise that TMap won't be filled.  "))
	FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Colors of each bone at LOD0. Can get set to be included in the Tasks Callback Settings.  "))
	FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone;
};


//-------------------------------------------------------

// Paint Task Result

USTRUCT(BlueprintType)
struct FVertexDetectPaintTaskResultInfo {

	GENERATED_BODY()


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If the Finished Task was a Paint Job of some kind, and it changed any vertex colors. For example if you run paint at location at an area that already has the colors that you want to paint, then no difference would occur so we didn't apply any new colors, or if you tried to paint on a mesh that's already fully painted, or tried to remove colors if it didn't have any colors. "))
	bool anyVertexColorGotChanged = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Bones that got color applied to any of their vertices. If Paint Entire Mesh, Set Mesh Component Colors or Paint Color Snippet, then all bones will be here. "))
	TArray<FName> vertexColorAppliedToBones;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If Paint Job, then these are the Vertex Color Channels that got changed by that paint job. If a Paint job like Color Snippet, SetMeshComponentVertexColors, SetMeshComponentVertexColorsUsingSerialized string with no settings that requires them to loop through all vertices, then we can't check which color channels got changed so then all of them will be added, making an assumption they all got changed in that use case. "))
	TArray<EVertexColorChannel> colorAppliedToVertexColorChannels;
};
