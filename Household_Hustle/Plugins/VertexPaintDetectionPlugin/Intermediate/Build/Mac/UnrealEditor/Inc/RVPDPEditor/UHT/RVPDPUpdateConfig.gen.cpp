// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RVPDPUpdateConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRVPDPUpdateConfig() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	RVPDPEDITOR_API UClass* Z_Construct_UClass_URVPDPUpdateConfig();
	RVPDPEDITOR_API UClass* Z_Construct_UClass_URVPDPUpdateConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RVPDPEditor();
// End Cross Module References
	void URVPDPUpdateConfig::StaticRegisterNativesURVPDPUpdateConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URVPDPUpdateConfig);
	UClass* Z_Construct_UClass_URVPDPUpdateConfig_NoRegister()
	{
		return URVPDPUpdateConfig::StaticClass();
	}
	struct Z_Construct_UClass_URVPDPUpdateConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginVersionUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PluginVersionUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URVPDPUpdateConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_RVPDPEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URVPDPUpdateConfig_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URVPDPUpdateConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RVPDPUpdateConfig.h" },
		{ "ModuleRelativePath", "RVPDPUpdateConfig.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URVPDPUpdateConfig_Statics::NewProp_PluginVersionUpdate_MetaData[] = {
		{ "ModuleRelativePath", "RVPDPUpdateConfig.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URVPDPUpdateConfig_Statics::NewProp_PluginVersionUpdate = { "PluginVersionUpdate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URVPDPUpdateConfig, PluginVersionUpdate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URVPDPUpdateConfig_Statics::NewProp_PluginVersionUpdate_MetaData), Z_Construct_UClass_URVPDPUpdateConfig_Statics::NewProp_PluginVersionUpdate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URVPDPUpdateConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URVPDPUpdateConfig_Statics::NewProp_PluginVersionUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URVPDPUpdateConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URVPDPUpdateConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URVPDPUpdateConfig_Statics::ClassParams = {
		&URVPDPUpdateConfig::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URVPDPUpdateConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URVPDPUpdateConfig_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URVPDPUpdateConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_URVPDPUpdateConfig_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URVPDPUpdateConfig_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URVPDPUpdateConfig()
	{
		if (!Z_Registration_Info_UClass_URVPDPUpdateConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URVPDPUpdateConfig.OuterSingleton, Z_Construct_UClass_URVPDPUpdateConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URVPDPUpdateConfig.OuterSingleton;
	}
	template<> RVPDPEDITOR_API UClass* StaticClass<URVPDPUpdateConfig>()
	{
		return URVPDPUpdateConfig::StaticClass();
	}
	URVPDPUpdateConfig::URVPDPUpdateConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URVPDPUpdateConfig);
	URVPDPUpdateConfig::~URVPDPUpdateConfig() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPUpdateConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPUpdateConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URVPDPUpdateConfig, URVPDPUpdateConfig::StaticClass, TEXT("URVPDPUpdateConfig"), &Z_Registration_Info_UClass_URVPDPUpdateConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URVPDPUpdateConfig), 814466785U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPUpdateConfig_h_3834991842(TEXT("/Script/RVPDPEditor"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPUpdateConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPUpdateConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
