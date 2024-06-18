// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "ChaosClothPhysicsPrerequisites.generated.h" 


//-------------------------------------------------------

// Vertex Detect Cloth Physics - UChaosClothingInteractor::SetDamping()

USTRUCT(BlueprintType)
struct FVertexDetectClothPhysicsDampingSettingsStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The amount of global damping applied to the cloth velocities, also known as point damping. Point damping improves simulation stability, but can also cause an overall slow-down effect and therefore is best left to very small percentage amounts."))
	float SetDamping_dampingCoefficient = 0.01;
};


//-------------------------------------------------------

// Vertex Detect Cloth Physics - UChaosClothingInteractor::SetGravity()

USTRUCT(BlueprintType)
struct FVertexDetectClothPhysicsGravitySettingsStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Scale factor applied to the world gravity and also to the clothing simulation interactor gravity. Does not affect the gravity if set using the override below."))
	float SetGravity_gravityScale = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Use the config gravity value instead of world gravity."))
	bool SetGravity_overrideGravity = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The gravitational acceleration vector [cm/s^2]"))
	FVector SetGravity_gravityOverride = FVector(0, 0, -980.664978);
};


//-------------------------------------------------------

// Vertex Detect Cloth Physics - UChaosClothingInteractor::SetWind()

USTRUCT(BlueprintType)
struct FVertexDetectClothPhysicsWindSettingsStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The aerodynamic coefficient of drag applying on each particle. If an enabled Weight Map (Mask with values in the range [0;1]) targeting the 'Drag' is added to the cloth, then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them. Otherwise only the Low value is meaningful and sufficient to set the aerodynamic drag."))
	FVector2D SetWind_drag = FVector2D(0.07, 0.5);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The aerodynamic coefficient of lift applying on each particle. If an enabled Weight Map (Mask with values in the range [0;1]) targeting the 'Lift' is added to the cloth, then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them. Otherwise only the Low value is meaningful and sufficient to set the aerodynamic lift."))
	FVector2D SetWind_lift = FVector2D(0.07, 0.5);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	float SetWind_airDensity = 0.000001225f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVector SetWind_windVelocity = FVector(0, 0, 0);
};


//-------------------------------------------------------

// Vertex Detect Cloth Physics - UChaosClothingInteractor::SetAnimDrive()

USTRUCT(BlueprintType)
struct FVertexDetectClothPhysicsAnimDriveSettingsStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The strength of the constraint driving the cloth towards the animated goal mesh. If an enabled Weight Map (Mask with values in the range [0;1]) targeting the 'Anim Drive Stiffness' is added to the cloth, then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them. Otherwise only the Low value is meaningful and sufficient to enable this constraint."))
	FVector2D SetAnimDrive_Stiffness = FVector2D(0, 1);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The damping amount of the anim drive. If an enabled Weight Map (Mask with values in the range [0;1]) targeting the 'Anim Drive Damping' is added to the cloth, then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them. Otherwise only the Low value is sufficient to work on this constraint."))
	FVector2D SetAnimDrive_Damping = FVector2D(0, 1);
};


//-------------------------------------------------------

// Vertex Detect Cloth Physics - UChaosClothingInteractor::SetCollision()

USTRUCT(BlueprintType)
struct FVertexDetectClothPhysicsCollisionSettingsStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The added thickness of collision shapes."))
	float SetCollision_CollisionThickness = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Friction coefficient for cloth - collider interaction."))
	float SetCollision_FrictionCoefficient = 0.8;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Use continuous collision detection (CCD) to prevent any missed collisions between fast moving particles and colliders. This has a negative effect on performance compared to when resolving collision without using CCD."))
	bool SetCollision_UseCCD = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Enable self collision."))
	float SetCollision_SelfCollisionThickness = 2;
};


//-------------------------------------------------------

// Vertex Detect Cloth Physics - UChaosClothingInteractor::SetLongRangeAttachment()

USTRUCT(BlueprintType)
struct FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The tethers' stiffness of the long range attachment constraints. The long range attachment connects each of the cloth particles to its closest fixed point with a spring constraint. This can be used to compensate for a lack of stretch resistance when the iterations count is kept low for performance reasons. Can lead to an unnatural pull string puppet like behavior. If an enabled Weight Map (Mask with values in the range [0;1]) targeting the 'Tether Stiffness' is added to the cloth, then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them. Otherwise only the Low value is meaningful and sufficient to enable this constraint. Use 0, 0 to disable."))
	FVector2D LongRangeAttachment_TetherThickness = FVector2D(1, 1);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The limit scale of the long range attachment constraints (aka tether limit). If an enabled Weight Map (Mask with values in the range [0;1]) targeting the 'Tether Scale' is added to the cloth, then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them. Otherwise only the Low value is meaningful and sufficient to set the tethers' scale."))
	FVector2D LongRangeAttachment_TetherScale = FVector2D(1, 1);
};


//-------------------------------------------------------

// Vertex Detect Cloth Physics - UChaosClothingInteractor::SetMaterial()

