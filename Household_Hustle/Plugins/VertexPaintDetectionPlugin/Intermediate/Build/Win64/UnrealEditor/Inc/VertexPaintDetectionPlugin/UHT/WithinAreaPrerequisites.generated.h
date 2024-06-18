// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Prerequisites/WithinAreaPrerequisites.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VERTEXPAINTDETECTIONPLUGIN_WithinAreaPrerequisites_generated_h
#error "WithinAreaPrerequisites.generated.h already included, missing '#pragma once' in WithinAreaPrerequisites.h"
#endif
#define VERTEXPAINTDETECTIONPLUGIN_WithinAreaPrerequisites_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_WithinAreaPrerequisites_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_WithinAreaPrerequisites_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexPaintDetectWithinAreaSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_WithinAreaPrerequisites_h


#define FOREACH_ENUM_ENUM_PAINTWITHINAREASHAPE(op) \
	op(Enum_PaintWithinAreaShape::isSquareOrRectangleShape) \
	op(Enum_PaintWithinAreaShape::isSphereShape) \
	op(Enum_PaintWithinAreaShape::isComplexShape) 

enum class Enum_PaintWithinAreaShape : uint8;
template<> struct TIsUEnumClass<Enum_PaintWithinAreaShape> { enum { Value = true }; };
template<> VERTEXPAINTDETECTIONPLUGIN_API UEnum* StaticEnum<Enum_PaintWithinAreaShape>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
