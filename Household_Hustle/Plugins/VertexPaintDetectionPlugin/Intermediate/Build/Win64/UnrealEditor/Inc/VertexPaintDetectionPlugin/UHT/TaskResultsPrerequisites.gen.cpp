// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/TaskResultsPrerequisites.h"
#include "../Prerequisites/CorePrerequisites.h"
#include "../Prerequisites/HitLocationPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskResultsPrerequisites() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexColorChannel();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectAvarageColorInAreaInfo;
class UScriptStruct* FVertexDetectAvarageColorInAreaInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectAvarageColorInAreaInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectAvarageColorInAreaInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectAvarageColorInAreaInfo"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectAvarageColorInAreaInfo.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectAvarageColorInAreaInfo>()
{
	return FVertexDetectAvarageColorInAreaInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_avarageVertexColorsWithinAreaOfEffect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_avarageVertexColorsWithinAreaOfEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_avaragePhysicalSurfaceInfoBasedOffTheClosestVertexMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_avaragePhysicalSurfaceInfoBasedOffTheClosestVertexMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Avarage Color In Area Info\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Avarage Color In Area Info" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectAvarageColorInAreaInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo_Statics::NewProp_avarageVertexColorsWithinAreaOfEffect_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Avarage Vertex Colors within the Area when Detecting (if set an AoE), or the Avarage Vertex Colors when Painting at Location After Applying Vertex Colors." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo_Statics::NewProp_avarageVertexColorsWithinAreaOfEffect = { "avarageVertexColorsWithinAreaOfEffect", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectAvarageColorInAreaInfo, avarageVertexColorsWithinAreaOfEffect), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo_Statics::NewProp_avarageVertexColorsWithinAreaOfEffect_MetaData), Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo_Statics::NewProp_avarageVertexColorsWithinAreaOfEffect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo_Statics::NewProp_avaragePhysicalSurfaceInfoBasedOffTheClosestVertexMaterial_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo_Statics::NewProp_avaragePhysicalSurfaceInfoBasedOffTheClosestVertexMaterial = { "avaragePhysicalSurfaceInfoBasedOffTheClosestVertexMaterial", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectAvarageColorInAreaInfo, avaragePhysicalSurfaceInfoBasedOffTheClosestVertexMaterial), Z_Construct_UScriptStruct_FVertexDetectPhysicsSurfaceDataStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo_Statics::NewProp_avaragePhysicalSurfaceInfoBasedOffTheClosestVertexMaterial_MetaData), Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo_Statics::NewProp_avaragePhysicalSurfaceInfoBasedOffTheClosestVertexMaterial_MetaData) }; // 4173758171
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo_Statics::NewProp_avarageVertexColorsWithinAreaOfEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo_Statics::NewProp_avaragePhysicalSurfaceInfoBasedOffTheClosestVertexMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectAvarageColorInAreaInfo",
		Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo_Statics::PropPointers),
		sizeof(FVertexDetectAvarageColorInAreaInfo),
		alignof(FVertexDetectAvarageColorInAreaInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectAvarageColorInAreaInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectAvarageColorInAreaInfo.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectAvarageColorInAreaInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectBoneColorsStruct;
class UScriptStruct* FVertexDetectBoneColorsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectBoneColorsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectBoneColorsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectBoneColorsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectBoneColorsStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectBoneColorsStruct>()
{
	return FVertexDetectBoneColorsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_boneVertexColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boneVertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_boneVertexColors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bone Colors Struct\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bone Colors Struct" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectBoneColorsStruct>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct_Statics::NewProp_boneVertexColors_Inner = { "boneVertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct_Statics::NewProp_boneVertexColors_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*VisibleAnywhere, */" },
#endif
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VisibleAnywhere," },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct_Statics::NewProp_boneVertexColors = { "boneVertexColors", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectBoneColorsStruct, boneVertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct_Statics::NewProp_boneVertexColors_MetaData), Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct_Statics::NewProp_boneVertexColors_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct_Statics::NewProp_boneVertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct_Statics::NewProp_boneVertexColors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectBoneColorsStruct",
		Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct_Statics::PropPointers),
		sizeof(FVertexDetectBoneColorsStruct),
		alignof(FVertexDetectBoneColorsStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectBoneColorsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectBoneColorsStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectBoneColorsStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectVertexColorsOnEachBone;
class UScriptStruct* FVertexDetectVertexColorsOnEachBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectVertexColorsOnEachBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectVertexColorsOnEachBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectVertexColorsOnEachBone"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectVertexColorsOnEachBone.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectVertexColorsOnEachBone>()
{
	return FVertexDetectVertexColorsOnEachBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_successFullyGotColorsForEachBone_MetaData[];
#endif
		static void NewProp_successFullyGotColorsForEachBone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successFullyGotColorsForEachBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_nameAndColorOfEachBone_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_nameAndColorOfEachBone_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nameAndColorOfEachBone_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_nameAndColorOfEachBone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vertex Colors on Each Bone\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex Colors on Each Bone" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectVertexColorsOnEachBone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::NewProp_successFullyGotColorsForEachBone_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::NewProp_successFullyGotColorsForEachBone_SetBit(void* Obj)
	{
		((FVertexDetectVertexColorsOnEachBone*)Obj)->successFullyGotColorsForEachBone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::NewProp_successFullyGotColorsForEachBone = { "successFullyGotColorsForEachBone", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectVertexColorsOnEachBone), &Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::NewProp_successFullyGotColorsForEachBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::NewProp_successFullyGotColorsForEachBone_MetaData), Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::NewProp_successFullyGotColorsForEachBone_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::NewProp_nameAndColorOfEachBone_ValueProp = { "nameAndColorOfEachBone", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct, METADATA_PARAMS(0, nullptr) }; // 1735150903
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::NewProp_nameAndColorOfEachBone_Key_KeyProp = { "nameAndColorOfEachBone_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::NewProp_nameAndColorOfEachBone_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::NewProp_nameAndColorOfEachBone = { "nameAndColorOfEachBone", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectVertexColorsOnEachBone, nameAndColorOfEachBone), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::NewProp_nameAndColorOfEachBone_MetaData), Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::NewProp_nameAndColorOfEachBone_MetaData) }; // 1735150903
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::NewProp_successFullyGotColorsForEachBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::NewProp_nameAndColorOfEachBone_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::NewProp_nameAndColorOfEachBone_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::NewProp_nameAndColorOfEachBone,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectVertexColorsOnEachBone",
		Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::PropPointers),
		sizeof(FVertexDetectVertexColorsOnEachBone),
		alignof(FVertexDetectVertexColorsOnEachBone),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectVertexColorsOnEachBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectVertexColorsOnEachBone.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectVertexColorsOnEachBone.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectCompareMeshColorsToColorArrayResultStruct;
class UScriptStruct* FVertexDetectCompareMeshColorsToColorArrayResultStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectCompareMeshColorsToColorArrayResultStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectCompareMeshColorsToColorArrayResultStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectCompareMeshColorsToColorArrayResultStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectCompareMeshColorsToColorArrayResultStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectCompareMeshColorsToColorArrayResultStruct>()
{
	return FVertexDetectCompareMeshColorsToColorArrayResultStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_successfullyComparedMeshColorsToColorArray_MetaData[];
#endif
		static void NewProp_successfullyComparedMeshColorsToColorArray_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successfullyComparedMeshColorsToColorArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_matchingPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_matchingPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Compare Mesh Colors To Color Array\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compare Mesh Colors To Color Array" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectCompareMeshColorsToColorArrayResultStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::NewProp_successfullyComparedMeshColorsToColorArray_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If we successfully compared the Vertex Colors from the Mesh, and the ones the user sent in to compare them with." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::NewProp_successfullyComparedMeshColorsToColorArray_SetBit(void* Obj)
	{
		((FVertexDetectCompareMeshColorsToColorArrayResultStruct*)Obj)->successfullyComparedMeshColorsToColorArray = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::NewProp_successfullyComparedMeshColorsToColorArray = { "successfullyComparedMeshColorsToColorArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectCompareMeshColorsToColorArrayResultStruct), &Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::NewProp_successfullyComparedMeshColorsToColorArray_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::NewProp_successfullyComparedMeshColorsToColorArray_MetaData), Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::NewProp_successfullyComparedMeshColorsToColorArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::NewProp_matchingPercent_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Matching Percent between 0-100, this also includes vertices that had no color, as long as the mesh vertex color and the compare vertex colors where the same and within range, they're taken into account here." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::NewProp_matchingPercent = { "matchingPercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectCompareMeshColorsToColorArrayResultStruct, matchingPercent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::NewProp_matchingPercent_MetaData), Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::NewProp_matchingPercent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::NewProp_successfullyComparedMeshColorsToColorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::NewProp_matchingPercent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectCompareMeshColorsToColorArrayResultStruct",
		Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::PropPointers),
		sizeof(FVertexDetectCompareMeshColorsToColorArrayResultStruct),
		alignof(FVertexDetectCompareMeshColorsToColorArrayResultStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectCompareMeshColorsToColorArrayResultStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectCompareMeshColorsToColorArrayResultStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectCompareMeshColorsToColorArrayResultStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectAmountOfPaintedColorsOfEachChannel_Results;
class UScriptStruct* FVertexDetectAmountOfPaintedColorsOfEachChannel_Results::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectAmountOfPaintedColorsOfEachChannel_Results.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectAmountOfPaintedColorsOfEachChannel_Results.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectAmountOfPaintedColorsOfEachChannel_Results"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectAmountOfPaintedColorsOfEachChannel_Results.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectAmountOfPaintedColorsOfEachChannel_Results>()
{
	return FVertexDetectAmountOfPaintedColorsOfEachChannel_Results::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amountOfVerticesPaintedAtMinAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amountOfVerticesPaintedAtMinAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_percentPaintedAtMinAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_percentPaintedAtMinAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_averageColorAmountAtMinAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_averageColorAmountAtMinAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Amount of Painted Colors of Each Channel Results\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of Painted Colors of Each Channel Results" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectAmountOfPaintedColorsOfEachChannel_Results>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::NewProp_amountOfVerticesPaintedAtMinAmount_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::NewProp_amountOfVerticesPaintedAtMinAmount = { "amountOfVerticesPaintedAtMinAmount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectAmountOfPaintedColorsOfEachChannel_Results, amountOfVerticesPaintedAtMinAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::NewProp_amountOfVerticesPaintedAtMinAmount_MetaData), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::NewProp_amountOfVerticesPaintedAtMinAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::NewProp_percentPaintedAtMinAmount_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::NewProp_percentPaintedAtMinAmount = { "percentPaintedAtMinAmount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectAmountOfPaintedColorsOfEachChannel_Results, percentPaintedAtMinAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::NewProp_percentPaintedAtMinAmount_MetaData), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::NewProp_percentPaintedAtMinAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::NewProp_averageColorAmountAtMinAmount_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::NewProp_averageColorAmountAtMinAmount = { "averageColorAmountAtMinAmount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectAmountOfPaintedColorsOfEachChannel_Results, averageColorAmountAtMinAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::NewProp_averageColorAmountAtMinAmount_MetaData), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::NewProp_averageColorAmountAtMinAmount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::NewProp_amountOfVerticesPaintedAtMinAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::NewProp_percentPaintedAtMinAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::NewProp_averageColorAmountAtMinAmount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectAmountOfPaintedColorsOfEachChannel_Results",
		Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::PropPointers),
		sizeof(FVertexDetectAmountOfPaintedColorsOfEachChannel_Results),
		alignof(FVertexDetectAmountOfPaintedColorsOfEachChannel_Results),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectAmountOfPaintedColorsOfEachChannel_Results.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectAmountOfPaintedColorsOfEachChannel_Results.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectAmountOfPaintedColorsOfEachChannel_Results.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectAmountOfPaintedColorsOfEachChannel;
class UScriptStruct* FVertexDetectAmountOfPaintedColorsOfEachChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectAmountOfPaintedColorsOfEachChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectAmountOfPaintedColorsOfEachChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectAmountOfPaintedColorsOfEachChannel"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectAmountOfPaintedColorsOfEachChannel.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectAmountOfPaintedColorsOfEachChannel>()
{
	return FVertexDetectAmountOfPaintedColorsOfEachChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_successfullyGotColorChannelResultsAtMinAmount_MetaData[];
#endif
		static void NewProp_successfullyGotColorChannelResultsAtMinAmount_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successfullyGotColorChannelResultsAtMinAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_redChannelResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_redChannelResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_greenChannelResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_greenChannelResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_blueChannelResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_blueChannelResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_alphaChannelResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_alphaChannelResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_successfullyGotPhysicsSurfaceResultsAtMinAmount_MetaData[];
#endif
		static void NewProp_successfullyGotPhysicsSurfaceResultsAtMinAmount_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successfullyGotPhysicsSurfaceResultsAtMinAmount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_physicsSurfacesResult_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_physicsSurfacesResult_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_physicsSurfacesResult_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_physicsSurfacesResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Amount of Painted Colors of Each Channel\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of Painted Colors of Each Channel" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectAmountOfPaintedColorsOfEachChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_successfullyGotColorChannelResultsAtMinAmount_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_successfullyGotColorChannelResultsAtMinAmount_SetBit(void* Obj)
	{
		((FVertexDetectAmountOfPaintedColorsOfEachChannel*)Obj)->successfullyGotColorChannelResultsAtMinAmount = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_successfullyGotColorChannelResultsAtMinAmount = { "successfullyGotColorChannelResultsAtMinAmount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectAmountOfPaintedColorsOfEachChannel), &Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_successfullyGotColorChannelResultsAtMinAmount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_successfullyGotColorChannelResultsAtMinAmount_MetaData), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_successfullyGotColorChannelResultsAtMinAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_redChannelResult_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_redChannelResult = { "redChannelResult", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectAmountOfPaintedColorsOfEachChannel, redChannelResult), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_redChannelResult_MetaData), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_redChannelResult_MetaData) }; // 2862469461
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_greenChannelResult_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_greenChannelResult = { "greenChannelResult", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectAmountOfPaintedColorsOfEachChannel, greenChannelResult), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_greenChannelResult_MetaData), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_greenChannelResult_MetaData) }; // 2862469461
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_blueChannelResult_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_blueChannelResult = { "blueChannelResult", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectAmountOfPaintedColorsOfEachChannel, blueChannelResult), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_blueChannelResult_MetaData), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_blueChannelResult_MetaData) }; // 2862469461
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_alphaChannelResult_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_alphaChannelResult = { "alphaChannelResult", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectAmountOfPaintedColorsOfEachChannel, alphaChannelResult), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_alphaChannelResult_MetaData), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_alphaChannelResult_MetaData) }; // 2862469461
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_successfullyGotPhysicsSurfaceResultsAtMinAmount_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If we actually got the physics surface result and the IncludePhysicsSurfaceResult Setting in the Callback Setting was set to True. \nGetting the Physics Surface colors requires a couple of more loops for every vertex and can possible increase the time to finish the task by a very small amount, but we still make it optional since there are tasks like Paint Color Snippet, that usually doesn't need to loop through all of the sections etc., which may take noticable longer if it has to do that." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_successfullyGotPhysicsSurfaceResultsAtMinAmount_SetBit(void* Obj)
	{
		((FVertexDetectAmountOfPaintedColorsOfEachChannel*)Obj)->successfullyGotPhysicsSurfaceResultsAtMinAmount = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_successfullyGotPhysicsSurfaceResultsAtMinAmount = { "successfullyGotPhysicsSurfaceResultsAtMinAmount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectAmountOfPaintedColorsOfEachChannel), &Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_successfullyGotPhysicsSurfaceResultsAtMinAmount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_successfullyGotPhysicsSurfaceResultsAtMinAmount_MetaData), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_successfullyGotPhysicsSurfaceResultsAtMinAmount_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_physicsSurfacesResult_ValueProp = { "physicsSurfacesResult", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results, METADATA_PARAMS(0, nullptr) }; // 2862469461
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_physicsSurfacesResult_Key_KeyProp = { "physicsSurfacesResult_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_physicsSurfacesResult_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If IncludePhysicsSurfaceResult and if there are any Registered Physics Surface on the Material Detected/Painted on, then we can get the amount of vertices, percent and average amount of each physics surface. We sort this as well so the first element in this TMap is the one with the highest %." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_physicsSurfacesResult = { "physicsSurfacesResult", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectAmountOfPaintedColorsOfEachChannel, physicsSurfacesResult), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_physicsSurfacesResult_MetaData), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_physicsSurfacesResult_MetaData) }; // 2508321301 2862469461
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_successfullyGotColorChannelResultsAtMinAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_redChannelResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_greenChannelResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_blueChannelResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_alphaChannelResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_successfullyGotPhysicsSurfaceResultsAtMinAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_physicsSurfacesResult_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_physicsSurfacesResult_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewProp_physicsSurfacesResult,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectAmountOfPaintedColorsOfEachChannel",
		Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::PropPointers),
		sizeof(FVertexDetectAmountOfPaintedColorsOfEachChannel),
		alignof(FVertexDetectAmountOfPaintedColorsOfEachChannel),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectAmountOfPaintedColorsOfEachChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectAmountOfPaintedColorsOfEachChannel.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectAmountOfPaintedColorsOfEachChannel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintWithinAreaResults;