USTRUCT(BlueprintType)
struct FVertexDetectClothPhysicsMaterialSettingsStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Stiffness of segments constraints. Increase the iteration count for stiffer materials. If an enabled Weight Map (Mask with values in the range [0;1]) targeting the 'Edge Stiffness' is added to the cloth, then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them. Otherwise only the Low value is meaningful and sufficient to enable this constraint."))
	FVector2D Material_EdgeStiffness = FVector2D(1, 1);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Stiffness of cross segments and bending elements constraints. Increase the iteration count for stiffer materials. If an enabled Weight Map (Mask with values in the range [0;1]) targeting the 'Bend Stiffness' is added to the cloth, then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them. Otherwise only the Low value is meaningful and sufficient to enable this constraint."))
	FVector2D Material_BendingStiffness = FVector2D(1, 1);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The stiffness of the surface area preservation constraints. Increase the iteration count for stiffer materials. If an enabled Weight Map (Mask with values in the range [0;1]) targeting the 'Bend Stiffness' is added to the cloth, then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them. Otherwise only the Low value is meaningful and sufficient to enable this constraint."))
	FVector2D Material_AreaStiffness = FVector2D(1, 1);
};


//-------------------------------------------------------

// Vertex Detect Cloth Physics - UChaosClothingInteractor::SetVelocityScale()

USTRUCT(BlueprintType)
struct FVertexDetectClothPhysicsVelocityScaleSettingsStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The amount of linear velocities sent to the local cloth space from the reference bone (the closest bone to the root on which the cloth section has been skinned, or the root itself if the cloth isn't skinned)."))
	FVector PhysicsVelocityScale_LinearVelocityScale = FVector(0.75, 0.75, 0.75);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The amount of angular velocities sent to the local cloth space from the reference bone the closest bone to the root on which the cloth section has been skinned, or the root itself if the cloth isn't skinned)."))
	float PhysicVelocityScale_AngularVelocityScale = 0.75;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The portion of the angular velocity that is used to calculate the strength of all fictitious forces (e.g. centrifugal force). This parameter is only having an effect on the portion of the reference bone's angular velocity that has been removed from the simulation via the Angular Velocity Scale parameter. This means it has no effect when AngularVelocityScale is set to 1 in which case the cloth is simulated with full world space angular velocitiesand subjected to the true physical world inertial forces. Values range from 0 to 2, with 0 showing no centrifugal effect, 1 full centrifugal effect, and 2 an overdriven centrifugal effect."))
	float PhysicsVelocityScale_FictitiousAngularVelocityScale = 1;
};


//-------------------------------------------------------

// Vertex Detect Cloth Physics - UChaosClothingInteractor::SetPressure()

USTRUCT(BlueprintType)
struct FVertexDetectClothPhysicsSetAirPressureStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Pressure force strength applied in the normal direction(use negative value to push toward backface) If an enabled Weight Map (Mask with values in the range [0;1]) targeting the Pressure is added to the cloth, then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them. Otherwise only the Low value is meaningful and sufficient to set the pressure. "))
	FVector2D SetPressure_Pressure = FVector2D(ForceInitToZero);
};


//-------------------------------------------------------

// Cloth Physics Settings At Vertex Color Struct

USTRUCT(BlueprintType)
struct FVertexDetectClothPhysicsSettingsAtVertexColorStruct {

	GENERATED_BODY()


	// Damping
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	bool SetDamping = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsDampingSettingsStruct clothDampingSettingsWithNoColorPaintedAtChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsDampingSettingsStruct clothDampingSettingsWithFullColorPaintedAtChannel;


	// Gravity
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	bool SetGravity = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsGravitySettingsStruct clothGravitySettingsWithNoColorPaintedAtChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsGravitySettingsStruct clothGravitySettingsWithFullColorPaintedAtChannel;


	// Wind
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	bool SetWind = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsWindSettingsStruct clothWindSettingsWithNoColorPaintedAtChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsWindSettingsStruct clothWindSettingsWithFullColorPaintedAtChannel;


	// Anim Drive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	bool SetAnimDrive = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsAnimDriveSettingsStruct clothAnimDriveSettingsWithNoColorPaintedAtChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsAnimDriveSettingsStruct clothAnimDriveSettingsWithFullColorPaintedAtChannel;


	// Collision
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	bool SetCollision = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsCollisionSettingsStruct clothCollisionSettingsWithNoColorPaintedAtChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsCollisionSettingsStruct clothCollisionSettingsWithFullColorPaintedAtChannel;


	// Long Range Attachment
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	bool SetLongRangeAttachment = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct clothLongRangeAttachmentSettingsWithNoColorPaintedAtChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct clothLongRangeAttachmentSettingsWithFullColorPaintedAtChannel;


	// Material
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	bool SetMaterial = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsMaterialSettingsStruct clothMaterialSettingsWithNoColorPaintedAtChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsMaterialSettingsStruct clothMaterialSettingsWithFullColorPaintedAtChannel;


	// Physics Velocity Scale
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	bool SetPhysicsVelocityScale = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsVelocityScaleSettingsStruct clothPhysicsVelocityScaleSettingsWithNoColorPaintedAtChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsVelocityScaleSettingsStruct clothPhysicsVelocityScaleSettingsWithFullColorPaintedAtChannel;


