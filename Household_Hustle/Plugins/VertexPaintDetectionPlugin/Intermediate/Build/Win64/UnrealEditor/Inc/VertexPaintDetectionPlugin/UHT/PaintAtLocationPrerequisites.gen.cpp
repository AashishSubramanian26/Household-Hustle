// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/PaintAtLocationPrerequisites.h"
#include "../Prerequisites/FundementalsPrerequisites.h"
#include "../Prerequisites/HitLocationPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaintAtLocationPrerequisites() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintAtLocationFallOffType();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectFallOffSettings();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVertexPaintAtLocationFallOffType;
	static UEnum* EVertexPaintAtLocationFallOffType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVertexPaintAtLocationFallOffType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVertexPaintAtLocationFallOffType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintAtLocationFallOffType, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("EVertexPaintAtLocationFallOffType"));
		}
		return Z_Registration_Info_UEnum_EVertexPaintAtLocationFallOffType.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UEnum* StaticEnum<EVertexPaintAtLocationFallOffType>()
	{
		return EVertexPaintAtLocationFallOffType_StaticEnum();
	}
	struct Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintAtLocationFallOffType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintAtLocationFallOffType_Statics::Enumerators[] = {
		{ "EVertexPaintAtLocationFallOffType::OutwardFallOff", (int64)EVertexPaintAtLocationFallOffType::OutwardFallOff },
		{ "EVertexPaintAtLocationFallOffType::InwardFallOff", (int64)EVertexPaintAtLocationFallOffType::InwardFallOff },
		{ "EVertexPaintAtLocationFallOffType::SphericalFallOff", (int64)EVertexPaintAtLocationFallOffType::SphericalFallOff },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintAtLocationFallOffType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Paint At Location Falloff Type\n" },
		{ "InwardFallOff.DisplayName", "Inward Fall Off" },
		{ "InwardFallOff.Name", "EVertexPaintAtLocationFallOffType::InwardFallOff" },
		{ "InwardFallOff.Tooltip", "Fall Off Inwardly, Gets Weaker Toward the Min AoE and Stronger toward the Max AoE, from distanceToBaseFallOffFrom. " },
		{ "ModuleRelativePath", "Prerequisites/PaintAtLocationPrerequisites.h" },
		{ "OutwardFallOff.DisplayName", "Outward Fall Off" },
		{ "OutwardFallOff.Name", "EVertexPaintAtLocationFallOffType::OutwardFallOff" },
		{ "OutwardFallOff.Tooltip", "Fall Off Outwardly, Gets Weaker Toward the Max AoE and Stronger toward the Min AoE, from distanceToBaseFallOffFrom. This will most likely be the most common in many cases. " },
		{ "SphericalFallOff.DisplayName", "Spherical Fall Off" },
		{ "SphericalFallOff.Name", "EVertexPaintAtLocationFallOffType::SphericalFallOff" },
		{ "SphericalFallOff.Tooltip", "Fall Offs evenly In and Outwards to all directions. For instance if you change the distanceToBaseFallOffFrom to be Between the Min and Max AoE, then it will be stronger there, and weaker out toward Min and Max range. " },
		{ "ToolTip", "Paint At Location Falloff Type" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintAtLocationFallOffType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		"EVertexPaintAtLocationFallOffType",
		"EVertexPaintAtLocationFallOffType",
		Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintAtLocationFallOffType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintAtLocationFallOffType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintAtLocationFallOffType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintAtLocationFallOffType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintAtLocationFallOffType()
	{
		if (!Z_Registration_Info_UEnum_EVertexPaintAtLocationFallOffType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVertexPaintAtLocationFallOffType.InnerSingleton, Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintAtLocationFallOffType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVertexPaintAtLocationFallOffType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVertexDetectPaintAtLocationFallOffSettings>() == std::is_polymorphic<FVertexDetectFallOffSettings>(), "USTRUCT FVertexDetectPaintAtLocationFallOffSettings cannot be polymorphic unless super FVertexDetectFallOffSettings is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectPaintAtLocationFallOffSettings;
class UScriptStruct* FVertexDetectPaintAtLocationFallOffSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectPaintAtLocationFallOffSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectPaintAtLocationFallOffSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectPaintAtLocationFallOffSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectPaintAtLocationFallOffSettings.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectPaintAtLocationFallOffSettings>()
{
	return FVertexDetectPaintAtLocationFallOffSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_paintAtLocationFallOffType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintAtLocationFallOffType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_paintAtLocationFallOffType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Paint at Location FallOff Settings\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintAtLocationPrerequisites.h" },
		{ "ToolTip", "Paint at Location FallOff Settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectPaintAtLocationFallOffSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings_Statics::NewProp_paintAtLocationFallOffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings_Statics::NewProp_paintAtLocationFallOffType_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintAtLocationPrerequisites.h" },
		{ "ToolTip", "Which type of FallOff we should use. The Default is the most common use case. Hover over each of them to get more info of what they do." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings_Statics::NewProp_paintAtLocationFallOffType = { "paintAtLocationFallOffType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintAtLocationFallOffSettings, paintAtLocationFallOffType), Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintAtLocationFallOffType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings_Statics::NewProp_paintAtLocationFallOffType_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings_Statics::NewProp_paintAtLocationFallOffType_MetaData) }; // 136706612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings_Statics::NewProp_paintAtLocationFallOffType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings_Statics::NewProp_paintAtLocationFallOffType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexDetectFallOffSettings,
		&NewStructOps,
		"VertexDetectPaintAtLocationFallOffSettings",
		Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings_Statics::PropPointers),
		sizeof(FVertexDetectPaintAtLocationFallOffSettings),
		alignof(FVertexDetectPaintAtLocationFallOffSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectPaintAtLocationFallOffSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectPaintAtLocationFallOffSettings.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectPaintAtLocationFallOffSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectPaintAtLocationAreaSettings;
class UScriptStruct* FVertexDetectPaintAtLocationAreaSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectPaintAtLocationAreaSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectPaintAtLocationAreaSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectPaintAtLocationAreaSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectPaintAtLocationAreaSettings.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectPaintAtLocationAreaSettings>()
{
	return FVertexDetectPaintAtLocationAreaSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_areaOfEffectRangeStart_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_areaOfEffectRangeStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_areaOfEffectRangeEnd_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_areaOfEffectRangeEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fallOffSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_fallOffSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexNormalToHitNormal_MinimumDotProductToGetPainted_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexNormalToHitNormal_MinimumDotProductToGetPainted_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexNormalToHitNormal_MinimumDotProductToGetPainted_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexNormalToHitNormal_MinimumDotProductToGetPainted_SkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Paint at Location Area Settings\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintAtLocationPrerequisites.h" },
		{ "ToolTip", "Paint at Location Area Settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectPaintAtLocationAreaSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_areaOfEffectRangeStart_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintAtLocationPrerequisites.h" },
		{ "ToolTip", "Area of Effect Range to Start at. Doesn't have to be 0, can for example be 100 if the max is for example 200 if you want to paint a Hollow circle." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_areaOfEffectRangeStart = { "areaOfEffectRangeStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintAtLocationAreaSettings, areaOfEffectRangeStart), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_areaOfEffectRangeStart_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_areaOfEffectRangeStart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_areaOfEffectRangeEnd_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintAtLocationPrerequisites.h" },
		{ "ToolTip", "Area of Effect Range to End at" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_areaOfEffectRangeEnd = { "areaOfEffectRangeEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintAtLocationAreaSettings, areaOfEffectRangeEnd), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_areaOfEffectRangeEnd_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_areaOfEffectRangeEnd_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_fallOffSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintAtLocationPrerequisites.h" },
		{ "ToolTip", "Falloff Settings such as strength, distance to base it on, and type of FallOff we should use. The Default is the most common use case. Hover over each of them to get more info of what they do." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_fallOffSettings = { "fallOffSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintAtLocationAreaSettings, fallOffSettings), Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_fallOffSettings_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_fallOffSettings_MetaData) }; // 3276590851
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_VertexNormalToHitNormal_MinimumDotProductToGetPainted_StaticMesh_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintAtLocationPrerequisites.h" },
		{ "ToolTip", "If the Vertex Normal and Hit Normal Dot is Min this then apply colors. Great if you for instance have a Snow Storm and you only want one side of a House or something to get Painted with Snow as the Particles hits it. \nIf 1, then only the vertices on the same side of the Hit Normal get affected, so if it's a wall only the same wall. With -0.1 the vertices around Corners can get painted as well, with -1 to Paint all Vertices within the Area of effect gets painted. Note that this means Paint can become applied on the other side of a wall as well which may be undesirable." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_VertexNormalToHitNormal_MinimumDotProductToGetPainted_StaticMesh = { "VertexNormalToHitNormal_MinimumDotProductToGetPainted_StaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintAtLocationAreaSettings, VertexNormalToHitNormal_MinimumDotProductToGetPainted_StaticMesh), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_VertexNormalToHitNormal_MinimumDotProductToGetPainted_StaticMesh_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_VertexNormalToHitNormal_MinimumDotProductToGetPainted_StaticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_VertexNormalToHitNormal_MinimumDotProductToGetPainted_SkeletalMesh_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintAtLocationPrerequisites.h" },
		{ "ToolTip", "If the Vertex Normal and Hit Normal Dot is Min this then apply colors. Great if you for instance have a Snow Storm and you only want one side of a House or something to get Painted with Snow as the Particles hits it. \nIf 1, then only the vertices on the same side of the Hit Normal get affected, so if it's a wall only the same wall. With -0.1 the vertices around Corners can get painted as well, with -1 to Paint all Vertices within the Area of effect gets painted. Note that this means Paint can become applied on the other side of a wall as well which may be undesirable." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_VertexNormalToHitNormal_MinimumDotProductToGetPainted_SkeletalMesh = { "VertexNormalToHitNormal_MinimumDotProductToGetPainted_SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintAtLocationAreaSettings, VertexNormalToHitNormal_MinimumDotProductToGetPainted_SkeletalMesh), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_VertexNormalToHitNormal_MinimumDotProductToGetPainted_SkeletalMesh_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_VertexNormalToHitNormal_MinimumDotProductToGetPainted_SkeletalMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_areaOfEffectRangeStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_areaOfEffectRangeEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_fallOffSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_VertexNormalToHitNormal_MinimumDotProductToGetPainted_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewProp_VertexNormalToHitNormal_MinimumDotProductToGetPainted_SkeletalMesh,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectPaintAtLocationAreaSettings",
		Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::PropPointers),
		sizeof(FVertexDetectPaintAtLocationAreaSettings),
		alignof(FVertexDetectPaintAtLocationAreaSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectPaintAtLocationAreaSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectPaintAtLocationAreaSettings.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectPaintAtLocationAreaSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectWhenPaintingSettings;
class UScriptStruct* FVertexDetectWhenPaintingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectWhenPaintingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectWhenPaintingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectWhenPaintingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectWhenPaintingSettings.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectWhenPaintingSettings>()
{
	return FVertexDetectWhenPaintingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runGetClosestVertexDataOnMeshBeforeApplyingPaint_MetaData[];
#endif
		static void NewProp_runGetClosestVertexDataOnMeshBeforeApplyingPaint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_runGetClosestVertexDataOnMeshBeforeApplyingPaint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runGetClosestVertexDataOnMeshAfterApplyingPaint_MetaData[];
#endif
		static void NewProp_runGetClosestVertexDataOnMeshAfterApplyingPaint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_runGetClosestVertexDataOnMeshAfterApplyingPaint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_getAverageColorInAreaSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_getAverageColorInAreaSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_useCustomHitFundementalsForDetection_MetaData[];
#endif
		static void NewProp_useCustomHitFundementalsForDetection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_useCustomHitFundementalsForDetection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_detectHitFundementals_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_detectHitFundementals;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Detect When Painting\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintAtLocationPrerequisites.h" },
		{ "ToolTip", "Detect When Painting" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectWhenPaintingSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_runGetClosestVertexDataOnMeshBeforeApplyingPaint_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintAtLocationPrerequisites.h" },
		{ "ToolTip", "If we run Get Closest Vertex Data on Mesh and it's Event Before Painting. Useful if you for instance want to Run SFX based on the colors before we applied the Paint Job, like if a Rain Drop landed on a Dry Cap, so it's SFX could be that of the Dry Cap and not the Wet Cap, since it wasn't wet before the rain drop hit, but it got wet when it did." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_runGetClosestVertexDataOnMeshBeforeApplyingPaint_SetBit(void* Obj)
	{
		((FVertexDetectWhenPaintingSettings*)Obj)->runGetClosestVertexDataOnMeshBeforeApplyingPaint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_runGetClosestVertexDataOnMeshBeforeApplyingPaint = { "runGetClosestVertexDataOnMeshBeforeApplyingPaint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectWhenPaintingSettings), &Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_runGetClosestVertexDataOnMeshBeforeApplyingPaint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_runGetClosestVertexDataOnMeshBeforeApplyingPaint_MetaData), Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_runGetClosestVertexDataOnMeshBeforeApplyingPaint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_runGetClosestVertexDataOnMeshAfterApplyingPaint_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintAtLocationPrerequisites.h" },
		{ "ToolTip", "If we run Get Closest Vertex Data on Mesh and it's Event After Painting." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_runGetClosestVertexDataOnMeshAfterApplyingPaint_SetBit(void* Obj)
	{
		((FVertexDetectWhenPaintingSettings*)Obj)->runGetClosestVertexDataOnMeshAfterApplyingPaint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_runGetClosestVertexDataOnMeshAfterApplyingPaint = { "runGetClosestVertexDataOnMeshAfterApplyingPaint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectWhenPaintingSettings), &Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_runGetClosestVertexDataOnMeshAfterApplyingPaint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_runGetClosestVertexDataOnMeshAfterApplyingPaint_MetaData), Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_runGetClosestVertexDataOnMeshAfterApplyingPaint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_getAverageColorInAreaSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintAtLocationPrerequisites.h" },
		{ "ToolTip", "Can get the Average Color in an Area Range, which could be useful if you have for instance a Make-up game and want to see if the player has painted the majority of a characters cheek. Area Range has to be above 0 to get the average in that range." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_getAverageColorInAreaSettings = { "getAverageColorInAreaSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectWhenPaintingSettings, getAverageColorInAreaSettings), Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_getAverageColorInAreaSettings_MetaData), Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_getAverageColorInAreaSettings_MetaData) }; // 1635215642
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_useCustomHitFundementalsForDetection_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintAtLocationPrerequisites.h" },
		{ "ToolTip", "If false it will use the Paint at Location Hit Fundementals. If true will use the detect fundementals passed through here." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_useCustomHitFundementalsForDetection_SetBit(void* Obj)
	{
		((FVertexDetectWhenPaintingSettings*)Obj)->useCustomHitFundementalsForDetection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_useCustomHitFundementalsForDetection = { "useCustomHitFundementalsForDetection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectWhenPaintingSettings), &Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_useCustomHitFundementalsForDetection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_useCustomHitFundementalsForDetection_MetaData), Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_useCustomHitFundementalsForDetection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_detectHitFundementals_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintAtLocationPrerequisites.h" },
		{ "ToolTip", "By having a seperate detect hit, you can Paint on one location, but Detect on another location, within the same job. For instance if you have something dripping on a wall, and you want to detect ahead of where you want to paint, and depending on the result shrink/enlarge the drip." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_detectHitFundementals = { "detectHitFundementals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectWhenPaintingSettings, detectHitFundementals), Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_detectHitFundementals_MetaData), Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_detectHitFundementals_MetaData) }; // 2674751082
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_runGetClosestVertexDataOnMeshBeforeApplyingPaint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_runGetClosestVertexDataOnMeshAfterApplyingPaint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_getAverageColorInAreaSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_useCustomHitFundementalsForDetection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewProp_detectHitFundementals,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectWhenPaintingSettings",
		Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::PropPointers),
		sizeof(FVertexDetectWhenPaintingSettings),
		alignof(FVertexDetectWhenPaintingSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectWhenPaintingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectWhenPaintingSettings.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectWhenPaintingSettings.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVertexPaintAtLocationStruct>() == std::is_polymorphic<FVertexPaintColorSettingStruct>(), "USTRUCT FVertexPaintAtLocationStruct cannot be polymorphic unless super FVertexPaintColorSettingStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintAtLocationStruct;
class UScriptStruct* FVertexPaintAtLocationStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintAtLocationStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintAtLocationStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintAtLocationStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintAtLocationStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintAtLocationStruct>()
{
	return FVertexPaintAtLocationStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitFundementals_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_hitFundementals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintAtAreaSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintAtAreaSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_getEstimatedColorAtHitLocationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_getEstimatedColorAtHitLocationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_getClosestVertexDataCombo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_getClosestVertexDataCombo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Paint At Location\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintAtLocationPrerequisites.h" },
		{ "ToolTip", "Paint At Location" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintAtLocationStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::NewProp_hitFundementals_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintAtLocationPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::NewProp_hitFundementals = { "hitFundementals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintAtLocationStruct, hitFundementals), Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::NewProp_hitFundementals_MetaData), Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::NewProp_hitFundementals_MetaData) }; // 2674751082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::NewProp_paintAtAreaSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintAtLocationPrerequisites.h" },
		{ "ToolTip", "Area of Effect of the Paint Job" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::NewProp_paintAtAreaSettings = { "paintAtAreaSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintAtLocationStruct, paintAtAreaSettings), Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::NewProp_paintAtAreaSettings_MetaData), Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::NewProp_paintAtAreaSettings_MetaData) }; // 478858837
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::NewProp_getEstimatedColorAtHitLocationSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintAtLocationPrerequisites.h" },
		{ "ToolTip", "This will Return the color as close to the actual Hit Location as possible, which is very useful if you have Meshes with few vertices and you want to run SFX or VFX based on the Color of the Hit location and not the closest vertex color in case there is a diff, which it might have if the mesh have few vertices. \nThe task may take a bit longer to calculate if Mesh has alot of vertices, so you have the option to only get it if the Mesh has a Max Amount of Vertices." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::NewProp_getEstimatedColorAtHitLocationSettings = { "getEstimatedColorAtHitLocationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintAtLocationStruct, getEstimatedColorAtHitLocationSettings), Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::NewProp_getEstimatedColorAtHitLocationSettings_MetaData), Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::NewProp_getEstimatedColorAtHitLocationSettings_MetaData) }; // 4047601044
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::NewProp_getClosestVertexDataCombo_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintAtLocationPrerequisites.h" },
		{ "ToolTip", "If we should run Get Closest Vertex Data before and/or after Painting, useful if you for instance want to Run SFX before Painting, like if a Rain Drop landed on a Dry Cap, then the SFX of that should be that of a Dry Cap, then it should Paint it Wet. You can even run the Get Closest Vertex Data at a different hit location if you wish, so for instance if you have something dripping on a wall, and you want to detect ahead of where you want to paint, and depending on the result shrink/enlarge the drip." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::NewProp_getClosestVertexDataCombo = { "getClosestVertexDataCombo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintAtLocationStruct, getClosestVertexDataCombo), Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::NewProp_getClosestVertexDataCombo_MetaData), Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::NewProp_getClosestVertexDataCombo_MetaData) }; // 3638559154
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::NewProp_hitFundementals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::NewProp_paintAtAreaSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::NewProp_getEstimatedColorAtHitLocationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::NewProp_getClosestVertexDataCombo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexPaintColorSettingStruct,
		&NewStructOps,
		"VertexPaintAtLocationStruct",
		Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::PropPointers),
		sizeof(FVertexPaintAtLocationStruct),
		alignof(FVertexPaintAtLocationStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintAtLocationStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintAtLocationStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintAtLocationStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintAtLocationPrerequisites_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintAtLocationPrerequisites_h_Statics::EnumInfo[] = {
		{ EVertexPaintAtLocationFallOffType_StaticEnum, TEXT("EVertexPaintAtLocationFallOffType"), &Z_Registration_Info_UEnum_EVertexPaintAtLocationFallOffType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 136706612U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintAtLocationPrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FVertexDetectPaintAtLocationFallOffSettings::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationFallOffSettings_Statics::NewStructOps, TEXT("VertexDetectPaintAtLocationFallOffSettings"), &Z_Registration_Info_UScriptStruct_VertexDetectPaintAtLocationFallOffSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectPaintAtLocationFallOffSettings), 3276590851U) },
		{ FVertexDetectPaintAtLocationAreaSettings::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectPaintAtLocationAreaSettings_Statics::NewStructOps, TEXT("VertexDetectPaintAtLocationAreaSettings"), &Z_Registration_Info_UScriptStruct_VertexDetectPaintAtLocationAreaSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectPaintAtLocationAreaSettings), 478858837U) },
		{ FVertexDetectWhenPaintingSettings::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectWhenPaintingSettings_Statics::NewStructOps, TEXT("VertexDetectWhenPaintingSettings"), &Z_Registration_Info_UScriptStruct_VertexDetectWhenPaintingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectWhenPaintingSettings), 3638559154U) },
		{ FVertexPaintAtLocationStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct_Statics::NewStructOps, TEXT("VertexPaintAtLocationStruct"), &Z_Registration_Info_UScriptStruct_VertexPaintAtLocationStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintAtLocationStruct), 4077106337U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintAtLocationPrerequisites_h_2530522085(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintAtLocationPrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintAtLocationPrerequisites_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintAtLocationPrerequisites_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintAtLocationPrerequisites_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
