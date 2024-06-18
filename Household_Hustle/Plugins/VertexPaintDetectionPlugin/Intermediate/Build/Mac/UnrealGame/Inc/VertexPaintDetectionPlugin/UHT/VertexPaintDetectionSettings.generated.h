// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VertexPaintDetectionSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VERTEXPAINTDETECTIONPLUGIN_VertexPaintDetectionSettings_generated_h
#error "VertexPaintDetectionSettings.generated.h already included, missing '#pragma once' in VertexPaintDetectionSettings.h"
#endif
#define VERTEXPAINTDETECTIONPLUGIN_VertexPaintDetectionSettings_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_34_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_34_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_34_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVertexPaintDetectionSettings(); \
	friend struct Z_Construct_UClass_UVertexPaintDetectionSettings_Statics; \
public: \
	DECLARE_CLASS(UVertexPaintDetectionSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/VertexPaintDetectionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVertexPaintDetectionSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVertexPaintDetectionSettings(UVertexPaintDetectionSettings&&); \
	NO_API UVertexPaintDetectionSettings(const UVertexPaintDetectionSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVertexPaintDetectionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVertexPaintDetectionSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVertexPaintDetectionSettings) \
	NO_API virtual ~UVertexPaintDetectionSettings();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_31_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_34_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_34_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_34_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_34_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<class UVertexPaintDetectionSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h


#define FOREACH_ENUM_ETVERTEXPAINTTHREADPRIORITY(op) \
	op(ETVertexPaintThreadPriority::TimeCritical) \
	op(ETVertexPaintThreadPriority::Highest) \
	op(ETVertexPaintThreadPriority::Normal) \
	op(ETVertexPaintThreadPriority::Slowest) 

enum class ETVertexPaintThreadPriority : uint8;
template<> struct TIsUEnumClass<ETVertexPaintThreadPriority> { enum { Value = true }; };
template<> VERTEXPAINTDETECTIONPLUGIN_API UEnum* StaticEnum<ETVertexPaintThreadPriority>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
