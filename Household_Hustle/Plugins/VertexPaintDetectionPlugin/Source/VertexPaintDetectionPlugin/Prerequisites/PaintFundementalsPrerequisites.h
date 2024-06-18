// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "FundementalsPrerequisites.h"
#include "PaintConditionsPrerequisites.h"
#include "PaintLimitsPrerequisites.h"
#include "Chaos/ChaosEngineInterface.h"
#include "PaintFundementalsPrerequisites.generated.h" 


//-------------------------------------------------------

// Apply Vertex Color Setting

UENUM(BlueprintType)
enum class EApplyVertexColorSetting : uint8 {

	EAddVertexColor = 0 UMETA(DisplayName = "Add Vertex Color", Tooltip = "Adds Color onto Existing ones until it reaches max"),
	ESetVertexColor = 1 UMETA(DisplayName = "Set Vertex Color", Tooltip = "Sets Existing color to be replaced by whatever we Set"),
};


//-------------------------------------------------------

//  Lerp Vertex Color To Target Struct

USTRUCT(BlueprintType)
struct FVertexDetectLerpVertexColorToTargetStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If True then will Lerp the vertex color to the target value with the given lerp strength. For instance if the current vertex color value for a channel is 1, but you lerp toward 0.5 with lerp strength 0.1, then after 1 paint job the vertex channel should be 0.9. "))
	bool lerpToTarget = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Value we will lerp towards. "))
	float targetValue = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "What Alpha to Lerp with."))
	float lerpStrength = 0;
};


//-------------------------------------------------------

//  Apply Vertex Colors Using Physics Surface Struct

USTRUCT(BlueprintType)
struct FVertexDetectApplyColorsUsingPhysicsSurfaceStruct {

	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Applies color using Physics surface, if it's registered on a Vertex Channel, or if it's not registered, but it is a Parent / Child of the one we set, then we can apply to that. It's also useful if your Materials Vertex Color Channels isn't synched up, where for instance a Puddle could be on different Channels on different materials. It's also useful if you don't want to apply any colors at all if a surface isn't registered to the Material. It requires that the Material and what Physics Surface is on each channel is registered in the Editor Widget. Make sure to setup the Physics Surface Families as well, for example if you have Sand as a Parent, and Cobble-Sand as a Child, and a character that has Sand on their Red Vertex Channel, if they're walking over a floor with Cobble-Sand, it can Apply Colors on the Channel with Sand. "))
	bool applyVertexColorUsingPhysicsSurface = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Physics Surfaces you want to Paint/Remove Colors on. This can be a Parent or Child of a Parent Physics Surface as well, for example if you have Sand as a Parent, and Cobble-Sand as a Child, and a character that has Sand on their Red Vertex Channel. Then if they're walking over a floor with Cobble-Sand, it will Apply Colors on the Channel with Sand, i.e. the Red Channel. "))
	TArray<TEnumAsByte<EPhysicalSurface>> physicsSurfacesToApply;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "How much paint strength we should Apply/Remove on the Channels that we could get colors to apply on, i.e. had physics surface registered. Should be between -1 - 1. If painting with Add and not Set, then this and paintStrengtOnChannelsWithoutThePhysicsSurface can't both be 0, since then no difference will occur so no reason to start the task. \nNOTE that if less than 0.005 (or -0.005 if minus), then we will clamp to that as long as it's not 0, as that is the lowest amount needed to paint at the lowest strength since when converted to FColor."))
	float paintStrengthToApply = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If True then will Lerp the vertex color to the target value with the given lerp strength. For instance if the current vertex color value for a channel is 1, but you lerp toward 0.5 with lerp strength 0.1, then after 1 paint job the vertex channel should be 0.9.  "))
	FVertexDetectLerpVertexColorToTargetStruct lerpPhysicsSurfaceToTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Add will Add onto the existing colors, meaning if you set higher than 0 in strength, it will increase the vertex colors up to maximum 1, if less than 0, it decrease down to 0. If Set to Set Vertex Color, it will set the colors to the strength, if 0 it will set the vertex colors to the lowest 0 for instance. "))
	EApplyVertexColorSetting applyWithSetting = EApplyVertexColorSetting::EAddVertexColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Whether to Limit Paint Color up to a certain amount on the vertex color channels that had the physics surface, useful for stuff like light Rain that shouldn't make characters completely Drenched but just a bit wet. "))
	FVertexPaintingLimitPhysicsSurface physicsSurfacePaintLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Will check if the Physics Surface is a Child of a Parent, for instance if it's Cobble-Sand which could be a child of Parent Sand. Then if trying to Paint with Cobble-Sand, but it can't find any channel that has it, but it can find Sand, then it applies color on that channel. \nThis is useful on for instance characters that may have fundemental parent surfaces such as Sand, Mud etc. and can walk over different types of Sandy Surfaces like Asphalt-Sand, Cobble-Sand etc. and we want them to be able to Rub off on whatever channel that the character has Sand on. "))
	bool applyOnChannelsThatIsAParentOfPhysicsSurface = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Checks if a Physics Surface we're trying to Paint is a part of a Registered Physics Surface Family, and has a Parent. For instance Cobble-Sand may have Sand registered as Parent. So if this is True and you're Painting with a Parent Physics Surface, for instance Sand, but there is no Sand but there is Cobble-Sand child, then that channel it's registered to will get painted. "))
	bool applyOnChannelsThatsChildOfPhysicsSurface = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "For instance if Cobble-Mud is set to be a Blendable Surface in the Editor Widget like in the Example Proj, where Sand (Red) and Wet (Blue) can mix and form Mud, then we can take that into account and apply it to either the Parent and/or the Child of a Physics Surface if applyOnChannelsThatIsAParentOfPhysicsSurface and/or applyOnChannelsThatsChildOfPhysicsSurface is True, and Apply colors on the channels that makes it blend. \nThis means that if you for instance have Mud on a Characters Channel, and they're walking over Cobble-Mud, then we can apply color on whatever channel Mud is on since it is a parent of Cobble-Mud. Same the other way around, if a wheel with Mud is driving over a Cobble Material that has Cobble-Mud registered then it can Apply color on whatever channels that results in Cobble-Mud. "))
	bool applyOnChannelsThatResultsInBlendableSurfaces = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If True then if was unsuccessfull in getting any colors to apply on any channel using physics surface, then we fallback to whatever that was set on the RGBA Channels. "))
	bool fallbackToRGBAColorsIfFailedToApplyColorsUsingPhysicsSurface = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Color Condition to use on whatever Vertex Color Channels that was successfull in getting what colors to apply. "))
	FVertexDetectPaintColorConditionStruct paintUsingPhysicsSurfaceConditions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "With this you can Apply a Strength to the Channels that we where unsuccessfull in getting colors for, i.e. channels that didn't have the surface registered etc. Useful if for Example if you want to paint Puddle, and Remove on the other Channels since water should clean away stuff on them, then you could set this to a minus value. Should be between -1 - 1. If painting with Add and not Set, then this and paintStrengthToApply can't both be 0, since then no difference will occur so no reason to start the task. \nNOTE that if less than 0.005 (or -0.005 if minus), then we will clamp to that as long as it's not 0, as that is the lowest amount needed to paint at the lowest strength since when converted to FColor."))
	float paintStrengtOnChannelsWithoutThePhysicsSurface = 0;
};


