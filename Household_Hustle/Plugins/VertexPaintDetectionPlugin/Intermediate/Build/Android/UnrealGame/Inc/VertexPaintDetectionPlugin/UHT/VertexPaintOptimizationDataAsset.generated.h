// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataAssets/VertexPaintOptimizationDataAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;
class USkeletalMesh; struct FPaintOnLODSettingsStruct;
class UStaticMesh;
class UStaticMesh; struct FPaintOnLODSettingsStruct;
struct FPaintOnLODSettingsStruct;
#ifdef VERTEXPAINTDETECTIONPLUGIN_VertexPaintOptimizationDataAsset_generated_h
#error "VertexPaintOptimizationDataAsset.generated.h already included, missing '#pragma once' in VertexPaintOptimizationDataAsset.h"
#endif
#define VERTEXPAINTDETECTIONPLUGIN_VertexPaintOptimizationDataAsset_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FPaintOnLODSettingsStruct>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_32_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_32_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSkeletalMeshNumOfLODsToPaint); \
	DECLARE_FUNCTION(execGetStaticMeshNumOfLODsToPaint);


#if WITH_EDITOR
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_32_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveFromSkeletalMeshNumOfLODsToPaint); \
	DECLARE_FUNCTION(execRemoveFromStaticMeshNumOfLODsToPaint); \
	DECLARE_FUNCTION(execAddToSkeletalMeshNumOfLODsToPaint); \
	DECLARE_FUNCTION(execAddToStaticMeshNumOfLODsToPaint);


#else
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_32_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_32_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVertexPaintOptimizationDataAsset(); \
	friend struct Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics; \
public: \
	DECLARE_CLASS(UVertexPaintOptimizationDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VertexPaintDetectionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVertexPaintOptimizationDataAsset)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVertexPaintOptimizationDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVertexPaintOptimizationDataAsset(UVertexPaintOptimizationDataAsset&&); \
	NO_API UVertexPaintOptimizationDataAsset(const UVertexPaintOptimizationDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVertexPaintOptimizationDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVertexPaintOptimizationDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVertexPaintOptimizationDataAsset) \
	NO_API virtual ~UVertexPaintOptimizationDataAsset();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_29_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_32_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_32_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_32_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_32_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_32_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<class UVertexPaintOptimizationDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
