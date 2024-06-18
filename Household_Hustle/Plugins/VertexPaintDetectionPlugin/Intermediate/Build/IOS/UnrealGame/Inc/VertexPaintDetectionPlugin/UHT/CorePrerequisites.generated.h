// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Prerequisites/CorePrerequisites.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VERTEXPAINTDETECTIONPLUGIN_CorePrerequisites_generated_h
#error "CorePrerequisites.generated.h already included, missing '#pragma once' in CorePrerequisites.h"
#endif
#define VERTEXPAINTDETECTIONPLUGIN_CorePrerequisites_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CorePrerequisites_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexPaintColorChannelsStruct>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CorePrerequisites_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexDetectSerializedColorsPerLODStruct>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CorePrerequisites_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexDetectMeshDataPerLODStruct>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CorePrerequisites_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexDetectMeshDataStruct>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CorePrerequisites_h


#define FOREACH_ENUM_EVERTEXCOLORCHANNEL(op) \
	op(EVertexColorChannel::RedChannel) \
	op(EVertexColorChannel::GreenChannel) \
	op(EVertexColorChannel::BlueChannel) \
	op(EVertexColorChannel::AlphaChannel) 

enum class EVertexColorChannel : uint8;
template<> struct TIsUEnumClass<EVertexColorChannel> { enum { Value = true }; };
template<> VERTEXPAINTDETECTIONPLUGIN_API UEnum* StaticEnum<EVertexColorChannel>();

#define FOREACH_ENUM_ENUM_SURFACEATCHANNEL(op) \
	op(Enum_SurfaceAtChannel::Default) \
	op(Enum_SurfaceAtChannel::RedChannel) \
	op(Enum_SurfaceAtChannel::GreenChannel) \
	op(Enum_SurfaceAtChannel::BlueChannel) \
	op(Enum_SurfaceAtChannel::AlphaChannel) 

enum class Enum_SurfaceAtChannel : uint8;
template<> struct TIsUEnumClass<Enum_SurfaceAtChannel> { enum { Value = true }; };
template<> VERTEXPAINTDETECTIONPLUGIN_API UEnum* StaticEnum<Enum_SurfaceAtChannel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
