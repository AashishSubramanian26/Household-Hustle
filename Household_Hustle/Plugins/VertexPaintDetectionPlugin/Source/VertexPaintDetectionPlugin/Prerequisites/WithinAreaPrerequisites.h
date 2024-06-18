// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "FundementalsPrerequisites.h"
#include "WithinAreaPrerequisites.generated.h" 


//-------------------------------------------------------

UENUM(BlueprintType)
enum class Enum_PaintWithinAreaShape : uint8 {

	isSquareOrRectangleShape = 0 UMETA(DisplayName = "Is Square or Rectangle Shape", Tooltip = "Fast as they only check if the vertex is within Bounds"),
	isSphereShape = 1 UMETA(DisplayName = "Is Sphere Shape", Tooltip = "Fast as they only check if the vertex is within Bounds"),
	isComplexShape = 2 UMETA(DisplayName = "Is Complex Shape", Tooltip = "Complex Shapes are Skeletal Meshes, Spline Meshes, or Static Mesh that isn't a Cube/Rectangle/Sphere. These are Slower as we run traces to check if in the complex shape. "),
};


//-------------------------------------------------------

// Component To Check If Is Within Info

USTRUCT(BlueprintType)
struct FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Primitive Component to check if within, for example a Cube, Rectangle, Sphere or even a Skeletal Mesh, Spline Mesh or Landscape if you opt for Complex Shape. "))
	UPrimitiveComponent* componentToCheckIfIsWithin = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Which shape to use, i.e. shape of the Component passed in. Cube/Rectangle and Sphere is the Cheapest. Complex does a line trace on each vertex to check if its within it, which makes it more expensive, but can support any kind of shape and is required for Skeletal, Spline Mesh and Landscapes. "))
	Enum_PaintWithinAreaShape paintWithinAreaShape = Enum_PaintWithinAreaShape::isSquareOrRectangleShape;


	bool isBoxComponent = false;
	bool isSphereComponent = false;
	bool isStaticMeshComponent = false;
	bool isSkeletalMeshComponent = false;
	bool isSplineMeshComponent = false;
	bool isLandscape = false;

	FTransform componentWorldTransform;

	FVector componentRelativeLocationToMeshBeingPainted = FVector(ForceInitToZero);
	FRotator componentRelativeRotationToMeshBeingPainted = FRotator(ForceInitToZero);
	FVector componentRelativeScaleToMeshBeingPainted = FVector(ForceInitToZero);

	// Caches these as well so i don't have to go through the transform->GetRotator->GetForwardVector as i want to reduce as many calculations etc. per vertex we're looping through
	FVector componentForwardVector = FVector(ForceInitToZero);
	FVector componentRightVector = FVector(ForceInitToZero);
	FVector componentUpVector = FVector(ForceInitToZero);

	FBoxSphereBounds cleanAggGeomBounds = FBoxSphereBounds();
	FBoxSphereBounds componentBounds = FBoxSphereBounds();
	FVector actorBounds_Origin = FVector(ForceInitToZero);
	FVector actorBounds_Extent = FVector(ForceInitToZero);

	// Fall Off
	float withinAreaOfEffect = 0;
	float paintWithinAreaScaleFallOffFrom = 0;
	
	float isVertexWithinArea_CubeOrRectangle_SquareXHalfSize = 0;
	float isVertexWithinArea_CubeOrRectangle_SquareYHalfSize = 0;
	float isVertexWithinArea_CubeOrRectangle_SquareZHalfSize = 0;
	float isVertexWithinArea_Sphere_Radius = 0;
};


//-------------------------------------------------------

// Within Area Settings

USTRUCT(BlueprintType)
struct FVertexPaintDetectWithinAreaSettings {

	GENERATED_BODY()

	FVertexPaintDetectWithinAreaSettings() {

		includeAmountOfColorsOfEachChannelWithinArea.includeVertexColorChannelResultOfEachChannel = false;
		includeAmountOfColorsOfEachChannelWithinArea.includePhysicsSurfaceResultOfEachChannel = false;
	}

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Primitive Components to check if within, for example a Cube, Rectangle, Sphere or even a Skeletal Mesh if you opt for Complex Shape. "))
	TArray<FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo> componentsToCheckIfIsWithin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we should include the vertex colors that is within the area. "))
	bool includeVertexColorsWithinArea = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we should include the vertex positions in component space that is within the area. "))
	bool includeVertexPositionsWithinrea = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we should include the vertex normals that is within the area. "))
	bool includeVertexNormalsWithinArea = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we should include the amount of colors of each channel, such as amount, average strength and % of each channel and physics surface. "))
	FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel includeAmountOfColorsOfEachChannelWithinArea;
};