class UScriptStruct* FVertexPaintWithinAreaResults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintWithinAreaResults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintWithinAreaResults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintWithinAreaResults"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintWithinAreaResults.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintWithinAreaResults>()
{
	return FVertexPaintWithinAreaResults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_meshVertexDataWithinArea_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshVertexDataWithinArea_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_meshVertexDataWithinArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amountOfPaintedColorsOfEachChannelWithinArea_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_amountOfPaintedColorsOfEachChannelWithinArea;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Within Area Results\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Within Area Results" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintWithinAreaResults>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::NewProp_meshVertexDataWithinArea_Inner = { "meshVertexDataWithinArea", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct, METADATA_PARAMS(0, nullptr) }; // 3111010087
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::NewProp_meshVertexDataWithinArea_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Vertex Colors, Position and Normal Within the Area, if set to Include them when calling PaintWithinArea." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::NewProp_meshVertexDataWithinArea = { "meshVertexDataWithinArea", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintWithinAreaResults, meshVertexDataWithinArea), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::NewProp_meshVertexDataWithinArea_MetaData), Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::NewProp_meshVertexDataWithinArea_MetaData) }; // 3111010087
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::NewProp_amountOfPaintedColorsOfEachChannelWithinArea_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Average, Amount and % of Colors of Each Channel & Physics Surface within the Area, if set to Include them when calling Paint Within Area." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::NewProp_amountOfPaintedColorsOfEachChannelWithinArea = { "amountOfPaintedColorsOfEachChannelWithinArea", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintWithinAreaResults, amountOfPaintedColorsOfEachChannelWithinArea), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::NewProp_amountOfPaintedColorsOfEachChannelWithinArea_MetaData), Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::NewProp_amountOfPaintedColorsOfEachChannelWithinArea_MetaData) }; // 2121409895
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::NewProp_meshVertexDataWithinArea_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::NewProp_meshVertexDataWithinArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::NewProp_amountOfPaintedColorsOfEachChannelWithinArea,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexPaintWithinAreaResults",
		Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::PropPointers),
		sizeof(FVertexPaintWithinAreaResults),
		alignof(FVertexPaintWithinAreaResults),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintWithinAreaResults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintWithinAreaResults.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintWithinAreaResults.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectTaskResultInfo;
