// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RVPDPEditorSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UButton;
class UComboBoxString;
class UObject;
class UPrimitiveComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UVertexPaintColorSnippetDataAsset;
class UWorld;
struct FColor;
struct FSoftObjectPath;
struct FVertexDetectGroupColorSnippetInfo;
#ifdef RVPDPEDITOR_RVPDPEditorSubsystem_generated_h
#error "RVPDPEditorSubsystem.generated.h already included, missing '#pragma once' in RVPDPEditorSubsystem.h"
#endif
#define RVPDPEDITOR_RVPDPEditorSubsystem_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPEditorSubsystem_h_22_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPEditorSubsystem_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPEditorSubsystem_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPEditorSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetObjectsOfClassAsSoftPtrs); \
	DECLARE_FUNCTION(execGetObjectNameFromSoftObjectPtr); \
	DECLARE_FUNCTION(execGetSoftObjectPathFromSoftObjectPtr); \
	DECLARE_FUNCTION(execGetObjectsOfClass); \
	DECLARE_FUNCTION(execRefreshAllAvailableCachedColorSnippetTagContainer); \
	DECLARE_FUNCTION(execRenameColorSnippetTag); \
	DECLARE_FUNCTION(execClearAllAvailableColorSnippetCacheTagContainer); \
	DECLARE_FUNCTION(execRemoveColorSnippetTag); \
	DECLARE_FUNCTION(execGetAllColorSnippetTagsDirectlyFromIni); \
	DECLARE_FUNCTION(execDoesColorSnippetTagExist); \
	DECLARE_FUNCTION(execAddColorSnippetTag); \
	DECLARE_FUNCTION(execLoadEssentialDataAssets); \
	DECLARE_FUNCTION(execSetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse); \
	DECLARE_FUNCTION(execSetCustomSettingsVertexPaintMaterialToUse); \
	DECLARE_FUNCTION(execSetCustomSettingsOptimizationsDataAssetToUse); \
	DECLARE_FUNCTION(execGetPersistentLevelsWorld_Wrapper); \
	DECLARE_FUNCTION(execGetStaticMeshComponentVertexCount_Wrapper); \
	DECLARE_FUNCTION(execGetSkeletalMeshComponentVertexCount_Wrapper); \
	DECLARE_FUNCTION(execGetSkeletalMeshLODCount_Wrapper); \
	DECLARE_FUNCTION(execGetStaticMeshLODCount_Wrapper); \
	DECLARE_FUNCTION(execGetSkeletalMeshVerticesAmount_Wrapper); \
	DECLARE_FUNCTION(execGetStaticMeshVerticesAmount_Wrapper); \
	DECLARE_FUNCTION(execApplyVertexColorToMeshAtLOD0); \
	DECLARE_FUNCTION(execRemoveMeshColorSnippet); \
	DECLARE_FUNCTION(execUpdateGroupColorSnippetID); \
	DECLARE_FUNCTION(execUpdateMeshColorSnippetID); \
	DECLARE_FUNCTION(execMoveGroupColorSnippet); \
	DECLARE_FUNCTION(execMoveMeshColorSnippet); \
	DECLARE_FUNCTION(execRemoveGroupColorSnippet); \
	DECLARE_FUNCTION(execAddGroupColorSnippet); \
	DECLARE_FUNCTION(execAddMeshColorSnippet); \
	DECLARE_FUNCTION(execRemoveStaticMeshAndAmountOfLODsToPaintByDefault); \
	DECLARE_FUNCTION(execAddStaticMeshAndAmountOfLODsToPaintByDefault); \
	DECLARE_FUNCTION(execRemoveSkeletalMeshAmountOfLODsToPaintByDefault); \
	DECLARE_FUNCTION(execAddSkeletalMeshAmountOfLODsToPaintByDefault); \
	DECLARE_FUNCTION(execSavePackageWrapper); \
	DECLARE_FUNCTION(execSetEngineSpecificButtonSettings); \
	DECLARE_FUNCTION(execAddEditorNotification);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPEditorSubsystem_h_22_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPEditorSubsystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURVPDPEditorSubsystem(); \
	friend struct Z_Construct_UClass_URVPDPEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(URVPDPEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RVPDPEditor"), NO_API) \
	DECLARE_SERIALIZER(URVPDPEditorSubsystem)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPEditorSubsystem_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URVPDPEditorSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URVPDPEditorSubsystem(URVPDPEditorSubsystem&&); \
	NO_API URVPDPEditorSubsystem(const URVPDPEditorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URVPDPEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URVPDPEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URVPDPEditorSubsystem) \
	NO_API virtual ~URVPDPEditorSubsystem();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPEditorSubsystem_h_19_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPEditorSubsystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPEditorSubsystem_h_22_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPEditorSubsystem_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPEditorSubsystem_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPEditorSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPEditorSubsystem_h_22_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPEditorSubsystem_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPEditorSubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RVPDPEDITOR_API UClass* StaticClass<class URVPDPEditorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPEditorSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
