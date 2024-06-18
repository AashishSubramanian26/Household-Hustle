// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/MaterialDataAssetPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialDataAssetPrerequisites() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintPhysicsSurfaceBlendingSettings;
class UScriptStruct* FVertexPaintPhysicsSurfaceBlendingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintPhysicsSurfaceBlendingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintPhysicsSurfaceBlendingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintPhysicsSurfaceBlendingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintPhysicsSurfaceBlendingSettings.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintPhysicsSurfaceBlendingSettings>()
{
	return FVertexPaintPhysicsSurfaceBlendingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_associatedMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_associatedMaterial;
		static const UECodeGen_Private::FBytePropertyParams NewProp_physicsSurfacesThatCanBlend_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_physicsSurfacesThatCanBlend_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_physicsSurfacesThatCanBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minAmountOnEachSurfaceToBeAbleToBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minAmountOnEachSurfaceToBeAbleToBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_physicsSurfaceToResultIn_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_physicsSurfaceToResultIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Physics Surface Blending Settings\n" },
		{ "ModuleRelativePath", "Prerequisites/MaterialDataAssetPrerequisites.h" },
		{ "ToolTip", "Physics Surface Blending Settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintPhysicsSurfaceBlendingSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewProp_associatedMaterial_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/MaterialDataAssetPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewProp_associatedMaterial = { "associatedMaterial", nullptr, (EPropertyFlags)0x0014000000020005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintPhysicsSurfaceBlendingSettings, associatedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewProp_associatedMaterial_MetaData), Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewProp_associatedMaterial_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewProp_physicsSurfacesThatCanBlend_Inner = { "physicsSurfacesThatCanBlend", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewProp_physicsSurfacesThatCanBlend_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/MaterialDataAssetPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewProp_physicsSurfacesThatCanBlend = { "physicsSurfacesThatCanBlend", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintPhysicsSurfaceBlendingSettings, physicsSurfacesThatCanBlend), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewProp_physicsSurfacesThatCanBlend_MetaData), Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewProp_physicsSurfacesThatCanBlend_MetaData) }; // 2508321301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewProp_minAmountOnEachSurfaceToBeAbleToBlend_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/MaterialDataAssetPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewProp_minAmountOnEachSurfaceToBeAbleToBlend = { "minAmountOnEachSurfaceToBeAbleToBlend", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintPhysicsSurfaceBlendingSettings, minAmountOnEachSurfaceToBeAbleToBlend), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewProp_minAmountOnEachSurfaceToBeAbleToBlend_MetaData), Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewProp_minAmountOnEachSurfaceToBeAbleToBlend_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewProp_physicsSurfaceToResultIn_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/MaterialDataAssetPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewProp_physicsSurfaceToResultIn = { "physicsSurfaceToResultIn", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintPhysicsSurfaceBlendingSettings, physicsSurfaceToResultIn), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewProp_physicsSurfaceToResultIn_MetaData), Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewProp_physicsSurfaceToResultIn_MetaData) }; // 2508321301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewProp_associatedMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewProp_physicsSurfacesThatCanBlend_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewProp_physicsSurfacesThatCanBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewProp_minAmountOnEachSurfaceToBeAbleToBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewProp_physicsSurfaceToResultIn,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexPaintPhysicsSurfaceBlendingSettings",
		Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::PropPointers),
		sizeof(FVertexPaintPhysicsSurfaceBlendingSettings),
		alignof(FVertexPaintPhysicsSurfaceBlendingSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintPhysicsSurfaceBlendingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintPhysicsSurfaceBlendingSettings.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintPhysicsSurfaceBlendingSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintMaterialDataAssetStruct;
class UScriptStruct* FVertexPaintMaterialDataAssetStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintMaterialDataAssetStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintMaterialDataAssetStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintMaterialDataAssetStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintMaterialDataAssetStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintMaterialDataAssetStruct>()
{
	return FVertexPaintMaterialDataAssetStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_includeDefaultChannelWhenDetecting_MetaData[];
#endif
		static void NewProp_includeDefaultChannelWhenDetecting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_includeDefaultChannelWhenDetecting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_atDefault_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_atDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintedAtRed_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_paintedAtRed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintedAtGreen_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_paintedAtGreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintedAtBlue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_paintedAtBlue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintedAtAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_paintedAtAlpha;
		static const UECodeGen_Private::FStructPropertyParams NewProp_physicsSurfaceBlendingSettings_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_physicsSurfaceBlendingSettings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_physicsSurfaceBlendingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_physicsSurfaceBlendingSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Vertex Paint Material Data Asset Struct \n" },
		{ "ModuleRelativePath", "Prerequisites/MaterialDataAssetPrerequisites.h" },
		{ "ToolTip", "Vertex Paint Material Data Asset Struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintMaterialDataAssetStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_includeDefaultChannelWhenDetecting_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/MaterialDataAssetPrerequisites.h" },
		{ "ToolTip", "Will include the default channel when running detection where it will return 1 atDefault value in the VertexPaintDetectionComponent if nothing is painted over it. 0.5 if one thing is painted, 0.33 if two things is fully painted over it etc. \nCan be set to false if you have a material setup where whatever you're painting completely hides what is default." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_includeDefaultChannelWhenDetecting_SetBit(void* Obj)
	{
		((FVertexPaintMaterialDataAssetStruct*)Obj)->includeDefaultChannelWhenDetecting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_includeDefaultChannelWhenDetecting = { "includeDefaultChannelWhenDetecting", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPaintMaterialDataAssetStruct), &Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_includeDefaultChannelWhenDetecting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_includeDefaultChannelWhenDetecting_MetaData), Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_includeDefaultChannelWhenDetecting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_atDefault_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/MaterialDataAssetPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_atDefault = { "atDefault", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintMaterialDataAssetStruct, atDefault), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_atDefault_MetaData), Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_atDefault_MetaData) }; // 2508321301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_paintedAtRed_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/MaterialDataAssetPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_paintedAtRed = { "paintedAtRed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintMaterialDataAssetStruct, paintedAtRed), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_paintedAtRed_MetaData), Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_paintedAtRed_MetaData) }; // 2508321301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_paintedAtGreen_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/MaterialDataAssetPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_paintedAtGreen = { "paintedAtGreen", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintMaterialDataAssetStruct, paintedAtGreen), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_paintedAtGreen_MetaData), Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_paintedAtGreen_MetaData) }; // 2508321301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_paintedAtBlue_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/MaterialDataAssetPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_paintedAtBlue = { "paintedAtBlue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintMaterialDataAssetStruct, paintedAtBlue), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_paintedAtBlue_MetaData), Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_paintedAtBlue_MetaData) }; // 2508321301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_paintedAtAlpha_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/MaterialDataAssetPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_paintedAtAlpha = { "paintedAtAlpha", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintMaterialDataAssetStruct, paintedAtAlpha), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_paintedAtAlpha_MetaData), Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_paintedAtAlpha_MetaData) }; // 2508321301
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_physicsSurfaceBlendingSettings_ValueProp = { "physicsSurfaceBlendingSettings", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings, METADATA_PARAMS(0, nullptr) }; // 1169206232
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_physicsSurfaceBlendingSettings_Key_KeyProp = { "physicsSurfaceBlendingSettings_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_physicsSurfaceBlendingSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/MaterialDataAssetPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_physicsSurfaceBlendingSettings = { "physicsSurfaceBlendingSettings", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintMaterialDataAssetStruct, physicsSurfaceBlendingSettings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_physicsSurfaceBlendingSettings_MetaData), Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_physicsSurfaceBlendingSettings_MetaData) }; // 2508321301 1169206232
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_includeDefaultChannelWhenDetecting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_atDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_paintedAtRed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_paintedAtGreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_paintedAtBlue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_paintedAtAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_physicsSurfaceBlendingSettings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_physicsSurfaceBlendingSettings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewProp_physicsSurfaceBlendingSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexPaintMaterialDataAssetStruct",
		Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::PropPointers),
		sizeof(FVertexPaintMaterialDataAssetStruct),
		alignof(FVertexPaintMaterialDataAssetStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintMaterialDataAssetStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintMaterialDataAssetStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintMaterialDataAssetStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintParentPhysicsSurfaceStruct;
class UScriptStruct* FVertexPaintParentPhysicsSurfaceStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintParentPhysicsSurfaceStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintParentPhysicsSurfaceStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintParentPhysicsSurfaceStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintParentPhysicsSurfaceStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintParentPhysicsSurfaceStruct>()
{
	return FVertexPaintParentPhysicsSurfaceStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_childSurfaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_childSurfaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_childSurfaces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Parent Physics Surface Struct\n" },
		{ "ModuleRelativePath", "Prerequisites/MaterialDataAssetPrerequisites.h" },
		{ "ToolTip", "Parent Physics Surface Struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintParentPhysicsSurfaceStruct>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct_Statics::NewProp_childSurfaces_Inner = { "childSurfaces", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct_Statics::NewProp_childSurfaces_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/MaterialDataAssetPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct_Statics::NewProp_childSurfaces = { "childSurfaces", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintParentPhysicsSurfaceStruct, childSurfaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct_Statics::NewProp_childSurfaces_MetaData), Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct_Statics::NewProp_childSurfaces_MetaData) }; // 2508321301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct_Statics::NewProp_childSurfaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct_Statics::NewProp_childSurfaces,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexPaintParentPhysicsSurfaceStruct",
		Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct_Statics::PropPointers),
		sizeof(FVertexPaintParentPhysicsSurfaceStruct),
		alignof(FVertexPaintParentPhysicsSurfaceStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintParentPhysicsSurfaceStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintParentPhysicsSurfaceStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintParentPhysicsSurfaceStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_MaterialDataAssetPrerequisites_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_MaterialDataAssetPrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FVertexPaintPhysicsSurfaceBlendingSettings::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintPhysicsSurfaceBlendingSettings_Statics::NewStructOps, TEXT("VertexPaintPhysicsSurfaceBlendingSettings"), &Z_Registration_Info_UScriptStruct_VertexPaintPhysicsSurfaceBlendingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintPhysicsSurfaceBlendingSettings), 1169206232U) },
		{ FVertexPaintMaterialDataAssetStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct_Statics::NewStructOps, TEXT("VertexPaintMaterialDataAssetStruct"), &Z_Registration_Info_UScriptStruct_VertexPaintMaterialDataAssetStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintMaterialDataAssetStruct), 3331871051U) },
		{ FVertexPaintParentPhysicsSurfaceStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct_Statics::NewStructOps, TEXT("VertexPaintParentPhysicsSurfaceStruct"), &Z_Registration_Info_UScriptStruct_VertexPaintParentPhysicsSurfaceStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintParentPhysicsSurfaceStruct), 367238135U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_MaterialDataAssetPrerequisites_h_1308392545(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_MaterialDataAssetPrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_MaterialDataAssetPrerequisites_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
