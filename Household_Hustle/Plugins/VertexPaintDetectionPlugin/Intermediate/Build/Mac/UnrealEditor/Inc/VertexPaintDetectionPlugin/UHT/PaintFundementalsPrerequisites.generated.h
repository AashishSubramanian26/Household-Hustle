// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Prerequisites/PaintFundementalsPrerequisites.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VERTEXPAINTDETECTIONPLUGIN_PaintFundementalsPrerequisites_generated_h
#error "PaintFundementalsPrerequisites.generated.h already included, missing '#pragma once' in PaintFundementalsPrerequisites.h"
#endif
#define VERTEXPAINTDETECTIONPLUGIN_PaintFundementalsPrerequisites_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintFundementalsPrerequisites_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexDetectLerpVertexColorToTargetStruct_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexDetectLerpVertexColorToTargetStruct>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintFundementalsPrerequisites_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingPhysicsSurfaceStruct_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexDetectApplyColorsUsingPhysicsSurfaceStruct>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintFundementalsPrerequisites_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexDetectApplyColorsUsingVertexChannelStruct_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexDetectApplyColorsUsingVertexChannelStruct>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintFundementalsPrerequisites_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexDetectRGBAStruct_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexDetectRGBAStruct>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintFundementalsPrerequisites_h_209_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexPaintOverridePaintUpToLOD_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexPaintOverridePaintUpToLOD>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintFundementalsPrerequisites_h_226_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexPaintOverrideColorsToApply_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexPaintOverrideColorsToApply>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintFundementalsPrerequisites_h_250_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexPaintStruct_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FVertexDetectFundementalStruct Super;


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexPaintStruct>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintFundementalsPrerequisites_h_277_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FVertexPaintStruct Super;


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexPaintColorSettingStruct>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintFundementalsPrerequisites_h_291_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexPaintPaintColorsDirectlyStruct_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FVertexPaintStruct Super;


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexPaintPaintColorsDirectlyStruct>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintFundementalsPrerequisites_h


#define FOREACH_ENUM_EAPPLYVERTEXCOLORSETTING(op) \
	op(EApplyVertexColorSetting::EAddVertexColor) \
	op(EApplyVertexColorSetting::ESetVertexColor) 

enum class EApplyVertexColorSetting : uint8;
template<> struct TIsUEnumClass<EApplyVertexColorSetting> { enum { Value = true }; };
template<> VERTEXPAINTDETECTIONPLUGIN_API UEnum* StaticEnum<EApplyVertexColorSetting>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
