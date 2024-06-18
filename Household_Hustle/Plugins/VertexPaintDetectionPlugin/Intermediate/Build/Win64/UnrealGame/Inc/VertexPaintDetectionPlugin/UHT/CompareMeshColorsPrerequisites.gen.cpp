// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/CompareMeshColorsPrerequisites.h"
#include "../Prerequisites/ColorSnippetPrerequisites.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompareMeshColorsPrerequisites() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectCompareMeshColorsToColorArrayStruct;
class UScriptStruct* FVertexDetectCompareMeshColorsToColorArrayStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectCompareMeshColorsToColorArrayStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectCompareMeshColorsToColorArrayStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectCompareMeshColorsToColorArrayStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectCompareMeshColorsToColorArrayStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectCompareMeshColorsToColorArrayStruct>()
{
	return FVertexDetectCompareMeshColorsToColorArrayStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_compareMeshColorsToColorArrayAtLOD0_MetaData[];
#endif
		static void NewProp_compareMeshColorsToColorArrayAtLOD0_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_compareMeshColorsToColorArrayAtLOD0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_colorArrayToCompareWith_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_colorArrayToCompareWith_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_colorArrayToCompareWith;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_compareMeshColorsToStoredColorSnippet_MetaData[];
#endif
		static void NewProp_compareMeshColorsToStoredColorSnippet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_compareMeshColorsToStoredColorSnippet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_compareWithColorsSnippetTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_compareWithColorsSnippetTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skipEmptyVertices_MetaData[];
#endif
		static void NewProp_skipEmptyVertices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_skipEmptyVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_comparisonErrorTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_comparisonErrorTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_compareWithColorsSnippetDataAssetInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_compareWithColorsSnippetDataAssetInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Compare Mesh Colors To Color Array\n" },
		{ "ModuleRelativePath", "Prerequisites/CompareMeshColorsPrerequisites.h" },
		{ "ToolTip", "Compare Mesh Colors To Color Array" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectCompareMeshColorsToColorArrayStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareMeshColorsToColorArrayAtLOD0_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/CompareMeshColorsPrerequisites.h" },
		{ "ToolTip", "If True and colorArrayToCompareWith is set, then in the Task Result Info struct we will fill a CompareMeshColorsToColorArrayResult where you can get the Matching Percent between the Meshes Current Vertex Colors (If paint job then colors after paint was applied) and the ones we send in here. \n\nThis is useful if you for instance have a Drawing Game, or a Tutorial where the player has to fill in a pattern that has been pre-filled, or just Mimick the pattern an AI is painting." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareMeshColorsToColorArrayAtLOD0_SetBit(void* Obj)
	{
		((FVertexDetectCompareMeshColorsToColorArrayStruct*)Obj)->compareMeshColorsToColorArrayAtLOD0 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareMeshColorsToColorArrayAtLOD0 = { "compareMeshColorsToColorArrayAtLOD0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectCompareMeshColorsToColorArrayStruct), &Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareMeshColorsToColorArrayAtLOD0_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareMeshColorsToColorArrayAtLOD0_MetaData), Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareMeshColorsToColorArrayAtLOD0_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_colorArrayToCompareWith_Inner = { "colorArrayToCompareWith", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_colorArrayToCompareWith_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/CompareMeshColorsPrerequisites.h" },
		{ "ToolTip", "Color Array we will compare it to. Have to match the Vertex Color Array Amount of the Mesh we're going to Paint/Detect. You can get both the vertex color array from any paint or detect job if you set to include them in the callback settings, so you can get them from a mesh and store it for later use." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_colorArrayToCompareWith = { "colorArrayToCompareWith", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectCompareMeshColorsToColorArrayStruct, colorArrayToCompareWith), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_colorArrayToCompareWith_MetaData), Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_colorArrayToCompareWith_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareMeshColorsToStoredColorSnippet_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/CompareMeshColorsPrerequisites.h" },
		{ "ToolTip", "Compare using a color snippet tag instead of an array. If both this and compareMeshColorsToColorArrayAtLOD0 is True, it will prioritize this Color Snippet Variant. Useful if you've for instance have a Color Snippet of a Tatoo or a Pattern, and you want to check how close to it the player has painted." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareMeshColorsToStoredColorSnippet_SetBit(void* Obj)
	{
		((FVertexDetectCompareMeshColorsToColorArrayStruct*)Obj)->compareMeshColorsToStoredColorSnippet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareMeshColorsToStoredColorSnippet = { "compareMeshColorsToStoredColorSnippet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectCompareMeshColorsToColorArrayStruct), &Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareMeshColorsToStoredColorSnippet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareMeshColorsToStoredColorSnippet_MetaData), Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareMeshColorsToStoredColorSnippet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareWithColorsSnippetTag_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/CompareMeshColorsPrerequisites.h" },
		{ "ToolTip", "Color Snippet we will compare to. Useful if you've for instance have a Color Snippet of a Tatoo or a Pattern, and you want to check how close to it the player has painted." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareWithColorsSnippetTag = { "compareWithColorsSnippetTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectCompareMeshColorsToColorArrayStruct, compareWithColorsSnippetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareWithColorsSnippetTag_MetaData), Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareWithColorsSnippetTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_skipEmptyVertices_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/CompareMeshColorsPrerequisites.h" },
		{ "ToolTip", "If True then will only Compare against those Vertices in the compare array that actually has any colors instead of All of them. For instance if you have a floor and comparing to an array where its a circle in the middle, then only painting/removing colors at the circle will actually make the % go up and down. Otherwise if this is false, then all vertices around the circle will affect the % as well." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_skipEmptyVertices_SetBit(void* Obj)
	{
		((FVertexDetectCompareMeshColorsToColorArrayStruct*)Obj)->skipEmptyVertices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_skipEmptyVertices = { "skipEmptyVertices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectCompareMeshColorsToColorArrayStruct), &Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_skipEmptyVertices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_skipEmptyVertices_MetaData), Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_skipEmptyVertices_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_comparisonErrorTolerance_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/CompareMeshColorsPrerequisites.h" },
		{ "ToolTip", "When we Compare we run a Float Nearly Equal Check for every Vertex Channel on the Compare Vertex Colors and Mesh Vertex Colors. This is the Error Tolerance of that check, meaning every Vertex Channel has to be within this range close to eachother on both the compare and mesh vertex colors." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_comparisonErrorTolerance = { "comparisonErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectCompareMeshColorsToColorArrayStruct, comparisonErrorTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_comparisonErrorTolerance_MetaData), Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_comparisonErrorTolerance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareWithColorsSnippetDataAssetInfo_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/CompareMeshColorsPrerequisites.h" },
		{ "ToolTip", "The Color Snippet Tag but in FString Format and the Data Asset the snippet is stored on." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareWithColorsSnippetDataAssetInfo = { "compareWithColorsSnippetDataAssetInfo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectCompareMeshColorsToColorArrayStruct, compareWithColorsSnippetDataAssetInfo), Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareWithColorsSnippetDataAssetInfo_MetaData), Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareWithColorsSnippetDataAssetInfo_MetaData) }; // 1971015773
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareMeshColorsToColorArrayAtLOD0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_colorArrayToCompareWith_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_colorArrayToCompareWith,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareMeshColorsToStoredColorSnippet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareWithColorsSnippetTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_skipEmptyVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_comparisonErrorTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewProp_compareWithColorsSnippetDataAssetInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectCompareMeshColorsToColorArrayStruct",
		Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::PropPointers),
		sizeof(FVertexDetectCompareMeshColorsToColorArrayStruct),
		alignof(FVertexDetectCompareMeshColorsToColorArrayStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectCompareMeshColorsToColorArrayStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectCompareMeshColorsToColorArrayStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectCompareMeshColorsToColorArrayStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CompareMeshColorsPrerequisites_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CompareMeshColorsPrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FVertexDetectCompareMeshColorsToColorArrayStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct_Statics::NewStructOps, TEXT("VertexDetectCompareMeshColorsToColorArrayStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectCompareMeshColorsToColorArrayStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectCompareMeshColorsToColorArrayStruct), 2401451574U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CompareMeshColorsPrerequisites_h_1499471010(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CompareMeshColorsPrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CompareMeshColorsPrerequisites_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