//-------------------------------------------------------

//  Apply Vertex Colors Using Vertex Channel Struct

USTRUCT(BlueprintType)
struct FVertexDetectApplyColorsUsingVertexChannelStruct {

	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Color to Apply on Channel. Should be between -1.0 and 1.0 if Adding, or between 0-1 if Setting. With Set, you actually Set the vertex color to be that. "))
	float amountToApply = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If True then will Lerp the vertex color to the target value with the given lerp strength. For instance if the current vertex color value for a channel is 1, but you lerp toward 0.5 with lerp strength 0.1, then after 1 paint job the vertex channel should be 0.9. "))
	FVertexDetectLerpVertexColorToTargetStruct lerpVertexColorToTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Add will Add onto the existing colors, meaning if you set higher than 0 in strength, it will increase the vertex colors up to maximum 1, if less than 0, it decrease down to 0. If Set to Set Vertex Color, it will set the colors to the strength, if 0 it will set the vertex colors to the lowest 0 for instance. "))
	EApplyVertexColorSetting applyWithSetting = EApplyVertexColorSetting::EAddVertexColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Apply Color on Channel if Specified Paint Conditions are met."))
	FVertexDetectPaintColorConditionStruct paintConditions;
};


//-------------------------------------------------------

//  Apply Vertex Colors Struct

USTRUCT(BlueprintType)
struct FVertexDetectRGBAStruct {

	GENERATED_BODY()


	bool IsAnyColorChannelSetToAddColorAndIsNotZero() const {

		if (applyColorsOnRedChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor && applyColorsOnRedChannel.amountToApply != 0)
			return true;

		if (applyColorsOnGreenChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor && applyColorsOnGreenChannel.amountToApply != 0)
			return true;

		if (applyColorsOnBlueChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor && applyColorsOnBlueChannel.amountToApply != 0)
			return true;

		if (applyColorsOnAlphaChannel.applyWithSetting == EApplyVertexColorSetting::EAddVertexColor && applyColorsOnAlphaChannel.amountToApply != 0)
			return true;

		return false;
	}