class UScriptStruct* FVertexDetectTaskResultInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectTaskResultInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectTaskResultInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectTaskResultInfo"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectTaskResultInfo.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectTaskResultInfo>()
{
	return FVertexDetectTaskResultInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_taskSuccessfull_MetaData[];
#endif
		static void NewProp_taskSuccessfull_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_taskSuccessfull;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_taskDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_taskDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_associatedPaintComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_associatedPaintComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshVertexData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_meshVertexData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_compareMeshColorsToColorArrayResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_compareMeshColorsToColorArrayResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amountOfPaintedColorsOfEachChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_amountOfPaintedColorsOfEachChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexColorsOnEachBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexColorsOnEachBone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Task Result\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Task Result" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectTaskResultInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_taskSuccessfull_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the Paint/Detect Task was Successfull" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_taskSuccessfull_SetBit(void* Obj)
	{
		((FVertexDetectTaskResultInfo*)Obj)->taskSuccessfull = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_taskSuccessfull = { "taskSuccessfull", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectTaskResultInfo), &Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_taskSuccessfull_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_taskSuccessfull_MetaData), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_taskSuccessfull_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_taskDuration_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long in Seconds the Task took to finish. \nCan be useful to sync paint jobs if you for instance is Painting many meshes at the same time, like if it's raining and you're running Paint Entire Mesh at Random Vertices. In those cases some tasks may finish much faster than others since they may have different amount of vertices, and if you start a new task when the old one is finished it means that some meshes will get wet too fast compared to other meshes. With this you can check, what is the highest duration a task ever took, and if a task finishes before that, maybe add a delay before you start a new task or something similar with the delay duration to be the difference to the finished task duration and the highest duration." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_taskDuration = { "taskDuration", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectTaskResultInfo, taskDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_taskDuration_MetaData), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_taskDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_associatedPaintComponent_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If Painted using Paint Component then it was used with this. There are some paint jobs like SetMeshComponentVertexColors and SetMeshComponentVertexColorsUsingSerializedString where using a component is optional." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_associatedPaintComponent = { "associatedPaintComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectTaskResultInfo, associatedPaintComponent), Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_associatedPaintComponent_MetaData), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_associatedPaintComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_meshVertexData_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Mesh Component, Source Mesh and includes Vertex Color, Position and Normal for each LOD if they've been set to be included in the Paint/Detect Jobs Callback Settings." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_meshVertexData = { "meshVertexData", nullptr, (EPropertyFlags)0x0010008000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectTaskResultInfo, meshVertexData), Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_meshVertexData_MetaData), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_meshVertexData_MetaData) }; // 674529102
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_compareMeshColorsToColorArrayResult_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If you in the Callback Settings set to Compare Vertex Colors to a Color Array, to for exmaple check if the player has painted a certain pattern or something, then this will be the result of that." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_compareMeshColorsToColorArrayResult = { "compareMeshColorsToColorArrayResult", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectTaskResultInfo, compareMeshColorsToColorArrayResult), Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_compareMeshColorsToColorArrayResult_MetaData), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_compareMeshColorsToColorArrayResult_MetaData) }; // 3650732528
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_amountOfPaintedColorsOfEachChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If we included in the Callback Settings to get colors of each channel (is true by default) then you will get the Percent, Average Amount, and How many vertices on each RGBA Vertex Color Channel, so you can for instance check if the Red Channel has is over a certain %. \nYou can in the callback settings also set to include the results for each physics surface, then you will get %, average and amount for each physics surface as well, otherwise that TMap won't be filled." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_amountOfPaintedColorsOfEachChannel = { "amountOfPaintedColorsOfEachChannel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectTaskResultInfo, amountOfPaintedColorsOfEachChannel), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_amountOfPaintedColorsOfEachChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_amountOfPaintedColorsOfEachChannel_MetaData) }; // 2121409895
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_vertexColorsOnEachBone_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Colors of each bone at LOD0. Can get set to be included in the Tasks Callback Settings." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_vertexColorsOnEachBone = { "vertexColorsOnEachBone", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectTaskResultInfo, vertexColorsOnEachBone), Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_vertexColorsOnEachBone_MetaData), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_vertexColorsOnEachBone_MetaData) }; // 3486469005
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_taskSuccessfull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_taskDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_associatedPaintComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_meshVertexData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_compareMeshColorsToColorArrayResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_amountOfPaintedColorsOfEachChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewProp_vertexColorsOnEachBone,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectTaskResultInfo",
		Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::PropPointers),
		sizeof(FVertexDetectTaskResultInfo),
		alignof(FVertexDetectTaskResultInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectTaskResultInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectTaskResultInfo.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectTaskResultInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectPaintTaskResultInfo;
class UScriptStruct* FVertexDetectPaintTaskResultInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectPaintTaskResultInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectPaintTaskResultInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectPaintTaskResultInfo"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectPaintTaskResultInfo.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectPaintTaskResultInfo>()
{
	return FVertexDetectPaintTaskResultInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_anyVertexColorGotChanged_MetaData[];
#endif
		static void NewProp_anyVertexColorGotChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_anyVertexColorGotChanged;
		static const UECodeGen_Private::FNamePropertyParams NewProp_vertexColorAppliedToBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexColorAppliedToBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vertexColorAppliedToBones;
		static const UECodeGen_Private::FBytePropertyParams NewProp_colorAppliedToVertexColorChannels_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_colorAppliedToVertexColorChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_colorAppliedToVertexColorChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_colorAppliedToVertexColorChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Paint Task Result\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Paint Task Result" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectPaintTaskResultInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_anyVertexColorGotChanged_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the Finished Task was a Paint Job of some kind, and it changed any vertex colors. For example if you run paint at location at an area that already has the colors that you want to paint, then no difference would occur so we didn't apply any new colors, or if you tried to paint on a mesh that's already fully painted, or tried to remove colors if it didn't have any colors." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_anyVertexColorGotChanged_SetBit(void* Obj)
	{
		((FVertexDetectPaintTaskResultInfo*)Obj)->anyVertexColorGotChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_anyVertexColorGotChanged = { "anyVertexColorGotChanged", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectPaintTaskResultInfo), &Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_anyVertexColorGotChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_anyVertexColorGotChanged_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_anyVertexColorGotChanged_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_vertexColorAppliedToBones_Inner = { "vertexColorAppliedToBones", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_vertexColorAppliedToBones_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Bones that got color applied to any of their vertices. If Paint Entire Mesh, Set Mesh Component Colors or Paint Color Snippet, then all bones will be here." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_vertexColorAppliedToBones = { "vertexColorAppliedToBones", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintTaskResultInfo, vertexColorAppliedToBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_vertexColorAppliedToBones_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_vertexColorAppliedToBones_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_colorAppliedToVertexColorChannels_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_colorAppliedToVertexColorChannels_Inner = { "colorAppliedToVertexColorChannels", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexColorChannel, METADATA_PARAMS(0, nullptr) }; // 790424670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_colorAppliedToVertexColorChannels_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/TaskResultsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If Paint Job, then these are the Vertex Color Channels that got changed by that paint job. If a Paint job like Color Snippet, SetMeshComponentVertexColors, SetMeshComponentVertexColorsUsingSerialized string with no settings that requires them to loop through all vertices, then we can't check which color channels got changed so then all of them will be added, making an assumption they all got changed in that use case." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_colorAppliedToVertexColorChannels = { "colorAppliedToVertexColorChannels", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectPaintTaskResultInfo, colorAppliedToVertexColorChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_colorAppliedToVertexColorChannels_MetaData), Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_colorAppliedToVertexColorChannels_MetaData) }; // 790424670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_anyVertexColorGotChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_vertexColorAppliedToBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_vertexColorAppliedToBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_colorAppliedToVertexColorChannels_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_colorAppliedToVertexColorChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewProp_colorAppliedToVertexColorChannels,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectPaintTaskResultInfo",
		Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::PropPointers),
		sizeof(FVertexDetectPaintTaskResultInfo),
		alignof(FVertexDetectPaintTaskResultInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectPaintTaskResultInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectPaintTaskResultInfo.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectPaintTaskResultInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_TaskResultsPrerequisites_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_TaskResultsPrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FVertexDetectAvarageColorInAreaInfo::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo_Statics::NewStructOps, TEXT("VertexDetectAvarageColorInAreaInfo"), &Z_Registration_Info_UScriptStruct_VertexDetectAvarageColorInAreaInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectAvarageColorInAreaInfo), 3145953347U) },
		{ FVertexDetectBoneColorsStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectBoneColorsStruct_Statics::NewStructOps, TEXT("VertexDetectBoneColorsStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectBoneColorsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectBoneColorsStruct), 1735150903U) },
		{ FVertexDetectVertexColorsOnEachBone::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone_Statics::NewStructOps, TEXT("VertexDetectVertexColorsOnEachBone"), &Z_Registration_Info_UScriptStruct_VertexDetectVertexColorsOnEachBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectVertexColorsOnEachBone), 3486469005U) },
		{ FVertexDetectCompareMeshColorsToColorArrayResultStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayResultStruct_Statics::NewStructOps, TEXT("VertexDetectCompareMeshColorsToColorArrayResultStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectCompareMeshColorsToColorArrayResultStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectCompareMeshColorsToColorArrayResultStruct), 3650732528U) },
		{ FVertexDetectAmountOfPaintedColorsOfEachChannel_Results::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Results_Statics::NewStructOps, TEXT("VertexDetectAmountOfPaintedColorsOfEachChannel_Results"), &Z_Registration_Info_UScriptStruct_VertexDetectAmountOfPaintedColorsOfEachChannel_Results, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectAmountOfPaintedColorsOfEachChannel_Results), 2862469461U) },
		{ FVertexDetectAmountOfPaintedColorsOfEachChannel::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel_Statics::NewStructOps, TEXT("VertexDetectAmountOfPaintedColorsOfEachChannel"), &Z_Registration_Info_UScriptStruct_VertexDetectAmountOfPaintedColorsOfEachChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectAmountOfPaintedColorsOfEachChannel), 2121409895U) },
		{ FVertexPaintWithinAreaResults::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults_Statics::NewStructOps, TEXT("VertexPaintWithinAreaResults"), &Z_Registration_Info_UScriptStruct_VertexPaintWithinAreaResults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintWithinAreaResults), 3294260839U) },
		{ FVertexDetectTaskResultInfo::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo_Statics::NewStructOps, TEXT("VertexDetectTaskResultInfo"), &Z_Registration_Info_UScriptStruct_VertexDetectTaskResultInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectTaskResultInfo), 1722933695U) },
		{ FVertexDetectPaintTaskResultInfo::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo_Statics::NewStructOps, TEXT("VertexDetectPaintTaskResultInfo"), &Z_Registration_Info_UScriptStruct_VertexDetectPaintTaskResultInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectPaintTaskResultInfo), 224760213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_TaskResultsPrerequisites_h_2745432989(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_TaskResultsPrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_TaskResultsPrerequisites_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
