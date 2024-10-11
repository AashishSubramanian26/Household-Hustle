// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Prerequisites/PaintWithinAreaPrerequisites.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VERTEXPAINTDETECTIONPLUGIN_PaintWithinAreaPrerequisites_generated_h
#error "PaintWithinAreaPrerequisites.generated.h already included, missing '#pragma once' in PaintWithinAreaPrerequisites.h"
#endif
#define VERTEXPAINTDETECTIONPLUGIN_PaintWithinAreaPrerequisites_generated_h

#define FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintWithinAreaPrerequisites_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexDetectPaintWithinAreaFallOffSettings_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FVertexDetectFallOffSettings Super;


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexDetectPaintWithinAreaFallOffSettings>();

#define FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintWithinAreaPrerequisites_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FVertexPaintColorSettingStruct Super;


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexPainthWithinAreaStruct>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintWithinAreaPrerequisites_h


#define FOREACH_ENUM_EVERTEXPAINTWITHINAREAFALLOFFTYPE(op) \
	op(EVertexPaintWithinAreaFallOffType::SphericalFromCenter) \
	op(EVertexPaintWithinAreaFallOffType::GradiantUpward) \
	op(EVertexPaintWithinAreaFallOffType::GradiantDownward) 

enum class EVertexPaintWithinAreaFallOffType : uint8;
template<> struct TIsUEnumClass<EVertexPaintWithinAreaFallOffType> { enum { Value = true }; };
template<> VERTEXPAINTDETECTIONPLUGIN_API UEnum* StaticEnum<EVertexPaintWithinAreaFallOffType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