	// Set Air Pressure
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	bool SetAirPressure = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsSetAirPressureStruct clothPhysicssAirPressureWithNoColorPaintedAtChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsSetAirPressureStruct clothPhysicssAirPressureWithFullColorPaintedAtChannel;
};


//-------------------------------------------------------

// Cloth Settings Struct

USTRUCT(BlueprintType)
struct FVertexDetectClothSettingsStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "What the Cloth Physics Settings should be on the Red Channel. If Red is 0-1, how a cloths physics should get affected. "))
	FVertexDetectClothPhysicsSettingsAtVertexColorStruct clothPhysicsSettingsAtRedChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "What the Cloth Physics Settings should be on the Green Channel. If Red is 0-1, how a cloths physics should get affected. "))
	FVertexDetectClothPhysicsSettingsAtVertexColorStruct clothPhysicsSettingsAtGreenChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "What the Cloth Physics Settings should be on the Blue Channel. If Red is 0-1, how a cloths physics should get affected. "))
	FVertexDetectClothPhysicsSettingsAtVertexColorStruct clothPhysicsSettingsAtBlueChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "What the Cloth Physics Settings should be on the Alpha Channel. If Red is 0-1, how a cloths physics should get affected. "))
	FVertexDetectClothPhysicsSettingsAtVertexColorStruct clothPhysicsSettingsAtAlphaChannel;
};


//-------------------------------------------------------

// Cloth Physics Settings At Vertex Color Struct

USTRUCT(BlueprintType)
struct FVertexDetectChaosClothPhysicsSettings {

	GENERATED_BODY()


	// Damping
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	bool SetDamping = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsDampingSettingsStruct clothDampingSettings;


	// Gravity
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	bool SetGravity = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsGravitySettingsStruct clothGravitySettings;


	// Wind
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	bool SetWind = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsWindSettingsStruct clothWindSettings;


	// Anim Drive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	bool SetAnimDrive = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsAnimDriveSettingsStruct clothAnimDriveSettings;


	// Collision
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	bool SetCollision = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsCollisionSettingsStruct clothCollisionSettings;


	// Long Range Attachment
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	bool SetLongRangeAttachment = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct clothLongRangeAttachmentSettings;


	// Material
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	bool SetMaterial = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsMaterialSettingsStruct clothMaterialSettings;


	// Physics Velocity Scale
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	bool SetPhysicsVelocityScale = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsVelocityScaleSettingsStruct clothPhysicsVelocityScaleSettings;


	// Air Pressure
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	bool SetAirPressure = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
	FVertexDetectClothPhysicsSetAirPressureStruct clothPhysicssAirPressureSettings;

	// Reset function so we can have default values when the users are creating the structs, but when we're actually constructing the settings with all the combined vertex color channels settings etc. we can easily reset the struct we create so it's all based from 0, so we're not accidentically adding on to the default values. 
	void ResetAllClothSettings() {
		clothDampingSettings.SetDamping_dampingCoefficient = 0;

		clothGravitySettings.SetGravity_gravityOverride = FVector(ForceInitToZero);
		clothGravitySettings.SetGravity_gravityScale = 0;
		clothGravitySettings.SetGravity_overrideGravity = false;

		clothWindSettings.SetWind_airDensity = 0;
		clothWindSettings.SetWind_drag = FVector2D(ForceInitToZero);
		clothWindSettings.SetWind_lift = FVector2D(ForceInitToZero);
		clothWindSettings.SetWind_windVelocity = FVector(ForceInitToZero);

		clothAnimDriveSettings.SetAnimDrive_Damping = FVector2D(ForceInitToZero);
		clothAnimDriveSettings.SetAnimDrive_Stiffness = FVector2D(ForceInitToZero);

		clothCollisionSettings.SetCollision_CollisionThickness = 0;
		clothCollisionSettings.SetCollision_FrictionCoefficient = 0;
		clothCollisionSettings.SetCollision_SelfCollisionThickness = 0;
		clothCollisionSettings.SetCollision_UseCCD = false;

		clothLongRangeAttachmentSettings.LongRangeAttachment_TetherScale = FVector2D(ForceInitToZero);
		clothLongRangeAttachmentSettings.LongRangeAttachment_TetherThickness = FVector2D(ForceInitToZero);

		clothMaterialSettings.Material_AreaStiffness = FVector2D(ForceInitToZero);
		clothMaterialSettings.Material_BendingStiffness = FVector2D(ForceInitToZero);
		clothMaterialSettings.Material_EdgeStiffness = FVector2D(ForceInitToZero);

		clothPhysicsVelocityScaleSettings.PhysicsVelocityScale_FictitiousAngularVelocityScale = 0;
		clothPhysicsVelocityScaleSettings.PhysicsVelocityScale_LinearVelocityScale = FVector(ForceInitToZero);
		clothPhysicsVelocityScaleSettings.PhysicVelocityScale_AngularVelocityScale = 0;

		clothPhysicssAirPressureSettings.SetPressure_Pressure = FVector2D(ForceInitToZero);
	}
};
