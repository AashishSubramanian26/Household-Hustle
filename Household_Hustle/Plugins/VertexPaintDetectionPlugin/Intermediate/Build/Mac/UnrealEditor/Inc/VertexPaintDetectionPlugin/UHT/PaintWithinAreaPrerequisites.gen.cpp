// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/PaintWithinAreaPrerequisites.h"
#include "../Prerequisites/WithinAreaPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaintWithinAreaPrerequisites() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintWithinAreaFallOffType();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectFallOffSettings();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVertexPaintWithinAreaFallOffType;
	static UEnum* EVertexPaintWithinAreaFallOffType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVertexPaintWithinAreaFallOffType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVertexPaintWithinAreaFallOffType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintWithinAreaFallOffType, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("EVertexPaintWithinAreaFallOffType"));
		}
		return Z_Registration_Info_UEnum_EVertexPaintWithinAreaFallOffType.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UEnum* StaticEnum<EVertexPaintWithinAreaFallOffType>()
	{
		return EVertexPaintWithinAreaFallOffType_StaticEnum();
	}
	struct Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintWithinAreaFallOffType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintWithinAreaFallOffType_Statics::Enumerators[] = {
		{ "EVertexPaintWithinAreaFallOffType::SphericalFromCenter", (int64)EVertexPaintWithinAreaFallOffType::SphericalFromCenter },
		{ "EVertexPaintWithinAreaFallOffType::GradiantUpward", (int64)EVertexPaintWithinAreaFallOffType::GradiantUpward },
		{ "EVertexPaintWithinAreaFallOffType::GradiantDownward", (int64)EVertexPaintWithinAreaFallOffType::GradiantDownward },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintWithinAreaFallOffType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Paint Within Area Falloff Type\n" },
		{ "GradiantDownward.DisplayName", "Gradiant Downward" },
		{ "GradiantDownward.Name", "EVertexPaintWithinAreaFallOffType::GradiantDownward" },
		{ "GradiantDownward.Tooltip", "Falloff from top Downward in World Space. " },
		{ "GradiantUpward.DisplayName", "Gradiant Upward" },
		{ "GradiantUpward.Name", "EVertexPaintWithinAreaFallOffType::GradiantUpward" },
		{ "GradiantUpward.Tooltip", "Falloff from bottom Upward in World Space. " },
		{ "ModuleRelativePath", "Prerequisites/PaintWithinAreaPrerequisites.h" },
		{ "SphericalFromCenter.DisplayName", "Spherical From Center" },
		{ "SphericalFromCenter.Name", "EVertexPaintWithinAreaFallOffType::SphericalFromCenter" },
		{ "SphericalFromCenter.Tooltip", "Falloff from Center outward. " },
		{ "ToolTip", "Paint Within Area Falloff Type" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintWithinAreaFallOffType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		"EVertexPaintWithinAreaFallOffType",
		"EVertexPaintWithinAreaFallOffType",
		Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintWithinAreaFallOffType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintWithinAreaFallOffType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintWithinAreaFallOffType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintWithinAreaFallOffType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintWithinAreaFallOffType()
	{
		if (!Z_Registration_Info_UEnum_EVertexPaintWithinAreaFallOffType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVertexPaintWithinAreaFallOffType.InnerSingleton, Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintWithinAreaFallOffType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVertexPaintWithinAreaFallOffType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVertexDetectPaintWithinAreaFallOffSettings>() == std::is_polymorphic<FVertexDetectFallOffSettings>(), "USTRUCT FVertexDetectPaintWithinAreaFallOffSettings cannot be polymorphic unless super FVertexDetectFallOffSettings is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectPaintWithinAreaFallOffSettings;
class UScriptStruct* FVertexDetectPaintWithinAreaFallOffSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectPaintWithinAreaFallOffSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectPaintWithinAreaFallOffSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectPaintWithinAreaFallOffSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectPaintWithinAreaFallOffSettings.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectPaintWithinAreaFallOffSettings>()
{
	return FVertexDetectPaintWithinAreaFallOffSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_paintWithinAreaFallOffType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintWithinAreaFallOffType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_paintWithinAreaFallOffType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Paint Within Area FallOff Settings\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintWithinAreaPrerequisites.h" },
		{ "ToolTip", "Paint Within Area FallOff Settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectPaintWithinAreaFallOffSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings_Statics::NewProp_paintWithinAreaFallOffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings_Statics::NewProp_paintWithinAreaFallOffType_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintWithinAreaPrerequisites.h" },
		{ "ToolTip", "Whether we calculate the Falloff from the components center or from the components Z Height, so only the distance from the components Z will matter. This is great for large components like oceans if you want some falloff but the mesh being painted is very far from the components X and Y, but they won't matter since we only use the Z." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings_Statics::NewProp_paintWithinAreaFallOffType = { "paintWithinAreaFallOffType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintWithinAreaFallOffSettings, paintWithinAreaFallOffType), Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintWithinAreaFallOffType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings_Statics::NewProp_paintWithinAreaFallOffType_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings_Statics::NewProp_paintWithinAreaFallOffType_MetaData) }; // 2095504191
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings_Statics::NewProp_paintWithinAreaFallOffType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings_Statics::NewProp_paintWithinAreaFallOffType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexDetectFallOffSettings,
		&NewStructOps,
		"VertexDetectPaintWithinAreaFallOffSettings",
		Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings_Statics::PropPointers),
		sizeof(FVertexDetectPaintWithinAreaFallOffSettings),
		alignof(FVertexDetectPaintWithinAreaFallOffSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectPaintWithinAreaFallOffSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectPaintWithinAreaFallOffSettings.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectPaintWithinAreaFallOffSettings.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVertexPainthWithinAreaStruct>() == std::is_polymorphic<FVertexPaintColorSettingStruct>(), "USTRUCT FVertexPainthWithinAreaStruct cannot be polymorphic unless super FVertexPaintColorSettingStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPainthWithinAreaStruct;
class UScriptStruct* FVertexPainthWithinAreaStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPainthWithinAreaStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPainthWithinAreaStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPainthWithinAreaStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPainthWithinAreaStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPainthWithinAreaStruct>()
{
	return FVertexPainthWithinAreaStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_withinAreaSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_withinAreaSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_getColorsWithinAreaCombo_MetaData[];
#endif
		static void NewProp_getColorsWithinAreaCombo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_getColorsWithinAreaCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_extraExtentToApplyPaintOn_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_extraExtentToApplyPaintOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fallOffSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_fallOffSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Vertex Paint On Mesh if within Area\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintWithinAreaPrerequisites.h" },
		{ "ToolTip", "Vertex Paint On Mesh if within Area" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPainthWithinAreaStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewProp_withinAreaSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintWithinAreaPrerequisites.h" },
		{ "ToolTip", "The Within Area Settings such as the Primitive Components to check if within, for example a Cube, Rectangle, Sphere or even a Skeletal Mesh if you opt for Complex Shape, and if we should return any vertex data of the vertices that's within the area, and the colors of each channel info like average color, % etc." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewProp_withinAreaSettings = { "withinAreaSettings", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPainthWithinAreaStruct, withinAreaSettings), Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewProp_withinAreaSettings_MetaData), Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewProp_withinAreaSettings_MetaData) }; // 317522931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewProp_getColorsWithinAreaCombo_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintWithinAreaPrerequisites.h" },
		{ "ToolTip", "Runs Get Colors Within Area as well, which will get the colors, amount of colors of each channel and % etc. within the area Before applying the colors from this paint within area. Useful if you want to see how much of a difference the Paint Within Area did." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewProp_getColorsWithinAreaCombo_SetBit(void* Obj)
	{
		((FVertexPainthWithinAreaStruct*)Obj)->getColorsWithinAreaCombo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewProp_getColorsWithinAreaCombo = { "getColorsWithinAreaCombo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPainthWithinAreaStruct), &Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewProp_getColorsWithinAreaCombo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewProp_getColorsWithinAreaCombo_MetaData), Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewProp_getColorsWithinAreaCombo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewProp_extraExtentToApplyPaintOn_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintWithinAreaPrerequisites.h" },
		{ "ToolTip", "Extra Extent to apply Paint, useful if for instance a character is standing in a body of water, and you want them to get wet slightly above where the water is as well, as if their clothes is soaking up the water. \nNOTE Only supports Square/Rectangle and Sphere Shapes, not Complex." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewProp_extraExtentToApplyPaintOn = { "extraExtentToApplyPaintOn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPainthWithinAreaStruct, extraExtentToApplyPaintOn), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewProp_extraExtentToApplyPaintOn_MetaData), Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewProp_extraExtentToApplyPaintOn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewProp_fallOffSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintWithinAreaPrerequisites.h" },
		{ "ToolTip", "Paint Within Area supports Falloff as well, where you could have it so at the center of a Sphere/Cube you get more strength than at the edges. Can be useful if you have for instance a Torch that should Melt Snow with stronger effect at it's center, or some falloff on the topside of a lake so it looks like water is smoothly being soaked up to a characters clothes. \nNote that with Cube/Rectangle it will scale the falloff to the outmost corner of the rectangle if using Spherical From Center. If using Gradiant Upward/Downward then it will scale it just to the Z Extent of the Bounds (plus any Extra Extent of course)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewProp_fallOffSettings = { "fallOffSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPainthWithinAreaStruct, fallOffSettings), Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewProp_fallOffSettings_MetaData), Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewProp_fallOffSettings_MetaData) }; // 134267808
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewProp_withinAreaSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewProp_getColorsWithinAreaCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewProp_extraExtentToApplyPaintOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewProp_fallOffSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct,
		&NewStructOps,
		"VertexPainthWithinAreaStruct",
		Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::PropPointers),
		sizeof(FVertexPainthWithinAreaStruct),
		alignof(FVertexPainthWithinAreaStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPainthWithinAreaStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPainthWithinAreaStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPainthWithinAreaStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintWithinAreaPrerequisites_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintWithinAreaPrerequisites_h_Statics::EnumInfo[] = {
		{ EVertexPaintWithinAreaFallOffType_StaticEnum, TEXT("EVertexPaintWithinAreaFallOffType"), &Z_Registration_Info_UEnum_EVertexPaintWithinAreaFallOffType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2095504191U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintWithinAreaPrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FVertexDetectPaintWithinAreaFallOffSettings::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings_Statics::NewStructOps, TEXT("VertexDetectPaintWithinAreaFallOffSettings"), &Z_Registration_Info_UScriptStruct_VertexDetectPaintWithinAreaFallOffSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectPaintWithinAreaFallOffSettings), 134267808U) },
		{ FVertexPainthWithinAreaStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics::NewStructOps, TEXT("VertexPainthWithinAreaStruct"), &Z_Registration_Info_UScriptStruct_VertexPainthWithinAreaStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPainthWithinAreaStruct), 958617516U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintWithinAreaPrerequisites_h_2258860728(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintWithinAreaPrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintWithinAreaPrerequisites_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintWithinAreaPrerequisites_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintWithinAreaPrerequisites_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
