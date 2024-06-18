// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/PaintConditionsPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaintConditionsPrerequisites() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_SurfaceAtChannel();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition;
class UScriptStruct* FVertexDetectPaintColorCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectPaintColorCondition"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectPaintColorCondition>()
{
	return FVertexDetectPaintColorCondition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hasToHaveConditionMetToApplyAnyColorsAtAll_MetaData[];
#endif
		static void NewProp_hasToHaveConditionMetToApplyAnyColorsAtAll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasToHaveConditionMetToApplyAnyColorsAtAll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_colorStrengthIfThisConditionIsNotMet_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_colorStrengthIfThisConditionIsNotMet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Paint Color Condition\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "Paint Color Condition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectPaintColorCondition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::NewProp_hasToHaveConditionMetToApplyAnyColorsAtAll_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "If this specific condition has to be true to apply anything at all. If this is false, then we can fall back to whatever float is set below. If there are several conditions used, and they all fail and want to fall back to another color strength, then the one that fails first will be the one used. The Conditions are checked in the order of IfAboveOrBelowWorldZ, WithinColorRange, IfBone, and lastly Line of Sight which is the one that takes longest if used since it does traces." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::NewProp_hasToHaveConditionMetToApplyAnyColorsAtAll_SetBit(void* Obj)
	{
		((FVertexDetectPaintColorCondition*)Obj)->hasToHaveConditionMetToApplyAnyColorsAtAll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::NewProp_hasToHaveConditionMetToApplyAnyColorsAtAll = { "hasToHaveConditionMetToApplyAnyColorsAtAll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectPaintColorCondition), &Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::NewProp_hasToHaveConditionMetToApplyAnyColorsAtAll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::NewProp_hasToHaveConditionMetToApplyAnyColorsAtAll_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::NewProp_hasToHaveConditionMetToApplyAnyColorsAtAll_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::NewProp_colorStrengthIfThisConditionIsNotMet_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "Whether we should Apply a Different Color Strength if this specific Condition Failed and the bool above is set to False. For instance if we want to Dry Mesh if in Line of Sight to a Sun, but it failed, the vertex is in a Shadow, then maybe we still want to Dry it, just by not as much." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::NewProp_colorStrengthIfThisConditionIsNotMet = { "colorStrengthIfThisConditionIsNotMet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintColorCondition, colorStrengthIfThisConditionIsNotMet), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::NewProp_colorStrengthIfThisConditionIsNotMet_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::NewProp_colorStrengthIfThisConditionIsNotMet_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::NewProp_hasToHaveConditionMetToApplyAnyColorsAtAll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::NewProp_colorStrengthIfThisConditionIsNotMet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectPaintColorCondition",
		Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::PropPointers),
		sizeof(FVertexDetectPaintColorCondition),
		alignof(FVertexDetectPaintColorCondition),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation>() == std::is_polymorphic<FVertexDetectPaintColorCondition>(), "USTRUCT FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation cannot be polymorphic unless super FVertexDetectPaintColorCondition is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation;
class UScriptStruct* FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation>()
{
	return FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minDotProductToActorOrLocation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minDotProductToActorOrLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Only Affect Vertices With Direction To Actor Or Location\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "Only Affect Vertices With Direction To Actor Or Location" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::NewProp_actor_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "If this is set then will use this Actors Location, otherwise the location." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::NewProp_actor_MetaData), Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::NewProp_actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::NewProp_location_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "If Actor is set then will use that, otherwise fall back to what is set here." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::NewProp_location_MetaData), Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::NewProp_location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::NewProp_minDotProductToActorOrLocation_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "If Vertex Normal to Actor or Location is at least above this Dot, only then the vertex will get included. It can be between -1 and 1, where -1 is the opposite (i.e. if set to -1 then all vertices will get affected), 0 is straight to the side, and 1 is straight toward the location. Depending on what you're doing you may want to adjust this, for instance a fire hose spraying a wide amount of water over a large mesh, then you want all of the vertices within the AoE to get affected which means this may have to be at min 0.5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::NewProp_minDotProductToActorOrLocation = { "minDotProductToActorOrLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation, minDotProductToActorOrLocation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::NewProp_minDotProductToActorOrLocation_MetaData), Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::NewProp_minDotProductToActorOrLocation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::NewProp_actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::NewProp_location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::NewProp_minDotProductToActorOrLocation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition,
		&NewStructOps,
		"VertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation",
		Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::PropPointers),
		sizeof(FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation),
		alignof(FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation>() == std::is_polymorphic<FVertexDetectPaintColorCondition>(), "USTRUCT FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation cannot be polymorphic unless super FVertexDetectPaintColorCondition is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation;
class UScriptStruct* FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation>()
{
	return FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minDotProductToDirection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minDotProductToDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Only Include Vertices Within Direction\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "Only Include Vertices Within Direction" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::NewProp_actor_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "If this is set then will use this Actors Location, otherwise the location." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::NewProp_actor_MetaData), Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::NewProp_actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::NewProp_location_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "Location we want to check against, could for example be the Base of a Cone. Will use the Actors location if set, otherwise fallback to this one." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::NewProp_location_MetaData), Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::NewProp_location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::NewProp_direction_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "The Direction we want to check against, if for example a cone, then the Direction the Cone is facing towards, i.e. the direction it expands out to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::NewProp_direction_MetaData), Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::NewProp_direction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::NewProp_minDotProductToDirection_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "The Min Dot Product, of the Direction from the Location to the Vertex. If for example a Cone, that this should match the width of that cone, so if a very narrow cone then something closer to 1, if very wide then closer to 0. Should be between -1 and 1." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::NewProp_minDotProductToDirection = { "minDotProductToDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation, minDotProductToDirection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::NewProp_minDotProductToDirection_MetaData), Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::NewProp_minDotProductToDirection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::NewProp_actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::NewProp_location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::NewProp_direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::NewProp_minDotProductToDirection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition,
		&NewStructOps,
		"VertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation",
		Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::PropPointers),
		sizeof(FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation),
		alignof(FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ>() == std::is_polymorphic<FVertexDetectPaintColorCondition>(), "USTRUCT FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ cannot be polymorphic unless super FVertexDetectPaintColorCondition is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IfAboveOrBelowWorldZ;
class UScriptStruct* FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IfAboveOrBelowWorldZ.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IfAboveOrBelowWorldZ.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectPaintColorCondition_IfAboveOrBelowWorldZ"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IfAboveOrBelowWorldZ.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ>()
{
	return FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ifVertexIsAboveOrBelowWorldZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ifVertexIsAboveOrBelowWorldZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_checkIfAboveInsteadOfBelowZ_MetaData[];
#endif
		static void NewProp_checkIfAboveInsteadOfBelowZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_checkIfAboveInsteadOfBelowZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Paint Color Condition - Is Above/Below World Z\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "Paint Color Condition - Is Above/Below World Z" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::NewProp_ifVertexIsAboveOrBelowWorldZ_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "The World Location Z value that we check if the Vertex Location Z is either equal/below, or if the bool is true, then it has to be equal/above." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::NewProp_ifVertexIsAboveOrBelowWorldZ = { "ifVertexIsAboveOrBelowWorldZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ, ifVertexIsAboveOrBelowWorldZ), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::NewProp_ifVertexIsAboveOrBelowWorldZ_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::NewProp_ifVertexIsAboveOrBelowWorldZ_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::NewProp_checkIfAboveInsteadOfBelowZ_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "If True then checks if the Vertex is Equal or Above the World Z height, instead of Equal or Below." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::NewProp_checkIfAboveInsteadOfBelowZ_SetBit(void* Obj)
	{
		((FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ*)Obj)->checkIfAboveInsteadOfBelowZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::NewProp_checkIfAboveInsteadOfBelowZ = { "checkIfAboveInsteadOfBelowZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ), &Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::NewProp_checkIfAboveInsteadOfBelowZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::NewProp_checkIfAboveInsteadOfBelowZ_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::NewProp_checkIfAboveInsteadOfBelowZ_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::NewProp_ifVertexIsAboveOrBelowWorldZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::NewProp_checkIfAboveInsteadOfBelowZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition,
		&NewStructOps,
		"VertexDetectPaintColorCondition_IfAboveOrBelowWorldZ",
		Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::PropPointers),
		sizeof(FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ),
		alignof(FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IfAboveOrBelowWorldZ.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IfAboveOrBelowWorldZ.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IfAboveOrBelowWorldZ.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVertexDetectPaintColorCondition_IsWithinColorRangeStruct>() == std::is_polymorphic<FVertexDetectPaintColorCondition>(), "USTRUCT FVertexDetectPaintColorCondition_IsWithinColorRangeStruct cannot be polymorphic unless super FVertexDetectPaintColorCondition is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IsWithinColorRangeStruct;
class UScriptStruct* FVertexDetectPaintColorCondition_IsWithinColorRangeStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IsWithinColorRangeStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IsWithinColorRangeStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectPaintColorCondition_IsWithinColorRangeStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IsWithinColorRangeStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectPaintColorCondition_IsWithinColorRangeStruct>()
{
	return FVertexDetectPaintColorCondition_IsWithinColorRangeStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ifChannelWithPhysicsSurfaceIsWithinColorRange_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ifChannelWithPhysicsSurfaceIsWithinColorRange;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ifVertexColorChannelWithinColorRange_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ifVertexColorChannelWithinColorRange_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ifVertexColorChannelWithinColorRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ifCurrentVertexColorValueIsHigherOrEqualThan_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ifCurrentVertexColorValueIsHigherOrEqualThan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ifCurrentVertexColorValueIsLessOrEqualThan_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ifCurrentVertexColorValueIsLessOrEqualThan;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Paint Color Condition - Is Within Color Range\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "Paint Color Condition - Is Within Color Range" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectPaintColorCondition_IsWithinColorRangeStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewProp_ifChannelWithPhysicsSurfaceIsWithinColorRange_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "If this is set to something other then Default, then we will for each Section/Material the Mesh is using, check if it's registered in the Editor Widget and what Physics Surface is set on each channel, then do the Within Color Range for whatever Channel that is. Very useful if several Materials might not be synched with eachother and have something like Puddle on different channels, so you don't have to remember which channel it's on." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewProp_ifChannelWithPhysicsSurfaceIsWithinColorRange = { "ifChannelWithPhysicsSurfaceIsWithinColorRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintColorCondition_IsWithinColorRangeStruct, ifChannelWithPhysicsSurfaceIsWithinColorRange), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewProp_ifChannelWithPhysicsSurfaceIsWithinColorRange_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewProp_ifChannelWithPhysicsSurfaceIsWithinColorRange_MetaData) }; // 2508321301
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewProp_ifVertexColorChannelWithinColorRange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewProp_ifVertexColorChannelWithinColorRange_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "If physicsSurfaceWithinColorRange is Default, then we will use this Color Channel is a certain Range. Gives the Developer more control of when paint is applied. Can for instance be used to Mask out Areas where you don't want it to be applied, like if it's Raining and you don't want the underside of Rooftops to get wet, then you can paint them with a channel the material isn't using, and have a condition that the channel has to be at 0 for the Wetness to be applied." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewProp_ifVertexColorChannelWithinColorRange = { "ifVertexColorChannelWithinColorRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintColorCondition_IsWithinColorRangeStruct, ifVertexColorChannelWithinColorRange), Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_SurfaceAtChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewProp_ifVertexColorChannelWithinColorRange_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewProp_ifVertexColorChannelWithinColorRange_MetaData) }; // 2259707496
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewProp_ifCurrentVertexColorValueIsHigherOrEqualThan_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "If Current Vertex Color is >= than this. Gives the Developer more control of when paint is applied. Can for instance be used to Mask out Areas where you don't want it to be applied, like if it's Raining and you don't want the underside of Rooftops to get wet, then you can paint them with a channel the material isn't using, and have a condition that the channel has to be at 0 for the Wetness to be applied." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewProp_ifCurrentVertexColorValueIsHigherOrEqualThan = { "ifCurrentVertexColorValueIsHigherOrEqualThan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintColorCondition_IsWithinColorRangeStruct, ifCurrentVertexColorValueIsHigherOrEqualThan), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewProp_ifCurrentVertexColorValueIsHigherOrEqualThan_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewProp_ifCurrentVertexColorValueIsHigherOrEqualThan_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewProp_ifCurrentVertexColorValueIsLessOrEqualThan_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "If Current Vertex Color is <= than this. Gives the Developer more control of when paint is applied. Can for instance be used to Mask out Areas where you don't want it to be applied, like if it's Raining and you don't want the underside of Rooftops to get wet, then you can paint them with a channel the material isn't using, and have a condition that the channel has to be at 0 for the Wetness to be applied." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewProp_ifCurrentVertexColorValueIsLessOrEqualThan = { "ifCurrentVertexColorValueIsLessOrEqualThan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintColorCondition_IsWithinColorRangeStruct, ifCurrentVertexColorValueIsLessOrEqualThan), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewProp_ifCurrentVertexColorValueIsLessOrEqualThan_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewProp_ifCurrentVertexColorValueIsLessOrEqualThan_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewProp_ifChannelWithPhysicsSurfaceIsWithinColorRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewProp_ifVertexColorChannelWithinColorRange_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewProp_ifVertexColorChannelWithinColorRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewProp_ifCurrentVertexColorValueIsHigherOrEqualThan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewProp_ifCurrentVertexColorValueIsLessOrEqualThan,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition,
		&NewStructOps,
		"VertexDetectPaintColorCondition_IsWithinColorRangeStruct",
		Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::PropPointers),
		sizeof(FVertexDetectPaintColorCondition_IsWithinColorRangeStruct),
		alignof(FVertexDetectPaintColorCondition_IsWithinColorRangeStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IsWithinColorRangeStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IsWithinColorRangeStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IsWithinColorRangeStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVertexDetectPaintColorCondition_IsBoneStruct>() == std::is_polymorphic<FVertexDetectPaintColorCondition>(), "USTRUCT FVertexDetectPaintColorCondition_IsBoneStruct cannot be polymorphic unless super FVertexDetectPaintColorCondition is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IsBoneStruct;
class UScriptStruct* FVertexDetectPaintColorCondition_IsBoneStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IsBoneStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IsBoneStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectPaintColorCondition_IsBoneStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IsBoneStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectPaintColorCondition_IsBoneStruct>()
{
	return FVertexDetectPaintColorCondition_IsBoneStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ifVertexIsAtBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ifVertexIsAtBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minBoneWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minBoneWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Paint Color Condition - Is Bone\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "Paint Color Condition - Is Bone" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectPaintColorCondition_IsBoneStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct_Statics::NewProp_ifVertexIsAtBone_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "If Painting on Skeletal Mesh then can set to only Paint on specific Bone. If Static Mesh then we won't run this condition. Useful if you for instance have a Boss Fight and you should be able to Freeze exposed parts which could be just an Arm or a Leg etc." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct_Statics::NewProp_ifVertexIsAtBone = { "ifVertexIsAtBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintColorCondition_IsBoneStruct, ifVertexIsAtBone), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct_Statics::NewProp_ifVertexIsAtBone_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct_Statics::NewProp_ifVertexIsAtBone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct_Statics::NewProp_minBoneWeight_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "The Min Amount of Bone Weight Required. If 0 then will always apply, but can be increase to for instance 0.5 if you don't want to affect any below that." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct_Statics::NewProp_minBoneWeight = { "minBoneWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintColorCondition_IsBoneStruct, minBoneWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct_Statics::NewProp_minBoneWeight_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct_Statics::NewProp_minBoneWeight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct_Statics::NewProp_ifVertexIsAtBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct_Statics::NewProp_minBoneWeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition,
		&NewStructOps,
		"VertexDetectPaintColorCondition_IsBoneStruct",
		Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct_Statics::PropPointers),
		sizeof(FVertexDetectPaintColorCondition_IsBoneStruct),
		alignof(FVertexDetectPaintColorCondition_IsBoneStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IsBoneStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IsBoneStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IsBoneStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVertexDetectPaintColorCondition_HasLineOfSightStruct>() == std::is_polymorphic<FVertexDetectPaintColorCondition>(), "USTRUCT FVertexDetectPaintColorCondition_HasLineOfSightStruct cannot be polymorphic unless super FVertexDetectPaintColorCondition is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_HasLineOfSightStruct;
class UScriptStruct* FVertexDetectPaintColorCondition_HasLineOfSightStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_HasLineOfSightStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_HasLineOfSightStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectPaintColorCondition_HasLineOfSightStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_HasLineOfSightStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectPaintColorCondition_HasLineOfSightStruct>()
{
	return FVertexDetectPaintColorCondition_HasLineOfSightStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ifVertexHasLineOfSightToActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ifVertexHasLineOfSightToActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ifVertexHasLineOfSightToPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ifVertexHasLineOfSightToPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_distanceFromVertexPositionToStartTrace_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distanceFromVertexPositionToStartTrace;
		static const UECodeGen_Private::FBytePropertyParams NewProp_checkLineOfSightAgainstObjectTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_checkLineOfSightAgainstObjectTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_checkLineOfSightAgainstObjectTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_traceForComplex_MetaData[];
#endif
		static void NewProp_traceForComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_traceForComplex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ignoreMeshActorTryingToApplyPaintOn_MetaData[];
#endif
		static void NewProp_ignoreMeshActorTryingToApplyPaintOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ignoreMeshActorTryingToApplyPaintOn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_lineOfSightTraceActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lineOfSightTraceActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_lineOfSightTraceActorsToIgnore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Paint Color Condition - Has Line Of Sight\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "Paint Color Condition - Has Line Of Sight" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectPaintColorCondition_HasLineOfSightStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_ifVertexHasLineOfSightToActor_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "If Set to an Actor then will use this Actors Location at Task Creation." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_ifVertexHasLineOfSightToActor = { "ifVertexHasLineOfSightToActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintColorCondition_HasLineOfSightStruct, ifVertexHasLineOfSightToActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_ifVertexHasLineOfSightToActor_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_ifVertexHasLineOfSightToActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_ifVertexHasLineOfSightToPosition_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "If not set to use Line of Sight to Actor, then will use this." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_ifVertexHasLineOfSightToPosition = { "ifVertexHasLineOfSightToPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintColorCondition_HasLineOfSightStruct, ifVertexHasLineOfSightToPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_ifVertexHasLineOfSightToPosition_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_ifVertexHasLineOfSightToPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_distanceFromVertexPositionToStartTrace_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "How far out from the vertex position we start the Trace toward the Position / Actor Location. If the Mesh Component you're trying to paint has collision that completely covers the Mesh and the Vertices, then this can be increased so you start tracing outside of that collision and doesn't hit itself. \nYou can also choose to ignore the Actor you're trying to paint, but then you may not get the desired result if the Position / Actor Location is on one side of the mesh component, and you expect only the vertices on that side of the mesh component to get painted. If ignoring then even the verts on the otherside will get painted since it can't hit itself." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_distanceFromVertexPositionToStartTrace = { "distanceFromVertexPositionToStartTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintColorCondition_HasLineOfSightStruct, distanceFromVertexPositionToStartTrace), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_distanceFromVertexPositionToStartTrace_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_distanceFromVertexPositionToStartTrace_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_checkLineOfSightAgainstObjectTypes_Inner = { "checkLineOfSightAgainstObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_checkLineOfSightAgainstObjectTypes_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "Object Types to Trace if we have Line of Sight." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_checkLineOfSightAgainstObjectTypes = { "checkLineOfSightAgainstObjectTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintColorCondition_HasLineOfSightStruct, checkLineOfSightAgainstObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_checkLineOfSightAgainstObjectTypes_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_checkLineOfSightAgainstObjectTypes_MetaData) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_traceForComplex_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "This can be very useful in case you have something in which it's simple collision isn't 100%, for example a if you only want to paint on something that has line of sight to a Light, and you run this to a location inside of a Lamp Shade, but the Lamp Shades collision has small gaps in it (which can occur easily if trying to build the collision using the editors solution). Then if this is true it will trace to the actual mesh and not the simple collision in it." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_traceForComplex_SetBit(void* Obj)
	{
		((FVertexDetectPaintColorCondition_HasLineOfSightStruct*)Obj)->traceForComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_traceForComplex = { "traceForComplex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectPaintColorCondition_HasLineOfSightStruct), &Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_traceForComplex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_traceForComplex_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_traceForComplex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_ignoreMeshActorTryingToApplyPaintOn_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "If we should ignore the Actor we're trying to paint, useful if the location you want to check for may be on the other side of the mesh component and you don't want it to hit itself" },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_ignoreMeshActorTryingToApplyPaintOn_SetBit(void* Obj)
	{
		((FVertexDetectPaintColorCondition_HasLineOfSightStruct*)Obj)->ignoreMeshActorTryingToApplyPaintOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_ignoreMeshActorTryingToApplyPaintOn = { "ignoreMeshActorTryingToApplyPaintOn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectPaintColorCondition_HasLineOfSightStruct), &Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_ignoreMeshActorTryingToApplyPaintOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_ignoreMeshActorTryingToApplyPaintOn_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_ignoreMeshActorTryingToApplyPaintOn_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_lineOfSightTraceActorsToIgnore_Inner = { "lineOfSightTraceActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_lineOfSightTraceActorsToIgnore_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_lineOfSightTraceActorsToIgnore = { "lineOfSightTraceActorsToIgnore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintColorCondition_HasLineOfSightStruct, lineOfSightTraceActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_lineOfSightTraceActorsToIgnore_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_lineOfSightTraceActorsToIgnore_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_ifVertexHasLineOfSightToActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_ifVertexHasLineOfSightToPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_distanceFromVertexPositionToStartTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_checkLineOfSightAgainstObjectTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_checkLineOfSightAgainstObjectTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_traceForComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_ignoreMeshActorTryingToApplyPaintOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_lineOfSightTraceActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewProp_lineOfSightTraceActorsToIgnore,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition,
		&NewStructOps,
		"VertexDetectPaintColorCondition_HasLineOfSightStruct",
		Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::PropPointers),
		sizeof(FVertexDetectPaintColorCondition_HasLineOfSightStruct),
		alignof(FVertexDetectPaintColorCondition_HasLineOfSightStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_HasLineOfSightStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_HasLineOfSightStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_HasLineOfSightStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectPaintColorConditionStruct;
class UScriptStruct* FVertexDetectPaintColorConditionStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectPaintColorConditionStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectPaintColorConditionStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectPaintColorConditionStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectPaintColorConditionStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectPaintColorConditionStruct>()
{
	return FVertexDetectPaintColorConditionStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_onlyAffectVerticesWithDirectionToActorOrLocation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onlyAffectVerticesWithDirectionToActorOrLocation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_onlyAffectVerticesWithDirectionToActorOrLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_onlyAffectVerticesWithinDirectionFromActorOrLocation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onlyAffectVerticesWithinDirectionFromActorOrLocation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_onlyAffectVerticesWithinDirectionFromActorOrLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ifVertexIsAboveOrBelowWorldZ_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ifVertexIsAboveOrBelowWorldZ_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ifVertexIsAboveOrBelowWorldZ;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ifVertexColorIsWithinRange_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ifVertexColorIsWithinRange_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ifVertexColorIsWithinRange;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ifVertexIsOnBone_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ifVertexIsOnBone_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ifVertexIsOnBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ifVertexHasLineOfSightTo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ifVertexHasLineOfSightTo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ifVertexHasLineOfSightTo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Paint Color Condition\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "Paint Color Condition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectPaintColorConditionStruct>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_onlyAffectVerticesWithDirectionToActorOrLocation_Inner = { "onlyAffectVerticesWithDirectionToActorOrLocation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation, METADATA_PARAMS(0, nullptr) }; // 2031990328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_onlyAffectVerticesWithDirectionToActorOrLocation_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "Vertices with their Normal above a Min Dot toward an Actor or Location. \nMay be useful if you need a fast way to get control over on what side of a mesh to paint, like if you have a hose that is spraying water on a character, but you only want the part of the character that is facing the hose to get affected and not the backside. There is also an a Paint Condition with Line of Sight to an Actor and Location, the difference between that and this, is that it will trace and see if something is blocking, which will make the task take longer, where as this only does the dot check and is much faster." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_onlyAffectVerticesWithDirectionToActorOrLocation = { "onlyAffectVerticesWithDirectionToActorOrLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintColorConditionStruct, onlyAffectVerticesWithDirectionToActorOrLocation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_onlyAffectVerticesWithDirectionToActorOrLocation_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_onlyAffectVerticesWithDirectionToActorOrLocation_MetaData) }; // 2031990328
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_onlyAffectVerticesWithinDirectionFromActorOrLocation_Inner = { "onlyAffectVerticesWithinDirectionFromActorOrLocation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation, METADATA_PARAMS(0, nullptr) }; // 3032637484
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_onlyAffectVerticesWithinDirectionFromActorOrLocation_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "Vertices within a certain Direction's Dot. I.e. we get the Direction from the Location/Actor we set here, to each vertex location, and check that, with the Direction we set here, which could for instance be the direction of a Mesh like a downward direction of a cone, if you want to check if a vertex is within the cone direction. \nDepending on the use case you should tweak the dot product as well which should be from -1 to 1. With the cone example, the wider the cone, the closer to 0 we would want the min dot product, if it's very thin then closer to 1. \nUsed for instance in the Example Project to make a cheap Paint Within Area with Cone Example using Paint Within Area with Sphere Shape, and by utilizing this, we get the affect as if it was a cone." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_onlyAffectVerticesWithinDirectionFromActorOrLocation = { "onlyAffectVerticesWithinDirectionFromActorOrLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintColorConditionStruct, onlyAffectVerticesWithinDirectionFromActorOrLocation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_onlyAffectVerticesWithinDirectionFromActorOrLocation_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_onlyAffectVerticesWithinDirectionFromActorOrLocation_MetaData) }; // 3032637484
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexIsAboveOrBelowWorldZ_Inner = { "ifVertexIsAboveOrBelowWorldZ", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ, METADATA_PARAMS(0, nullptr) }; // 1853451081
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexIsAboveOrBelowWorldZ_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "If Vertex Location Z has to be Equal or Above, or Equal and below the given Z height for it to be painted." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexIsAboveOrBelowWorldZ = { "ifVertexIsAboveOrBelowWorldZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintColorConditionStruct, ifVertexIsAboveOrBelowWorldZ), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexIsAboveOrBelowWorldZ_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexIsAboveOrBelowWorldZ_MetaData) }; // 1853451081
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexColorIsWithinRange_Inner = { "ifVertexColorIsWithinRange", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct, METADATA_PARAMS(0, nullptr) }; // 3156902327
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexColorIsWithinRange_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "If Physics Surface or Color Channel is a certain Range. Gives the Developer more control of when paint is applied. Can for instance be used to Mask out Areas where you don't want it to be applied, like if it's Raining and you don't want the underside of Rooftops to get wet, then you can paint them with a channel the material isn't using, and have a condition that the channel has to be at 0 for the Wetness to be applied." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexColorIsWithinRange = { "ifVertexColorIsWithinRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintColorConditionStruct, ifVertexColorIsWithinRange), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexColorIsWithinRange_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexColorIsWithinRange_MetaData) }; // 3156902327
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexIsOnBone_Inner = { "ifVertexIsOnBone", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct, METADATA_PARAMS(0, nullptr) }; // 1151756207
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexIsOnBone_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "If Painting on Skeletal Mesh then can set to only Paint on specific Bone. Useful if you for instance have a Boss Fight and you should be able to Freeze exposed parts which could be just an Arm or a Leg etc." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexIsOnBone = { "ifVertexIsOnBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintColorConditionStruct, ifVertexIsOnBone), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexIsOnBone_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexIsOnBone_MetaData) }; // 1151756207
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexHasLineOfSightTo_Inner = { "ifVertexHasLineOfSightTo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct, METADATA_PARAMS(0, nullptr) }; // 3618246003
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexHasLineOfSightTo_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintConditionsPrerequisites.h" },
		{ "ToolTip", "If Vertex has Line of Sight to something, for instance the Sun, then only Apply/Remove Colors then. Useful if you for instance only want to Dry a Mesh where the Sun is actually hitting the Mesh. \nThis will Trace to check if it has line of sight, so may make the Task take longer, especially if playing in the Editor." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexHasLineOfSightTo = { "ifVertexHasLineOfSightTo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintColorConditionStruct, ifVertexHasLineOfSightTo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexHasLineOfSightTo_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexHasLineOfSightTo_MetaData) }; // 3618246003
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_onlyAffectVerticesWithDirectionToActorOrLocation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_onlyAffectVerticesWithDirectionToActorOrLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_onlyAffectVerticesWithinDirectionFromActorOrLocation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_onlyAffectVerticesWithinDirectionFromActorOrLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexIsAboveOrBelowWorldZ_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexIsAboveOrBelowWorldZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexColorIsWithinRange_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexColorIsWithinRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexIsOnBone_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexIsOnBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexHasLineOfSightTo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewProp_ifVertexHasLineOfSightTo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectPaintColorConditionStruct",
		Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::PropPointers),
		sizeof(FVertexDetectPaintColorConditionStruct),
		alignof(FVertexDetectPaintColorConditionStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectPaintColorConditionStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectPaintColorConditionStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectPaintColorConditionStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintConditionsPrerequisites_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintConditionsPrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FVertexDetectPaintColorCondition::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_Statics::NewStructOps, TEXT("VertexDetectPaintColorCondition"), &Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectPaintColorCondition), 3498486400U) },
		{ FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation_Statics::NewStructOps, TEXT("VertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation"), &Z_Registration_Info_UScriptStruct_VertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation), 2031990328U) },
		{ FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation_Statics::NewStructOps, TEXT("VertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation"), &Z_Registration_Info_UScriptStruct_VertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintOnlyAffectVerticesWithinDirectionFromActorOrLocation), 3032637484U) },
		{ FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ_Statics::NewStructOps, TEXT("VertexDetectPaintColorCondition_IfAboveOrBelowWorldZ"), &Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IfAboveOrBelowWorldZ, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectPaintColorCondition_IfAboveOrBelowWorldZ), 1853451081U) },
		{ FVertexDetectPaintColorCondition_IsWithinColorRangeStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsWithinColorRangeStruct_Statics::NewStructOps, TEXT("VertexDetectPaintColorCondition_IsWithinColorRangeStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IsWithinColorRangeStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectPaintColorCondition_IsWithinColorRangeStruct), 3156902327U) },
		{ FVertexDetectPaintColorCondition_IsBoneStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_IsBoneStruct_Statics::NewStructOps, TEXT("VertexDetectPaintColorCondition_IsBoneStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_IsBoneStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectPaintColorCondition_IsBoneStruct), 1151756207U) },
		{ FVertexDetectPaintColorCondition_HasLineOfSightStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectPaintColorCondition_HasLineOfSightStruct_Statics::NewStructOps, TEXT("VertexDetectPaintColorCondition_HasLineOfSightStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectPaintColorCondition_HasLineOfSightStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectPaintColorCondition_HasLineOfSightStruct), 3618246003U) },
		{ FVertexDetectPaintColorConditionStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectPaintColorConditionStruct_Statics::NewStructOps, TEXT("VertexDetectPaintColorConditionStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectPaintColorConditionStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectPaintColorConditionStruct), 1244830346U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintConditionsPrerequisites_h_3454029852(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintConditionsPrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintConditionsPrerequisites_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
