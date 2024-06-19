// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Prerequisites/PaintEntireMeshPrerequisites.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VERTEXPAINTDETECTIONPLUGIN_PaintEntireMeshPrerequisites_generated_h
#error "PaintEntireMeshPrerequisites.generated.h already included, missing '#pragma once' in PaintEntireMeshPrerequisites.h"
#endif
#define VERTEXPAINTDETECTIONPLUGIN_PaintEntireMeshPrerequisites_generated_h

#define FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintEntireMeshPrerequisites_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct>();

#define FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintEntireMeshPrerequisites_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FVertexPaintColorSettingStruct Super;


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexPaintOnEntireMeshStruct>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintEntireMeshPrerequisites_h


#define FOREACH_ENUM_ENUM_PAINTENTIREMESHATRANDOMVERTICES_PROPOGATETOLODSMETHOD(op) \
	op(Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod::ModifiedEngineMethod) \
	op(Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod::DontPropogateLOD0ToAllLODs) 

enum class Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod : uint8;
template<> struct TIsUEnumClass<Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod> { enum { Value = true }; };
template<> VERTEXPAINTDETECTIONPLUGIN_API UEnum* StaticEnum<Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
