// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/VertexPaintDetectionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class UPrimitiveComponent;
class UPrimitiveComponent;
struct FCalculateColorsInfo;
struct FVertexDetectAdditionalDataToPassThrough;
struct FVertexDetectAvarageColorInAreaInfo;
struct FVertexDetectClosestVertexDataResultStruct;
struct FVertexDetectEstimatedColorAtHitLocationResultStruct;
struct FVertexDetectGetColorsOnlyStruct;
struct FVertexDetectGetColorsWithinAreaStruct;
struct FVertexDetectInfoStruct;
struct FVertexDetectPaintTaskResultInfo;
struct FVertexDetectTaskResultInfo;
struct FVertexPaintAtLocationStruct;
struct FVertexPaintColorSnippetStruct;
struct FVertexPainthWithinAreaStruct;
struct FVertexPaintOnEntireMeshStruct;
struct FVertexPaintSetMeshComponentVertexColors;
struct FVertexPaintSetMeshComponentVertexColorsUsingSerializedString;
struct FVertexPaintWithinAreaResults;
#ifdef VERTEXPAINTDETECTIONPLUGIN_VertexPaintDetectionComponent_generated_h
#error "VertexPaintDetectionComponent.generated.h already included, missing '#pragma once' in VertexPaintDetectionComponent.h"
#endif
#define VERTEXPAINTDETECTIONPLUGIN_VertexPaintDetectionComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_29_DELEGATE \
VERTEXPAINTDETECTIONPLUGIN_API void FVertexColorGetClosestVertexData_DelegateWrapper(const FMulticastScriptDelegate& VertexColorGetClosestVertexData, FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectInfoStruct const& detectedMeshWithSettings, FVertexDetectClosestVertexDataResultStruct const& closestVertexInfo, FVertexDetectEstimatedColorAtHitLocationResultStruct const& estimatedColorAtHitLocationInfo, FVertexDetectAvarageColorInAreaInfo const& avarageColorInAreaInfo, FVertexDetectAdditionalDataToPassThrough const& additionalData);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_31_DELEGATE \
VERTEXPAINTDETECTIONPLUGIN_API void FVertexColorGetAllVertexColorsOnly_DelegateWrapper(const FMulticastScriptDelegate& VertexColorGetAllVertexColorsOnly, FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectGetColorsOnlyStruct const& gotAllVertexColorsWithSettings, FVertexDetectAdditionalDataToPassThrough const& additionalData);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_33_DELEGATE \
VERTEXPAINTDETECTIONPLUGIN_API void FGetColorsWithinArea_DelegateWrapper(const FMulticastScriptDelegate& GetColorsWithinArea, FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectGetColorsWithinAreaStruct const& getColorsWithinAreaSettings, FVertexPaintWithinAreaResults const& withinAreaResults, FVertexDetectAdditionalDataToPassThrough const& additionalData);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_36_DELEGATE \
VERTEXPAINTDETECTIONPLUGIN_API void FVertexColorPaintedAtLocation_DelegateWrapper(const FMulticastScriptDelegate& VertexColorPaintedAtLocation, FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectPaintTaskResultInfo const& paintTaskResultInfo, FVertexPaintAtLocationStruct const& paintedAtLocationWithSettings, FVertexDetectClosestVertexDataResultStruct const& closestVertexInfoAfterApplyingColor, FVertexDetectEstimatedColorAtHitLocationResultStruct const& estimatedColorAtHitLocationInfo, FVertexDetectAvarageColorInAreaInfo const& avarageColorInAreaInfo, FVertexDetectAdditionalDataToPassThrough const& additionalData);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_38_DELEGATE \
VERTEXPAINTDETECTIONPLUGIN_API void FVertexColorPaintedWithinArea_DelegateWrapper(const FMulticastScriptDelegate& VertexColorPaintedWithinArea, FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectPaintTaskResultInfo const& paintTaskResultInfo, FVertexPainthWithinAreaStruct const& paintedWithinAreaWithSettings, FVertexPaintWithinAreaResults const& withinAreaResults, FVertexDetectAdditionalDataToPassThrough const& additionalData);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_40_DELEGATE \
VERTEXPAINTDETECTIONPLUGIN_API void FVertexColorPaintedEntireMesh_DelegateWrapper(const FMulticastScriptDelegate& VertexColorPaintedEntireMesh, FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectPaintTaskResultInfo const& paintTaskResultInfo, FVertexPaintOnEntireMeshStruct const& entireMeshPaintedWithSettings, FVertexDetectAdditionalDataToPassThrough const& additionalData);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_42_DELEGATE \
VERTEXPAINTDETECTIONPLUGIN_API void FVertexColorPaintColorSnippet_DelegateWrapper(const FMulticastScriptDelegate& VertexColorPaintColorSnippet, FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectPaintTaskResultInfo const& paintTaskResultInfo, FVertexPaintColorSnippetStruct const& paintColorSnippetWithSettings, FVertexDetectAdditionalDataToPassThrough const& additionalData);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_44_DELEGATE \
VERTEXPAINTDETECTIONPLUGIN_API void FSetMeshComponentVertexColors_DelegateWrapper(const FMulticastScriptDelegate& SetMeshComponentVertexColors, FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectPaintTaskResultInfo const& paintTaskResultInfo, FVertexPaintSetMeshComponentVertexColors const& setMeshComponentVertexColorWithSettings, FVertexDetectAdditionalDataToPassThrough const& additionalData);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_46_DELEGATE \
VERTEXPAINTDETECTIONPLUGIN_API void FSetMeshComponentVertexColorsUsingSerializedString_DelegateWrapper(const FMulticastScriptDelegate& SetMeshComponentVertexColorsUsingSerializedString, FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectPaintTaskResultInfo const& paintTaskResultInfo, FVertexPaintSetMeshComponentVertexColorsUsingSerializedString const& setMeshComponentVertexColorUsingSerializedStringWithSettings, FVertexDetectAdditionalDataToPassThrough const& additionalData);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_62_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_62_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_62_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasAnyTasksQueuedUp); \
	DECLARE_FUNCTION(execGetTotalTasksInitiatedByComponent); \
	DECLARE_FUNCTION(execGetCurrentTasksMeshComponents); \
	DECLARE_FUNCTION(execGetCurrentTasksInitiatedByComponent); \
	DECLARE_FUNCTION(execGetCurrentSetMeshComponentVertexColorsUsingSerializedStringTasks); \
	DECLARE_FUNCTION(execGetCurrentSetMeshComponentVertexColorsTasks); \
	DECLARE_FUNCTION(execGetCurrentPaintColorSnippetTasks); \
	DECLARE_FUNCTION(execGetCurrentPaintEntireMeshTasks); \
	DECLARE_FUNCTION(execGetCurrentPaintWithinAreaTasks); \
	DECLARE_FUNCTION(execGetCurrentPaintAtLocationTasks); \
	DECLARE_FUNCTION(execGetCurrentGetColorsWithinAreaTasks); \
	DECLARE_FUNCTION(execGetCurrentGetAllVertexColorsOnlyTasks); \
	DECLARE_FUNCTION(execGetCurrentGetClosestVertexDataTasks); \
	DECLARE_FUNCTION(execTaskRemovedByTaskQueue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_62_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVertexPaintDetectionComponent(); \
	friend struct Z_Construct_UClass_UVertexPaintDetectionComponent_Statics; \
public: \
	DECLARE_CLASS(UVertexPaintDetectionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VertexPaintDetectionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVertexPaintDetectionComponent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_62_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVertexPaintDetectionComponent(UVertexPaintDetectionComponent&&); \
	NO_API UVertexPaintDetectionComponent(const UVertexPaintDetectionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVertexPaintDetectionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVertexPaintDetectionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVertexPaintDetectionComponent) \
	NO_API virtual ~UVertexPaintDetectionComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_59_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_62_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_62_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_62_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_62_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_62_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<class UVertexPaintDetectionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintDetectionComponent_h


#define FOREACH_ENUM_ELOADCOLORSNIPPETDATAASSETOPTIONS(op) \
	op(ELoadColorSnippetDataAssetOptions::LoadPaintColorSnippetDataAsset) \
	op(ELoadColorSnippetDataAssetOptions::LoadCompareWithColorSnippetDataAsset) 

enum class ELoadColorSnippetDataAssetOptions : uint8;
template<> struct TIsUEnumClass<ELoadColorSnippetDataAssetOptions> { enum { Value = true }; };
template<> VERTEXPAINTDETECTIONPLUGIN_API UEnum* StaticEnum<ELoadColorSnippetDataAssetOptions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
