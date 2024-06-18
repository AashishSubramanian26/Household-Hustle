// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "CorePrerequisites.h"
#include "Chaos/ChaosEngineInterface.h"
#include "Engine/EngineTypes.h"
#include "PaintConditionsPrerequisites.generated.h" 


//-------------------------------------------------------

// Paint Color Condition

USTRUCT(BlueprintType)
struct FVertexDetectPaintColorCondition {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If this specific condition has to be true to apply anything at all. If this is false, then we can fall back to whatever float is set below. If there are several conditions used, and they all fail and want to fall back to another color strength, then the one that fails first will be the one used. The Conditions are checked in the order of IfAboveOrBelowWorldZ, WithinColorRange, IfBone, and lastly Line of Sight which is the one that takes longest if used since it does traces. "))
	bool hasToHaveConditionMetToApplyAnyColorsAtAll = true;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Whether we should Apply a Different Color Strength if this specific Condition Failed and the bool above is set to False. For instance if we want to Dry Mesh if in Line of Sight to a Sun, but it failed, the vertex is in a Shadow, then maybe we still want to Dry it, just by not as much. "))
	float colorStrengthIfThisConditionIsNotMet = 0;
};


//-------------------------------------------------------

// Only Affect Vertices With Direction To Actor Or Location

USTRUCT(BlueprintType)
struct FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation : public FVertexDetectPaintColorCondition {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If this is set then will use this Actors Location, otherwise the location. "))
	AActor* actor = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If Actor is set then will use that, otherwise fall back to what is set here. "))
	FVector location = FVector(ForceInitToZero);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If Vertex Normal to Actor or Location is at least above this Dot, only then the vertex will get included. It can be between -1 and 1, where -1 is the opposite (i.e. if set to -1 then all vertices will get affected), 0 is straight to the side, and 1 is straight toward the location. Depending on what you're doing you may want to adjust this, for instance a fire hose spraying a wide amount of water over a large mesh, then you want all of the vertices within the AoE to get affected which means this may have to be at min 0.5"))
	float minDotProductToActorOrLocation = 0.8;
};


//-------------------------------------------------------

// Only Include Vertices Within Direction

USTRUCT(BlueprintType)
struct FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation : public FVertexDetectPaintColorCondition {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If this is set then will use this Actors Location, otherwise the location. "))
	AActor* actor = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Location we want to check against, could for example be the Base of a Cone. Will use the Actors location if set, otherwise fallback to this one. "))
	FVector location = FVector(ForceInitToZero);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Direction we want to check against, if for example a cone, then the Direction the Cone is facing towards, i.e. the direction it expands out to. "))
	FVector direction = FVector(ForceInitToZero);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Min Dot Product, of the Direction from the Location to the Vertex. If for example a Cone, that this should match the width of that cone, so if a very narrow cone then something closer to 1, if very wide then closer to 0. Should be between -1 and 1. "))
	float minDotProductToDirection = 0.8;
};


//-------------------------------------------------------

// Paint Color Condition - Is Above/Below World Z

USTRUCT(BlueprintType)
struct FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ : public FVertexDetectPaintColorCondition {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The World Location Z value that we check if the Vertex Location Z is either equal/below, or if the bool is true, then it has to be equal/above.  "))
	float ifVertexIsAboveOrBelowWorldZ = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If True then checks if the Vertex is Equal or Above the World Z height, instead of Equal or Below. "))
	bool checkIfAboveInsteadOfBelowZ = false;
};


//-------------------------------------------------------

// Paint Color Condition - Is Within Color Range

USTRUCT(BlueprintType)
struct FVertexDetectPaintColorCondition_IsWithinColorRangeStruct : public FVertexDetectPaintColorCondition {

	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If this is set to something other then Default, then we will for each Section/Material the Mesh is using, check if it's registered in the Editor Widget and what Physics Surface is set on each channel, then do the Within Color Range for whatever Channel that is. Very useful if several Materials might not be synched with eachother and have something like Puddle on different channels, so you don't have to remember which channel it's on. "))
	TEnumAsByte<EPhysicalSurface> ifChannelWithPhysicsSurfaceIsWithinColorRange = EPhysicalSurface::SurfaceType_Default;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If physicsSurfaceWithinColorRange is Default, then we will use this Color Channel is a certain Range. Gives the Developer more control of when paint is applied. Can for instance be used to Mask out Areas where you don't want it to be applied, like if it's Raining and you don't want the underside of Rooftops to get wet, then you can paint them with a channel the material isn't using, and have a condition that the channel has to be at 0 for the Wetness to be applied. "))
	Enum_SurfaceAtChannel ifVertexColorChannelWithinColorRange = Enum_SurfaceAtChannel::RedChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If Current Vertex Color is >= than this. Gives the Developer more control of when paint is applied. Can for instance be used to Mask out Areas where you don't want it to be applied, like if it's Raining and you don't want the underside of Rooftops to get wet, then you can paint them with a channel the material isn't using, and have a condition that the channel has to be at 0 for the Wetness to be applied. "))
	float ifCurrentVertexColorValueIsHigherOrEqualThan = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If Current Vertex Color is <= than this. Gives the Developer more control of when paint is applied. Can for instance be used to Mask out Areas where you don't want it to be applied, like if it's Raining and you don't want the underside of Rooftops to get wet, then you can paint them with a channel the material isn't using, and have a condition that the channel has to be at 0 for the Wetness to be applied. "))
	float ifCurrentVertexColorValueIsLessOrEqualThan = 0;
};


//-------------------------------------------------------

