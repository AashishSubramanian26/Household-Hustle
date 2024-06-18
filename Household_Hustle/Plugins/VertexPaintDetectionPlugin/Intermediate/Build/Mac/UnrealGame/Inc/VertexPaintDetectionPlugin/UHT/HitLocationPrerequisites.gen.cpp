// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/HitLocationPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitLocationPrerequisites() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_SurfaceAtChannel();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectPhysicsSurfaceDataAtChannelStruct;
class UScriptStruct* FVertexDetectPhysicsSurfaceDataAtChannelStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectPhysicsSurfaceDataAtChannelStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectPhysicsSurfaceDataAtChannelStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectPhysicsSurfaceDataAtChannelStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectPhysicsSurfaceDataAtChannelStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectPhysicsSurfaceDataAtChannelStruct>()
{
	return FVertexDetectPhysicsSurfaceDataAtChannelStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_physicalSurfaceAtChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_physicalSurfaceAtChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_physicalSurfaceAsStringAtChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_physicalSurfaceAsStringAtChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_physicalSurfaceValueAtChannel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_physicalSurfaceValueAtChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Closest Vertex Physics Surface Data\n" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
		{ "ToolTip", "Closest Vertex Physics Surface Data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectPhysicsSurfaceDataAtChannelStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::NewProp_physicalSurfaceAtChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::NewProp_physicalSurfaceAtChannel = { "physicalSurfaceAtChannel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPhysicsSurfaceDataAtChannelStruct, physicalSurfaceAtChannel), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::NewProp_physicalSurfaceAtChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::NewProp_physicalSurfaceAtChannel_MetaData) }; // 2508321301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::NewProp_physicalSurfaceAsStringAtChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::NewProp_physicalSurfaceAsStringAtChannel = { "physicalSurfaceAsStringAtChannel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPhysicsSurfaceDataAtChannelStruct, physicalSurfaceAsStringAtChannel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::NewProp_physicalSurfaceAsStringAtChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::NewProp_physicalSurfaceAsStringAtChannel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::NewProp_physicalSurfaceValueAtChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::NewProp_physicalSurfaceValueAtChannel = { "physicalSurfaceValueAtChannel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPhysicsSurfaceDataAtChannelStruct, physicalSurfaceValueAtChannel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::NewProp_physicalSurfaceValueAtChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::NewProp_physicalSurfaceValueAtChannel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::NewProp_physicalSurfaceAtChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::NewProp_physicalSurfaceAsStringAtChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::NewProp_physicalSurfaceValueAtChannel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectPhysicsSurfaceDataAtChannelStruct",
		Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::PropPointers),
		sizeof(FVertexDetectPhysicsSurfaceDataAtChannelStruct),
		alignof(FVertexDetectPhysicsSurfaceDataAtChannelStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectPhysicsSurfaceDataAtChannelStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectPhysicsSurfaceDataAtChannelStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectPhysicsSurfaceDataAtChannelStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectMostDominantPhysicsSurfaceInfo;
class UScriptStruct* FVertexDetectMostDominantPhysicsSurfaceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectMostDominantPhysicsSurfaceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectMostDominantPhysicsSurfaceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectMostDominantPhysicsSurfaceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectMostDominantPhysicsSurfaceInfo.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectMostDominantPhysicsSurfaceInfo>()
{
	return FVertexDetectMostDominantPhysicsSurfaceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mostDominantPhysicsSurface_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_mostDominantPhysicsSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mostDominantPhysicsSurfaceAsString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_mostDominantPhysicsSurfaceAsString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mostDominantPhysicstSurfaceValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mostDominantPhysicstSurfaceValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_mostDominantPhysicsSurfaceAtVertexColorChannels_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_mostDominantPhysicsSurfaceAtVertexColorChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mostDominantPhysicsSurfaceAtVertexColorChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_mostDominantPhysicsSurfaceAtVertexColorChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Most Painted Surface \n" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
		{ "ToolTip", "Most Painted Surface" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectMostDominantPhysicsSurfaceInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicsSurface_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
		{ "ToolTip", "Which EPhysical Surface had the most Color Value. Based on what surfaces is registered in the Material Data Asset for RGBA" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicsSurface = { "mostDominantPhysicsSurface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectMostDominantPhysicsSurfaceInfo, mostDominantPhysicsSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicsSurface_MetaData), Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicsSurface_MetaData) }; // 2508321301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicsSurfaceAsString_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicsSurfaceAsString = { "mostDominantPhysicsSurfaceAsString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectMostDominantPhysicsSurfaceInfo, mostDominantPhysicsSurfaceAsString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicsSurfaceAsString_MetaData), Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicsSurfaceAsString_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicstSurfaceValue_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
		{ "ToolTip", "Amount that the most painted color had" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicstSurfaceValue = { "mostDominantPhysicstSurfaceValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectMostDominantPhysicsSurfaceInfo, mostDominantPhysicstSurfaceValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicstSurfaceValue_MetaData), Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicstSurfaceValue_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicsSurfaceAtVertexColorChannels_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicsSurfaceAtVertexColorChannels_Inner = { "mostDominantPhysicsSurfaceAtVertexColorChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_SurfaceAtChannel, METADATA_PARAMS(0, nullptr) }; // 2259707496
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicsSurfaceAtVertexColorChannels_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
		{ "ToolTip", "Which channel it was that had the most painted color, R, B, G or A. It can be multiple in case the Most Painted Surface was made up of blendade surfaces from different channels, then this will be from those channels" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicsSurfaceAtVertexColorChannels = { "mostDominantPhysicsSurfaceAtVertexColorChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectMostDominantPhysicsSurfaceInfo, mostDominantPhysicsSurfaceAtVertexColorChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicsSurfaceAtVertexColorChannels_MetaData), Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicsSurfaceAtVertexColorChannels_MetaData) }; // 2259707496
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicsSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicsSurfaceAsString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicstSurfaceValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicsSurfaceAtVertexColorChannels_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicsSurfaceAtVertexColorChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewProp_mostDominantPhysicsSurfaceAtVertexColorChannels,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectMostDominantPhysicsSurfaceInfo",
		Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::PropPointers),
		sizeof(FVertexDetectMostDominantPhysicsSurfaceInfo),
		alignof(FVertexDetectMostDominantPhysicsSurfaceInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectMostDominantPhysicsSurfaceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectMostDominantPhysicsSurfaceInfo.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectMostDominantPhysicsSurfaceInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectPhysicsSurfaceDataStruct;
class UScriptStruct* FVertexDetectPhysicsSurfaceDataStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectPhysicsSurfaceDataStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectPhysicsSurfaceDataStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectPhysicsSurfaceDataStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectPhysicsSurfaceDataStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectPhysicsSurfaceDataStruct>()
{
	return FVertexDetectPhysicsSurfaceDataStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_physicsSurfaceSuccessfullyAcquired_MetaData[];
#endif
		static void NewProp_physicsSurfaceSuccessfullyAcquired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_physicsSurfaceSuccessfullyAcquired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mostDominantPhysicsSurfaceInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_mostDominantPhysicsSurfaceInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_materialRegisteredToIncludeDefaultChannel_MetaData[];
#endif
		static void NewProp_materialRegisteredToIncludeDefaultChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_materialRegisteredToIncludeDefaultChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_physicsSurface_AtDefault_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_physicsSurface_AtDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_physicsSurface_AtRed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_physicsSurface_AtRed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_physicsSurface_AtGreen_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_physicsSurface_AtGreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_physicsSurface_AtBlue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_physicsSurface_AtBlue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_physicsSurface_AtAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_physicsSurface_AtAlpha;
		static const UECodeGen_Private::FBytePropertyParams NewProp_physicalSurfacesAsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_physicalSurfacesAsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_physicalSurfacesAsArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_surfacesAsStringArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_surfacesAsStringArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_surfacesAsStringArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_surfaceValuesArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_surfaceValuesArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_surfaceValuesArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Closest Physics Surface Data\n" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
		{ "ToolTip", "Closest Physics Surface Data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectPhysicsSurfaceDataStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurfaceSuccessfullyAcquired_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
		{ "ToolTip", "If we got the Physics Surface at Material" },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurfaceSuccessfullyAcquired_SetBit(void* Obj)
	{
		((FVertexDetectPhysicsSurfaceDataStruct*)Obj)->physicsSurfaceSuccessfullyAcquired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurfaceSuccessfullyAcquired = { "physicsSurfaceSuccessfullyAcquired", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectPhysicsSurfaceDataStruct), &Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurfaceSuccessfullyAcquired_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurfaceSuccessfullyAcquired_MetaData), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurfaceSuccessfullyAcquired_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_mostDominantPhysicsSurfaceInfo_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
		{ "ToolTip", "Information about the Most painted surface" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_mostDominantPhysicsSurfaceInfo = { "mostDominantPhysicsSurfaceInfo", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPhysicsSurfaceDataStruct, mostDominantPhysicsSurfaceInfo), Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_mostDominantPhysicsSurfaceInfo_MetaData), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_mostDominantPhysicsSurfaceInfo_MetaData) }; // 2353672735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_materialRegisteredToIncludeDefaultChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
		{ "ToolTip", "If the Material is registered in the Material Data Asset to Include Default Channel. The Default should be set to be the surface that is on the Material when no colors are painted, for example if Cobble is Default, and then you can paint grass and sand on top of it that blends into it then it should be included." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_materialRegisteredToIncludeDefaultChannel_SetBit(void* Obj)
	{
		((FVertexDetectPhysicsSurfaceDataStruct*)Obj)->materialRegisteredToIncludeDefaultChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_materialRegisteredToIncludeDefaultChannel = { "materialRegisteredToIncludeDefaultChannel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectPhysicsSurfaceDataStruct), &Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_materialRegisteredToIncludeDefaultChannel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_materialRegisteredToIncludeDefaultChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_materialRegisteredToIncludeDefaultChannel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtDefault_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtDefault = { "physicsSurface_AtDefault", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPhysicsSurfaceDataStruct, physicsSurface_AtDefault), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtDefault_MetaData), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtDefault_MetaData) }; // 1399182569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtRed_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtRed = { "physicsSurface_AtRed", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPhysicsSurfaceDataStruct, physicsSurface_AtRed), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtRed_MetaData), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtRed_MetaData) }; // 1399182569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtGreen_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtGreen = { "physicsSurface_AtGreen", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPhysicsSurfaceDataStruct, physicsSurface_AtGreen), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtGreen_MetaData), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtGreen_MetaData) }; // 1399182569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtBlue_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtBlue = { "physicsSurface_AtBlue", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPhysicsSurfaceDataStruct, physicsSurface_AtBlue), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtBlue_MetaData), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtBlue_MetaData) }; // 1399182569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtAlpha_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtAlpha = { "physicsSurface_AtAlpha", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPhysicsSurfaceDataStruct, physicsSurface_AtAlpha), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtAlpha_MetaData), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtAlpha_MetaData) }; // 1399182569
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicalSurfacesAsArray_Inner = { "physicalSurfacesAsArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicalSurfacesAsArray_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicalSurfacesAsArray = { "physicalSurfacesAsArray", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPhysicsSurfaceDataStruct, physicalSurfacesAsArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicalSurfacesAsArray_MetaData), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicalSurfacesAsArray_MetaData) }; // 2508321301
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_surfacesAsStringArray_Inner = { "surfacesAsStringArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_surfacesAsStringArray_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_surfacesAsStringArray = { "surfacesAsStringArray", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPhysicsSurfaceDataStruct, surfacesAsStringArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_surfacesAsStringArray_MetaData), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_surfacesAsStringArray_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_surfaceValuesArray_Inner = { "surfaceValuesArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_surfaceValuesArray_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_surfaceValuesArray = { "surfaceValuesArray", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPhysicsSurfaceDataStruct, surfaceValuesArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_surfaceValuesArray_MetaData), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_surfaceValuesArray_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurfaceSuccessfullyAcquired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_mostDominantPhysicsSurfaceInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_materialRegisteredToIncludeDefaultChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtRed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtGreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtBlue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicsSurface_AtAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicalSurfacesAsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_physicalSurfacesAsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_surfacesAsStringArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_surfacesAsStringArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_surfaceValuesArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewProp_surfaceValuesArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectPhysicsSurfaceDataStruct",
		Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::PropPointers),
		sizeof(FVertexDetectPhysicsSurfaceDataStruct),
		alignof(FVertexDetectPhysicsSurfaceDataStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectPhysicsSurfaceDataStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectPhysicsSurfaceDataStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectPhysicsSurfaceDataStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectAndPaintFundementalsStruct;
class UScriptStruct* FVertexDetectAndPaintFundementalsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectAndPaintFundementalsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectAndPaintFundementalsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectAndPaintFundementalsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectAndPaintFundementalsStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectAndPaintFundementalsStruct>()
{
	return FVertexDetectAndPaintFundementalsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_hitLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitLocationInComponentSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_hitLocationInComponentSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_hitNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_hitBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runTaskFor_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_runTaskFor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Hit Fundementals\n" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
		{ "ToolTip", "Hit Fundementals" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectAndPaintFundementalsStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_hitLocation_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
		{ "ToolTip", "Important to calculate the distance etc. from vertices to this location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_hitLocation = { "hitLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectAndPaintFundementalsStruct, hitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_hitLocation_MetaData), Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_hitLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_hitLocationInComponentSpace_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_hitLocationInComponentSpace = { "hitLocationInComponentSpace", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectAndPaintFundementalsStruct, hitLocationInComponentSpace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_hitLocationInComponentSpace_MetaData), Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_hitLocationInComponentSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_hitNormal_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
		{ "ToolTip", "Not necessary unless you're using VertexNormalToHitNormalMinimumDotProduct in the Area Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_hitNormal = { "hitNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectAndPaintFundementalsStruct, hitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_hitNormal_MetaData), Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_hitNormal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_hitBone_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
		{ "ToolTip", "Not necessary, but if running Get Closest Vertex Data on Skeletal Mesh and haven't set to include colors, position etc. in the callback settings, i.e. we don't need to loop through all of the vertices, then with the bone we can make sure we only loop through the vertices on that section so the task will finish faster." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_hitBone = { "hitBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectAndPaintFundementalsStruct, hitBone), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_hitBone_MetaData), Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_hitBone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_runTaskFor_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
		{ "ToolTip", "What it was Painted/Detected with, can be used when getting back the Result to do different things depending on what it was, for exampel Foot, Boot, Gunshot." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_runTaskFor = { "runTaskFor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectAndPaintFundementalsStruct, runTaskFor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_runTaskFor_MetaData), Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_runTaskFor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_hitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_hitLocationInComponentSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_hitNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_hitBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewProp_runTaskFor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectAndPaintFundementalsStruct",
		Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::PropPointers),
		sizeof(FVertexDetectAndPaintFundementalsStruct),
		alignof(FVertexDetectAndPaintFundementalsStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectAndPaintFundementalsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectAndPaintFundementalsStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectAndPaintFundementalsStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectEstimatedColorAtHitLocationResultStruct;
class UScriptStruct* FVertexDetectEstimatedColorAtHitLocationResultStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectEstimatedColorAtHitLocationResultStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectEstimatedColorAtHitLocationResultStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectEstimatedColorAtHitLocationResultStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectEstimatedColorAtHitLocationResultStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectEstimatedColorAtHitLocationResultStruct>()
{
	return FVertexDetectEstimatedColorAtHitLocationResultStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_estimatedColorAtHitLocationDataSuccessfullyAcquired_MetaData[];
#endif
		static void NewProp_estimatedColorAtHitLocationDataSuccessfullyAcquired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_estimatedColorAtHitLocationDataSuccessfullyAcquired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_estimatedColorAtHitLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_estimatedColorAtHitLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_physicalSurfaceInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_physicalSurfaceInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_worldSpaceLocationWeEstimatedTheColorAt_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_worldSpaceLocationWeEstimatedTheColorAt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Estimated Color at Hit Location Result\n" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
		{ "ToolTip", "Estimated Color at Hit Location Result" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectEstimatedColorAtHitLocationResultStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewProp_estimatedColorAtHitLocationDataSuccessfullyAcquired_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
		{ "ToolTip", "If we successfully got an estimated color close or at the Hit Location." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewProp_estimatedColorAtHitLocationDataSuccessfullyAcquired_SetBit(void* Obj)
	{
		((FVertexDetectEstimatedColorAtHitLocationResultStruct*)Obj)->estimatedColorAtHitLocationDataSuccessfullyAcquired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewProp_estimatedColorAtHitLocationDataSuccessfullyAcquired = { "estimatedColorAtHitLocationDataSuccessfullyAcquired", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectEstimatedColorAtHitLocationResultStruct), &Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewProp_estimatedColorAtHitLocationDataSuccessfullyAcquired_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewProp_estimatedColorAtHitLocationDataSuccessfullyAcquired_MetaData), Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewProp_estimatedColorAtHitLocationDataSuccessfullyAcquired_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewProp_estimatedColorAtHitLocation_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
		{ "ToolTip", "The Estimated Color Close or At Hit Location. Could be useful if you want to run SFX or VFX, and the mesh has few vertices. If you have alot of vertices and the hit location is often very close to the closest vertex then you might not need to use this. \nThe way we calculate this is by getting the direction from the closest vertex to the hit location, and the nearest vertices around the hit location. Then when finished looping through LOD0 and we have them all and the closest vertex, we check, which of the nearby vertices has the best dot from to the direction from closest to hit location, i.e. which is the most optimal to scale toward." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewProp_estimatedColorAtHitLocation = { "estimatedColorAtHitLocation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectEstimatedColorAtHitLocationResultStruct, estimatedColorAtHitLocation), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewProp_estimatedColorAtHitLocation_MetaData), Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewProp_estimatedColorAtHitLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewProp_physicalSurfaceInfo_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewProp_physicalSurfaceInfo = { "physicalSurfaceInfo", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectEstimatedColorAtHitLocationResultStruct, physicalSurfaceInfo), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewProp_physicalSurfaceInfo_MetaData), Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewProp_physicalSurfaceInfo_MetaData) }; // 3059642996
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewProp_worldSpaceLocationWeEstimatedTheColorAt_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
		{ "ToolTip", "The location between the closest vertex and the optimal we scaled against to get the estimated color at hit location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewProp_worldSpaceLocationWeEstimatedTheColorAt = { "worldSpaceLocationWeEstimatedTheColorAt", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectEstimatedColorAtHitLocationResultStruct, worldSpaceLocationWeEstimatedTheColorAt), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewProp_worldSpaceLocationWeEstimatedTheColorAt_MetaData), Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewProp_worldSpaceLocationWeEstimatedTheColorAt_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewProp_estimatedColorAtHitLocationDataSuccessfullyAcquired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewProp_estimatedColorAtHitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewProp_physicalSurfaceInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewProp_worldSpaceLocationWeEstimatedTheColorAt,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectEstimatedColorAtHitLocationResultStruct",
		Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::PropPointers),
		sizeof(FVertexDetectEstimatedColorAtHitLocationResultStruct),
		alignof(FVertexDetectEstimatedColorAtHitLocationResultStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectEstimatedColorAtHitLocationResultStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectEstimatedColorAtHitLocationResultStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectEstimatedColorAtHitLocationResultStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectEstimatedColorAtHitLocationStruct;
class UScriptStruct* FVertexDetectEstimatedColorAtHitLocationStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectEstimatedColorAtHitLocationStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectEstimatedColorAtHitLocationStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectEstimatedColorAtHitLocationStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectEstimatedColorAtHitLocationStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectEstimatedColorAtHitLocationStruct>()
{
	return FVertexDetectEstimatedColorAtHitLocationStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_getEstimatedColorAtHitLocation_MetaData[];
#endif
		static void NewProp_getEstimatedColorAtHitLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_getEstimatedColorAtHitLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onlyGetIfMeshHasMaxAmountOfVertices_MetaData[];
#endif
		static void NewProp_onlyGetIfMeshHasMaxAmountOfVertices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_onlyGetIfMeshHasMaxAmountOfVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxAmountOfVertices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_maxAmountOfVertices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Estimated Color at Hit Location\n" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
		{ "ToolTip", "Estimated Color at Hit Location" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectEstimatedColorAtHitLocationStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::NewProp_getEstimatedColorAtHitLocation_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
		{ "ToolTip", "This will get the color as close to the actual Hit Location as possible, which is very useful if you have Meshes with few vertices and you want to run SFX or VFX based on the Color of the Hit location and not the closest vertex color in case there is a diff. \nThe task may take a bit longer to calculate if Mesh has alot of vertices, so you have the option to always get it, or only get it if the Mesh is below a certain amount of vertices." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::NewProp_getEstimatedColorAtHitLocation_SetBit(void* Obj)
	{
		((FVertexDetectEstimatedColorAtHitLocationStruct*)Obj)->getEstimatedColorAtHitLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::NewProp_getEstimatedColorAtHitLocation = { "getEstimatedColorAtHitLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectEstimatedColorAtHitLocationStruct), &Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::NewProp_getEstimatedColorAtHitLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::NewProp_getEstimatedColorAtHitLocation_MetaData), Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::NewProp_getEstimatedColorAtHitLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::NewProp_onlyGetIfMeshHasMaxAmountOfVertices_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
		{ "ToolTip", "If True and getEstimatedColorAtHitLocation is True, then will only get the estimated color at hit location if the Mesh has Max Amount of Vertices than what's set below." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::NewProp_onlyGetIfMeshHasMaxAmountOfVertices_SetBit(void* Obj)
	{
		((FVertexDetectEstimatedColorAtHitLocationStruct*)Obj)->onlyGetIfMeshHasMaxAmountOfVertices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::NewProp_onlyGetIfMeshHasMaxAmountOfVertices = { "onlyGetIfMeshHasMaxAmountOfVertices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectEstimatedColorAtHitLocationStruct), &Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::NewProp_onlyGetIfMeshHasMaxAmountOfVertices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::NewProp_onlyGetIfMeshHasMaxAmountOfVertices_MetaData), Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::NewProp_onlyGetIfMeshHasMaxAmountOfVertices_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::NewProp_maxAmountOfVertices_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/HitLocationPrerequisites.h" },
		{ "ToolTip", "Will only get the estimated color if the mesh this max amount of vertices" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::NewProp_maxAmountOfVertices = { "maxAmountOfVertices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectEstimatedColorAtHitLocationStruct, maxAmountOfVertices), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::NewProp_maxAmountOfVertices_MetaData), Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::NewProp_maxAmountOfVertices_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::NewProp_getEstimatedColorAtHitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::NewProp_onlyGetIfMeshHasMaxAmountOfVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::NewProp_maxAmountOfVertices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectEstimatedColorAtHitLocationStruct",
		Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::PropPointers),
		sizeof(FVertexDetectEstimatedColorAtHitLocationStruct),
		alignof(FVertexDetectEstimatedColorAtHitLocationStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectEstimatedColorAtHitLocationStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectEstimatedColorAtHitLocationStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectEstimatedColorAtHitLocationStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_HitLocationPrerequisites_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_HitLocationPrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FVertexDetectPhysicsSurfaceDataAtChannelStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataAtChannelStruct_Statics::NewStructOps, TEXT("VertexDetectPhysicsSurfaceDataAtChannelStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectPhysicsSurfaceDataAtChannelStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectPhysicsSurfaceDataAtChannelStruct), 1399182569U) },
		{ FVertexDetectMostDominantPhysicsSurfaceInfo::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectMostDominantPhysicsSurfaceInfo_Statics::NewStructOps, TEXT("VertexDetectMostDominantPhysicsSurfaceInfo"), &Z_Registration_Info_UScriptStruct_VertexDetectMostDominantPhysicsSurfaceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectMostDominantPhysicsSurfaceInfo), 2353672735U) },
		{ FVertexDetectPhysicsSurfaceDataStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct_Statics::NewStructOps, TEXT("VertexDetectPhysicsSurfaceDataStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectPhysicsSurfaceDataStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectPhysicsSurfaceDataStruct), 3059642996U) },
		{ FVertexDetectAndPaintFundementalsStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct_Statics::NewStructOps, TEXT("VertexDetectAndPaintFundementalsStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectAndPaintFundementalsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectAndPaintFundementalsStruct), 2674751082U) },
		{ FVertexDetectEstimatedColorAtHitLocationResultStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct_Statics::NewStructOps, TEXT("VertexDetectEstimatedColorAtHitLocationResultStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectEstimatedColorAtHitLocationResultStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectEstimatedColorAtHitLocationResultStruct), 824555151U) },
		{ FVertexDetectEstimatedColorAtHitLocationStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct_Statics::NewStructOps, TEXT("VertexDetectEstimatedColorAtHitLocationStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectEstimatedColorAtHitLocationStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectEstimatedColorAtHitLocationStruct), 4047601044U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_HitLocationPrerequisites_h_2983601408(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_HitLocationPrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_HitLocationPrerequisites_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
