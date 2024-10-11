// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/CorePrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorePrerequisites() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_SurfaceAtChannel();
	VERTEXPAINTDETECTIONPLUGIN_API UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexColorChannel();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVertexColorChannel;
	static UEnum* EVertexColorChannel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVertexColorChannel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVertexColorChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexColorChannel, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("EVertexColorChannel"));
		}
		return Z_Registration_Info_UEnum_EVertexColorChannel.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UEnum* StaticEnum<EVertexColorChannel>()
	{
		return EVertexColorChannel_StaticEnum();
	}
	struct Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexColorChannel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexColorChannel_Statics::Enumerators[] = {
		{ "EVertexColorChannel::RedChannel", (int64)EVertexColorChannel::RedChannel },
		{ "EVertexColorChannel::GreenChannel", (int64)EVertexColorChannel::GreenChannel },
		{ "EVertexColorChannel::BlueChannel", (int64)EVertexColorChannel::BlueChannel },
		{ "EVertexColorChannel::AlphaChannel", (int64)EVertexColorChannel::AlphaChannel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexColorChannel_Statics::Enum_MetaDataParams[] = {
		{ "AlphaChannel.DisplayName", "Alpha Channel" },
		{ "AlphaChannel.Name", "EVertexColorChannel::AlphaChannel" },
		{ "BlueChannel.DisplayName", "Blue Channel" },
		{ "BlueChannel.Name", "EVertexColorChannel::BlueChannel" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vertex Color Channel\n" },
#endif
		{ "GreenChannel.DisplayName", "Green Channel" },
		{ "GreenChannel.Name", "EVertexColorChannel::GreenChannel" },
		{ "ModuleRelativePath", "Prerequisites/CorePrerequisites.h" },
		{ "RedChannel.DisplayName", "Red Channel" },
		{ "RedChannel.Name", "EVertexColorChannel::RedChannel" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex Color Channel" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexColorChannel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		"EVertexColorChannel",
		"EVertexColorChannel",
		Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexColorChannel_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexColorChannel_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexColorChannel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexColorChannel_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexColorChannel()
	{
		if (!Z_Registration_Info_UEnum_EVertexColorChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVertexColorChannel.InnerSingleton, Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexColorChannel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVertexColorChannel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_Enum_SurfaceAtChannel;
	static UEnum* Enum_SurfaceAtChannel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_Enum_SurfaceAtChannel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_Enum_SurfaceAtChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_SurfaceAtChannel, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("Enum_SurfaceAtChannel"));
		}
		return Z_Registration_Info_UEnum_Enum_SurfaceAtChannel.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UEnum* StaticEnum<Enum_SurfaceAtChannel>()
	{
		return Enum_SurfaceAtChannel_StaticEnum();
	}
	struct Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_SurfaceAtChannel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_SurfaceAtChannel_Statics::Enumerators[] = {
		{ "Enum_SurfaceAtChannel::Default", (int64)Enum_SurfaceAtChannel::Default },
		{ "Enum_SurfaceAtChannel::RedChannel", (int64)Enum_SurfaceAtChannel::RedChannel },
		{ "Enum_SurfaceAtChannel::GreenChannel", (int64)Enum_SurfaceAtChannel::GreenChannel },
		{ "Enum_SurfaceAtChannel::BlueChannel", (int64)Enum_SurfaceAtChannel::BlueChannel },
		{ "Enum_SurfaceAtChannel::AlphaChannel", (int64)Enum_SurfaceAtChannel::AlphaChannel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_SurfaceAtChannel_Statics::Enum_MetaDataParams[] = {
		{ "AlphaChannel.DisplayName", "Alpha Channel" },
		{ "AlphaChannel.Name", "Enum_SurfaceAtChannel::AlphaChannel" },
		{ "BlueChannel.DisplayName", "Blue Channel" },
		{ "BlueChannel.Name", "Enum_SurfaceAtChannel::BlueChannel" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Surface At Channel\n" },
#endif
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "Enum_SurfaceAtChannel::Default" },
		{ "GreenChannel.DisplayName", "Green Channel" },
		{ "GreenChannel.Name", "Enum_SurfaceAtChannel::GreenChannel" },
		{ "ModuleRelativePath", "Prerequisites/CorePrerequisites.h" },
		{ "RedChannel.DisplayName", "Red Channel" },
		{ "RedChannel.Name", "Enum_SurfaceAtChannel::RedChannel" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Surface At Channel" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_SurfaceAtChannel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		"Enum_SurfaceAtChannel",
		"Enum_SurfaceAtChannel",
		Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_SurfaceAtChannel_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_SurfaceAtChannel_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_SurfaceAtChannel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_SurfaceAtChannel_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_SurfaceAtChannel()
	{
		if (!Z_Registration_Info_UEnum_Enum_SurfaceAtChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_Enum_SurfaceAtChannel.InnerSingleton, Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_SurfaceAtChannel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_Enum_SurfaceAtChannel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintColorChannelsStruct;
class UScriptStruct* FVertexPaintColorChannelsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintColorChannelsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintColorChannelsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintColorChannelsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintColorChannelsStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintColorChannelsStruct>()
{
	return FVertexPaintColorChannelsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_vertexColorChannels_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_vertexColorChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexColorChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vertexColorChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vertex Color Channels Struct\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/CorePrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex Color Channels Struct" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintColorChannelsStruct>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct_Statics::NewProp_vertexColorChannels_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct_Statics::NewProp_vertexColorChannels_Inner = { "vertexColorChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexColorChannel, METADATA_PARAMS(0, nullptr) }; // 790424670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct_Statics::NewProp_vertexColorChannels_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/CorePrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct_Statics::NewProp_vertexColorChannels = { "vertexColorChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintColorChannelsStruct, vertexColorChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct_Statics::NewProp_vertexColorChannels_MetaData), Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct_Statics::NewProp_vertexColorChannels_MetaData) }; // 790424670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct_Statics::NewProp_vertexColorChannels_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct_Statics::NewProp_vertexColorChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct_Statics::NewProp_vertexColorChannels,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexPaintColorChannelsStruct",
		Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct_Statics::PropPointers),
		sizeof(FVertexPaintColorChannelsStruct),
		alignof(FVertexPaintColorChannelsStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintColorChannelsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintColorChannelsStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintColorChannelsStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectSerializedColorsPerLODStruct;
class UScriptStruct* FVertexDetectSerializedColorsPerLODStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectSerializedColorsPerLODStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectSerializedColorsPerLODStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectSerializedColorsPerLODStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectSerializedColorsPerLODStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectSerializedColorsPerLODStruct>()
{
	return FVertexDetectSerializedColorsPerLODStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lod_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_lod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_colorsAtLODAsJSonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_colorsAtLODAsJSonString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Serialized Colors Per LOD Struct \n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/CorePrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serialized Colors Per LOD Struct" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectSerializedColorsPerLODStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics::NewProp_lod_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/CorePrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics::NewProp_lod = { "lod", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectSerializedColorsPerLODStruct, lod), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics::NewProp_lod_MetaData), Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics::NewProp_lod_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics::NewProp_colorsAtLODAsJSonString_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*VisibleAnywhere, */" },
#endif
		{ "ModuleRelativePath", "Prerequisites/CorePrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VisibleAnywhere," },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics::NewProp_colorsAtLODAsJSonString = { "colorsAtLODAsJSonString", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectSerializedColorsPerLODStruct, colorsAtLODAsJSonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics::NewProp_colorsAtLODAsJSonString_MetaData), Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics::NewProp_colorsAtLODAsJSonString_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics::NewProp_lod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics::NewProp_colorsAtLODAsJSonString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectSerializedColorsPerLODStruct",
		Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics::PropPointers),
		sizeof(FVertexDetectSerializedColorsPerLODStruct),
		alignof(FVertexDetectSerializedColorsPerLODStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectSerializedColorsPerLODStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectSerializedColorsPerLODStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectSerializedColorsPerLODStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectMeshDataPerLODStruct;
class UScriptStruct* FVertexDetectMeshDataPerLODStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectMeshDataPerLODStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectMeshDataPerLODStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectMeshDataPerLODStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectMeshDataPerLODStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectMeshDataPerLODStruct>()
{
	return FVertexDetectMeshDataPerLODStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lod_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_lod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amountOfVerticesAtLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_amountOfVerticesAtLOD;
		static const UECodeGen_Private::FStructPropertyParams NewProp_meshVertexColorsPerLODArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshVertexColorsPerLODArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_meshVertexColorsPerLODArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_serializedVertexColorsData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_serializedVertexColorsData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_meshVertexPositionsInComponentSpacePerLODArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshVertexPositionsInComponentSpacePerLODArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_meshVertexPositionsInComponentSpacePerLODArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_meshVertexNormalsPerLODArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshVertexNormalsPerLODArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_meshVertexNormalsPerLODArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vertex Detect Mesh Data Per LOD Struct\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/CorePrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex Detect Mesh Data Per LOD Struct" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectMeshDataPerLODStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_lod_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/CorePrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_lod = { "lod", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectMeshDataPerLODStruct, lod), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_lod_MetaData), Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_lod_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_amountOfVerticesAtLOD_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/CorePrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_amountOfVerticesAtLOD = { "amountOfVerticesAtLOD", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectMeshDataPerLODStruct, amountOfVerticesAtLOD), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_amountOfVerticesAtLOD_MetaData), Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_amountOfVerticesAtLOD_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_meshVertexColorsPerLODArray_Inner = { "meshVertexColorsPerLODArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_meshVertexColorsPerLODArray_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/CorePrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only returns filled in the callback event if set to include vertex colors in the callback settings." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_meshVertexColorsPerLODArray = { "meshVertexColorsPerLODArray", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectMeshDataPerLODStruct, meshVertexColorsPerLODArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_meshVertexColorsPerLODArray_MetaData), Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_meshVertexColorsPerLODArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_serializedVertexColorsData_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*VisibleAnywhere, */" },
#endif
		{ "ModuleRelativePath", "Prerequisites/CorePrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VisibleAnywhere," },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_serializedVertexColorsData = { "serializedVertexColorsData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectMeshDataPerLODStruct, serializedVertexColorsData), Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_serializedVertexColorsData_MetaData), Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_serializedVertexColorsData_MetaData) }; // 4112502239
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_meshVertexPositionsInComponentSpacePerLODArray_Inner = { "meshVertexPositionsInComponentSpacePerLODArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_meshVertexPositionsInComponentSpacePerLODArray_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/CorePrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only returns filled in the callback event if set to include vertex positions in the callback settings." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_meshVertexPositionsInComponentSpacePerLODArray = { "meshVertexPositionsInComponentSpacePerLODArray", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectMeshDataPerLODStruct, meshVertexPositionsInComponentSpacePerLODArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_meshVertexPositionsInComponentSpacePerLODArray_MetaData), Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_meshVertexPositionsInComponentSpacePerLODArray_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_meshVertexNormalsPerLODArray_Inner = { "meshVertexNormalsPerLODArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_meshVertexNormalsPerLODArray_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/CorePrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only returns filled in the callback event if set to include vertex normals in the callback settings." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_meshVertexNormalsPerLODArray = { "meshVertexNormalsPerLODArray", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectMeshDataPerLODStruct, meshVertexNormalsPerLODArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_meshVertexNormalsPerLODArray_MetaData), Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_meshVertexNormalsPerLODArray_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_lod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_amountOfVerticesAtLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_meshVertexColorsPerLODArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_meshVertexColorsPerLODArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_serializedVertexColorsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_meshVertexPositionsInComponentSpacePerLODArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_meshVertexPositionsInComponentSpacePerLODArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_meshVertexNormalsPerLODArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewProp_meshVertexNormalsPerLODArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectMeshDataPerLODStruct",
		Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::PropPointers),
		sizeof(FVertexDetectMeshDataPerLODStruct),
		alignof(FVertexDetectMeshDataPerLODStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectMeshDataPerLODStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectMeshDataPerLODStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectMeshDataPerLODStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectMeshDataStruct;
class UScriptStruct* FVertexDetectMeshDataStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectMeshDataStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectMeshDataStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectMeshDataStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectMeshDataStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectMeshDataStruct>()
{
	return FVertexDetectMeshDataStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshSource_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_meshSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComp_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_meshComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_meshDataPerLOD_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshDataPerLOD_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_meshDataPerLOD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mesh Component Data Struct\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/CorePrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh Component Data Struct" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectMeshDataStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::NewProp_meshSource_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/CorePrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Skeletal or Static Mesh Source" },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::NewProp_meshSource = { "meshSource", nullptr, (EPropertyFlags)0x0014000000020005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectMeshDataStruct, meshSource), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::NewProp_meshSource_MetaData), Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::NewProp_meshSource_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::NewProp_meshComp_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/CorePrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Soft ptr to the Primitive Mesh Component" },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::NewProp_meshComp = { "meshComp", nullptr, (EPropertyFlags)0x00140000000a000d, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectMeshDataStruct, meshComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::NewProp_meshComp_MetaData), Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::NewProp_meshComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::NewProp_meshDataPerLOD_Inner = { "meshDataPerLOD", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct, METADATA_PARAMS(0, nullptr) }; // 3111010087
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::NewProp_meshDataPerLOD_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/CorePrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Vertex Data Per LOD" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::NewProp_meshDataPerLOD = { "meshDataPerLOD", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectMeshDataStruct, meshDataPerLOD), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::NewProp_meshDataPerLOD_MetaData), Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::NewProp_meshDataPerLOD_MetaData) }; // 3111010087
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::NewProp_meshSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::NewProp_meshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::NewProp_meshDataPerLOD_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::NewProp_meshDataPerLOD,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectMeshDataStruct",
		Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::PropPointers),
		sizeof(FVertexDetectMeshDataStruct),
		alignof(FVertexDetectMeshDataStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectMeshDataStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectMeshDataStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectMeshDataStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CorePrerequisites_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CorePrerequisites_h_Statics::EnumInfo[] = {
		{ EVertexColorChannel_StaticEnum, TEXT("EVertexColorChannel"), &Z_Registration_Info_UEnum_EVertexColorChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 790424670U) },
		{ Enum_SurfaceAtChannel_StaticEnum, TEXT("Enum_SurfaceAtChannel"), &Z_Registration_Info_UEnum_Enum_SurfaceAtChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 226719945U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CorePrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FVertexPaintColorChannelsStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintColorChannelsStruct_Statics::NewStructOps, TEXT("VertexPaintColorChannelsStruct"), &Z_Registration_Info_UScriptStruct_VertexPaintColorChannelsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintColorChannelsStruct), 924234462U) },
		{ FVertexDetectSerializedColorsPerLODStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectSerializedColorsPerLODStruct_Statics::NewStructOps, TEXT("VertexDetectSerializedColorsPerLODStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectSerializedColorsPerLODStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectSerializedColorsPerLODStruct), 4112502239U) },
		{ FVertexDetectMeshDataPerLODStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct_Statics::NewStructOps, TEXT("VertexDetectMeshDataPerLODStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectMeshDataPerLODStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectMeshDataPerLODStruct), 3111010087U) },
		{ FVertexDetectMeshDataStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct_Statics::NewStructOps, TEXT("VertexDetectMeshDataStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectMeshDataStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectMeshDataStruct), 674529102U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CorePrerequisites_h_527658289(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CorePrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CorePrerequisites_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CorePrerequisites_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CorePrerequisites_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
