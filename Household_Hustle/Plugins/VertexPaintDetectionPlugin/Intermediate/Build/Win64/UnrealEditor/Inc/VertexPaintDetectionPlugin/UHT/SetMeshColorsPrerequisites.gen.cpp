// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/SetMeshColorsPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetMeshColorsPrerequisites() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors();
// End Cross Module References

static_assert(std::is_polymorphic<FVertexPaintSetMeshComponentVertexColors>() == std::is_polymorphic<FVertexPaintPaintColorsDirectlyStruct>(), "USTRUCT FVertexPaintSetMeshComponentVertexColors cannot be polymorphic unless super FVertexPaintPaintColorsDirectlyStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintSetMeshComponentVertexColors;
class UScriptStruct* FVertexPaintSetMeshComponentVertexColors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintSetMeshComponentVertexColors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintSetMeshComponentVertexColors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintSetMeshComponentVertexColors"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintSetMeshComponentVertexColors.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintSetMeshComponentVertexColors>()
{
	return FVertexPaintSetMeshComponentVertexColors::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexColorsAtLOD0ToSet_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexColorsAtLOD0ToSet_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vertexColorsAtLOD0ToSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set Mesh Component Vertex Colors\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/SetMeshColorsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Mesh Component Vertex Colors" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintSetMeshComponentVertexColors>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors_Statics::NewProp_vertexColorsAtLOD0ToSet_Inner = { "vertexColorsAtLOD0ToSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors_Statics::NewProp_vertexColorsAtLOD0ToSet_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/SetMeshColorsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Vertex Colors to Set at LOD0." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors_Statics::NewProp_vertexColorsAtLOD0ToSet = { "vertexColorsAtLOD0ToSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintSetMeshComponentVertexColors, vertexColorsAtLOD0ToSet), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors_Statics::NewProp_vertexColorsAtLOD0ToSet_MetaData), Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors_Statics::NewProp_vertexColorsAtLOD0ToSet_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors_Statics::NewProp_vertexColorsAtLOD0ToSet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors_Statics::NewProp_vertexColorsAtLOD0ToSet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct,
		&NewStructOps,
		"VertexPaintSetMeshComponentVertexColors",
		Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors_Statics::PropPointers),
		sizeof(FVertexPaintSetMeshComponentVertexColors),
		alignof(FVertexPaintSetMeshComponentVertexColors),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintSetMeshComponentVertexColors.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintSetMeshComponentVertexColors.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintSetMeshComponentVertexColors.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_SetMeshColorsPrerequisites_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_SetMeshColorsPrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FVertexPaintSetMeshComponentVertexColors::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors_Statics::NewStructOps, TEXT("VertexPaintSetMeshComponentVertexColors"), &Z_Registration_Info_UScriptStruct_VertexPaintSetMeshComponentVertexColors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintSetMeshComponentVertexColors), 756357966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_SetMeshColorsPrerequisites_h_2551653872(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_SetMeshColorsPrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_SetMeshColorsPrerequisites_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
