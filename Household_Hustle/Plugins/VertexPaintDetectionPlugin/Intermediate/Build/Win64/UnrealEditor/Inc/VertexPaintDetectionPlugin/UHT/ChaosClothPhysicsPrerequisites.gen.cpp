// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/ChaosClothPhysicsPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosClothPhysicsPrerequisites() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsDampingSettingsStruct;
class UScriptStruct* FVertexDetectClothPhysicsDampingSettingsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsDampingSettingsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsDampingSettingsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectClothPhysicsDampingSettingsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsDampingSettingsStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectClothPhysicsDampingSettingsStruct>()
{
	return FVertexDetectClothPhysicsDampingSettingsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetDamping_dampingCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SetDamping_dampingCoefficient;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vertex Detect Cloth Physics - UChaosClothingInteractor::SetDamping()\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex Detect Cloth Physics - UChaosClothingInteractor::SetDamping()" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectClothPhysicsDampingSettingsStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct_Statics::NewProp_SetDamping_dampingCoefficient_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of global damping applied to the cloth velocities, also known as point damping. Point damping improves simulation stability, but can also cause an overall slow-down effect and therefore is best left to very small percentage amounts." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct_Statics::NewProp_SetDamping_dampingCoefficient = { "SetDamping_dampingCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsDampingSettingsStruct, SetDamping_dampingCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct_Statics::NewProp_SetDamping_dampingCoefficient_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct_Statics::NewProp_SetDamping_dampingCoefficient_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct_Statics::NewProp_SetDamping_dampingCoefficient,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectClothPhysicsDampingSettingsStruct",
		Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct_Statics::PropPointers),
		sizeof(FVertexDetectClothPhysicsDampingSettingsStruct),
		alignof(FVertexDetectClothPhysicsDampingSettingsStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsDampingSettingsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsDampingSettingsStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsDampingSettingsStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsGravitySettingsStruct;
class UScriptStruct* FVertexDetectClothPhysicsGravitySettingsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsGravitySettingsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsGravitySettingsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectClothPhysicsGravitySettingsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsGravitySettingsStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectClothPhysicsGravitySettingsStruct>()
{
	return FVertexDetectClothPhysicsGravitySettingsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetGravity_gravityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SetGravity_gravityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetGravity_overrideGravity_MetaData[];
#endif
		static void NewProp_SetGravity_overrideGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetGravity_overrideGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetGravity_gravityOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SetGravity_gravityOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vertex Detect Cloth Physics - UChaosClothingInteractor::SetGravity()\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex Detect Cloth Physics - UChaosClothingInteractor::SetGravity()" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectClothPhysicsGravitySettingsStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::NewProp_SetGravity_gravityScale_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale factor applied to the world gravity and also to the clothing simulation interactor gravity. Does not affect the gravity if set using the override below." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::NewProp_SetGravity_gravityScale = { "SetGravity_gravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsGravitySettingsStruct, SetGravity_gravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::NewProp_SetGravity_gravityScale_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::NewProp_SetGravity_gravityScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::NewProp_SetGravity_overrideGravity_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use the config gravity value instead of world gravity." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::NewProp_SetGravity_overrideGravity_SetBit(void* Obj)
	{
		((FVertexDetectClothPhysicsGravitySettingsStruct*)Obj)->SetGravity_overrideGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::NewProp_SetGravity_overrideGravity = { "SetGravity_overrideGravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectClothPhysicsGravitySettingsStruct), &Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::NewProp_SetGravity_overrideGravity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::NewProp_SetGravity_overrideGravity_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::NewProp_SetGravity_overrideGravity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::NewProp_SetGravity_gravityOverride_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The gravitational acceleration vector [cm/s^2]" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::NewProp_SetGravity_gravityOverride = { "SetGravity_gravityOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsGravitySettingsStruct, SetGravity_gravityOverride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::NewProp_SetGravity_gravityOverride_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::NewProp_SetGravity_gravityOverride_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::NewProp_SetGravity_gravityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::NewProp_SetGravity_overrideGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::NewProp_SetGravity_gravityOverride,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectClothPhysicsGravitySettingsStruct",
		Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::PropPointers),
		sizeof(FVertexDetectClothPhysicsGravitySettingsStruct),
		alignof(FVertexDetectClothPhysicsGravitySettingsStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsGravitySettingsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsGravitySettingsStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsGravitySettingsStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsWindSettingsStruct;
class UScriptStruct* FVertexDetectClothPhysicsWindSettingsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsWindSettingsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsWindSettingsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectClothPhysicsWindSettingsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsWindSettingsStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectClothPhysicsWindSettingsStruct>()
{
	return FVertexDetectClothPhysicsWindSettingsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetWind_drag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SetWind_drag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetWind_lift_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SetWind_lift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetWind_airDensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SetWind_airDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetWind_windVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SetWind_windVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vertex Detect Cloth Physics - UChaosClothingInteractor::SetWind()\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex Detect Cloth Physics - UChaosClothingInteractor::SetWind()" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectClothPhysicsWindSettingsStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::NewProp_SetWind_drag_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The aerodynamic coefficient of drag applying on each particle. If an enabled Weight Map (Mask with values in the range [0;1]) targeting the 'Drag' is added to the cloth, then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them. Otherwise only the Low value is meaningful and sufficient to set the aerodynamic drag." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::NewProp_SetWind_drag = { "SetWind_drag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsWindSettingsStruct, SetWind_drag), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::NewProp_SetWind_drag_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::NewProp_SetWind_drag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::NewProp_SetWind_lift_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The aerodynamic coefficient of lift applying on each particle. If an enabled Weight Map (Mask with values in the range [0;1]) targeting the 'Lift' is added to the cloth, then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them. Otherwise only the Low value is meaningful and sufficient to set the aerodynamic lift." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::NewProp_SetWind_lift = { "SetWind_lift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsWindSettingsStruct, SetWind_lift), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::NewProp_SetWind_lift_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::NewProp_SetWind_lift_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::NewProp_SetWind_airDensity_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::NewProp_SetWind_airDensity = { "SetWind_airDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsWindSettingsStruct, SetWind_airDensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::NewProp_SetWind_airDensity_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::NewProp_SetWind_airDensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::NewProp_SetWind_windVelocity_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::NewProp_SetWind_windVelocity = { "SetWind_windVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsWindSettingsStruct, SetWind_windVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::NewProp_SetWind_windVelocity_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::NewProp_SetWind_windVelocity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::NewProp_SetWind_drag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::NewProp_SetWind_lift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::NewProp_SetWind_airDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::NewProp_SetWind_windVelocity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectClothPhysicsWindSettingsStruct",
		Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::PropPointers),
		sizeof(FVertexDetectClothPhysicsWindSettingsStruct),
		alignof(FVertexDetectClothPhysicsWindSettingsStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsWindSettingsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsWindSettingsStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsWindSettingsStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsAnimDriveSettingsStruct;
class UScriptStruct* FVertexDetectClothPhysicsAnimDriveSettingsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsAnimDriveSettingsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsAnimDriveSettingsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectClothPhysicsAnimDriveSettingsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsAnimDriveSettingsStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectClothPhysicsAnimDriveSettingsStruct>()
{
	return FVertexDetectClothPhysicsAnimDriveSettingsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetAnimDrive_Stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SetAnimDrive_Stiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetAnimDrive_Damping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SetAnimDrive_Damping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vertex Detect Cloth Physics - UChaosClothingInteractor::SetAnimDrive()\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex Detect Cloth Physics - UChaosClothingInteractor::SetAnimDrive()" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectClothPhysicsAnimDriveSettingsStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct_Statics::NewProp_SetAnimDrive_Stiffness_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The strength of the constraint driving the cloth towards the animated goal mesh. If an enabled Weight Map (Mask with values in the range [0;1]) targeting the 'Anim Drive Stiffness' is added to the cloth, then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them. Otherwise only the Low value is meaningful and sufficient to enable this constraint." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct_Statics::NewProp_SetAnimDrive_Stiffness = { "SetAnimDrive_Stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsAnimDriveSettingsStruct, SetAnimDrive_Stiffness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct_Statics::NewProp_SetAnimDrive_Stiffness_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct_Statics::NewProp_SetAnimDrive_Stiffness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct_Statics::NewProp_SetAnimDrive_Damping_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The damping amount of the anim drive. If an enabled Weight Map (Mask with values in the range [0;1]) targeting the 'Anim Drive Damping' is added to the cloth, then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them. Otherwise only the Low value is sufficient to work on this constraint." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct_Statics::NewProp_SetAnimDrive_Damping = { "SetAnimDrive_Damping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsAnimDriveSettingsStruct, SetAnimDrive_Damping), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct_Statics::NewProp_SetAnimDrive_Damping_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct_Statics::NewProp_SetAnimDrive_Damping_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct_Statics::NewProp_SetAnimDrive_Stiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct_Statics::NewProp_SetAnimDrive_Damping,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectClothPhysicsAnimDriveSettingsStruct",
		Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct_Statics::PropPointers),
		sizeof(FVertexDetectClothPhysicsAnimDriveSettingsStruct),
		alignof(FVertexDetectClothPhysicsAnimDriveSettingsStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsAnimDriveSettingsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsAnimDriveSettingsStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsAnimDriveSettingsStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsCollisionSettingsStruct;
class UScriptStruct* FVertexDetectClothPhysicsCollisionSettingsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsCollisionSettingsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsCollisionSettingsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectClothPhysicsCollisionSettingsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsCollisionSettingsStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectClothPhysicsCollisionSettingsStruct>()
{
	return FVertexDetectClothPhysicsCollisionSettingsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetCollision_CollisionThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SetCollision_CollisionThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetCollision_FrictionCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SetCollision_FrictionCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetCollision_UseCCD_MetaData[];
#endif
		static void NewProp_SetCollision_UseCCD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetCollision_UseCCD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetCollision_SelfCollisionThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SetCollision_SelfCollisionThickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vertex Detect Cloth Physics - UChaosClothingInteractor::SetCollision()\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex Detect Cloth Physics - UChaosClothingInteractor::SetCollision()" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectClothPhysicsCollisionSettingsStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewProp_SetCollision_CollisionThickness_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The added thickness of collision shapes." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewProp_SetCollision_CollisionThickness = { "SetCollision_CollisionThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsCollisionSettingsStruct, SetCollision_CollisionThickness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewProp_SetCollision_CollisionThickness_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewProp_SetCollision_CollisionThickness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewProp_SetCollision_FrictionCoefficient_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Friction coefficient for cloth - collider interaction." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewProp_SetCollision_FrictionCoefficient = { "SetCollision_FrictionCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsCollisionSettingsStruct, SetCollision_FrictionCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewProp_SetCollision_FrictionCoefficient_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewProp_SetCollision_FrictionCoefficient_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewProp_SetCollision_UseCCD_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use continuous collision detection (CCD) to prevent any missed collisions between fast moving particles and colliders. This has a negative effect on performance compared to when resolving collision without using CCD." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewProp_SetCollision_UseCCD_SetBit(void* Obj)
	{
		((FVertexDetectClothPhysicsCollisionSettingsStruct*)Obj)->SetCollision_UseCCD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewProp_SetCollision_UseCCD = { "SetCollision_UseCCD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectClothPhysicsCollisionSettingsStruct), &Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewProp_SetCollision_UseCCD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewProp_SetCollision_UseCCD_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewProp_SetCollision_UseCCD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewProp_SetCollision_SelfCollisionThickness_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable self collision." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewProp_SetCollision_SelfCollisionThickness = { "SetCollision_SelfCollisionThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsCollisionSettingsStruct, SetCollision_SelfCollisionThickness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewProp_SetCollision_SelfCollisionThickness_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewProp_SetCollision_SelfCollisionThickness_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewProp_SetCollision_CollisionThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewProp_SetCollision_FrictionCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewProp_SetCollision_UseCCD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewProp_SetCollision_SelfCollisionThickness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectClothPhysicsCollisionSettingsStruct",
		Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::PropPointers),
		sizeof(FVertexDetectClothPhysicsCollisionSettingsStruct),
		alignof(FVertexDetectClothPhysicsCollisionSettingsStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsCollisionSettingsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsCollisionSettingsStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsCollisionSettingsStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsLongRangeAttachmentSettingsStruct;
class UScriptStruct* FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsLongRangeAttachmentSettingsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsLongRangeAttachmentSettingsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectClothPhysicsLongRangeAttachmentSettingsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsLongRangeAttachmentSettingsStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct>()
{
	return FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LongRangeAttachment_TetherThickness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LongRangeAttachment_TetherThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LongRangeAttachment_TetherScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LongRangeAttachment_TetherScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vertex Detect Cloth Physics - UChaosClothingInteractor::SetLongRangeAttachment()\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex Detect Cloth Physics - UChaosClothingInteractor::SetLongRangeAttachment()" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct_Statics::NewProp_LongRangeAttachment_TetherThickness_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The tethers' stiffness of the long range attachment constraints. The long range attachment connects each of the cloth particles to its closest fixed point with a spring constraint. This can be used to compensate for a lack of stretch resistance when the iterations count is kept low for performance reasons. Can lead to an unnatural pull string puppet like behavior. If an enabled Weight Map (Mask with values in the range [0;1]) targeting the 'Tether Stiffness' is added to the cloth, then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them. Otherwise only the Low value is meaningful and sufficient to enable this constraint. Use 0, 0 to disable." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct_Statics::NewProp_LongRangeAttachment_TetherThickness = { "LongRangeAttachment_TetherThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct, LongRangeAttachment_TetherThickness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct_Statics::NewProp_LongRangeAttachment_TetherThickness_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct_Statics::NewProp_LongRangeAttachment_TetherThickness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct_Statics::NewProp_LongRangeAttachment_TetherScale_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The limit scale of the long range attachment constraints (aka tether limit). If an enabled Weight Map (Mask with values in the range [0;1]) targeting the 'Tether Scale' is added to the cloth, then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them. Otherwise only the Low value is meaningful and sufficient to set the tethers' scale." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct_Statics::NewProp_LongRangeAttachment_TetherScale = { "LongRangeAttachment_TetherScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct, LongRangeAttachment_TetherScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct_Statics::NewProp_LongRangeAttachment_TetherScale_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct_Statics::NewProp_LongRangeAttachment_TetherScale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct_Statics::NewProp_LongRangeAttachment_TetherThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct_Statics::NewProp_LongRangeAttachment_TetherScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectClothPhysicsLongRangeAttachmentSettingsStruct",
		Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct_Statics::PropPointers),
		sizeof(FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct),
		alignof(FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsLongRangeAttachmentSettingsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsLongRangeAttachmentSettingsStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsLongRangeAttachmentSettingsStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsMaterialSettingsStruct;
class UScriptStruct* FVertexDetectClothPhysicsMaterialSettingsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsMaterialSettingsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsMaterialSettingsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectClothPhysicsMaterialSettingsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsMaterialSettingsStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectClothPhysicsMaterialSettingsStruct>()
{
	return FVertexDetectClothPhysicsMaterialSettingsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_EdgeStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Material_EdgeStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_BendingStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Material_BendingStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_AreaStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Material_AreaStiffness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vertex Detect Cloth Physics - UChaosClothingInteractor::SetMaterial()\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex Detect Cloth Physics - UChaosClothingInteractor::SetMaterial()" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectClothPhysicsMaterialSettingsStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::NewProp_Material_EdgeStiffness_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Stiffness of segments constraints. Increase the iteration count for stiffer materials. If an enabled Weight Map (Mask with values in the range [0;1]) targeting the 'Edge Stiffness' is added to the cloth, then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them. Otherwise only the Low value is meaningful and sufficient to enable this constraint." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::NewProp_Material_EdgeStiffness = { "Material_EdgeStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsMaterialSettingsStruct, Material_EdgeStiffness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::NewProp_Material_EdgeStiffness_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::NewProp_Material_EdgeStiffness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::NewProp_Material_BendingStiffness_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Stiffness of cross segments and bending elements constraints. Increase the iteration count for stiffer materials. If an enabled Weight Map (Mask with values in the range [0;1]) targeting the 'Bend Stiffness' is added to the cloth, then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them. Otherwise only the Low value is meaningful and sufficient to enable this constraint." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::NewProp_Material_BendingStiffness = { "Material_BendingStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsMaterialSettingsStruct, Material_BendingStiffness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::NewProp_Material_BendingStiffness_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::NewProp_Material_BendingStiffness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::NewProp_Material_AreaStiffness_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The stiffness of the surface area preservation constraints. Increase the iteration count for stiffer materials. If an enabled Weight Map (Mask with values in the range [0;1]) targeting the 'Bend Stiffness' is added to the cloth, then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them. Otherwise only the Low value is meaningful and sufficient to enable this constraint." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::NewProp_Material_AreaStiffness = { "Material_AreaStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsMaterialSettingsStruct, Material_AreaStiffness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::NewProp_Material_AreaStiffness_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::NewProp_Material_AreaStiffness_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::NewProp_Material_EdgeStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::NewProp_Material_BendingStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::NewProp_Material_AreaStiffness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectClothPhysicsMaterialSettingsStruct",
		Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::PropPointers),
		sizeof(FVertexDetectClothPhysicsMaterialSettingsStruct),
		alignof(FVertexDetectClothPhysicsMaterialSettingsStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsMaterialSettingsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsMaterialSettingsStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsMaterialSettingsStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsVelocityScaleSettingsStruct;
class UScriptStruct* FVertexDetectClothPhysicsVelocityScaleSettingsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsVelocityScaleSettingsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsVelocityScaleSettingsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectClothPhysicsVelocityScaleSettingsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsVelocityScaleSettingsStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectClothPhysicsVelocityScaleSettingsStruct>()
{
	return FVertexDetectClothPhysicsVelocityScaleSettingsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsVelocityScale_LinearVelocityScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsVelocityScale_LinearVelocityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicVelocityScale_AngularVelocityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicVelocityScale_AngularVelocityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsVelocityScale_FictitiousAngularVelocityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicsVelocityScale_FictitiousAngularVelocityScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vertex Detect Cloth Physics - UChaosClothingInteractor::SetVelocityScale()\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex Detect Cloth Physics - UChaosClothingInteractor::SetVelocityScale()" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectClothPhysicsVelocityScaleSettingsStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::NewProp_PhysicsVelocityScale_LinearVelocityScale_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of linear velocities sent to the local cloth space from the reference bone (the closest bone to the root on which the cloth section has been skinned, or the root itself if the cloth isn't skinned)." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::NewProp_PhysicsVelocityScale_LinearVelocityScale = { "PhysicsVelocityScale_LinearVelocityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsVelocityScaleSettingsStruct, PhysicsVelocityScale_LinearVelocityScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::NewProp_PhysicsVelocityScale_LinearVelocityScale_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::NewProp_PhysicsVelocityScale_LinearVelocityScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::NewProp_PhysicVelocityScale_AngularVelocityScale_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of angular velocities sent to the local cloth space from the reference bone the closest bone to the root on which the cloth section has been skinned, or the root itself if the cloth isn't skinned)." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::NewProp_PhysicVelocityScale_AngularVelocityScale = { "PhysicVelocityScale_AngularVelocityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsVelocityScaleSettingsStruct, PhysicVelocityScale_AngularVelocityScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::NewProp_PhysicVelocityScale_AngularVelocityScale_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::NewProp_PhysicVelocityScale_AngularVelocityScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::NewProp_PhysicsVelocityScale_FictitiousAngularVelocityScale_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The portion of the angular velocity that is used to calculate the strength of all fictitious forces (e.g. centrifugal force). This parameter is only having an effect on the portion of the reference bone's angular velocity that has been removed from the simulation via the Angular Velocity Scale parameter. This means it has no effect when AngularVelocityScale is set to 1 in which case the cloth is simulated with full world space angular velocitiesand subjected to the true physical world inertial forces. Values range from 0 to 2, with 0 showing no centrifugal effect, 1 full centrifugal effect, and 2 an overdriven centrifugal effect." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::NewProp_PhysicsVelocityScale_FictitiousAngularVelocityScale = { "PhysicsVelocityScale_FictitiousAngularVelocityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsVelocityScaleSettingsStruct, PhysicsVelocityScale_FictitiousAngularVelocityScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::NewProp_PhysicsVelocityScale_FictitiousAngularVelocityScale_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::NewProp_PhysicsVelocityScale_FictitiousAngularVelocityScale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::NewProp_PhysicsVelocityScale_LinearVelocityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::NewProp_PhysicVelocityScale_AngularVelocityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::NewProp_PhysicsVelocityScale_FictitiousAngularVelocityScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectClothPhysicsVelocityScaleSettingsStruct",
		Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::PropPointers),
		sizeof(FVertexDetectClothPhysicsVelocityScaleSettingsStruct),
		alignof(FVertexDetectClothPhysicsVelocityScaleSettingsStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsVelocityScaleSettingsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsVelocityScaleSettingsStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsVelocityScaleSettingsStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsSetAirPressureStruct;
class UScriptStruct* FVertexDetectClothPhysicsSetAirPressureStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsSetAirPressureStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsSetAirPressureStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectClothPhysicsSetAirPressureStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsSetAirPressureStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectClothPhysicsSetAirPressureStruct>()
{
	return FVertexDetectClothPhysicsSetAirPressureStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetPressure_Pressure_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SetPressure_Pressure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vertex Detect Cloth Physics - UChaosClothingInteractor::SetPressure()\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex Detect Cloth Physics - UChaosClothingInteractor::SetPressure()" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectClothPhysicsSetAirPressureStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct_Statics::NewProp_SetPressure_Pressure_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pressure force strength applied in the normal direction(use negative value to push toward backface) If an enabled Weight Map (Mask with values in the range [0;1]) targeting the Pressure is added to the cloth, then both the Low and High values will be used in conjunction with the per particle Weight stored in the Weight Map to interpolate the final value from them. Otherwise only the Low value is meaningful and sufficient to set the pressure." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct_Statics::NewProp_SetPressure_Pressure = { "SetPressure_Pressure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsSetAirPressureStruct, SetPressure_Pressure), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct_Statics::NewProp_SetPressure_Pressure_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct_Statics::NewProp_SetPressure_Pressure_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct_Statics::NewProp_SetPressure_Pressure,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectClothPhysicsSetAirPressureStruct",
		Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct_Statics::PropPointers),
		sizeof(FVertexDetectClothPhysicsSetAirPressureStruct),
		alignof(FVertexDetectClothPhysicsSetAirPressureStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsSetAirPressureStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsSetAirPressureStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsSetAirPressureStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsSettingsAtVertexColorStruct;
class UScriptStruct* FVertexDetectClothPhysicsSettingsAtVertexColorStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsSettingsAtVertexColorStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsSettingsAtVertexColorStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectClothPhysicsSettingsAtVertexColorStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsSettingsAtVertexColorStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectClothPhysicsSettingsAtVertexColorStruct>()
{
	return FVertexDetectClothPhysicsSettingsAtVertexColorStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetDamping_MetaData[];
#endif
		static void NewProp_SetDamping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothDampingSettingsWithNoColorPaintedAtChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothDampingSettingsWithNoColorPaintedAtChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothDampingSettingsWithFullColorPaintedAtChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothDampingSettingsWithFullColorPaintedAtChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetGravity_MetaData[];
#endif
		static void NewProp_SetGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothGravitySettingsWithNoColorPaintedAtChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothGravitySettingsWithNoColorPaintedAtChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothGravitySettingsWithFullColorPaintedAtChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothGravitySettingsWithFullColorPaintedAtChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetWind_MetaData[];
#endif
		static void NewProp_SetWind_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetWind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothWindSettingsWithNoColorPaintedAtChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothWindSettingsWithNoColorPaintedAtChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothWindSettingsWithFullColorPaintedAtChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothWindSettingsWithFullColorPaintedAtChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetAnimDrive_MetaData[];
#endif
		static void NewProp_SetAnimDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetAnimDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothAnimDriveSettingsWithNoColorPaintedAtChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothAnimDriveSettingsWithNoColorPaintedAtChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothAnimDriveSettingsWithFullColorPaintedAtChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothAnimDriveSettingsWithFullColorPaintedAtChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetCollision_MetaData[];
#endif
		static void NewProp_SetCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothCollisionSettingsWithNoColorPaintedAtChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothCollisionSettingsWithNoColorPaintedAtChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothCollisionSettingsWithFullColorPaintedAtChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothCollisionSettingsWithFullColorPaintedAtChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetLongRangeAttachment_MetaData[];
#endif
		static void NewProp_SetLongRangeAttachment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetLongRangeAttachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothLongRangeAttachmentSettingsWithNoColorPaintedAtChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothLongRangeAttachmentSettingsWithNoColorPaintedAtChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothLongRangeAttachmentSettingsWithFullColorPaintedAtChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothLongRangeAttachmentSettingsWithFullColorPaintedAtChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetMaterial_MetaData[];
#endif
		static void NewProp_SetMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothMaterialSettingsWithNoColorPaintedAtChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothMaterialSettingsWithNoColorPaintedAtChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothMaterialSettingsWithFullColorPaintedAtChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothMaterialSettingsWithFullColorPaintedAtChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetPhysicsVelocityScale_MetaData[];
#endif
		static void NewProp_SetPhysicsVelocityScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetPhysicsVelocityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothPhysicsVelocityScaleSettingsWithNoColorPaintedAtChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothPhysicsVelocityScaleSettingsWithNoColorPaintedAtChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothPhysicsVelocityScaleSettingsWithFullColorPaintedAtChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothPhysicsVelocityScaleSettingsWithFullColorPaintedAtChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetAirPressure_MetaData[];
#endif
		static void NewProp_SetAirPressure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetAirPressure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothPhysicssAirPressureWithNoColorPaintedAtChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothPhysicssAirPressureWithNoColorPaintedAtChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothPhysicssAirPressureWithFullColorPaintedAtChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothPhysicssAirPressureWithFullColorPaintedAtChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cloth Physics Settings At Vertex Color Struct\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cloth Physics Settings At Vertex Color Struct" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectClothPhysicsSettingsAtVertexColorStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetDamping_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Damping\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damping" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetDamping_SetBit(void* Obj)
	{
		((FVertexDetectClothPhysicsSettingsAtVertexColorStruct*)Obj)->SetDamping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetDamping = { "SetDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectClothPhysicsSettingsAtVertexColorStruct), &Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetDamping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetDamping_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetDamping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothDampingSettingsWithNoColorPaintedAtChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothDampingSettingsWithNoColorPaintedAtChannel = { "clothDampingSettingsWithNoColorPaintedAtChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsSettingsAtVertexColorStruct, clothDampingSettingsWithNoColorPaintedAtChannel), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothDampingSettingsWithNoColorPaintedAtChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothDampingSettingsWithNoColorPaintedAtChannel_MetaData) }; // 1526387855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothDampingSettingsWithFullColorPaintedAtChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothDampingSettingsWithFullColorPaintedAtChannel = { "clothDampingSettingsWithFullColorPaintedAtChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsSettingsAtVertexColorStruct, clothDampingSettingsWithFullColorPaintedAtChannel), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothDampingSettingsWithFullColorPaintedAtChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothDampingSettingsWithFullColorPaintedAtChannel_MetaData) }; // 1526387855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetGravity_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gravity\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gravity" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetGravity_SetBit(void* Obj)
	{
		((FVertexDetectClothPhysicsSettingsAtVertexColorStruct*)Obj)->SetGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetGravity = { "SetGravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectClothPhysicsSettingsAtVertexColorStruct), &Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetGravity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetGravity_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetGravity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothGravitySettingsWithNoColorPaintedAtChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothGravitySettingsWithNoColorPaintedAtChannel = { "clothGravitySettingsWithNoColorPaintedAtChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsSettingsAtVertexColorStruct, clothGravitySettingsWithNoColorPaintedAtChannel), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothGravitySettingsWithNoColorPaintedAtChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothGravitySettingsWithNoColorPaintedAtChannel_MetaData) }; // 1549901831
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothGravitySettingsWithFullColorPaintedAtChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothGravitySettingsWithFullColorPaintedAtChannel = { "clothGravitySettingsWithFullColorPaintedAtChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsSettingsAtVertexColorStruct, clothGravitySettingsWithFullColorPaintedAtChannel), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothGravitySettingsWithFullColorPaintedAtChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothGravitySettingsWithFullColorPaintedAtChannel_MetaData) }; // 1549901831
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetWind_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Wind\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wind" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetWind_SetBit(void* Obj)
	{
		((FVertexDetectClothPhysicsSettingsAtVertexColorStruct*)Obj)->SetWind = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetWind = { "SetWind", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectClothPhysicsSettingsAtVertexColorStruct), &Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetWind_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetWind_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetWind_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothWindSettingsWithNoColorPaintedAtChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothWindSettingsWithNoColorPaintedAtChannel = { "clothWindSettingsWithNoColorPaintedAtChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsSettingsAtVertexColorStruct, clothWindSettingsWithNoColorPaintedAtChannel), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothWindSettingsWithNoColorPaintedAtChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothWindSettingsWithNoColorPaintedAtChannel_MetaData) }; // 2812292754
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothWindSettingsWithFullColorPaintedAtChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothWindSettingsWithFullColorPaintedAtChannel = { "clothWindSettingsWithFullColorPaintedAtChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsSettingsAtVertexColorStruct, clothWindSettingsWithFullColorPaintedAtChannel), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothWindSettingsWithFullColorPaintedAtChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothWindSettingsWithFullColorPaintedAtChannel_MetaData) }; // 2812292754
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetAnimDrive_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Anim Drive\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Anim Drive" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetAnimDrive_SetBit(void* Obj)
	{
		((FVertexDetectClothPhysicsSettingsAtVertexColorStruct*)Obj)->SetAnimDrive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetAnimDrive = { "SetAnimDrive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectClothPhysicsSettingsAtVertexColorStruct), &Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetAnimDrive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetAnimDrive_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetAnimDrive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothAnimDriveSettingsWithNoColorPaintedAtChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothAnimDriveSettingsWithNoColorPaintedAtChannel = { "clothAnimDriveSettingsWithNoColorPaintedAtChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsSettingsAtVertexColorStruct, clothAnimDriveSettingsWithNoColorPaintedAtChannel), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothAnimDriveSettingsWithNoColorPaintedAtChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothAnimDriveSettingsWithNoColorPaintedAtChannel_MetaData) }; // 2832298018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothAnimDriveSettingsWithFullColorPaintedAtChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothAnimDriveSettingsWithFullColorPaintedAtChannel = { "clothAnimDriveSettingsWithFullColorPaintedAtChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsSettingsAtVertexColorStruct, clothAnimDriveSettingsWithFullColorPaintedAtChannel), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothAnimDriveSettingsWithFullColorPaintedAtChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothAnimDriveSettingsWithFullColorPaintedAtChannel_MetaData) }; // 2832298018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetCollision_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Collision\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetCollision_SetBit(void* Obj)
	{
		((FVertexDetectClothPhysicsSettingsAtVertexColorStruct*)Obj)->SetCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetCollision = { "SetCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectClothPhysicsSettingsAtVertexColorStruct), &Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetCollision_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothCollisionSettingsWithNoColorPaintedAtChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothCollisionSettingsWithNoColorPaintedAtChannel = { "clothCollisionSettingsWithNoColorPaintedAtChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsSettingsAtVertexColorStruct, clothCollisionSettingsWithNoColorPaintedAtChannel), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothCollisionSettingsWithNoColorPaintedAtChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothCollisionSettingsWithNoColorPaintedAtChannel_MetaData) }; // 3403926356
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothCollisionSettingsWithFullColorPaintedAtChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothCollisionSettingsWithFullColorPaintedAtChannel = { "clothCollisionSettingsWithFullColorPaintedAtChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsSettingsAtVertexColorStruct, clothCollisionSettingsWithFullColorPaintedAtChannel), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothCollisionSettingsWithFullColorPaintedAtChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothCollisionSettingsWithFullColorPaintedAtChannel_MetaData) }; // 3403926356
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetLongRangeAttachment_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Long Range Attachment\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Long Range Attachment" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetLongRangeAttachment_SetBit(void* Obj)
	{
		((FVertexDetectClothPhysicsSettingsAtVertexColorStruct*)Obj)->SetLongRangeAttachment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetLongRangeAttachment = { "SetLongRangeAttachment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectClothPhysicsSettingsAtVertexColorStruct), &Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetLongRangeAttachment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetLongRangeAttachment_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetLongRangeAttachment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothLongRangeAttachmentSettingsWithNoColorPaintedAtChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothLongRangeAttachmentSettingsWithNoColorPaintedAtChannel = { "clothLongRangeAttachmentSettingsWithNoColorPaintedAtChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsSettingsAtVertexColorStruct, clothLongRangeAttachmentSettingsWithNoColorPaintedAtChannel), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothLongRangeAttachmentSettingsWithNoColorPaintedAtChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothLongRangeAttachmentSettingsWithNoColorPaintedAtChannel_MetaData) }; // 525531841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothLongRangeAttachmentSettingsWithFullColorPaintedAtChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothLongRangeAttachmentSettingsWithFullColorPaintedAtChannel = { "clothLongRangeAttachmentSettingsWithFullColorPaintedAtChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsSettingsAtVertexColorStruct, clothLongRangeAttachmentSettingsWithFullColorPaintedAtChannel), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothLongRangeAttachmentSettingsWithFullColorPaintedAtChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothLongRangeAttachmentSettingsWithFullColorPaintedAtChannel_MetaData) }; // 525531841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetMaterial_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetMaterial_SetBit(void* Obj)
	{
		((FVertexDetectClothPhysicsSettingsAtVertexColorStruct*)Obj)->SetMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetMaterial = { "SetMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectClothPhysicsSettingsAtVertexColorStruct), &Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetMaterial_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothMaterialSettingsWithNoColorPaintedAtChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothMaterialSettingsWithNoColorPaintedAtChannel = { "clothMaterialSettingsWithNoColorPaintedAtChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsSettingsAtVertexColorStruct, clothMaterialSettingsWithNoColorPaintedAtChannel), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothMaterialSettingsWithNoColorPaintedAtChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothMaterialSettingsWithNoColorPaintedAtChannel_MetaData) }; // 1730790234
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothMaterialSettingsWithFullColorPaintedAtChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothMaterialSettingsWithFullColorPaintedAtChannel = { "clothMaterialSettingsWithFullColorPaintedAtChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsSettingsAtVertexColorStruct, clothMaterialSettingsWithFullColorPaintedAtChannel), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothMaterialSettingsWithFullColorPaintedAtChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothMaterialSettingsWithFullColorPaintedAtChannel_MetaData) }; // 1730790234
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetPhysicsVelocityScale_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Physics Velocity Scale\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Physics Velocity Scale" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetPhysicsVelocityScale_SetBit(void* Obj)
	{
		((FVertexDetectClothPhysicsSettingsAtVertexColorStruct*)Obj)->SetPhysicsVelocityScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetPhysicsVelocityScale = { "SetPhysicsVelocityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectClothPhysicsSettingsAtVertexColorStruct), &Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetPhysicsVelocityScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetPhysicsVelocityScale_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetPhysicsVelocityScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothPhysicsVelocityScaleSettingsWithNoColorPaintedAtChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothPhysicsVelocityScaleSettingsWithNoColorPaintedAtChannel = { "clothPhysicsVelocityScaleSettingsWithNoColorPaintedAtChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsSettingsAtVertexColorStruct, clothPhysicsVelocityScaleSettingsWithNoColorPaintedAtChannel), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothPhysicsVelocityScaleSettingsWithNoColorPaintedAtChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothPhysicsVelocityScaleSettingsWithNoColorPaintedAtChannel_MetaData) }; // 1442529521
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothPhysicsVelocityScaleSettingsWithFullColorPaintedAtChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothPhysicsVelocityScaleSettingsWithFullColorPaintedAtChannel = { "clothPhysicsVelocityScaleSettingsWithFullColorPaintedAtChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsSettingsAtVertexColorStruct, clothPhysicsVelocityScaleSettingsWithFullColorPaintedAtChannel), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothPhysicsVelocityScaleSettingsWithFullColorPaintedAtChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothPhysicsVelocityScaleSettingsWithFullColorPaintedAtChannel_MetaData) }; // 1442529521
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetAirPressure_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set Air Pressure\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Air Pressure" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetAirPressure_SetBit(void* Obj)
	{
		((FVertexDetectClothPhysicsSettingsAtVertexColorStruct*)Obj)->SetAirPressure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetAirPressure = { "SetAirPressure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectClothPhysicsSettingsAtVertexColorStruct), &Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetAirPressure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetAirPressure_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetAirPressure_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothPhysicssAirPressureWithNoColorPaintedAtChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothPhysicssAirPressureWithNoColorPaintedAtChannel = { "clothPhysicssAirPressureWithNoColorPaintedAtChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsSettingsAtVertexColorStruct, clothPhysicssAirPressureWithNoColorPaintedAtChannel), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothPhysicssAirPressureWithNoColorPaintedAtChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothPhysicssAirPressureWithNoColorPaintedAtChannel_MetaData) }; // 792935900
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothPhysicssAirPressureWithFullColorPaintedAtChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothPhysicssAirPressureWithFullColorPaintedAtChannel = { "clothPhysicssAirPressureWithFullColorPaintedAtChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothPhysicsSettingsAtVertexColorStruct, clothPhysicssAirPressureWithFullColorPaintedAtChannel), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothPhysicssAirPressureWithFullColorPaintedAtChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothPhysicssAirPressureWithFullColorPaintedAtChannel_MetaData) }; // 792935900
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothDampingSettingsWithNoColorPaintedAtChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothDampingSettingsWithFullColorPaintedAtChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothGravitySettingsWithNoColorPaintedAtChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothGravitySettingsWithFullColorPaintedAtChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetWind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothWindSettingsWithNoColorPaintedAtChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothWindSettingsWithFullColorPaintedAtChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetAnimDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothAnimDriveSettingsWithNoColorPaintedAtChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothAnimDriveSettingsWithFullColorPaintedAtChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothCollisionSettingsWithNoColorPaintedAtChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothCollisionSettingsWithFullColorPaintedAtChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetLongRangeAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothLongRangeAttachmentSettingsWithNoColorPaintedAtChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothLongRangeAttachmentSettingsWithFullColorPaintedAtChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothMaterialSettingsWithNoColorPaintedAtChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothMaterialSettingsWithFullColorPaintedAtChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetPhysicsVelocityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothPhysicsVelocityScaleSettingsWithNoColorPaintedAtChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothPhysicsVelocityScaleSettingsWithFullColorPaintedAtChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_SetAirPressure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothPhysicssAirPressureWithNoColorPaintedAtChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewProp_clothPhysicssAirPressureWithFullColorPaintedAtChannel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectClothPhysicsSettingsAtVertexColorStruct",
		Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::PropPointers),
		sizeof(FVertexDetectClothPhysicsSettingsAtVertexColorStruct),
		alignof(FVertexDetectClothPhysicsSettingsAtVertexColorStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsSettingsAtVertexColorStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsSettingsAtVertexColorStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsSettingsAtVertexColorStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectClothSettingsStruct;
class UScriptStruct* FVertexDetectClothSettingsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectClothSettingsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectClothSettingsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectClothSettingsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectClothSettingsStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectClothSettingsStruct>()
{
	return FVertexDetectClothSettingsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothPhysicsSettingsAtRedChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothPhysicsSettingsAtRedChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothPhysicsSettingsAtGreenChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothPhysicsSettingsAtGreenChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothPhysicsSettingsAtBlueChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothPhysicsSettingsAtBlueChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothPhysicsSettingsAtAlphaChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothPhysicsSettingsAtAlphaChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cloth Settings Struct\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cloth Settings Struct" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectClothSettingsStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::NewProp_clothPhysicsSettingsAtRedChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What the Cloth Physics Settings should be on the Red Channel. If Red is 0-1, how a cloths physics should get affected." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::NewProp_clothPhysicsSettingsAtRedChannel = { "clothPhysicsSettingsAtRedChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothSettingsStruct, clothPhysicsSettingsAtRedChannel), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::NewProp_clothPhysicsSettingsAtRedChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::NewProp_clothPhysicsSettingsAtRedChannel_MetaData) }; // 3118416223
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::NewProp_clothPhysicsSettingsAtGreenChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What the Cloth Physics Settings should be on the Green Channel. If Red is 0-1, how a cloths physics should get affected." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::NewProp_clothPhysicsSettingsAtGreenChannel = { "clothPhysicsSettingsAtGreenChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothSettingsStruct, clothPhysicsSettingsAtGreenChannel), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::NewProp_clothPhysicsSettingsAtGreenChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::NewProp_clothPhysicsSettingsAtGreenChannel_MetaData) }; // 3118416223
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::NewProp_clothPhysicsSettingsAtBlueChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What the Cloth Physics Settings should be on the Blue Channel. If Red is 0-1, how a cloths physics should get affected." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::NewProp_clothPhysicsSettingsAtBlueChannel = { "clothPhysicsSettingsAtBlueChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothSettingsStruct, clothPhysicsSettingsAtBlueChannel), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::NewProp_clothPhysicsSettingsAtBlueChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::NewProp_clothPhysicsSettingsAtBlueChannel_MetaData) }; // 3118416223
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::NewProp_clothPhysicsSettingsAtAlphaChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What the Cloth Physics Settings should be on the Alpha Channel. If Red is 0-1, how a cloths physics should get affected." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::NewProp_clothPhysicsSettingsAtAlphaChannel = { "clothPhysicsSettingsAtAlphaChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClothSettingsStruct, clothPhysicsSettingsAtAlphaChannel), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::NewProp_clothPhysicsSettingsAtAlphaChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::NewProp_clothPhysicsSettingsAtAlphaChannel_MetaData) }; // 3118416223
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::NewProp_clothPhysicsSettingsAtRedChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::NewProp_clothPhysicsSettingsAtGreenChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::NewProp_clothPhysicsSettingsAtBlueChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::NewProp_clothPhysicsSettingsAtAlphaChannel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectClothSettingsStruct",
		Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::PropPointers),
		sizeof(FVertexDetectClothSettingsStruct),
		alignof(FVertexDetectClothSettingsStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectClothSettingsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectClothSettingsStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectClothSettingsStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectChaosClothPhysicsSettings;
class UScriptStruct* FVertexDetectChaosClothPhysicsSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectChaosClothPhysicsSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectChaosClothPhysicsSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectChaosClothPhysicsSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectChaosClothPhysicsSettings.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectChaosClothPhysicsSettings>()
{
	return FVertexDetectChaosClothPhysicsSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetDamping_MetaData[];
#endif
		static void NewProp_SetDamping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothDampingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothDampingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetGravity_MetaData[];
#endif
		static void NewProp_SetGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothGravitySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothGravitySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetWind_MetaData[];
#endif
		static void NewProp_SetWind_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetWind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothWindSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothWindSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetAnimDrive_MetaData[];
#endif
		static void NewProp_SetAnimDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetAnimDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothAnimDriveSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothAnimDriveSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetCollision_MetaData[];
#endif
		static void NewProp_SetCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothCollisionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothCollisionSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetLongRangeAttachment_MetaData[];
#endif
		static void NewProp_SetLongRangeAttachment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetLongRangeAttachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothLongRangeAttachmentSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothLongRangeAttachmentSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetMaterial_MetaData[];
#endif
		static void NewProp_SetMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothMaterialSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothMaterialSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetPhysicsVelocityScale_MetaData[];
#endif
		static void NewProp_SetPhysicsVelocityScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetPhysicsVelocityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothPhysicsVelocityScaleSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothPhysicsVelocityScaleSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetAirPressure_MetaData[];
#endif
		static void NewProp_SetAirPressure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetAirPressure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothPhysicssAirPressureSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothPhysicssAirPressureSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cloth Physics Settings At Vertex Color Struct\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cloth Physics Settings At Vertex Color Struct" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectChaosClothPhysicsSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetDamping_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Damping\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damping" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetDamping_SetBit(void* Obj)
	{
		((FVertexDetectChaosClothPhysicsSettings*)Obj)->SetDamping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetDamping = { "SetDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectChaosClothPhysicsSettings), &Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetDamping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetDamping_MetaData), Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetDamping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothDampingSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothDampingSettings = { "clothDampingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectChaosClothPhysicsSettings, clothDampingSettings), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothDampingSettings_MetaData), Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothDampingSettings_MetaData) }; // 1526387855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetGravity_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gravity\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gravity" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetGravity_SetBit(void* Obj)
	{
		((FVertexDetectChaosClothPhysicsSettings*)Obj)->SetGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetGravity = { "SetGravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectChaosClothPhysicsSettings), &Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetGravity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetGravity_MetaData), Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetGravity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothGravitySettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothGravitySettings = { "clothGravitySettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectChaosClothPhysicsSettings, clothGravitySettings), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothGravitySettings_MetaData), Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothGravitySettings_MetaData) }; // 1549901831
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetWind_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Wind\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wind" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetWind_SetBit(void* Obj)
	{
		((FVertexDetectChaosClothPhysicsSettings*)Obj)->SetWind = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetWind = { "SetWind", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectChaosClothPhysicsSettings), &Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetWind_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetWind_MetaData), Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetWind_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothWindSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothWindSettings = { "clothWindSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectChaosClothPhysicsSettings, clothWindSettings), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothWindSettings_MetaData), Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothWindSettings_MetaData) }; // 2812292754
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetAnimDrive_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Anim Drive\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Anim Drive" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetAnimDrive_SetBit(void* Obj)
	{
		((FVertexDetectChaosClothPhysicsSettings*)Obj)->SetAnimDrive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetAnimDrive = { "SetAnimDrive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectChaosClothPhysicsSettings), &Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetAnimDrive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetAnimDrive_MetaData), Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetAnimDrive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothAnimDriveSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothAnimDriveSettings = { "clothAnimDriveSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectChaosClothPhysicsSettings, clothAnimDriveSettings), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothAnimDriveSettings_MetaData), Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothAnimDriveSettings_MetaData) }; // 2832298018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetCollision_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Collision\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetCollision_SetBit(void* Obj)
	{
		((FVertexDetectChaosClothPhysicsSettings*)Obj)->SetCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetCollision = { "SetCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectChaosClothPhysicsSettings), &Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetCollision_MetaData), Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothCollisionSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothCollisionSettings = { "clothCollisionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectChaosClothPhysicsSettings, clothCollisionSettings), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothCollisionSettings_MetaData), Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothCollisionSettings_MetaData) }; // 3403926356
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetLongRangeAttachment_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Long Range Attachment\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Long Range Attachment" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetLongRangeAttachment_SetBit(void* Obj)
	{
		((FVertexDetectChaosClothPhysicsSettings*)Obj)->SetLongRangeAttachment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetLongRangeAttachment = { "SetLongRangeAttachment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectChaosClothPhysicsSettings), &Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetLongRangeAttachment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetLongRangeAttachment_MetaData), Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetLongRangeAttachment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothLongRangeAttachmentSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothLongRangeAttachmentSettings = { "clothLongRangeAttachmentSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectChaosClothPhysicsSettings, clothLongRangeAttachmentSettings), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothLongRangeAttachmentSettings_MetaData), Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothLongRangeAttachmentSettings_MetaData) }; // 525531841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetMaterial_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetMaterial_SetBit(void* Obj)
	{
		((FVertexDetectChaosClothPhysicsSettings*)Obj)->SetMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetMaterial = { "SetMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectChaosClothPhysicsSettings), &Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetMaterial_MetaData), Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothMaterialSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothMaterialSettings = { "clothMaterialSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectChaosClothPhysicsSettings, clothMaterialSettings), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothMaterialSettings_MetaData), Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothMaterialSettings_MetaData) }; // 1730790234
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetPhysicsVelocityScale_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Physics Velocity Scale\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Physics Velocity Scale" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetPhysicsVelocityScale_SetBit(void* Obj)
	{
		((FVertexDetectChaosClothPhysicsSettings*)Obj)->SetPhysicsVelocityScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetPhysicsVelocityScale = { "SetPhysicsVelocityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectChaosClothPhysicsSettings), &Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetPhysicsVelocityScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetPhysicsVelocityScale_MetaData), Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetPhysicsVelocityScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothPhysicsVelocityScaleSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothPhysicsVelocityScaleSettings = { "clothPhysicsVelocityScaleSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectChaosClothPhysicsSettings, clothPhysicsVelocityScaleSettings), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothPhysicsVelocityScaleSettings_MetaData), Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothPhysicsVelocityScaleSettings_MetaData) }; // 1442529521
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetAirPressure_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Air Pressure\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Air Pressure" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetAirPressure_SetBit(void* Obj)
	{
		((FVertexDetectChaosClothPhysicsSettings*)Obj)->SetAirPressure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetAirPressure = { "SetAirPressure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectChaosClothPhysicsSettings), &Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetAirPressure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetAirPressure_MetaData), Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetAirPressure_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothPhysicssAirPressureSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ChaosClothPhysicsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothPhysicssAirPressureSettings = { "clothPhysicssAirPressureSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectChaosClothPhysicsSettings, clothPhysicssAirPressureSettings), Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothPhysicssAirPressureSettings_MetaData), Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothPhysicssAirPressureSettings_MetaData) }; // 792935900
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothDampingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothGravitySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetWind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothWindSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetAnimDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothAnimDriveSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothCollisionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetLongRangeAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothLongRangeAttachmentSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothMaterialSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetPhysicsVelocityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothPhysicsVelocityScaleSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_SetAirPressure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewProp_clothPhysicssAirPressureSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectChaosClothPhysicsSettings",
		Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::PropPointers),
		sizeof(FVertexDetectChaosClothPhysicsSettings),
		alignof(FVertexDetectChaosClothPhysicsSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectChaosClothPhysicsSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectChaosClothPhysicsSettings.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectChaosClothPhysicsSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_ChaosClothPhysicsPrerequisites_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_ChaosClothPhysicsPrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FVertexDetectClothPhysicsDampingSettingsStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectClothPhysicsDampingSettingsStruct_Statics::NewStructOps, TEXT("VertexDetectClothPhysicsDampingSettingsStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsDampingSettingsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectClothPhysicsDampingSettingsStruct), 1526387855U) },
		{ FVertexDetectClothPhysicsGravitySettingsStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectClothPhysicsGravitySettingsStruct_Statics::NewStructOps, TEXT("VertexDetectClothPhysicsGravitySettingsStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsGravitySettingsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectClothPhysicsGravitySettingsStruct), 1549901831U) },
		{ FVertexDetectClothPhysicsWindSettingsStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectClothPhysicsWindSettingsStruct_Statics::NewStructOps, TEXT("VertexDetectClothPhysicsWindSettingsStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsWindSettingsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectClothPhysicsWindSettingsStruct), 2812292754U) },
		{ FVertexDetectClothPhysicsAnimDriveSettingsStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectClothPhysicsAnimDriveSettingsStruct_Statics::NewStructOps, TEXT("VertexDetectClothPhysicsAnimDriveSettingsStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsAnimDriveSettingsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectClothPhysicsAnimDriveSettingsStruct), 2832298018U) },
		{ FVertexDetectClothPhysicsCollisionSettingsStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectClothPhysicsCollisionSettingsStruct_Statics::NewStructOps, TEXT("VertexDetectClothPhysicsCollisionSettingsStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsCollisionSettingsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectClothPhysicsCollisionSettingsStruct), 3403926356U) },
		{ FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct_Statics::NewStructOps, TEXT("VertexDetectClothPhysicsLongRangeAttachmentSettingsStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsLongRangeAttachmentSettingsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct), 525531841U) },
		{ FVertexDetectClothPhysicsMaterialSettingsStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectClothPhysicsMaterialSettingsStruct_Statics::NewStructOps, TEXT("VertexDetectClothPhysicsMaterialSettingsStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsMaterialSettingsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectClothPhysicsMaterialSettingsStruct), 1730790234U) },
		{ FVertexDetectClothPhysicsVelocityScaleSettingsStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectClothPhysicsVelocityScaleSettingsStruct_Statics::NewStructOps, TEXT("VertexDetectClothPhysicsVelocityScaleSettingsStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsVelocityScaleSettingsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectClothPhysicsVelocityScaleSettingsStruct), 1442529521U) },
		{ FVertexDetectClothPhysicsSetAirPressureStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSetAirPressureStruct_Statics::NewStructOps, TEXT("VertexDetectClothPhysicsSetAirPressureStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsSetAirPressureStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectClothPhysicsSetAirPressureStruct), 792935900U) },
		{ FVertexDetectClothPhysicsSettingsAtVertexColorStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectClothPhysicsSettingsAtVertexColorStruct_Statics::NewStructOps, TEXT("VertexDetectClothPhysicsSettingsAtVertexColorStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectClothPhysicsSettingsAtVertexColorStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectClothPhysicsSettingsAtVertexColorStruct), 3118416223U) },
		{ FVertexDetectClothSettingsStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct_Statics::NewStructOps, TEXT("VertexDetectClothSettingsStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectClothSettingsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectClothSettingsStruct), 2564330081U) },
		{ FVertexDetectChaosClothPhysicsSettings::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings_Statics::NewStructOps, TEXT("VertexDetectChaosClothPhysicsSettings"), &Z_Registration_Info_UScriptStruct_VertexDetectChaosClothPhysicsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectChaosClothPhysicsSettings), 3419080287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_ChaosClothPhysicsPrerequisites_h_2303488713(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_ChaosClothPhysicsPrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_ChaosClothPhysicsPrerequisites_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
