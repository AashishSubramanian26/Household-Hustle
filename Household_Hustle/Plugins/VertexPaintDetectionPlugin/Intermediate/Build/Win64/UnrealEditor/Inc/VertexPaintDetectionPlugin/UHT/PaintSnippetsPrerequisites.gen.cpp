// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/PaintSnippetsPrerequisites.h"
#include "../Prerequisites/ColorSnippetPrerequisites.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaintSnippetsPrerequisites() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintPaintColorSnippetSetting();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintGroupSnippetStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct();
// End Cross Module References

static_assert(std::is_polymorphic<FVertexPaintColorSnippetStruct>() == std::is_polymorphic<FVertexPaintPaintColorsDirectlyStruct>(), "USTRUCT FVertexPaintColorSnippetStruct cannot be polymorphic unless super FVertexPaintPaintColorsDirectlyStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintColorSnippetStruct;
class UScriptStruct* FVertexPaintColorSnippetStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintColorSnippetStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintColorSnippetStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintColorSnippetStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintColorSnippetStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintColorSnippetStruct>()
{
	return FVertexPaintColorSnippetStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_colorSnippetTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_colorSnippetTag;
		static const UECodeGen_Private::FBytePropertyParams NewProp_paintColorSnippetSetting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintColorSnippetSetting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_paintColorSnippetSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_randomizeSnippetUnderChosenTagCategory_MetaData[];
#endif
		static void NewProp_randomizeSnippetUnderChosenTagCategory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_randomizeSnippetUnderChosenTagCategory;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_paintGroupSnippetMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintGroupSnippetMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_paintGroupSnippetMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_colorSnippetDataAssetInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_colorSnippetDataAssetInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Paint Color Snippet\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/PaintSnippetsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Paint Color Snippet" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintColorSnippetStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_colorSnippetTag_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintSnippetsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color Snippet Tag To Paint, should be left to Default if you want to Randomize. Color Snippets can be created in the Editor Widget is very useful for Storing a snippet of exactly how a Skeletal or Static Mesh should look for later use, For instance Variations of Weapon Skins, Zombies, Military or even your Main Character and how they should look in a certain Level or Cutscene." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_colorSnippetTag = { "colorSnippetTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintColorSnippetStruct, colorSnippetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_colorSnippetTag_MetaData), Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_colorSnippetTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_paintColorSnippetSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_paintColorSnippetSetting_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintSnippetsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Different types of Color Snippet Settings available." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_paintColorSnippetSetting = { "paintColorSnippetSetting", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintColorSnippetStruct, paintColorSnippetSetting), Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintPaintColorSnippetSetting, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_paintColorSnippetSetting_MetaData), Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_paintColorSnippetSetting_MetaData) }; // 2449233250
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_randomizeSnippetUnderChosenTagCategory_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintSnippetsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Randomize a Snippet from under the choosen Tag Category that is Registered to the Mesh, if there are any. For instance Zombies.Sewer to Randomize a Snippet under the Zombies Sewer Category. You can select the Top Level Category if you want to randomize between All of the Available Snippets the Mesh has." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_randomizeSnippetUnderChosenTagCategory_SetBit(void* Obj)
	{
		((FVertexPaintColorSnippetStruct*)Obj)->randomizeSnippetUnderChosenTagCategory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_randomizeSnippetUnderChosenTagCategory = { "randomizeSnippetUnderChosenTagCategory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPaintColorSnippetStruct), &Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_randomizeSnippetUnderChosenTagCategory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_randomizeSnippetUnderChosenTagCategory_MetaData), Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_randomizeSnippetUnderChosenTagCategory_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_paintGroupSnippetMeshes_Inner = { "paintGroupSnippetMeshes", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_paintGroupSnippetMeshes_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Prerequisites/PaintSnippetsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Meshes associated with the Group Snippet, for example if the Group Snippet is made up of several Skeletal Mesh Components if they've been split up where arms and body are different, but the snippet covers both, then both should be put here. For a group snippet to be painted correctly the relative location of the meshes to each has to be the same as when the snippet was created, otherwise it won't get painted." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_paintGroupSnippetMeshes = { "paintGroupSnippetMeshes", nullptr, (EPropertyFlags)0x001000800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintColorSnippetStruct, paintGroupSnippetMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_paintGroupSnippetMeshes_MetaData), Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_paintGroupSnippetMeshes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_colorSnippetDataAssetInfo_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintSnippetsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Color Snippet Tag but in FString Format and the Data Asset the snippet is stored on." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_colorSnippetDataAssetInfo = { "colorSnippetDataAssetInfo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintColorSnippetStruct, colorSnippetDataAssetInfo), Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_colorSnippetDataAssetInfo_MetaData), Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_colorSnippetDataAssetInfo_MetaData) }; // 590143139
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_colorSnippetTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_paintColorSnippetSetting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_paintColorSnippetSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_randomizeSnippetUnderChosenTagCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_paintGroupSnippetMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_paintGroupSnippetMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewProp_colorSnippetDataAssetInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct,
		&NewStructOps,
		"VertexPaintColorSnippetStruct",
		Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::PropPointers),
		sizeof(FVertexPaintColorSnippetStruct),
		alignof(FVertexPaintColorSnippetStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintColorSnippetStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintColorSnippetStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintColorSnippetStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVertexPaintGroupSnippetStruct>() == std::is_polymorphic<FVertexPaintColorSnippetStruct>(), "USTRUCT FVertexPaintGroupSnippetStruct cannot be polymorphic unless super FVertexPaintColorSnippetStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintGroupSnippetStruct;
class UScriptStruct* FVertexPaintGroupSnippetStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintGroupSnippetStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintGroupSnippetStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintGroupSnippetStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintGroupSnippetStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintGroupSnippetStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintGroupSnippetStruct>()
{
	return FVertexPaintGroupSnippetStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintGroupSnippetStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintGroupSnippetStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Paint Group Snippet\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/PaintSnippetsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Paint Group Snippet" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintGroupSnippetStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintGroupSnippetStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintGroupSnippetStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct,
		&NewStructOps,
		"VertexPaintGroupSnippetStruct",
		nullptr,
		0,
		sizeof(FVertexPaintGroupSnippetStruct),
		alignof(FVertexPaintGroupSnippetStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintGroupSnippetStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintGroupSnippetStruct_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintGroupSnippetStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintGroupSnippetStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintGroupSnippetStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintGroupSnippetStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintGroupSnippetStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintSnippetsPrerequisites_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintSnippetsPrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FVertexPaintColorSnippetStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct_Statics::NewStructOps, TEXT("VertexPaintColorSnippetStruct"), &Z_Registration_Info_UScriptStruct_VertexPaintColorSnippetStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintColorSnippetStruct), 1875440727U) },
		{ FVertexPaintGroupSnippetStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintGroupSnippetStruct_Statics::NewStructOps, TEXT("VertexPaintGroupSnippetStruct"), &Z_Registration_Info_UScriptStruct_VertexPaintGroupSnippetStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintGroupSnippetStruct), 4029233977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintSnippetsPrerequisites_h_3382671699(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintSnippetsPrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintSnippetsPrerequisites_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
