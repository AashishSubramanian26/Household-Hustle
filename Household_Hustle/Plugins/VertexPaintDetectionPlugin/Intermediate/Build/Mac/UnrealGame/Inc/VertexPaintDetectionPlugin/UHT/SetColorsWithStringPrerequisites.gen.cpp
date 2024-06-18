// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/SetColorsWithStringPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetColorsWithStringPrerequisites() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString();
// End Cross Module References

static_assert(std::is_polymorphic<FVertexPaintSetMeshComponentVertexColorsUsingSerializedString>() == std::is_polymorphic<FVertexPaintPaintColorsDirectlyStruct>(), "USTRUCT FVertexPaintSetMeshComponentVertexColorsUsingSerializedString cannot be polymorphic unless super FVertexPaintPaintColorsDirectlyStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintSetMeshComponentVertexColorsUsingSerializedString;
class UScriptStruct* FVertexPaintSetMeshComponentVertexColorsUsingSerializedString::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintSetMeshComponentVertexColorsUsingSerializedString.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintSetMeshComponentVertexColorsUsingSerializedString.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintSetMeshComponentVertexColorsUsingSerializedString"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintSetMeshComponentVertexColorsUsingSerializedString.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintSetMeshComponentVertexColorsUsingSerializedString>()
{
	return FVertexPaintSetMeshComponentVertexColorsUsingSerializedString::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_serializedColorDataAtLOD0_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_serializedColorDataAtLOD0;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Set Mesh Component Vertex Colors Using Serialized String\n" },
		{ "ModuleRelativePath", "Prerequisites/SetColorsWithStringPrerequisites.h" },
		{ "ToolTip", "Set Mesh Component Vertex Colors Using Serialized String" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintSetMeshComponentVertexColorsUsingSerializedString>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_serializedColorDataAtLOD0_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/SetColorsWithStringPrerequisites.h" },
		{ "ToolTip", "The Color Array Data that's been Serialized into a FString for LOD0. We will De-Serialize this on the Async Thread and if the number of elements matches what the meshComponent has, we will apply it." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_serializedColorDataAtLOD0 = { "serializedColorDataAtLOD0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintSetMeshComponentVertexColorsUsingSerializedString, serializedColorDataAtLOD0), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_serializedColorDataAtLOD0_MetaData), Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_serializedColorDataAtLOD0_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_serializedColorDataAtLOD0,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct,
		&NewStructOps,
		"VertexPaintSetMeshComponentVertexColorsUsingSerializedString",
		Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString_Statics::PropPointers),
		sizeof(FVertexPaintSetMeshComponentVertexColorsUsingSerializedString),
		alignof(FVertexPaintSetMeshComponentVertexColorsUsingSerializedString),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintSetMeshComponentVertexColorsUsingSerializedString.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintSetMeshComponentVertexColorsUsingSerializedString.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintSetMeshComponentVertexColorsUsingSerializedString.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_SetColorsWithStringPrerequisites_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_SetColorsWithStringPrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FVertexPaintSetMeshComponentVertexColorsUsingSerializedString::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString_Statics::NewStructOps, TEXT("VertexPaintSetMeshComponentVertexColorsUsingSerializedString"), &Z_Registration_Info_UScriptStruct_VertexPaintSetMeshComponentVertexColorsUsingSerializedString, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintSetMeshComponentVertexColorsUsingSerializedString), 3911707442U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_SetColorsWithStringPrerequisites_h_3267121810(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_SetColorsWithStringPrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_SetColorsWithStringPrerequisites_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
