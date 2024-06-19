// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/CalculateColorsPrerequisites.h"
#include "../Prerequisites/ChaosClothPhysicsPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCalculateColorsPrerequisites() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollection_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintMaterialDataAsset_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCalculateColorsInfo();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CalculateColorsInfo;
class UScriptStruct* FCalculateColorsInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CalculateColorsInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CalculateColorsInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCalculateColorsInfo, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("CalculateColorsInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CalculateColorsInfo.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FCalculateColorsInfo>()
{
	return FCalculateColorsInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_materialAtClosestPaintVertex_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_materialAtClosestPaintVertex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_materialAtClosestDetectVertex_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_materialAtClosestDetectVertex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothPhysicsSettings_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_clothPhysicsSettings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothPhysicsSettings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_clothPhysicsSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_vertexPaintActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_vertexPaintComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintStaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_vertexPaintStaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintInstancedStaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_vertexPaintInstancedStaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintSplineMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_vertexPaintSplineMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintSkelComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_vertexPaintSkelComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintSkelComponentsSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_vertexPaintSkelComponentsSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintSkelComponentsMasterSkinnedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_vertexPaintSkelComponentsMasterSkinnedComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintSourceMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_vertexPaintSourceMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintMaterialDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_vertexPaintMaterialDataAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintDynamicMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_vertexPaintDynamicMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintGeometryCollectionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_vertexPaintGeometryCollectionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintGeometryCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_vertexPaintGeometryCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Calculate Colors Info\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/CalculateColorsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculate Colors Info" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCalculateColorsInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_materialAtClosestPaintVertex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Materials\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/CalculateColorsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Materials" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_materialAtClosestPaintVertex = { "materialAtClosestPaintVertex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculateColorsInfo, materialAtClosestPaintVertex), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_materialAtClosestPaintVertex_MetaData), Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_materialAtClosestPaintVertex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_materialAtClosestDetectVertex_MetaData[] = {
		{ "ModuleRelativePath", "Prerequisites/CalculateColorsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_materialAtClosestDetectVertex = { "materialAtClosestDetectVertex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculateColorsInfo, materialAtClosestDetectVertex), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_materialAtClosestDetectVertex_MetaData), Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_materialAtClosestDetectVertex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_clothPhysicsSettings_ValueProp = { "clothPhysicsSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings, METADATA_PARAMS(0, nullptr) }; // 3419080287
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_clothPhysicsSettings_Key_KeyProp = { "clothPhysicsSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClothingAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_clothPhysicsSettings_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ptrs\n" },
#endif
		{ "ModuleRelativePath", "Prerequisites/CalculateColorsPrerequisites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ptrs" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_clothPhysicsSettings = { "clothPhysicsSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculateColorsInfo, clothPhysicsSettings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_clothPhysicsSettings_MetaData), Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_clothPhysicsSettings_MetaData) }; // 3419080287
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintActor_MetaData[] = {
		{ "ModuleRelativePath", "Prerequisites/CalculateColorsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintActor = { "vertexPaintActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculateColorsInfo, vertexPaintActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintActor_MetaData), Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Prerequisites/CalculateColorsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintComponent = { "vertexPaintComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculateColorsInfo, vertexPaintComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintComponent_MetaData), Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintStaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Prerequisites/CalculateColorsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintStaticMeshComponent = { "vertexPaintStaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculateColorsInfo, vertexPaintStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintStaticMeshComponent_MetaData), Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintStaticMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintInstancedStaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Prerequisites/CalculateColorsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintInstancedStaticMeshComponent = { "vertexPaintInstancedStaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculateColorsInfo, vertexPaintInstancedStaticMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintInstancedStaticMeshComponent_MetaData), Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintInstancedStaticMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSplineMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Prerequisites/CalculateColorsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSplineMeshComponent = { "vertexPaintSplineMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculateColorsInfo, vertexPaintSplineMeshComponent), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSplineMeshComponent_MetaData), Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSplineMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSkelComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Prerequisites/CalculateColorsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSkelComponent = { "vertexPaintSkelComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculateColorsInfo, vertexPaintSkelComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSkelComponent_MetaData), Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSkelComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSkelComponentsSkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Prerequisites/CalculateColorsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSkelComponentsSkeletalMesh = { "vertexPaintSkelComponentsSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculateColorsInfo, vertexPaintSkelComponentsSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSkelComponentsSkeletalMesh_MetaData), Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSkelComponentsSkeletalMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSkelComponentsMasterSkinnedComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Prerequisites/CalculateColorsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSkelComponentsMasterSkinnedComp = { "vertexPaintSkelComponentsMasterSkinnedComp", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculateColorsInfo, vertexPaintSkelComponentsMasterSkinnedComp), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSkelComponentsMasterSkinnedComp_MetaData), Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSkelComponentsMasterSkinnedComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSourceMesh_MetaData[] = {
		{ "ModuleRelativePath", "Prerequisites/CalculateColorsPrerequisites.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSourceMesh = { "vertexPaintSourceMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculateColorsInfo, vertexPaintSourceMesh), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSourceMesh_MetaData), Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSourceMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintMaterialDataAsset_MetaData[] = {
		{ "ModuleRelativePath", "Prerequisites/CalculateColorsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintMaterialDataAsset = { "vertexPaintMaterialDataAsset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculateColorsInfo, vertexPaintMaterialDataAsset), Z_Construct_UClass_UVertexPaintMaterialDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintMaterialDataAsset_MetaData), Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintMaterialDataAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintDynamicMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Prerequisites/CalculateColorsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintDynamicMeshComponent = { "vertexPaintDynamicMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculateColorsInfo, vertexPaintDynamicMeshComponent), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintDynamicMeshComponent_MetaData), Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintDynamicMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintGeometryCollectionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Prerequisites/CalculateColorsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintGeometryCollectionComponent = { "vertexPaintGeometryCollectionComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculateColorsInfo, vertexPaintGeometryCollectionComponent), Z_Construct_UClass_UGeometryCollectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintGeometryCollectionComponent_MetaData), Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintGeometryCollectionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintGeometryCollection_MetaData[] = {
		{ "ModuleRelativePath", "Prerequisites/CalculateColorsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintGeometryCollection = { "vertexPaintGeometryCollection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculateColorsInfo, vertexPaintGeometryCollection), Z_Construct_UClass_UGeometryCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintGeometryCollection_MetaData), Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintGeometryCollection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_materialAtClosestPaintVertex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_materialAtClosestDetectVertex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_clothPhysicsSettings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_clothPhysicsSettings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_clothPhysicsSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintStaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintInstancedStaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSplineMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSkelComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSkelComponentsSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSkelComponentsMasterSkinnedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintSourceMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintMaterialDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintDynamicMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintGeometryCollectionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewProp_vertexPaintGeometryCollection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"CalculateColorsInfo",
		Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::PropPointers),
		sizeof(FCalculateColorsInfo),
		alignof(FCalculateColorsInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCalculateColorsInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CalculateColorsInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CalculateColorsInfo.InnerSingleton, Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CalculateColorsInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CalculateColorsPrerequisites_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CalculateColorsPrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FCalculateColorsInfo::StaticStruct, Z_Construct_UScriptStruct_FCalculateColorsInfo_Statics::NewStructOps, TEXT("CalculateColorsInfo"), &Z_Registration_Info_UScriptStruct_CalculateColorsInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCalculateColorsInfo), 3708028353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CalculateColorsPrerequisites_h_689546983(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CalculateColorsPrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_CalculateColorsPrerequisites_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
