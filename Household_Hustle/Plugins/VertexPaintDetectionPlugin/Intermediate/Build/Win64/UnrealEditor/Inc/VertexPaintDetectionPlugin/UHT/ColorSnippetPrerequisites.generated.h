// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Prerequisites/ColorSnippetPrerequisites.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VERTEXPAINTDETECTIONPLUGIN_ColorSnippetPrerequisites_generated_h
#error "ColorSnippetPrerequisites.generated.h already included, missing '#pragma once' in ColorSnippetPrerequisites.h"
#endif
#define VERTEXPAINTDETECTIONPLUGIN_ColorSnippetPrerequisites_generated_h

#define FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_ColorSnippetPrerequisites_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexDetectStoredColorSnippetInfo>();

#define FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_ColorSnippetPrerequisites_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexDetectColorSnippetReferenceDataStruct>();

#define FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_ColorSnippetPrerequisites_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexDetectColorSnippetDataStruct>();

#define FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_ColorSnippetPrerequisites_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexDetectGroupColorSnippetInfo>();

#define FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_ColorSnippetPrerequisites_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexPaintColorSnippetDataAssetInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_ColorSnippetPrerequisites_h


#define FOREACH_ENUM_EVERTEXPAINTPAINTCOLORSNIPPETSETTING(op) \
	op(EVertexPaintPaintColorSnippetSetting::PaintSingleSnippet) \
	op(EVertexPaintPaintColorSnippetSetting::PaintGroupSnippet) 

enum class EVertexPaintPaintColorSnippetSetting : uint8;
template<> struct TIsUEnumClass<EVertexPaintPaintColorSnippetSetting> { enum { Value = true }; };
template<> VERTEXPAINTDETECTIONPLUGIN_API UEnum* StaticEnum<EVertexPaintPaintColorSnippetSetting>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