// Paint Color Condition - Is Bone

USTRUCT(BlueprintType)
struct FVertexDetectPaintColorCondition_IsBoneStruct : public FVertexDetectPaintColorCondition {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If Painting on Skeletal Mesh then can set to only Paint on specific Bone. If Static Mesh then we won't run this condition. Useful if you for instance have a Boss Fight and you should be able to Freeze exposed parts which could be just an Arm or a Leg etc. "))
	FName ifVertexIsAtBone = "None";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Min Amount of Bone Weight Required. If 0 then will always apply, but can be increase to for instance 0.5 if you don't want to affect any below that. "))
	float minBoneWeight = 0;
};


//-------------------------------------------------------

// Paint Color Condition - Has Line Of Sight

USTRUCT(BlueprintType)
struct FVertexDetectPaintColorCondition_HasLineOfSightStruct : public FVertexDetectPaintColorCondition {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If Set to an Actor then will use this Actors Location at Task Creation. "))
	AActor* ifVertexHasLineOfSightToActor = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If not set to use Line of Sight to Actor, then will use this. "))
	FVector ifVertexHasLineOfSightToPosition = FVector(ForceInitToZero);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "How far out from the vertex position we start the Trace toward the Position / Actor Location. If the Mesh Component you're trying to paint has collision that completely covers the Mesh and the Vertices, then this can be increased so you start tracing outside of that collision and doesn't hit itself. \nYou can also choose to ignore the Actor you're trying to paint, but then you may not get the desired result if the Position / Actor Location is on one side of the mesh component, and you expect only the vertices on that side of the mesh component to get painted. If ignoring then even the verts on the otherside will get painted since it can't hit itself. "))
	float distanceFromVertexPositionToStartTrace = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Object Types to Trace if we have Line of Sight. "))
	TArray<TEnumAsByte<EObjectTypeQuery>> checkLineOfSightAgainstObjectTypes = { EObjectTypeQuery::ObjectTypeQuery1, EObjectTypeQuery::ObjectTypeQuery2, EObjectTypeQuery::ObjectTypeQuery3, EObjectTypeQuery::ObjectTypeQuery4, EObjectTypeQuery::ObjectTypeQuery5 };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "This can be very useful in case you have something in which it's simple collision isn't 100%, for example a if you only want to paint on something that has line of sight to a Light, and you run this to a location inside of a Lamp Shade, but the Lamp Shades collision has small gaps in it (which can occur easily if trying to build the collision using the editors solution). Then if this is true it will trace to the actual mesh and not the simple collision in it. "))
	bool traceForComplex = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we should ignore the Actor we're trying to paint, useful if the location you want to check for may be on the other side of the mesh component and you don't want it to hit itself"))
	bool ignoreMeshActorTryingToApplyPaintOn = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	TArray<AActor*> lineOfSightTraceActorsToIgnore;
};


//-------------------------------------------------------

// Paint Color Condition

USTRUCT(BlueprintType)
struct FVertexDetectPaintColorConditionStruct {

	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Vertices with their Normal above a Min Dot toward an Actor or Location. \nMay be useful if you need a fast way to get control over on what side of a mesh to paint, like if you have a hose that is spraying water on a character, but you only want the part of the character that is facing the hose to get affected and not the backside. There is also an a Paint Condition with Line of Sight to an Actor and Location, the difference between that and this, is that it will trace and see if something is blocking, which will make the task take longer, where as this only does the dot check and is much faster. "))
	TArray<FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation> onlyAffectVerticesWithDirectionToActorOrLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Vertices within a certain Direction's Dot. I.e. we get the Direction from the Location/Actor we set here, to each vertex location, and check that, with the Direction we set here, which could for instance be the direction of a Mesh like a downward direction of a cone, if you want to check if a vertex is within the cone direction. \nDepending on the use case you should tweak the dot product as well which should be from -1 to 1. With the cone example, the wider the cone, the closer to 0 we would want the min dot product, if it's very thin then closer to 1. \nUsed for instance in the Example Project to make a cheap Paint Within Area with Cone Example using Paint Within Area with Sphere Shape, and by utilizing this, we get the affect as if it was a cone. "))
	TArray<FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation> onlyAffectVerticesWithinDirectionFromActorOrLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If Vertex Location Z has to be Equal or Above, or Equal and below the given Z height for it to be painted. "))
	TArray<FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ> ifVertexIsAboveOrBelowWorldZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If Physics Surface or Color Channel is a certain Range. Gives the Developer more control of when paint is applied. Can for instance be used to Mask out Areas where you don't want it to be applied, like if it's Raining and you don't want the underside of Rooftops to get wet, then you can paint them with a channel the material isn't using, and have a condition that the channel has to be at 0 for the Wetness to be applied. "))
	TArray<FVertexDetectPaintColorCondition_IsWithinColorRangeStruct> ifVertexColorIsWithinRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If Painting on Skeletal Mesh then can set to only Paint on specific Bone. Useful if you for instance have a Boss Fight and you should be able to Freeze exposed parts which could be just an Arm or a Leg etc. "))
	TArray<FVertexDetectPaintColorCondition_IsBoneStruct> ifVertexIsOnBone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If Vertex has Line of Sight to something, for instance the Sun, then only Apply/Remove Colors then. Useful if you for instance only want to Dry a Mesh where the Sun is actually hitting the Mesh. \nThis will Trace to check if it has line of sight, so may make the Task take longer, especially if playing in the Editor. "))
	TArray<FVertexDetectPaintColorCondition_HasLineOfSightStruct> ifVertexHasLineOfSightTo;
};
