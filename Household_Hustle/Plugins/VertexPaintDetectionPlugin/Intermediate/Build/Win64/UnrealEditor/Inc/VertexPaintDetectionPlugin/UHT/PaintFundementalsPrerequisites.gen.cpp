// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/PaintFundementalsPrerequisites.h"
#include "../Prerequisites/PaintConditionsPrerequisites.h"
#include "../Prerequisites/PaintLimitsPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaintFundementalsPrerequisites() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_EApplyVertexColorSetting();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectFundementalStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectRGBAStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintingLimitPhysicsSurface();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintStruct();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EApplyVertexColorSetting;
	static UEnum* EApplyVertexColorSetting_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EApplyVertexColorSetting.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EApplyVertexColorSetting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VertexPaintDetectionPlugin_EApplyVertexColorSetting, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("EApplyVertexColorSetting"));
		}
		return Z_Registration_Info_UEnum_EApplyVertexColorSetting.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UEnum* StaticEnum<EApplyVertexColorSetting>()
	{
		return EApplyVertexColorSetting_StaticEnum();
	}
	struct Z_Construct_UEnum_VertexPaintDetectionPlugin_EApplyVertexColorSetting_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VertexPaintDetectionPlugin_EApplyVertexColorSetting_Statics::Enumerators[] = {
		{ "EApplyVertexColorSetting::EAddVertexColor", (int64)EApplyVertexColorSetting::EAddVertexColor },
		{ "EApplyVertexColorSetting::ESetVertexColor", (int64)EApplyVertexColorSetting::ESetVertexColor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VertexPaintDetectionPlugin_EApplyVertexColorSetting_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Apply Vertex Color Setting\n" },
		{ "EAddVertexColor.DisplayName", "Add Vertex Color" },
		{ "EAddVertexColor.Name", "EApplyVertexColorSetting::EAddVertexColor" },
		{ "EAddVertexColor.Tooltip", "Adds Color onto Existing ones until it reaches max" },
		{ "ESetVertexColor.DisplayName", "Set Vertex Color" },
		{ "ESetVertexColor.Name", "EApplyVertexColorSetting::ESetVertexColor" },
		{ "ESetVertexColor.Tooltip", "Sets Existing color to be replaced by whatever we Set" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Apply Vertex Color Setting" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VertexPaintDetectionPlugin_EApplyVertexColorSetting_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		"EApplyVertexColorSetting",
		"EApplyVertexColorSetting",
		Z_Construct_UEnum_VertexPaintDetectionPlugin_EApplyVertexColorSetting_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VertexPaintDetectionPlugin_EApplyVertexColorSetting_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VertexPaintDetectionPlugin_EApplyVertexColorSetting_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VertexPaintDetectionPlugin_EApplyVertexColorSetting_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_EApplyVertexColorSetting()
	{
		if (!Z_Registration_Info_UEnum_EApplyVertexColorSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EApplyVertexColorSetting.InnerSingleton, Z_Construct_UEnum_VertexPaintDetectionPlugin_EApplyVertexColorSetting_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EApplyVertexColorSetting.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectLerpVertexColorToTargetStruct;
class UScriptStruct* FVertexDetectLerpVertexColorToTargetStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectLerpVertexColorToTargetStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectLerpVertexColorToTargetStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectLerpVertexColorToTargetStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectLerpVertexColorToTargetStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectLerpVertexColorToTargetStruct>()
{
	return FVertexDetectLerpVertexColorToTargetStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lerpToTarget_MetaData[];
#endif
		static void NewProp_lerpToTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_lerpToTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_targetValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lerpStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lerpStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//  Lerp Vertex Color To Target Struct\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Lerp Vertex Color To Target Struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectLerpVertexColorToTargetStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::NewProp_lerpToTarget_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "If True then will Lerp the vertex color to the target value with the given lerp strength. For instance if the current vertex color value for a channel is 1, but you lerp toward 0.5 with lerp strength 0.1, then after 1 paint job the vertex channel should be 0.9." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::NewProp_lerpToTarget_SetBit(void* Obj)
	{
		((FVertexDetectLerpVertexColorToTargetStruct*)Obj)->lerpToTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::NewProp_lerpToTarget = { "lerpToTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectLerpVertexColorToTargetStruct), &Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::NewProp_lerpToTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::NewProp_lerpToTarget_MetaData), Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::NewProp_lerpToTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::NewProp_targetValue_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "The Value we will lerp towards." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::NewProp_targetValue = { "targetValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectLerpVertexColorToTargetStruct, targetValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::NewProp_targetValue_MetaData), Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::NewProp_targetValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::NewProp_lerpStrength_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "What Alpha to Lerp with." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::NewProp_lerpStrength = { "lerpStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectLerpVertexColorToTargetStruct, lerpStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::NewProp_lerpStrength_MetaData), Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::NewProp_lerpStrength_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::NewProp_lerpToTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::NewProp_targetValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::NewProp_lerpStrength,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectLerpVertexColorToTargetStruct",
		Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::PropPointers),
		sizeof(FVertexDetectLerpVertexColorToTargetStruct),
		alignof(FVertexDetectLerpVertexColorToTargetStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectLerpVertexColorToTargetStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectLerpVertexColorToTargetStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectLerpVertexColorToTargetStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectApplyColorsUsingPhysicsSurfaceStruct;
class UScriptStruct* FVertexDetectApplyColorsUsingPhysicsSurfaceStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectApplyColorsUsingPhysicsSurfaceStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectApplyColorsUsingPhysicsSurfaceStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectApplyColorsUsingPhysicsSurfaceStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectApplyColorsUsingPhysicsSurfaceStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectApplyColorsUsingPhysicsSurfaceStruct>()
{
	return FVertexDetectApplyColorsUsingPhysicsSurfaceStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_applyVertexColorUsingPhysicsSurface_MetaData[];
#endif
		static void NewProp_applyVertexColorUsingPhysicsSurface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_applyVertexColorUsingPhysicsSurface;
		static const UECodeGen_Private::FBytePropertyParams NewProp_physicsSurfacesToApply_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_physicsSurfacesToApply_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_physicsSurfacesToApply;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintStrengthToApply_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_paintStrengthToApply;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lerpPhysicsSurfaceToTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_lerpPhysicsSurfaceToTarget;
		static const UECodeGen_Private::FBytePropertyParams NewProp_applyWithSetting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_applyWithSetting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_applyWithSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_physicsSurfacePaintLimit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_physicsSurfacePaintLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_applyOnChannelsThatIsAParentOfPhysicsSurface_MetaData[];
#endif
		static void NewProp_applyOnChannelsThatIsAParentOfPhysicsSurface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_applyOnChannelsThatIsAParentOfPhysicsSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_applyOnChannelsThatsChildOfPhysicsSurface_MetaData[];
#endif
		static void NewProp_applyOnChannelsThatsChildOfPhysicsSurface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_applyOnChannelsThatsChildOfPhysicsSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_applyOnChannelsThatResultsInBlendableSurfaces_MetaData[];
#endif
		static void NewProp_applyOnChannelsThatResultsInBlendableSurfaces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_applyOnChannelsThatResultsInBlendableSurfaces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fallbackToRGBAColorsIfFailedToApplyColorsUsingPhysicsSurface_MetaData[];
#endif
		static void NewProp_fallbackToRGBAColorsIfFailedToApplyColorsUsingPhysicsSurface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_fallbackToRGBAColorsIfFailedToApplyColorsUsingPhysicsSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintUsingPhysicsSurfaceConditions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintUsingPhysicsSurfaceConditions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintStrengtOnChannelsWithoutThePhysicsSurface_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_paintStrengtOnChannelsWithoutThePhysicsSurface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//  Apply Vertex Colors Using Physics Surface Struct\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Apply Vertex Colors Using Physics Surface Struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectApplyColorsUsingPhysicsSurfaceStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyVertexColorUsingPhysicsSurface_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Applies color using Physics surface, if it's registered on a Vertex Channel, or if it's not registered, but it is a Parent / Child of the one we set, then we can apply to that. It's also useful if your Materials Vertex Color Channels isn't synched up, where for instance a Puddle could be on different Channels on different materials. It's also useful if you don't want to apply any colors at all if a surface isn't registered to the Material. It requires that the Material and what Physics Surface is on each channel is registered in the Editor Widget. Make sure to setup the Physics Surface Families as well, for example if you have Sand as a Parent, and Cobble-Sand as a Child, and a character that has Sand on their Red Vertex Channel, if they're walking over a floor with Cobble-Sand, it can Apply Colors on the Channel with Sand." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyVertexColorUsingPhysicsSurface_SetBit(void* Obj)
	{
		((FVertexDetectApplyColorsUsingPhysicsSurfaceStruct*)Obj)->applyVertexColorUsingPhysicsSurface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyVertexColorUsingPhysicsSurface = { "applyVertexColorUsingPhysicsSurface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectApplyColorsUsingPhysicsSurfaceStruct), &Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyVertexColorUsingPhysicsSurface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyVertexColorUsingPhysicsSurface_MetaData), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyVertexColorUsingPhysicsSurface_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_physicsSurfacesToApply_Inner = { "physicsSurfacesToApply", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_physicsSurfacesToApply_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "The Physics Surfaces you want to Paint/Remove Colors on. This can be a Parent or Child of a Parent Physics Surface as well, for example if you have Sand as a Parent, and Cobble-Sand as a Child, and a character that has Sand on their Red Vertex Channel. Then if they're walking over a floor with Cobble-Sand, it will Apply Colors on the Channel with Sand, i.e. the Red Channel." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_physicsSurfacesToApply = { "physicsSurfacesToApply", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectApplyColorsUsingPhysicsSurfaceStruct, physicsSurfacesToApply), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_physicsSurfacesToApply_MetaData), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_physicsSurfacesToApply_MetaData) }; // 2508321301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_paintStrengthToApply_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "How much paint strength we should Apply/Remove on the Channels that we could get colors to apply on, i.e. had physics surface registered. Should be between -1 - 1. If painting with Add and not Set, then this and paintStrengtOnChannelsWithoutThePhysicsSurface can't both be 0, since then no difference will occur so no reason to start the task. \nNOTE that if less than 0.005 (or -0.005 if minus), then we will clamp to that as long as it's not 0, as that is the lowest amount needed to paint at the lowest strength since when converted to FColor." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_paintStrengthToApply = { "paintStrengthToApply", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectApplyColorsUsingPhysicsSurfaceStruct, paintStrengthToApply), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_paintStrengthToApply_MetaData), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_paintStrengthToApply_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_lerpPhysicsSurfaceToTarget_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "If True then will Lerp the vertex color to the target value with the given lerp strength. For instance if the current vertex color value for a channel is 1, but you lerp toward 0.5 with lerp strength 0.1, then after 1 paint job the vertex channel should be 0.9." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_lerpPhysicsSurfaceToTarget = { "lerpPhysicsSurfaceToTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectApplyColorsUsingPhysicsSurfaceStruct, lerpPhysicsSurfaceToTarget), Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_lerpPhysicsSurfaceToTarget_MetaData), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_lerpPhysicsSurfaceToTarget_MetaData) }; // 377017247
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyWithSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyWithSetting_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Add will Add onto the existing colors, meaning if you set higher than 0 in strength, it will increase the vertex colors up to maximum 1, if less than 0, it decrease down to 0. If Set to Set Vertex Color, it will set the colors to the strength, if 0 it will set the vertex colors to the lowest 0 for instance." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyWithSetting = { "applyWithSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectApplyColorsUsingPhysicsSurfaceStruct, applyWithSetting), Z_Construct_UEnum_VertexPaintDetectionPlugin_EApplyVertexColorSetting, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyWithSetting_MetaData), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyWithSetting_MetaData) }; // 3977495490
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_physicsSurfacePaintLimit_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Whether to Limit Paint Color up to a certain amount on the vertex color channels that had the physics surface, useful for stuff like light Rain that shouldn't make characters completely Drenched but just a bit wet." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_physicsSurfacePaintLimit = { "physicsSurfacePaintLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectApplyColorsUsingPhysicsSurfaceStruct, physicsSurfacePaintLimit), Z_Construct_UScriptStruct_FVertexPaintingLimitPhysicsSurface, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_physicsSurfacePaintLimit_MetaData), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_physicsSurfacePaintLimit_MetaData) }; // 153516782
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyOnChannelsThatIsAParentOfPhysicsSurface_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Will check if the Physics Surface is a Child of a Parent, for instance if it's Cobble-Sand which could be a child of Parent Sand. Then if trying to Paint with Cobble-Sand, but it can't find any channel that has it, but it can find Sand, then it applies color on that channel. \nThis is useful on for instance characters that may have fundemental parent surfaces such as Sand, Mud etc. and can walk over different types of Sandy Surfaces like Asphalt-Sand, Cobble-Sand etc. and we want them to be able to Rub off on whatever channel that the character has Sand on." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyOnChannelsThatIsAParentOfPhysicsSurface_SetBit(void* Obj)
	{
		((FVertexDetectApplyColorsUsingPhysicsSurfaceStruct*)Obj)->applyOnChannelsThatIsAParentOfPhysicsSurface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyOnChannelsThatIsAParentOfPhysicsSurface = { "applyOnChannelsThatIsAParentOfPhysicsSurface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectApplyColorsUsingPhysicsSurfaceStruct), &Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyOnChannelsThatIsAParentOfPhysicsSurface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyOnChannelsThatIsAParentOfPhysicsSurface_MetaData), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyOnChannelsThatIsAParentOfPhysicsSurface_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyOnChannelsThatsChildOfPhysicsSurface_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Checks if a Physics Surface we're trying to Paint is a part of a Registered Physics Surface Family, and has a Parent. For instance Cobble-Sand may have Sand registered as Parent. So if this is True and you're Painting with a Parent Physics Surface, for instance Sand, but there is no Sand but there is Cobble-Sand child, then that channel it's registered to will get painted." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyOnChannelsThatsChildOfPhysicsSurface_SetBit(void* Obj)
	{
		((FVertexDetectApplyColorsUsingPhysicsSurfaceStruct*)Obj)->applyOnChannelsThatsChildOfPhysicsSurface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyOnChannelsThatsChildOfPhysicsSurface = { "applyOnChannelsThatsChildOfPhysicsSurface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectApplyColorsUsingPhysicsSurfaceStruct), &Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyOnChannelsThatsChildOfPhysicsSurface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyOnChannelsThatsChildOfPhysicsSurface_MetaData), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyOnChannelsThatsChildOfPhysicsSurface_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyOnChannelsThatResultsInBlendableSurfaces_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "For instance if Cobble-Mud is set to be a Blendable Surface in the Editor Widget like in the Example Proj, where Sand (Red) and Wet (Blue) can mix and form Mud, then we can take that into account and apply it to either the Parent and/or the Child of a Physics Surface if applyOnChannelsThatIsAParentOfPhysicsSurface and/or applyOnChannelsThatsChildOfPhysicsSurface is True, and Apply colors on the channels that makes it blend. \nThis means that if you for instance have Mud on a Characters Channel, and they're walking over Cobble-Mud, then we can apply color on whatever channel Mud is on since it is a parent of Cobble-Mud. Same the other way around, if a wheel with Mud is driving over a Cobble Material that has Cobble-Mud registered then it can Apply color on whatever channels that results in Cobble-Mud." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyOnChannelsThatResultsInBlendableSurfaces_SetBit(void* Obj)
	{
		((FVertexDetectApplyColorsUsingPhysicsSurfaceStruct*)Obj)->applyOnChannelsThatResultsInBlendableSurfaces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyOnChannelsThatResultsInBlendableSurfaces = { "applyOnChannelsThatResultsInBlendableSurfaces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectApplyColorsUsingPhysicsSurfaceStruct), &Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyOnChannelsThatResultsInBlendableSurfaces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyOnChannelsThatResultsInBlendableSurfaces_MetaData), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyOnChannelsThatResultsInBlendableSurfaces_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_fallbackToRGBAColorsIfFailedToApplyColorsUsingPhysicsSurface_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "If True then if was unsuccessfull in getting any colors to apply on any channel using physics surface, then we fallback to whatever that was set on the RGBA Channels." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_fallbackToRGBAColorsIfFailedToApplyColorsUsingPhysicsSurface_SetBit(void* Obj)
	{
		((FVertexDetectApplyColorsUsingPhysicsSurfaceStruct*)Obj)->fallbackToRGBAColorsIfFailedToApplyColorsUsingPhysicsSurface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_fallbackToRGBAColorsIfFailedToApplyColorsUsingPhysicsSurface = { "fallbackToRGBAColorsIfFailedToApplyColorsUsingPhysicsSurface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectApplyColorsUsingPhysicsSurfaceStruct), &Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_fallbackToRGBAColorsIfFailedToApplyColorsUsingPhysicsSurface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_fallbackToRGBAColorsIfFailedToApplyColorsUsingPhysicsSurface_MetaData), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_fallbackToRGBAColorsIfFailedToApplyColorsUsingPhysicsSurface_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_paintUsingPhysicsSurfaceConditions_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Color Condition to use on whatever Vertex Color Channels that was successfull in getting what colors to apply." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_paintUsingPhysicsSurfaceConditions = { "paintUsingPhysicsSurfaceConditions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectApplyColorsUsingPhysicsSurfaceStruct, paintUsingPhysicsSurfaceConditions), Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_paintUsingPhysicsSurfaceConditions_MetaData), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_paintUsingPhysicsSurfaceConditions_MetaData) }; // 1244830346
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_paintStrengtOnChannelsWithoutThePhysicsSurface_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "With this you can Apply a Strength to the Channels that we where unsuccessfull in getting colors for, i.e. channels that didn't have the surface registered etc. Useful if for Example if you want to paint Puddle, and Remove on the other Channels since water should clean away stuff on them, then you could set this to a minus value. Should be between -1 - 1. If painting with Add and not Set, then this and paintStrengthToApply can't both be 0, since then no difference will occur so no reason to start the task. \nNOTE that if less than 0.005 (or -0.005 if minus), then we will clamp to that as long as it's not 0, as that is the lowest amount needed to paint at the lowest strength since when converted to FColor." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_paintStrengtOnChannelsWithoutThePhysicsSurface = { "paintStrengtOnChannelsWithoutThePhysicsSurface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectApplyColorsUsingPhysicsSurfaceStruct, paintStrengtOnChannelsWithoutThePhysicsSurface), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_paintStrengtOnChannelsWithoutThePhysicsSurface_MetaData), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_paintStrengtOnChannelsWithoutThePhysicsSurface_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyVertexColorUsingPhysicsSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_physicsSurfacesToApply_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_physicsSurfacesToApply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_paintStrengthToApply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_lerpPhysicsSurfaceToTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyWithSetting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyWithSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_physicsSurfacePaintLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyOnChannelsThatIsAParentOfPhysicsSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyOnChannelsThatsChildOfPhysicsSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_applyOnChannelsThatResultsInBlendableSurfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_fallbackToRGBAColorsIfFailedToApplyColorsUsingPhysicsSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_paintUsingPhysicsSurfaceConditions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewProp_paintStrengtOnChannelsWithoutThePhysicsSurface,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectApplyColorsUsingPhysicsSurfaceStruct",
		Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::PropPointers),
		sizeof(FVertexDetectApplyColorsUsingPhysicsSurfaceStruct),
		alignof(FVertexDetectApplyColorsUsingPhysicsSurfaceStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectApplyColorsUsingPhysicsSurfaceStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectApplyColorsUsingPhysicsSurfaceStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectApplyColorsUsingPhysicsSurfaceStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectApplyColorsUsingVertexChannelStruct;
class UScriptStruct* FVertexDetectApplyColorsUsingVertexChannelStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectApplyColorsUsingVertexChannelStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectApplyColorsUsingVertexChannelStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectApplyColorsUsingVertexChannelStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectApplyColorsUsingVertexChannelStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectApplyColorsUsingVertexChannelStruct>()
{
	return FVertexDetectApplyColorsUsingVertexChannelStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amountToApply_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amountToApply;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lerpVertexColorToTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_lerpVertexColorToTarget;
		static const UECodeGen_Private::FBytePropertyParams NewProp_applyWithSetting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_applyWithSetting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_applyWithSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintConditions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintConditions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//  Apply Vertex Colors Using Vertex Channel Struct\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Apply Vertex Colors Using Vertex Channel Struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectApplyColorsUsingVertexChannelStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewProp_amountToApply_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Color to Apply on Channel. Should be between -1.0 and 1.0 if Adding, or between 0-1 if Setting. With Set, you actually Set the vertex color to be that." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewProp_amountToApply = { "amountToApply", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectApplyColorsUsingVertexChannelStruct, amountToApply), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewProp_amountToApply_MetaData), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewProp_amountToApply_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewProp_lerpVertexColorToTarget_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "If True then will Lerp the vertex color to the target value with the given lerp strength. For instance if the current vertex color value for a channel is 1, but you lerp toward 0.5 with lerp strength 0.1, then after 1 paint job the vertex channel should be 0.9." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewProp_lerpVertexColorToTarget = { "lerpVertexColorToTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectApplyColorsUsingVertexChannelStruct, lerpVertexColorToTarget), Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewProp_lerpVertexColorToTarget_MetaData), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewProp_lerpVertexColorToTarget_MetaData) }; // 377017247
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewProp_applyWithSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewProp_applyWithSetting_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Add will Add onto the existing colors, meaning if you set higher than 0 in strength, it will increase the vertex colors up to maximum 1, if less than 0, it decrease down to 0. If Set to Set Vertex Color, it will set the colors to the strength, if 0 it will set the vertex colors to the lowest 0 for instance." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewProp_applyWithSetting = { "applyWithSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectApplyColorsUsingVertexChannelStruct, applyWithSetting), Z_Construct_UEnum_VertexPaintDetectionPlugin_EApplyVertexColorSetting, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewProp_applyWithSetting_MetaData), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewProp_applyWithSetting_MetaData) }; // 3977495490
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewProp_paintConditions_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Apply Color on Channel if Specified Paint Conditions are met." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewProp_paintConditions = { "paintConditions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectApplyColorsUsingVertexChannelStruct, paintConditions), Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewProp_paintConditions_MetaData), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewProp_paintConditions_MetaData) }; // 1244830346
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewProp_amountToApply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewProp_lerpVertexColorToTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewProp_applyWithSetting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewProp_applyWithSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewProp_paintConditions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectApplyColorsUsingVertexChannelStruct",
		Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::PropPointers),
		sizeof(FVertexDetectApplyColorsUsingVertexChannelStruct),
		alignof(FVertexDetectApplyColorsUsingVertexChannelStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectApplyColorsUsingVertexChannelStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectApplyColorsUsingVertexChannelStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectApplyColorsUsingVertexChannelStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectRGBAStruct;
class UScriptStruct* FVertexDetectRGBAStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectRGBAStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectRGBAStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectRGBAStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectRGBAStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectRGBAStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectRGBAStruct>()
{
	return FVertexDetectRGBAStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_applyColorsUsingPhysicsSurface_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_applyColorsUsingPhysicsSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_applyColorsOnRedChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_applyColorsOnRedChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_applyColorsOnGreenChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_applyColorsOnGreenChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_applyColorsOnBlueChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_applyColorsOnBlueChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_applyColorsOnAlphaChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_applyColorsOnAlphaChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexColorChannelsPaintLimit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexColorChannelsPaintLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//  Apply Vertex Colors Struct\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Apply Vertex Colors Struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectRGBAStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsUsingPhysicsSurface_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "This is useful so you don't have to hardcode what to paint on which Vertex Color Channel, but just want to paint a physics surface, if it exists. It's also useful if your Materials Vertex Color Channels isn't synched up, where for instance a Puddle could be on different Channels on different materials. It's also useful if you don't want to apply any colors at all if a surface isn't registered to the Material. It requires that the Material and what Physics Surface is on each channel is registered in the Editor Widget. Make sure to setup the Parent and Child Surfaces as well, for example if you have Mud as a Parent, and Cobble-Mud as a Child, and a character that has Mud on their Red Vertex Channel, if they're walking over a floor with Cobble-Mud, it can Apply Colors on the Channel with Mud, i.e. the Red Channel." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsUsingPhysicsSurface = { "applyColorsUsingPhysicsSurface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectRGBAStruct, applyColorsUsingPhysicsSurface), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsUsingPhysicsSurface_MetaData), Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsUsingPhysicsSurface_MetaData) }; // 2185821337
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsOnRedChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Colors to Apply on Channel Settings, such as Amount to Apply, if should Add or Set, and if any conditions has to be met." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsOnRedChannel = { "applyColorsOnRedChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectRGBAStruct, applyColorsOnRedChannel), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsOnRedChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsOnRedChannel_MetaData) }; // 4076958282
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsOnGreenChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Colors to Apply on Channel Settings, such as Amount to Apply, if should Add or Set, and if any conditions has to be met." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsOnGreenChannel = { "applyColorsOnGreenChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectRGBAStruct, applyColorsOnGreenChannel), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsOnGreenChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsOnGreenChannel_MetaData) }; // 4076958282
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsOnBlueChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Colors to Apply on Channel Settings, such as Amount to Apply, if should Add or Set, and if any conditions has to be met." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsOnBlueChannel = { "applyColorsOnBlueChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectRGBAStruct, applyColorsOnBlueChannel), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsOnBlueChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsOnBlueChannel_MetaData) }; // 4076958282
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsOnAlphaChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Colors to Apply on Channel Settings, such as Amount to Apply, if should Add or Set, and if any conditions has to be met." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsOnAlphaChannel = { "applyColorsOnAlphaChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectRGBAStruct, applyColorsOnAlphaChannel), Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsOnAlphaChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsOnAlphaChannel_MetaData) }; // 4076958282
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_vertexColorChannelsPaintLimit_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "When not painting with physics surface but is using the RGBA values here, this is the Paint Limit up to a certain amount, useful for stuff like light Rain that shouldn't make characters completely Drenched but just a bit wet." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_vertexColorChannelsPaintLimit = { "vertexColorChannelsPaintLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectRGBAStruct, vertexColorChannelsPaintLimit), Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_vertexColorChannelsPaintLimit_MetaData), Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_vertexColorChannelsPaintLimit_MetaData) }; // 2970671258
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsUsingPhysicsSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsOnRedChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsOnGreenChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsOnBlueChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_applyColorsOnAlphaChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewProp_vertexColorChannelsPaintLimit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectRGBAStruct",
		Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::PropPointers),
		sizeof(FVertexDetectRGBAStruct),
		alignof(FVertexDetectRGBAStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectRGBAStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectRGBAStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectRGBAStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectRGBAStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintOverridePaintUpToLOD;
class UScriptStruct* FVertexPaintOverridePaintUpToLOD::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintOverridePaintUpToLOD.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintOverridePaintUpToLOD.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintOverridePaintUpToLOD"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintOverridePaintUpToLOD.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintOverridePaintUpToLOD>()
{
	return FVertexPaintOverridePaintUpToLOD::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overrideLODToPaintUpTo_MetaData[];
#endif
		static void NewProp_overrideLODToPaintUpTo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_overrideLODToPaintUpTo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amountOfLODsToPaint_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_amountOfLODsToPaint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Override Paint Up To LOD\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Override Paint Up To LOD" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintOverridePaintUpToLOD>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::NewProp_overrideLODToPaintUpTo_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "If we override the amount of LODs to Paint so only Paint up to a Certain Amount. Can save performance by alot. You can also set in the Editor Widget the Standard Amount of LODs to Paint on Skeletal and Static Meshes." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::NewProp_overrideLODToPaintUpTo_SetBit(void* Obj)
	{
		((FVertexPaintOverridePaintUpToLOD*)Obj)->overrideLODToPaintUpTo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::NewProp_overrideLODToPaintUpTo = { "overrideLODToPaintUpTo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPaintOverridePaintUpToLOD), &Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::NewProp_overrideLODToPaintUpTo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::NewProp_overrideLODToPaintUpTo_MetaData), Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::NewProp_overrideLODToPaintUpTo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::NewProp_amountOfLODsToPaint_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::NewProp_amountOfLODsToPaint = { "amountOfLODsToPaint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintOverridePaintUpToLOD, amountOfLODsToPaint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::NewProp_amountOfLODsToPaint_MetaData), Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::NewProp_amountOfLODsToPaint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::NewProp_overrideLODToPaintUpTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::NewProp_amountOfLODsToPaint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexPaintOverridePaintUpToLOD",
		Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::PropPointers),
		sizeof(FVertexPaintOverridePaintUpToLOD),
		alignof(FVertexPaintOverridePaintUpToLOD),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintOverridePaintUpToLOD.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintOverridePaintUpToLOD.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintOverridePaintUpToLOD.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintOverrideColorsToApply;
class UScriptStruct* FVertexPaintOverrideColorsToApply::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintOverrideColorsToApply.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintOverrideColorsToApply.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintOverrideColorsToApply"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintOverrideColorsToApply.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintOverrideColorsToApply>()
{
	return FVertexPaintOverrideColorsToApply::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overrideVertexColorsToApply_MetaData[];
#endif
		static void NewProp_overrideVertexColorsToApply_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_overrideVertexColorsToApply;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_objectToRunOverrideVertexColorsInterface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_objectToRunOverrideVertexColorsInterface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onlyRunOverrideInterfaceIfTryingToApplyColorToVertex_MetaData[];
#endif
		static void NewProp_onlyRunOverrideInterfaceIfTryingToApplyColorToVertex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_onlyRunOverrideInterfaceIfTryingToApplyColorToVertex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_includeMostDominantPhysicsSurface_MetaData[];
#endif
		static void NewProp_includeMostDominantPhysicsSurface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_includeMostDominantPhysicsSurface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Override Colors To Apply\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Override Colors To Apply" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintOverrideColorsToApply>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_overrideVertexColorsToApply_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "If we want to run an Override Vertex Colors To Apply Interface call on an actor for every single vertex, with information such as the current vertex color, position, normal etc., then the user can themselves decide what amount they want to return. This means that the user can create their own paint conditions for their specific needs. \nThe Actor has to implement the VertexPaintDetectionInterface interface. \nNOTE That if the task is started using multithreading, then the interface will execute on another thread, so recommend avoiding things like debug symbols." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_overrideVertexColorsToApply_SetBit(void* Obj)
	{
		((FVertexPaintOverrideColorsToApply*)Obj)->overrideVertexColorsToApply = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_overrideVertexColorsToApply = { "overrideVertexColorsToApply", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPaintOverrideColorsToApply), &Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_overrideVertexColorsToApply_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_overrideVertexColorsToApply_MetaData), Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_overrideVertexColorsToApply_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_objectToRunOverrideVertexColorsInterface_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "The Object to run the Interface on. The Object has to implement the VertexPaintDetectionInterface interface. \nNOTE That if the task is started using multithreading, then the interface will execute on another thread, so recommend avoiding things like debug symbols as they will cause crashes." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_objectToRunOverrideVertexColorsInterface = { "objectToRunOverrideVertexColorsInterface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintOverrideColorsToApply, objectToRunOverrideVertexColorsInterface), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_objectToRunOverrideVertexColorsInterface_MetaData), Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_objectToRunOverrideVertexColorsInterface_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_onlyRunOverrideInterfaceIfTryingToApplyColorToVertex_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "If True this can greatly optimize this feature since you're not running the interface for every single vertex but just those that we're trying to change, for instance those within the Area of Effect if running a Paint at Location." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_onlyRunOverrideInterfaceIfTryingToApplyColorToVertex_SetBit(void* Obj)
	{
		((FVertexPaintOverrideColorsToApply*)Obj)->onlyRunOverrideInterfaceIfTryingToApplyColorToVertex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_onlyRunOverrideInterfaceIfTryingToApplyColorToVertex = { "onlyRunOverrideInterfaceIfTryingToApplyColorToVertex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPaintOverrideColorsToApply), &Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_onlyRunOverrideInterfaceIfTryingToApplyColorToVertex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_onlyRunOverrideInterfaceIfTryingToApplyColorToVertex_MetaData), Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_onlyRunOverrideInterfaceIfTryingToApplyColorToVertex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_includeMostDominantPhysicsSurface_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "If we should Include the Most Dominant Physics Surface and Value for each Vertex when we run the Interface. NOTE That this makes the Task roughly 5x slower! A Task with 23k vert character took 0.03 sec to finish with this set to False, and 0.15 sec to finish if True. But it may be useful if you want to get what physics surface is on the vertex and how much of it, and the speed of the task doesn't matter. \nFor instance if you want to know if Water in case you have some electrical gameplay thing going on." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_includeMostDominantPhysicsSurface_SetBit(void* Obj)
	{
		((FVertexPaintOverrideColorsToApply*)Obj)->includeMostDominantPhysicsSurface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_includeMostDominantPhysicsSurface = { "includeMostDominantPhysicsSurface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPaintOverrideColorsToApply), &Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_includeMostDominantPhysicsSurface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_includeMostDominantPhysicsSurface_MetaData), Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_includeMostDominantPhysicsSurface_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_overrideVertexColorsToApply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_objectToRunOverrideVertexColorsInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_onlyRunOverrideInterfaceIfTryingToApplyColorToVertex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewProp_includeMostDominantPhysicsSurface,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexPaintOverrideColorsToApply",
		Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::PropPointers),
		sizeof(FVertexPaintOverrideColorsToApply),
		alignof(FVertexPaintOverrideColorsToApply),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintOverrideColorsToApply.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintOverrideColorsToApply.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintOverrideColorsToApply.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVertexPaintStruct>() == std::is_polymorphic<FVertexDetectFundementalStruct>(), "USTRUCT FVertexPaintStruct cannot be polymorphic unless super FVertexDetectFundementalStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintStruct;
class UScriptStruct* FVertexPaintStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintStruct>()
{
	return FVertexPaintStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_applyPaintJobToVertexColors_MetaData[];
#endif
		static void NewProp_applyPaintJobToVertexColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_applyPaintJobToVertexColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overrideLOD_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_overrideLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_affectClothPhysics_MetaData[];
#endif
		static void NewProp_affectClothPhysics_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_affectClothPhysics;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_canOnlyApplyPaintOnTheseActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_canOnlyApplyPaintOnTheseActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_canOnlyApplyPaintOnTheseActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overrideVertexColorsToApplySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_overrideVertexColorsToApplySettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Vertex Paint\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Vertex Paint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_applyPaintJobToVertexColors_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Whether we should Apply the change in Vertex Colors from the Paint Job to the Mesh. You can set this to false if you want to go through the entire paint job and get information such as Amount of Painted Colors of Each Channel, Compare Mesh Colors % or Task Duration etc. to know what they would've been IF the paint job had applied the colors. \nShould be a rare use case but the Example Project BP_RainExample for instance uses it so it can get the Task Durations when Drying and Applying Rain without having to actually apply the colors." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_applyPaintJobToVertexColors_SetBit(void* Obj)
	{
		((FVertexPaintStruct*)Obj)->applyPaintJobToVertexColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_applyPaintJobToVertexColors = { "applyPaintJobToVertexColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPaintStruct), &Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_applyPaintJobToVertexColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_applyPaintJobToVertexColors_MetaData), Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_applyPaintJobToVertexColors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_overrideLOD_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "If we override the amount of LODs to Paint so only Paint up to a Certain Amount. Can save performance by alot. You can also set in the Editor Widget the Standard Amount of LODs to Paint on Skeletal and Static Meshes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_overrideLOD = { "overrideLOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintStruct, overrideLOD), Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_overrideLOD_MetaData), Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_overrideLOD_MetaData) }; // 3192234944
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_affectClothPhysics_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Whether Cloth Physics should get affected at all." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_affectClothPhysics_SetBit(void* Obj)
	{
		((FVertexPaintStruct*)Obj)->affectClothPhysics = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_affectClothPhysics = { "affectClothPhysics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPaintStruct), &Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_affectClothPhysics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_affectClothPhysics_MetaData), Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_affectClothPhysics_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_canOnlyApplyPaintOnTheseActors_Inner = { "canOnlyApplyPaintOnTheseActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_canOnlyApplyPaintOnTheseActors_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Painting" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "If you only want to be able to paint on just certain actors then add them here. \nUseful if you for instance have a faucet that drips and paints out puddles of water etc. with sphere traces but doesn't want the player to get painted as well if they walk into the sphere but only the floor." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_canOnlyApplyPaintOnTheseActors = { "canOnlyApplyPaintOnTheseActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintStruct, canOnlyApplyPaintOnTheseActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_canOnlyApplyPaintOnTheseActors_MetaData), Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_canOnlyApplyPaintOnTheseActors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_overrideVertexColorsToApplySettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Painting" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "If we want to run an Override Vertex Colors To Apply Interface call on an actor for every single vertex, with information such as the current vertex color, position, normal etc., then the user can themselves decide what amount they want to return. This means that the user can create their own paint conditions for their specific needs. \nThe Actor has to implement the VertexPaintDetectionInterface interface. \nNOTE That if the task is started using multithreading, then the interface will execute on another thread, so recommend avoiding things like debug symbols." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_overrideVertexColorsToApplySettings = { "overrideVertexColorsToApplySettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintStruct, overrideVertexColorsToApplySettings), Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_overrideVertexColorsToApplySettings_MetaData), Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_overrideVertexColorsToApplySettings_MetaData) }; // 2397107485
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_applyPaintJobToVertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_overrideLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_affectClothPhysics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_canOnlyApplyPaintOnTheseActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_canOnlyApplyPaintOnTheseActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewProp_overrideVertexColorsToApplySettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexDetectFundementalStruct,
		&NewStructOps,
		"VertexPaintStruct",
		Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::PropPointers),
		sizeof(FVertexPaintStruct),
		alignof(FVertexPaintStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVertexPaintColorSettingStruct>() == std::is_polymorphic<FVertexPaintStruct>(), "USTRUCT FVertexPaintColorSettingStruct cannot be polymorphic unless super FVertexPaintStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintColorSettingStruct;
class UScriptStruct* FVertexPaintColorSettingStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintColorSettingStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintColorSettingStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintColorSettingStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintColorSettingStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintColorSettingStruct>()
{
	return FVertexPaintColorSettingStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_applyVertexColorSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_applyVertexColorSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Vertex Paint Color Setting\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Vertex Paint Color Setting" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintColorSettingStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct_Statics::NewProp_applyVertexColorSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "If we should Add or Set Vertex Colrs to be what we set here. The Strength to Apply to Colors should be between -1.0 to 1.0. If you Set vertex colors then 0 to 1 is what matters." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct_Statics::NewProp_applyVertexColorSettings = { "applyVertexColorSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintColorSettingStruct, applyVertexColorSettings), Z_Construct_UScriptStruct_FVertexDetectRGBAStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct_Statics::NewProp_applyVertexColorSettings_MetaData), Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct_Statics::NewProp_applyVertexColorSettings_MetaData) }; // 4294343582
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct_Statics::NewProp_applyVertexColorSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexPaintStruct,
		&NewStructOps,
		"VertexPaintColorSettingStruct",
		Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct_Statics::PropPointers),
		sizeof(FVertexPaintColorSettingStruct),
		alignof(FVertexPaintColorSettingStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintColorSettingStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintColorSettingStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintColorSettingStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVertexPaintPaintColorsDirectlyStruct>() == std::is_polymorphic<FVertexPaintStruct>(), "USTRUCT FVertexPaintPaintColorsDirectlyStruct cannot be polymorphic unless super FVertexPaintStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintPaintColorsDirectlyStruct;
class UScriptStruct* FVertexPaintPaintColorsDirectlyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintPaintColorsDirectlyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintPaintColorsDirectlyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintPaintColorsDirectlyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintPaintColorsDirectlyStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintPaintColorsDirectlyStruct>()
{
	return FVertexPaintPaintColorsDirectlyStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexColorChannelsLimitWhenDirectlySettingColors_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexColorChannelsLimitWhenDirectlySettingColors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Paint Colors Directly Struct\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Paint Colors Directly Struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintPaintColorsDirectlyStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct_Statics::NewProp_vertexColorChannelsLimitWhenDirectlySettingColors_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintFundementalsPrerequisites.h" },
		{ "ToolTip", "Limit up to a certain amount, useful if for example Paints a Color Snippet or SetMeshComponentColors that is a pattern, but you don't want it to be fully colored but just a bit, to hint to the players that they should do something with the pattern." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct_Statics::NewProp_vertexColorChannelsLimitWhenDirectlySettingColors = { "vertexColorChannelsLimitWhenDirectlySettingColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintPaintColorsDirectlyStruct, vertexColorChannelsLimitWhenDirectlySettingColors), Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct_Statics::NewProp_vertexColorChannelsLimitWhenDirectlySettingColors_MetaData), Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct_Statics::NewProp_vertexColorChannelsLimitWhenDirectlySettingColors_MetaData) }; // 2970671258
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct_Statics::NewProp_vertexColorChannelsLimitWhenDirectlySettingColors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexPaintStruct,
		&NewStructOps,
		"VertexPaintPaintColorsDirectlyStruct",
		Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct_Statics::PropPointers),
		sizeof(FVertexPaintPaintColorsDirectlyStruct),
		alignof(FVertexPaintPaintColorsDirectlyStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintPaintColorsDirectlyStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintPaintColorsDirectlyStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintPaintColorsDirectlyStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintFundementalsPrerequisites_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintFundementalsPrerequisites_h_Statics::EnumInfo[] = {
		{ EApplyVertexColorSetting_StaticEnum, TEXT("EApplyVertexColorSetting"), &Z_Registration_Info_UEnum_EApplyVertexColorSetting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3977495490U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintFundementalsPrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FVertexDetectLerpVertexColorToTargetStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics::NewStructOps, TEXT("VertexDetectLerpVertexColorToTargetStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectLerpVertexColorToTargetStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectLerpVertexColorToTargetStruct), 377017247U) },
		{ FVertexDetectApplyColorsUsingPhysicsSurfaceStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics::NewStructOps, TEXT("VertexDetectApplyColorsUsingPhysicsSurfaceStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectApplyColorsUsingPhysicsSurfaceStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectApplyColorsUsingPhysicsSurfaceStruct), 2185821337U) },
		{ FVertexDetectApplyColorsUsingVertexChannelStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics::NewStructOps, TEXT("VertexDetectApplyColorsUsingVertexChannelStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectApplyColorsUsingVertexChannelStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectApplyColorsUsingVertexChannelStruct), 4076958282U) },
		{ FVertexDetectRGBAStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics::NewStructOps, TEXT("VertexDetectRGBAStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectRGBAStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectRGBAStruct), 4294343582U) },
		{ FVertexPaintOverridePaintUpToLOD::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics::NewStructOps, TEXT("VertexPaintOverridePaintUpToLOD"), &Z_Registration_Info_UScriptStruct_VertexPaintOverridePaintUpToLOD, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintOverridePaintUpToLOD), 3192234944U) },
		{ FVertexPaintOverrideColorsToApply::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics::NewStructOps, TEXT("VertexPaintOverrideColorsToApply"), &Z_Registration_Info_UScriptStruct_VertexPaintOverrideColorsToApply, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintOverrideColorsToApply), 2397107485U) },
		{ FVertexPaintStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintStruct_Statics::NewStructOps, TEXT("VertexPaintStruct"), &Z_Registration_Info_UScriptStruct_VertexPaintStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintStruct), 2478779419U) },
		{ FVertexPaintColorSettingStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct_Statics::NewStructOps, TEXT("VertexPaintColorSettingStruct"), &Z_Registration_Info_UScriptStruct_VertexPaintColorSettingStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintColorSettingStruct), 1649666150U) },
		{ FVertexPaintPaintColorsDirectlyStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct_Statics::NewStructOps, TEXT("VertexPaintPaintColorsDirectlyStruct"), &Z_Registration_Info_UScriptStruct_VertexPaintPaintColorsDirectlyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintPaintColorsDirectlyStruct), 3770131074U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintFundementalsPrerequisites_h_2601904663(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintFundementalsPrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintFundementalsPrerequisites_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintFundementalsPrerequisites_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintFundementalsPrerequisites_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