	bool IsAnyColorChannelSetToSetColor() const {

		if (applyColorsOnRedChannel.applyWithSetting == EApplyVertexColorSetting::ESetVertexColor)
			return true;

		if (applyColorsOnGreenChannel.applyWithSetting == EApplyVertexColorSetting::ESetVertexColor)
			return true;

		if (applyColorsOnBlueChannel.applyWithSetting == EApplyVertexColorSetting::ESetVertexColor)
			return true;

		if (applyColorsOnAlphaChannel.applyWithSetting == EApplyVertexColorSetting::ESetVertexColor)
			return true;

		return false;
	}

	bool IsAnyColorChannelSetToSetToLerpToTarget() const {

		if (applyColorsOnRedChannel.lerpVertexColorToTarget.lerpToTarget && applyColorsOnRedChannel.lerpVertexColorToTarget.lerpStrength > 0)
			return true;

		if (applyColorsOnGreenChannel.lerpVertexColorToTarget.lerpToTarget && applyColorsOnGreenChannel.lerpVertexColorToTarget.lerpStrength > 0)
			return true;

		if (applyColorsOnBlueChannel.lerpVertexColorToTarget.lerpToTarget && applyColorsOnBlueChannel.lerpVertexColorToTarget.lerpStrength > 0)
			return true;

		if (applyColorsOnAlphaChannel.lerpVertexColorToTarget.lerpToTarget && applyColorsOnAlphaChannel.lerpVertexColorToTarget.lerpStrength > 0)
			return true;

		return false;
	}


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "This is useful so you don't have to hardcode what to paint on which Vertex Color Channel, but just want to paint a physics surface, if it exists. It's also useful if your Materials Vertex Color Channels isn't synched up, where for instance a Puddle could be on different Channels on different materials. It's also useful if you don't want to apply any colors at all if a surface isn't registered to the Material. It requires that the Material and what Physics Surface is on each channel is registered in the Editor Widget. Make sure to setup the Parent and Child Surfaces as well, for example if you have Mud as a Parent, and Cobble-Mud as a Child, and a character that has Mud on their Red Vertex Channel, if they're walking over a floor with Cobble-Mud, it can Apply Colors on the Channel with Mud, i.e. the Red Channel."))
	FVertexDetectApplyColorsUsingPhysicsSurfaceStruct applyColorsUsingPhysicsSurface;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Colors to Apply on Channel Settings, such as Amount to Apply, if should Add or Set, and if any conditions has to be met. "))
	FVertexDetectApplyColorsUsingVertexChannelStruct applyColorsOnRedChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Colors to Apply on Channel Settings, such as Amount to Apply, if should Add or Set, and if any conditions has to be met. "))
	FVertexDetectApplyColorsUsingVertexChannelStruct applyColorsOnGreenChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Colors to Apply on Channel Settings, such as Amount to Apply, if should Add or Set, and if any conditions has to be met. "))
	FVertexDetectApplyColorsUsingVertexChannelStruct applyColorsOnBlueChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Colors to Apply on Channel Settings, such as Amount to Apply, if should Add or Set, and if any conditions has to be met. "))
	FVertexDetectApplyColorsUsingVertexChannelStruct applyColorsOnAlphaChannel;
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "When not painting with physics surface but is using the RGBA values here, this is the Paint Limit up to a certain amount, useful for stuff like light Rain that shouldn't make characters completely Drenched but just a bit wet. "))
	FVertexPaintingLimitRGBA vertexColorChannelsPaintLimit;
};


//-------------------------------------------------------

// Override Paint Up To LOD

USTRUCT(BlueprintType)
struct FVertexPaintOverridePaintUpToLOD {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we override the amount of LODs to Paint so only Paint up to a Certain Amount. Can save performance by alot. You can also set in the Editor Widget the Standard Amount of LODs to Paint on Skeletal and Static Meshes. "))
	bool overrideLODToPaintUpTo = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	int amountOfLODsToPaint = 1;
};


//-------------------------------------------------------

// Override Colors To Apply

