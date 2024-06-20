// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/GetClosestVertexDataPrerequisites.h"
#include "../Prerequisites/FundementalsPrerequisites.h"
#include "../Prerequisites/HitLocationPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetClosestVertexDataPrerequisites() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectInfoStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectStruct();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexPositionStruct;
class UScriptStruct* FVertexDetectClosestVertexPositionStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexPositionStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexPositionStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectClosestVertexPositionStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexPositionStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectClosestVertexPositionStruct>()
{
	return FVertexDetectClosestVertexPositionStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_closestVertexPositionWorld_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_closestVertexPositionWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_closestVertexPositionActorLocal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_closestVertexPositionActorLocal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Found Vertex Position Data Struct\n" },
		{ "ModuleRelativePath", "Prerequisites/GetClosestVertexDataPrerequisites.h" },
		{ "ToolTip", "Found Vertex Position Data Struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectClosestVertexPositionStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct_Statics::NewProp_closestVertexPositionWorld_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/GetClosestVertexDataPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct_Statics::NewProp_closestVertexPositionWorld = { "closestVertexPositionWorld", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClosestVertexPositionStruct, closestVertexPositionWorld), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct_Statics::NewProp_closestVertexPositionWorld_MetaData), Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct_Statics::NewProp_closestVertexPositionWorld_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct_Statics::NewProp_closestVertexPositionActorLocal_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/GetClosestVertexDataPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct_Statics::NewProp_closestVertexPositionActorLocal = { "closestVertexPositionActorLocal", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClosestVertexPositionStruct, closestVertexPositionActorLocal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct_Statics::NewProp_closestVertexPositionActorLocal_MetaData), Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct_Statics::NewProp_closestVertexPositionActorLocal_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct_Statics::NewProp_closestVertexPositionWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct_Statics::NewProp_closestVertexPositionActorLocal,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectClosestVertexPositionStruct",
		Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct_Statics::PropPointers),
		sizeof(FVertexDetectClosestVertexPositionStruct),
		alignof(FVertexDetectClosestVertexPositionStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexPositionStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexPositionStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexPositionStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexNormalStruct;
class UScriptStruct* FVertexDetectClosestVertexNormalStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexNormalStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexNormalStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectClosestVertexNormalStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexNormalStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectClosestVertexNormalStruct>()
{
	return FVertexDetectClosestVertexNormalStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_closestVertexNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_closestVertexNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_closestVertexNormalLocal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_closestVertexNormalLocal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Found Vertex Normala Data Struct\n" },
		{ "ModuleRelativePath", "Prerequisites/GetClosestVertexDataPrerequisites.h" },
		{ "ToolTip", "Found Vertex Normala Data Struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectClosestVertexNormalStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct_Statics::NewProp_closestVertexNormal_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/GetClosestVertexDataPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct_Statics::NewProp_closestVertexNormal = { "closestVertexNormal", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClosestVertexNormalStruct, closestVertexNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct_Statics::NewProp_closestVertexNormal_MetaData), Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct_Statics::NewProp_closestVertexNormal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct_Statics::NewProp_closestVertexNormalLocal_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/GetClosestVertexDataPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct_Statics::NewProp_closestVertexNormalLocal = { "closestVertexNormalLocal", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClosestVertexNormalStruct, closestVertexNormalLocal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct_Statics::NewProp_closestVertexNormalLocal_MetaData), Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct_Statics::NewProp_closestVertexNormalLocal_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct_Statics::NewProp_closestVertexNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct_Statics::NewProp_closestVertexNormalLocal,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectClosestVertexNormalStruct",
		Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct_Statics::PropPointers),
		sizeof(FVertexDetectClosestVertexNormalStruct),
		alignof(FVertexDetectClosestVertexNormalStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexNormalStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexNormalStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexNormalStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexGeneralInfoStruct;
class UScriptStruct* FVertexDetectClosestVertexGeneralInfoStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexGeneralInfoStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexGeneralInfoStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectClosestVertexGeneralInfoStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexGeneralInfoStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectClosestVertexGeneralInfoStruct>()
{
	return FVertexDetectClosestVertexGeneralInfoStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_closestVertexIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_closestVertexIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_closestSection_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_closestSection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_closestVertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_closestVertexColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_closestVertexPositionInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_closestVertexPositionInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_closestVertexNormalInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_closestVertexNormalInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_closestVertexMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_closestVertexMaterial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_closestVertexUVAtEachUVChannel_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_closestVertexUVAtEachUVChannel_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_closestVertexUVAtEachUVChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Closest Vertex Data \n" },
		{ "ModuleRelativePath", "Prerequisites/GetClosestVertexDataPrerequisites.h" },
		{ "ToolTip", "Closest Vertex Data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectClosestVertexGeneralInfoStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexIndex_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/GetClosestVertexDataPrerequisites.h" },
		{ "ToolTip", "The Closest Vertex inded of Hit Location" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexIndex = { "closestVertexIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClosestVertexGeneralInfoStruct, closestVertexIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexIndex_MetaData), Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestSection_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/GetClosestVertexDataPrerequisites.h" },
		{ "ToolTip", "The Closest Section the Closest Vertex was at. May be useful if painting / detecting on skeletal mesh components." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestSection = { "closestSection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClosestVertexGeneralInfoStruct, closestSection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestSection_MetaData), Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestSection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexColors_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/GetClosestVertexDataPrerequisites.h" },
		{ "ToolTip", "The Closest Vertexes Colors" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexColors = { "closestVertexColors", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClosestVertexGeneralInfoStruct, closestVertexColors), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexColors_MetaData), Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexColors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexPositionInfo_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/GetClosestVertexDataPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexPositionInfo = { "closestVertexPositionInfo", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClosestVertexGeneralInfoStruct, closestVertexPositionInfo), Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexPositionInfo_MetaData), Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexPositionInfo_MetaData) }; // 3355561980
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexNormalInfo_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/GetClosestVertexDataPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexNormalInfo = { "closestVertexNormalInfo", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClosestVertexGeneralInfoStruct, closestVertexNormalInfo), Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexNormalInfo_MetaData), Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexNormalInfo_MetaData) }; // 4252140343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexMaterial_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/GetClosestVertexDataPrerequisites.h" },
		{ "ToolTip", "The Material at the Closest Vertex" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexMaterial = { "closestVertexMaterial", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClosestVertexGeneralInfoStruct, closestVertexMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexMaterial_MetaData), Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexMaterial_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexUVAtEachUVChannel_Inner = { "closestVertexUVAtEachUVChannel", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexUVAtEachUVChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/GetClosestVertexDataPrerequisites.h" },
		{ "ToolTip", "UVs at the Closest Vertex, each element in the array is for each UV Channel" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexUVAtEachUVChannel = { "closestVertexUVAtEachUVChannel", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClosestVertexGeneralInfoStruct, closestVertexUVAtEachUVChannel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexUVAtEachUVChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexUVAtEachUVChannel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexPositionInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexNormalInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexUVAtEachUVChannel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewProp_closestVertexUVAtEachUVChannel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectClosestVertexGeneralInfoStruct",
		Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::PropPointers),
		sizeof(FVertexDetectClosestVertexGeneralInfoStruct),
		alignof(FVertexDetectClosestVertexGeneralInfoStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexGeneralInfoStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexGeneralInfoStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexGeneralInfoStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexDataResultStruct;
class UScriptStruct* FVertexDetectClosestVertexDataResultStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexDataResultStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexDataResultStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectClosestVertexDataResultStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexDataResultStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectClosestVertexDataResultStruct>()
{
	return FVertexDetectClosestVertexDataResultStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_closestVertexDataSuccessfullyAcquired_MetaData[];
#endif
		static void NewProp_closestVertexDataSuccessfullyAcquired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_closestVertexDataSuccessfullyAcquired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_closestVertexGeneralInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_closestVertexGeneralInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_closestVertexPhysicalSurfaceInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_closestVertexPhysicalSurfaceInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Vertex Painted Channel Result Struct\n" },
		{ "ModuleRelativePath", "Prerequisites/GetClosestVertexDataPrerequisites.h" },
		{ "ToolTip", "Vertex Painted Channel Result Struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectClosestVertexDataResultStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::NewProp_closestVertexDataSuccessfullyAcquired_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/GetClosestVertexDataPrerequisites.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::NewProp_closestVertexDataSuccessfullyAcquired_SetBit(void* Obj)
	{
		((FVertexDetectClosestVertexDataResultStruct*)Obj)->closestVertexDataSuccessfullyAcquired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::NewProp_closestVertexDataSuccessfullyAcquired = { "closestVertexDataSuccessfullyAcquired", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectClosestVertexDataResultStruct), &Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::NewProp_closestVertexDataSuccessfullyAcquired_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::NewProp_closestVertexDataSuccessfullyAcquired_MetaData), Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::NewProp_closestVertexDataSuccessfullyAcquired_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::NewProp_closestVertexGeneralInfo_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/GetClosestVertexDataPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::NewProp_closestVertexGeneralInfo = { "closestVertexGeneralInfo", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClosestVertexDataResultStruct, closestVertexGeneralInfo), Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::NewProp_closestVertexGeneralInfo_MetaData), Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::NewProp_closestVertexGeneralInfo_MetaData) }; // 1666048940
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::NewProp_closestVertexPhysicalSurfaceInfo_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/GetClosestVertexDataPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::NewProp_closestVertexPhysicalSurfaceInfo = { "closestVertexPhysicalSurfaceInfo", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectClosestVertexDataResultStruct, closestVertexPhysicalSurfaceInfo), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::NewProp_closestVertexPhysicalSurfaceInfo_MetaData), Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::NewProp_closestVertexPhysicalSurfaceInfo_MetaData) }; // 3059642996
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::NewProp_closestVertexDataSuccessfullyAcquired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::NewProp_closestVertexGeneralInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::NewProp_closestVertexPhysicalSurfaceInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectClosestVertexDataResultStruct",
		Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::PropPointers),
		sizeof(FVertexDetectClosestVertexDataResultStruct),
		alignof(FVertexDetectClosestVertexDataResultStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexDataResultStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexDataResultStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexDataResultStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVertexDetectInfoStruct>() == std::is_polymorphic<FVertexDetectStruct>(), "USTRUCT FVertexDetectInfoStruct cannot be polymorphic unless super FVertexDetectStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectInfoStruct;
class UScriptStruct* FVertexDetectInfoStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectInfoStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectInfoStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectInfoStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectInfoStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectInfoStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectInfoStruct>()
{
	return FVertexDetectInfoStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_getAverageColorInAreaSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_getAverageColorInAreaSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitFundementals_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_hitFundementals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_getEstimatedColorAtHitLocationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_getEstimatedColorAtHitLocationSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Vertex Detect Info\n" },
		{ "ModuleRelativePath", "Prerequisites/GetClosestVertexDataPrerequisites.h" },
		{ "ToolTip", "Vertex Detect Info" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectInfoStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::NewProp_getAverageColorInAreaSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/GetClosestVertexDataPrerequisites.h" },
		{ "ToolTip", "Can get the Average Color in an Area Range, which could be useful if you have for instance a Make-up game and want to see if the player has painted the majority of a characters cheek. Area Range has to be higher than 0 to get the average color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::NewProp_getAverageColorInAreaSettings = { "getAverageColorInAreaSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectInfoStruct, getAverageColorInAreaSettings), Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::NewProp_getAverageColorInAreaSettings_MetaData), Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::NewProp_getAverageColorInAreaSettings_MetaData) }; // 1635215642
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::NewProp_hitFundementals_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/GetClosestVertexDataPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::NewProp_hitFundementals = { "hitFundementals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectInfoStruct, hitFundementals), Z_Construct_UScriptStruct_FVertexDetectAndPaintFundementalsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::NewProp_hitFundementals_MetaData), Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::NewProp_hitFundementals_MetaData) }; // 2674751082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::NewProp_getEstimatedColorAtHitLocationSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/GetClosestVertexDataPrerequisites.h" },
		{ "ToolTip", "This will Return the color as close to the actual Hit Location as possible, which is very useful if you have Meshes with few vertices and you want to run SFX or VFX based on the Color of the Hit location and not the closest vertex color in case there is a diff, which it might have if the mesh have few vertices. \nThe task may take a bit longer to calculate if Mesh has alot of vertices, so you have the option to only get it if the Mesh has a Max Amount of Vertices. NOTE If getVertexColorSetting is set to onlyGetColors, but this is True, then it will still loop through colors." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::NewProp_getEstimatedColorAtHitLocationSettings = { "getEstimatedColorAtHitLocationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectInfoStruct, getEstimatedColorAtHitLocationSettings), Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::NewProp_getEstimatedColorAtHitLocationSettings_MetaData), Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::NewProp_getEstimatedColorAtHitLocationSettings_MetaData) }; // 4047601044
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::NewProp_getAverageColorInAreaSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::NewProp_hitFundementals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::NewProp_getEstimatedColorAtHitLocationSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexDetectStruct,
		&NewStructOps,
		"VertexDetectInfoStruct",
		Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::PropPointers),
		sizeof(FVertexDetectInfoStruct),
		alignof(FVertexDetectInfoStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectInfoStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectInfoStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectInfoStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectInfoStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_GetClosestVertexDataPrerequisites_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_GetClosestVertexDataPrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FVertexDetectClosestVertexPositionStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectClosestVertexPositionStruct_Statics::NewStructOps, TEXT("VertexDetectClosestVertexPositionStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexPositionStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectClosestVertexPositionStruct), 3355561980U) },
		{ FVertexDetectClosestVertexNormalStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectClosestVertexNormalStruct_Statics::NewStructOps, TEXT("VertexDetectClosestVertexNormalStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexNormalStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectClosestVertexNormalStruct), 4252140343U) },
		{ FVertexDetectClosestVertexGeneralInfoStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectClosestVertexGeneralInfoStruct_Statics::NewStructOps, TEXT("VertexDetectClosestVertexGeneralInfoStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexGeneralInfoStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectClosestVertexGeneralInfoStruct), 1666048940U) },
		{ FVertexDetectClosestVertexDataResultStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct_Statics::NewStructOps, TEXT("VertexDetectClosestVertexDataResultStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectClosestVertexDataResultStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectClosestVertexDataResultStruct), 3612237734U) },
		{ FVertexDetectInfoStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectInfoStruct_Statics::NewStructOps, TEXT("VertexDetectInfoStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectInfoStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectInfoStruct), 148266220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_GetClosestVertexDataPrerequisites_h_3661938074(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_GetClosestVertexDataPrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_GetClosestVertexDataPrerequisites_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
