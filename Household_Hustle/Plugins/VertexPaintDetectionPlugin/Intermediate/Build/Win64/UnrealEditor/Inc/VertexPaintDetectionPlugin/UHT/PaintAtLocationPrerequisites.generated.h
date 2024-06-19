// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Prerequisites/PaintAtLocationPrerequisites.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VERTEXPAINTDETECTIONPLUGIN_PaintAtLocationPrerequisites_generated_h
#error "PaintAtLocationPrerequisites.generated.h already included, missing '#pragma once' in PaintAtLocationPrerequisites.h"
#endif
#define VERTEXPAINTDETECTIONPLUGIN_PaintAtLocationPrerequisites_generated_h

#define FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintAtLocationPrerequisites_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FVertexDetectFallOffSettings Super;


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexDetectPaintAtLocationFallOffSettings>();

#define FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintAtLocationPrerequisites_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexDetectPaintAtLocationAreaSettings>();

#define FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintAtLocationPrerequisites_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexDetectWhenPaintingSettings>();

#define FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintAtLocationPrerequisites_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FVertexPaintColorSettingStruct Super;


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexPaintAtLocationStruct>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintAtLocationPrerequisites_h


#define FOREACH_ENUM_EVERTEXPAINTATLOCATIONFALLOFFTYPE(op) \
	op(EVertexPaintAtLocationFallOffType::OutwardFallOff) \
	op(EVertexPaintAtLocationFallOffType::InwardFallOff) \
	op(EVertexPaintAtLocationFallOffType::SphericalFallOff) 

enum class EVertexPaintAtLocationFallOffType : uint8;
template<> struct TIsUEnumClass<EVertexPaintAtLocationFallOffType> { enum { Value = true }; };
template<> VERTEXPAINTDETECTIONPLUGIN_API UEnum* StaticEnum<EVertexPaintAtLocationFallOffType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
