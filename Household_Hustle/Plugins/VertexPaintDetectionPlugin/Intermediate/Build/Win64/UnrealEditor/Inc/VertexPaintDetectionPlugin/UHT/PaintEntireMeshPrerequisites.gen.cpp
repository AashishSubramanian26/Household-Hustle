// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/PaintEntireMeshPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaintEntireMeshPrerequisites() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod;
	static UEnum* Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod"));
		}
		return Z_Registration_Info_UEnum_Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UEnum* StaticEnum<Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod>()
	{
		return Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod_Statics::Enumerators[] = {
		{ "Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod::ModifiedEngineMethod", (int64)Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod::ModifiedEngineMethod },
		{ "Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod::DontPropogateLOD0ToAllLODs", (int64)Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod::DontPropogateLOD0ToAllLODs },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Paint Entire Mesh At RandomVertices Propogate To LODs Method\n" },
#endif
		{ "DontPropogateLOD0ToAllLODs.DisplayName", "Dont Propogate LOD0 To All LODs" },
		{ "DontPropogateLOD0ToAllLODs.Name", "Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod::DontPropogateLOD0ToAllLODs" },
		{ "ModifiedEngineMethod.DisplayName", "Modified Engine Method" },
		{ "ModifiedEngineMethod.Name", "Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod::ModifiedEngineMethod" },
		{ "ModifiedEngineMethod.Tooltip", "If we should propogate LOD0 Colors to the other LODs" },
		{ "ModuleRelativePath", "Prerequisites/PaintEntireMeshPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Paint Entire Mesh At RandomVertices Propogate To LODs Method" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		"Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod",
		"Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod",
		Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod()
	{
		if (!Z_Registration_Info_UEnum_Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod.InnerSingleton, Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectPaintOnEntireMeshRandomizeSettingsStruct;
class UScriptStruct* FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectPaintOnEntireMeshRandomizeSettingsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectPaintOnEntireMeshRandomizeSettingsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectPaintOnEntireMeshRandomizeSettingsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectPaintOnEntireMeshRandomizeSettingsStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct>()
{
	return FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_MetaData[];
#endif
		static void NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_PropogateLOD0ToAllLODsMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_PropogateLOD0ToAllLODsMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_PropogateLOD0ToAllLODsMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_MetaData[];
#endif
		static void NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_onlyRandomizeWithinAreaOfEffectAtLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_AreaOfEffect_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_AreaOfEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_ProbabilityFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_ProbabilityFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overrideRandomSeeds_MetaData[];
#endif
		static void NewProp_overrideRandomSeeds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_overrideRandomSeeds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_seedToOverrideWith_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_seedToOverrideWith;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_randomSeedsUsedInPaintJob_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_randomSeedsUsedInPaintJob;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Paint Entire Mesh Randomize Struct\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/PaintEntireMeshPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Paint Entire Mesh Randomize Struct" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintEntireMeshPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then paints on unique Random Vertices over the Entire Mesh." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_SetBit(void* Obj)
	{
		((FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct*)Obj)->paintAtRandomVerticesSpreadOutOverTheEntireMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh = { "paintAtRandomVerticesSpreadOutOverTheEntireMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct), &Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintEntireMeshPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If choosen to paint random vertices over the entire mesh then this is the % from 0-100." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint = { "paintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct, paintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_PropogateLOD0ToAllLODsMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_PropogateLOD0ToAllLODsMethod_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintEntireMeshPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to Not propogate LOD0 Colors to the Rest of the LODs, it will randomize for each LOD, meaning LOD0 can look pretty different from for instance LOD1 since they've both run the randomization and could've picked completely different vertices, but this option is the fastest. \nThe Modified Engine Method is copied from the engines own solution when you Mesh Paint in Editor Time but is modified so it can run in runtime and will loop through all vertices in LODs above 0 and make sure they get the color of the closest and most optimal LOD0 vertex." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_PropogateLOD0ToAllLODsMethod = { "paintAtRandomVerticesSpreadOutOverTheEntireMesh_PropogateLOD0ToAllLODsMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct, paintAtRandomVerticesSpreadOutOverTheEntireMesh_PropogateLOD0ToAllLODsMethod), Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_PropogateLOD0ToAllLODsMethod_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_PropogateLOD0ToAllLODsMethod_MetaData) }; // 927737619
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintEntireMeshPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If True then we will only Randomize within an Area of Effect around the location set, and not bother using the Percent to Randomize over the Entire Mesh since we're just doing it within an area. Instead you have to set the Probability Factor yourself, how big the odds or that a vertex within the area will be painted." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_SetBit(void* Obj)
	{
		((FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct*)Obj)->onlyRandomizeWithinAreaOfEffectAtLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_onlyRandomizeWithinAreaOfEffectAtLocation = { "onlyRandomizeWithinAreaOfEffectAtLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct), &Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_AreaOfEffect_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintEntireMeshPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Area Of Effect to Randomize within." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_AreaOfEffect = { "onlyRandomizeWithinAreaOfEffectAtLocation_AreaOfEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct, onlyRandomizeWithinAreaOfEffectAtLocation_AreaOfEffect), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_AreaOfEffect_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_AreaOfEffect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_Location_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintEntireMeshPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Area of Effect based on this Location we should Randomize within." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_Location = { "onlyRandomizeWithinAreaOfEffectAtLocation_Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct, onlyRandomizeWithinAreaOfEffectAtLocation_Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_Location_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_ProbabilityFactor_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintEntireMeshPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Probability of a Vertex Within the Area to get randomly painted between 0 - 1. If for instance 0.1 then there is a 10% chance a vertex within the area will get painted for instance." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_ProbabilityFactor = { "onlyRandomizeWithinAreaOfEffectAtLocation_ProbabilityFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct, onlyRandomizeWithinAreaOfEffectAtLocation_ProbabilityFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_ProbabilityFactor_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_ProbabilityFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_overrideRandomSeeds_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintEntireMeshPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If True, then the Paint Job will use the Seed passed through here when Randomizing either on Entire Mesh or within Area of Effect." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_overrideRandomSeeds_SetBit(void* Obj)
	{
		((FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct*)Obj)->overrideRandomSeeds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_overrideRandomSeeds = { "overrideRandomSeeds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct), &Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_overrideRandomSeeds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_overrideRandomSeeds_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_overrideRandomSeeds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_seedToOverrideWith_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintEntireMeshPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Seed to override with." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_seedToOverrideWith = { "seedToOverrideWith", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct, seedToOverrideWith), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_seedToOverrideWith_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_seedToOverrideWith_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_randomSeedsUsedInPaintJob_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintEntireMeshPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "No matter if you override the seed or not, this is the actual random seed used for the paint job. Can be used if the Server for instance want to send it to clients so they can paint entire mesh at random vertices with the same seed and get the same result." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_randomSeedsUsedInPaintJob = { "randomSeedsUsedInPaintJob", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct, randomSeedsUsedInPaintJob), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_randomSeedsUsedInPaintJob_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_randomSeedsUsedInPaintJob_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_PropogateLOD0ToAllLODsMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_paintAtRandomVerticesSpreadOutOverTheEntireMesh_PropogateLOD0ToAllLODsMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_onlyRandomizeWithinAreaOfEffectAtLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_AreaOfEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_onlyRandomizeWithinAreaOfEffectAtLocation_ProbabilityFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_overrideRandomSeeds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_seedToOverrideWith,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewProp_randomSeedsUsedInPaintJob,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectPaintOnEntireMeshRandomizeSettingsStruct",
		Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::PropPointers),
		sizeof(FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct),
		alignof(FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectPaintOnEntireMeshRandomizeSettingsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectPaintOnEntireMeshRandomizeSettingsStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectPaintOnEntireMeshRandomizeSettingsStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVertexPaintOnEntireMeshStruct>() == std::is_polymorphic<FVertexPaintColorSettingStruct>(), "USTRUCT FVertexPaintOnEntireMeshStruct cannot be polymorphic unless super FVertexPaintColorSettingStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintOnEntireMeshStruct;
class UScriptStruct* FVertexPaintOnEntireMeshStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintOnEntireMeshStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintOnEntireMeshStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintOnEntireMeshStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintOnEntireMeshStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintOnEntireMeshStruct>()
{
	return FVertexPaintOnEntireMeshStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintOnRandomVerticesSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintOnRandomVerticesSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vertex Paint On Entire Mesh\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/PaintEntireMeshPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex Paint On Entire Mesh" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintOnEntireMeshStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct_Statics::NewProp_paintOnRandomVerticesSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintEntireMeshPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings for Painting on Random Vertices over the Entire Mesh. Useful if you want to paint a mesh as if it's raining on it or something similar." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct_Statics::NewProp_paintOnRandomVerticesSettings = { "paintOnRandomVerticesSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintOnEntireMeshStruct, paintOnRandomVerticesSettings), Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct_Statics::NewProp_paintOnRandomVerticesSettings_MetaData), Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct_Statics::NewProp_paintOnRandomVerticesSettings_MetaData) }; // 2761505444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct_Statics::NewProp_paintOnRandomVerticesSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct,
		&NewStructOps,
		"VertexPaintOnEntireMeshStruct",
		Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct_Statics::PropPointers),
		sizeof(FVertexPaintOnEntireMeshStruct),
		alignof(FVertexPaintOnEntireMeshStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintOnEntireMeshStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintOnEntireMeshStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintOnEntireMeshStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintEntireMeshPrerequisites_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintEntireMeshPrerequisites_h_Statics::EnumInfo[] = {
		{ Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod_StaticEnum, TEXT("Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod"), &Z_Registration_Info_UEnum_Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 927737619U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintEntireMeshPrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct_Statics::NewStructOps, TEXT("VertexDetectPaintOnEntireMeshRandomizeSettingsStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectPaintOnEntireMeshRandomizeSettingsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct), 2761505444U) },
		{ FVertexPaintOnEntireMeshStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct_Statics::NewStructOps, TEXT("VertexPaintOnEntireMeshStruct"), &Z_Registration_Info_UScriptStruct_VertexPaintOnEntireMeshStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintOnEntireMeshStruct), 2098589667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintEntireMeshPrerequisites_h_237534604(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintEntireMeshPrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintEntireMeshPrerequisites_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintEntireMeshPrerequisites_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintEntireMeshPrerequisites_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
