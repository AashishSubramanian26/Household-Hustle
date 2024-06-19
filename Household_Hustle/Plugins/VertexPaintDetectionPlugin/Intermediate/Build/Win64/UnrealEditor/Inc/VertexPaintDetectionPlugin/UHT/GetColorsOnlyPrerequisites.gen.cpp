// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/GetColorsOnlyPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetColorsOnlyPrerequisites() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectGetColorsOnlyStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectStruct();
// End Cross Module References

static_assert(std::is_polymorphic<FVertexDetectGetColorsOnlyStruct>() == std::is_polymorphic<FVertexDetectStruct>(), "USTRUCT FVertexDetectGetColorsOnlyStruct cannot be polymorphic unless super FVertexDetectStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectGetColorsOnlyStruct;
class UScriptStruct* FVertexDetectGetColorsOnlyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectGetColorsOnlyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectGetColorsOnlyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectGetColorsOnlyStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectGetColorsOnlyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectGetColorsOnlyStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectGetColorsOnlyStruct>()
{
	return FVertexDetectGetColorsOnlyStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectGetColorsOnlyStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectGetColorsOnlyStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get Colors Only\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/GetColorsOnlyPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Colors Only" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectGetColorsOnlyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectGetColorsOnlyStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectGetColorsOnlyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexDetectStruct,
		&NewStructOps,
		"VertexDetectGetColorsOnlyStruct",
		nullptr,
		0,
		sizeof(FVertexDetectGetColorsOnlyStruct),
		alignof(FVertexDetectGetColorsOnlyStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectGetColorsOnlyStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectGetColorsOnlyStruct_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectGetColorsOnlyStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectGetColorsOnlyStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectGetColorsOnlyStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectGetColorsOnlyStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectGetColorsOnlyStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_GetColorsOnlyPrerequisites_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_GetColorsOnlyPrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FVertexDetectGetColorsOnlyStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectGetColorsOnlyStruct_Statics::NewStructOps, TEXT("VertexDetectGetColorsOnlyStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectGetColorsOnlyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectGetColorsOnlyStruct), 2494955416U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_GetColorsOnlyPrerequisites_h_23507383(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_GetColorsOnlyPrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_GetColorsOnlyPrerequisites_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
