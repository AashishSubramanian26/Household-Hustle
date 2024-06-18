// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/GetColorsWithinAreaPrerequisites.h"
#include "../Prerequisites/WithinAreaPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetColorsWithinAreaPrerequisites() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings();
// End Cross Module References

static_assert(std::is_polymorphic<FVertexDetectGetColorsWithinAreaStruct>() == std::is_polymorphic<FVertexDetectStruct>(), "USTRUCT FVertexDetectGetColorsWithinAreaStruct cannot be polymorphic unless super FVertexDetectStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectGetColorsWithinAreaStruct;
class UScriptStruct* FVertexDetectGetColorsWithinAreaStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectGetColorsWithinAreaStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectGetColorsWithinAreaStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectGetColorsWithinAreaStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectGetColorsWithinAreaStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectGetColorsWithinAreaStruct>()
{
	return FVertexDetectGetColorsWithinAreaStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_withinAreaSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_withinAreaSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Get Colors Within Area\n" },
		{ "ModuleRelativePath", "Prerequisites/GetColorsWithinAreaPrerequisites.h" },
		{ "ToolTip", "Get Colors Within Area" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectGetColorsWithinAreaStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct_Statics::NewProp_withinAreaSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/GetColorsWithinAreaPrerequisites.h" },
		{ "ToolTip", "The Within Area Settings such as the Primitive Components to check if within, for example a Cube, Rectangle, Sphere or even a Skeletal Mesh if you opt for Complex Shape, and if we should return any vertex data of the vertices that's within the area, and the colors of each channel info like average color, % etc." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct_Statics::NewProp_withinAreaSettings = { "withinAreaSettings", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectGetColorsWithinAreaStruct, withinAreaSettings), Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct_Statics::NewProp_withinAreaSettings_MetaData), Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct_Statics::NewProp_withinAreaSettings_MetaData) }; // 317522931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct_Statics::NewProp_withinAreaSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexDetectStruct,
		&NewStructOps,
		"VertexDetectGetColorsWithinAreaStruct",
		Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct_Statics::PropPointers),
		sizeof(FVertexDetectGetColorsWithinAreaStruct),
		alignof(FVertexDetectGetColorsWithinAreaStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectGetColorsWithinAreaStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectGetColorsWithinAreaStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectGetColorsWithinAreaStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_GetColorsWithinAreaPrerequisites_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_GetColorsWithinAreaPrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FVertexDetectGetColorsWithinAreaStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct_Statics::NewStructOps, TEXT("VertexDetectGetColorsWithinAreaStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectGetColorsWithinAreaStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectGetColorsWithinAreaStruct), 2501455522U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_GetColorsWithinAreaPrerequisites_h_3341278309(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_GetColorsWithinAreaPrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_GetColorsWithinAreaPrerequisites_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