USTRUCT(BlueprintType)
struct FVertexPaintOverrideColorsToApply {

	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we want to run an Override Vertex Colors To Apply Interface call on an actor for every single vertex, with information such as the current vertex color, position, normal etc., then the user can themselves decide what amount they want to return. This means that the user can create their own paint conditions for their specific needs. \nThe Actor has to implement the VertexPaintDetectionInterface interface. \nNOTE That if the task is started using multithreading, then the interface will execute on another thread, so recommend avoiding things like debug symbols."))
	bool overrideVertexColorsToApply = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Object to run the Interface on. The Object has to implement the VertexPaintDetectionInterface interface. \nNOTE That if the task is started using multithreading, then the interface will execute on another thread, so recommend avoiding things like debug symbols as they will cause crashes. "))
	UObject* objectToRunOverrideVertexColorsInterface = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If True this can greatly optimize this feature since you're not running the interface for every single vertex but just those that we're trying to change, for instance those within the Area of Effect if running a Paint at Location. "))
	bool onlyRunOverrideInterfaceIfTryingToApplyColorToVertex = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we should Include the Most Dominant Physics Surface and Value for each Vertex when we run the Interface. NOTE That this makes the Task roughly 5x slower! A Task with 23k vert character took 0.03 sec to finish with this set to False, and 0.15 sec to finish if True. But it may be useful if you want to get what physics surface is on the vertex and how much of it, and the speed of the task doesn't matter. \nFor instance if you want to know if Water in case you have some electrical gameplay thing going on. "))
	bool includeMostDominantPhysicsSurface = false;
};


//-------------------------------------------------------

// Vertex Paint

USTRUCT(BlueprintType)
struct FVertexPaintStruct : public FVertexDetectFundementalStruct {

	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Whether we should Apply the change in Vertex Colors from the Paint Job to the Mesh. You can set this to false if you want to go through the entire paint job and get information such as Amount of Painted Colors of Each Channel, Compare Mesh Colors % or Task Duration etc. to know what they would've been IF the paint job had applied the colors. \nShould be a rare use case but the Example Project BP_RainExample for instance uses it so it can get the Task Durations when Drying and Applying Rain without having to actually apply the colors.   "))
	bool applyPaintJobToVertexColors = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we override the amount of LODs to Paint so only Paint up to a Certain Amount. Can save performance by alot. You can also set in the Editor Widget the Standard Amount of LODs to Paint on Skeletal and Static Meshes. "))
	FVertexPaintOverridePaintUpToLOD overrideLOD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Whether Cloth Physics should get affected at all. "))
	bool affectClothPhysics = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin|Painting", meta = (ToolTip = "If you only want to be able to paint on just certain actors then add them here. \nUseful if you for instance have a faucet that drips and paints out puddles of water etc. with sphere traces but doesn't want the player to get painted as well if they walk into the sphere but only the floor. "))
	TArray<AActor*> canOnlyApplyPaintOnTheseActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin|Painting", meta = (ToolTip = "If we want to run an Override Vertex Colors To Apply Interface call on an actor for every single vertex, with information such as the current vertex color, position, normal etc., then the user can themselves decide what amount they want to return. This means that the user can create their own paint conditions for their specific needs. \nThe Actor has to implement the VertexPaintDetectionInterface interface. \nNOTE That if the task is started using multithreading, then the interface will execute on another thread, so recommend avoiding things like debug symbols."))
	FVertexPaintOverrideColorsToApply overrideVertexColorsToApplySettings;
};


//-------------------------------------------------------

// Vertex Paint Color Setting

USTRUCT(BlueprintType)
struct FVertexPaintColorSettingStruct : public FVertexPaintStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we should Add or Set Vertex Colrs to be what we set here. The Strength to Apply to Colors should be between -1.0 to 1.0. If you Set vertex colors then 0 to 1 is what matters. "))
	FVertexDetectRGBAStruct applyVertexColorSettings;
};


//-------------------------------------------------------

// Paint Colors Directly Struct

USTRUCT(BlueprintType)
struct FVertexPaintPaintColorsDirectlyStruct : public FVertexPaintStruct {

	GENERATED_BODY()

	// The reason why FVertexPaintPaintColorsDirectlyStruct has its own limit colors is because if we move this Up to the parent struct so all paint jobs share the same, then it may be confusing when running a paint job that applies with RGBA since they have this one, but also a different when limiting when painting with physics surface. Now they have one under the RGBA struct, and another in apply using physics surfae struct, which will hopefully improve the UX and give users a better understanding of which does what. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Limit up to a certain amount, useful if for example Paints a Color Snippet or SetMeshComponentColors that is a pattern, but you don't want it to be fully colored but just a bit, to hint to the players that they should do something with the pattern. "))
	FVertexPaintingLimitRGBA vertexColorChannelsLimitWhenDirectlySettingColors;
};