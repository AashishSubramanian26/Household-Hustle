// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/FallOffPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFallOffPrerequisites() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintStartFallOffDistanceFrom();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectFallOffSettings();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVertexPaintStartFallOffDistanceFrom;
	static UEnum* EVertexPaintStartFallOffDistanceFrom_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVertexPaintStartFallOffDistanceFrom.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVertexPaintStartFallOffDistanceFrom.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintStartFallOffDistanceFrom, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("EVertexPaintStartFallOffDistanceFrom"));
		}
		return Z_Registration_Info_UEnum_EVertexPaintStartFallOffDistanceFrom.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UEnum* StaticEnum<EVertexPaintStartFallOffDistanceFrom>()
	{
		return EVertexPaintStartFallOffDistanceFrom_StaticEnum();
	}
	struct Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintStartFallOffDistanceFrom_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintStartFallOffDistanceFrom_Statics::Enumerators[] = {
		{ "EVertexPaintStartFallOffDistanceFrom::BaseOfPaintShape", (int64)EVertexPaintStartFallOffDistanceFrom::BaseOfPaintShape },
		{ "EVertexPaintStartFallOffDistanceFrom::EndOfPaintShape", (int64)EVertexPaintStartFallOffDistanceFrom::EndOfPaintShape },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintStartFallOffDistanceFrom_Statics::Enum_MetaDataParams[] = {
		{ "BaseOfPaintShape.DisplayName", "Base Of Paint Shape" },
		{ "BaseOfPaintShape.Name", "EVertexPaintStartFallOffDistanceFrom::BaseOfPaintShape" },
		{ "BaseOfPaintShape.Tooltip", "This will base the Distance to Start FallOff From from the very Base off the Shape, for instance if Paint Within Area on a Cube/Rectangle Shpae then this will be from the bottom of the area. If paint at location then from the Center. " },
		{ "BlueprintType", "true" },
		{ "Comment", "// Distance To Start Fall Off Types\n" },
		{ "EndOfPaintShape.DisplayName", "End Of Paint Shape" },
		{ "EndOfPaintShape.Name", "EVertexPaintStartFallOffDistanceFrom::EndOfPaintShape" },
		{ "EndOfPaintShape.Tooltip", "This will base the Distance to Start FallOff From from the very End off the Shape, for instance if Paint Within Area on a Cube/Rectangle then this will be from the Top. If paint at location then from the Edge of the Area of Effect. Useful for paint within area things like Lakes in combination with extra extent, where it will start the falloff at the top edge of the lake and go up toward the extra extent. " },
		{ "ModuleRelativePath", "Prerequisites/FallOffPrerequisites.h" },
		{ "ToolTip", "Distance To Start Fall Off Types" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintStartFallOffDistanceFrom_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		"EVertexPaintStartFallOffDistanceFrom",
		"EVertexPaintStartFallOffDistanceFrom",
		Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintStartFallOffDistanceFrom_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintStartFallOffDistanceFrom_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintStartFallOffDistanceFrom_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintStartFallOffDistanceFrom_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintStartFallOffDistanceFrom()
	{
		if (!Z_Registration_Info_UEnum_EVertexPaintStartFallOffDistanceFrom.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVertexPaintStartFallOffDistanceFrom.InnerSingleton, Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintStartFallOffDistanceFrom_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVertexPaintStartFallOffDistanceFrom.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectFallOffSettings;
class UScriptStruct* FVertexDetectFallOffSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectFallOffSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectFallOffSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectFallOffSettings, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectFallOffSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectFallOffSettings.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectFallOffSettings>()
{
	return FVertexDetectFallOffSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fallOffStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fallOffStrength;
		static const UECodeGen_Private::FBytePropertyParams NewProp_startFallOffDistanceFrom_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startFallOffDistanceFrom_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_startFallOffDistanceFrom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_distanceToStartFallOffFrom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distanceToStartFallOffFrom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_limitFallOffColor_MetaData[];
#endif
		static void NewProp_limitFallOffColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_limitFallOffColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_colorLimitAtFallOffEdge_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_colorLimitAtFallOffEdge;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// FallOff Settings\n" },
		{ "ModuleRelativePath", "Prerequisites/FallOffPrerequisites.h" },
		{ "ToolTip", "FallOff Settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectFallOffSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_fallOffStrength_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FallOffPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_fallOffStrength = { "fallOffStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectFallOffSettings, fallOffStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_fallOffStrength_MetaData), Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_fallOffStrength_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_startFallOffDistanceFrom_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_startFallOffDistanceFrom_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FallOffPrerequisites.h" },
		{ "ToolTip", "How we should base the Distance to Start the Fall Off From. For instance if Paint Within Area with Box, if we should start from the Base, i.e. the Bottom, or the End, i.e. the Top, or Sphere Shape from the Centre with Base or the Outer Edge with End. \n\nVery useful in instances like a Lake, where no matter the size of it you always want to start the falloff from the top." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_startFallOffDistanceFrom = { "startFallOffDistanceFrom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectFallOffSettings, startFallOffDistanceFrom), Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintStartFallOffDistanceFrom, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_startFallOffDistanceFrom_MetaData), Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_startFallOffDistanceFrom_MetaData) }; // 3552292866
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_distanceToStartFallOffFrom_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FallOffPrerequisites.h" },
		{ "ToolTip", "The distance from either the Base or the End of the Area to Start Fading in the Falloff. For example if Paint Within Area with Box, and it's set to EndOfFFallOffType, then this will be the distance downward from the Top where the fading will start. If it's set to be the Base, then the Distance upwards from the bottom. If Paint at Location with Base then will base it of the centre, if End then from the outer Edge. \n\nDepending on the FallOff type it has different use cases, for instance for Lakes in combination with Extra Extent then the End will be useful as the falloff will start at the Top." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_distanceToStartFallOffFrom = { "distanceToStartFallOffFrom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectFallOffSettings, distanceToStartFallOffFrom), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_distanceToStartFallOffFrom_MetaData), Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_distanceToStartFallOffFrom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_limitFallOffColor_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FallOffPrerequisites.h" },
		{ "ToolTip", "Limits the Color Strength on the Channels we're trying to Apply, if not already over the limit, so we can always get a nice even falloff even though you keep painting. If Painting Using Physics Surface, then will limit the channels that has the physics surface, otherwise will limit the ones set below." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_limitFallOffColor_SetBit(void* Obj)
	{
		((FVertexDetectFallOffSettings*)Obj)->limitFallOffColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_limitFallOffColor = { "limitFallOffColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectFallOffSettings), &Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_limitFallOffColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_limitFallOffColor_MetaData), Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_limitFallOffColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_colorLimitAtFallOffEdge_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FallOffPrerequisites.h" },
		{ "ToolTip", "The Max Color between 0-1 at the very edge of the Falloff this paint job can reach. We start lerping toward this limit where the falloff starts, so you will always have a smooth falloff even though you continually run paint jobs with Add. Very useful for stuff like Lakes with some Extra Extent where if set to start the falloff at the End, so you always want a nice falloff at the top of the lake toward the extra extent and not a hard stop." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_colorLimitAtFallOffEdge = { "colorLimitAtFallOffEdge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectFallOffSettings, colorLimitAtFallOffEdge), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_colorLimitAtFallOffEdge_MetaData), Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_colorLimitAtFallOffEdge_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_fallOffStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_startFallOffDistanceFrom_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_startFallOffDistanceFrom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_distanceToStartFallOffFrom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_limitFallOffColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewProp_colorLimitAtFallOffEdge,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectFallOffSettings",
		Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::PropPointers),
		sizeof(FVertexDetectFallOffSettings),
		alignof(FVertexDetectFallOffSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectFallOffSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectFallOffSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectFallOffSettings.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectFallOffSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_FallOffPrerequisites_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_FallOffPrerequisites_h_Statics::EnumInfo[] = {
		{ EVertexPaintStartFallOffDistanceFrom_StaticEnum, TEXT("EVertexPaintStartFallOffDistanceFrom"), &Z_Registration_Info_UEnum_EVertexPaintStartFallOffDistanceFrom, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3552292866U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_FallOffPrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FVertexDetectFallOffSettings::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics::NewStructOps, TEXT("VertexDetectFallOffSettings"), &Z_Registration_Info_UScriptStruct_VertexDetectFallOffSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectFallOffSettings), 721392175U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_FallOffPrerequisites_h_2109827675(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_FallOffPrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_FallOffPrerequisites_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_FallOffPrerequisites_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_FallOffPrerequisites_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
