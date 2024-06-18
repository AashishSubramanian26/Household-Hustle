// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "CorePrerequisites.h"
#include "Chaos/ChaosEngineInterface.h"
#include "HitLocationPrerequisites.generated.h" 



//-------------------------------------------------------

// Closest Vertex Physics Surface Data

USTRUCT(BlueprintType)
struct FVertexDetectPhysicsSurfaceDataAtChannelStruct {

	GENERATED_BODY()


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	TEnumAsByte<EPhysicalSurface> physicalSurfaceAtChannel = EPhysicalSurface::SurfaceType_Default;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	FString physicalSurfaceAsStringAtChannel = "None";

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	float physicalSurfaceValueAtChannel = 0.0f;
};


//-------------------------------------------------------

// Most Painted Surface 

USTRUCT(BlueprintType)
struct FVertexDetectMostDominantPhysicsSurfaceInfo {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Which EPhysical Surface had the most Color Value. Based on what surfaces is registered in the Material Data Asset for RGBA"))
	TEnumAsByte<EPhysicalSurface> mostDominantPhysicsSurface = EPhysicalSurface::SurfaceType_Default;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FString mostDominantPhysicsSurfaceAsString = "Default";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Amount that the most painted color had"))
	float mostDominantPhysicstSurfaceValue = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Which channel it was that had the most painted color, R, B, G or A. It can be multiple in case the Most Painted Surface was made up of blendade surfaces from different channels, then this will be from those channels"))
	TArray<Enum_SurfaceAtChannel> mostDominantPhysicsSurfaceAtVertexColorChannels;
};


//-------------------------------------------------------

// Closest Physics Surface Data

USTRUCT(BlueprintType)
struct FVertexDetectPhysicsSurfaceDataStruct {

	GENERATED_BODY()


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we got the Physics Surface at Material"))
	bool physicsSurfaceSuccessfullyAcquired = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Information about the Most painted surface"))
	FVertexDetectMostDominantPhysicsSurfaceInfo mostDominantPhysicsSurfaceInfo;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If the Material is registered in the Material Data Asset to Include Default Channel. The Default should be set to be the surface that is on the Material when no colors are painted, for example if Cobble is Default, and then you can paint grass and sand on top of it that blends into it then it should be included. "))
	bool materialRegisteredToIncludeDefaultChannel = false;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectPhysicsSurfaceDataAtChannelStruct physicsSurface_AtDefault;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectPhysicsSurfaceDataAtChannelStruct physicsSurface_AtRed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectPhysicsSurfaceDataAtChannelStruct physicsSurface_AtGreen;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectPhysicsSurfaceDataAtChannelStruct physicsSurface_AtBlue;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectPhysicsSurfaceDataAtChannelStruct physicsSurface_AtAlpha;



	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	TArray<TEnumAsByte<EPhysicalSurface>> physicalSurfacesAsArray;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	TArray<FString> surfacesAsStringArray;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	TArray<float> surfaceValuesArray;
};


//-------------------------------------------------------

// Hit Fundementals

USTRUCT(BlueprintType)
struct FVertexDetectAndPaintFundementalsStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Important to calculate the distance etc. from vertices to this location.  "))
	FVector hitLocation = FVector(ForceInitToZero);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	FVector hitLocationInComponentSpace = FVector(ForceInitToZero);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Not necessary unless you're using VertexNormalToHitNormalMinimumDotProduct in the Area Settings. "))
	FVector hitNormal = FVector(ForceInitToZero);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Not necessary, but if running Get Closest Vertex Data on Skeletal Mesh and haven't set to include colors, position etc. in the callback settings, i.e. we don't need to loop through all of the vertices, then with the bone we can make sure we only loop through the vertices on that section so the task will finish faster. "))
	FName hitBone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "What it was Painted/Detected with, can be used when getting back the Result to do different things depending on what it was, for exampel Foot, Boot, Gunshot. "))
	FString runTaskFor;
};


//-------------------------------------------------------

// Estimated Color at Hit Location Result

USTRUCT(BlueprintType)
struct FVertexDetectEstimatedColorAtHitLocationResultStruct {

	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we successfully got an estimated color close or at the Hit Location. "))
	bool estimatedColorAtHitLocationDataSuccessfullyAcquired = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Estimated Color Close or At Hit Location. Could be useful if you want to run SFX or VFX, and the mesh has few vertices. If you have alot of vertices and the hit location is often very close to the closest vertex then you might not need to use this. \nThe way we calculate this is by getting the direction from the closest vertex to the hit location, and the nearest vertices around the hit location. Then when finished looping through LOD0 and we have them all and the closest vertex, we check, which of the nearby vertices has the best dot from to the direction from closest to hit location, i.e. which is the most optimal to scale toward. "))
	FLinearColor estimatedColorAtHitLocation = FLinearColor(0, 0, 0, 0);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectPhysicsSurfaceDataStruct physicalSurfaceInfo;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The location between the closest vertex and the optimal we scaled against to get the estimated color at hit location. "))
	FVector worldSpaceLocationWeEstimatedTheColorAt = FVector(ForceInitToZero);
};


//-------------------------------------------------------

// Estimated Color at Hit Location

USTRUCT(BlueprintType)
struct FVertexDetectEstimatedColorAtHitLocationStruct {

	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "This will get the color as close to the actual Hit Location as possible, which is very useful if you have Meshes with few vertices and you want to run SFX or VFX based on the Color of the Hit location and not the closest vertex color in case there is a diff. \nThe task may take a bit longer to calculate if Mesh has alot of vertices, so you have the option to always get it, or only get it if the Mesh is below a certain amount of vertices. "))
	bool getEstimatedColorAtHitLocation = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If True and getEstimatedColorAtHitLocation is True, then will only get the estimated color at hit location if the Mesh has Max Amount of Vertices than what's set below. "))
	bool onlyGetIfMeshHasMaxAmountOfVertices = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Will only get the estimated color if the mesh this max amount of vertices"))
	int maxAmountOfVertices = 5000;
};