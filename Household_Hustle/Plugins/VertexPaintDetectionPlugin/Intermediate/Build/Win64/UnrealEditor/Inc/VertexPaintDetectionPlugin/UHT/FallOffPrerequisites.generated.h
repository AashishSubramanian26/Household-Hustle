// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Prerequisites/FallOffPrerequisites.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VERTEXPAINTDETECTIONPLUGIN_FallOffPrerequisites_generated_h
#error "FallOffPrerequisites.generated.h already included, missing '#pragma once' in FallOffPrerequisites.h"
#endif
#define VERTEXPAINTDETECTIONPLUGIN_FallOffPrerequisites_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_FallOffPrerequisites_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexDetectFallOffSettings_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexDetectFallOffSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_FallOffPrerequisites_h


#define FOREACH_ENUM_EVERTEXPAINTSTARTFALLOFFDISTANCEFROM(op) \
	op(EVertexPaintStartFallOffDistanceFrom::BaseOfPaintShape) \
	op(EVertexPaintStartFallOffDistanceFrom::EndOfPaintShape) 

enum class EVertexPaintStartFallOffDistanceFrom : uint8;
template<> struct TIsUEnumClass<EVertexPaintStartFallOffDistanceFrom> { enum { Value = true }; };
template<> VERTEXPAINTDETECTIONPLUGIN_API UEnum* StaticEnum<EVertexPaintStartFallOffDistanceFrom>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
