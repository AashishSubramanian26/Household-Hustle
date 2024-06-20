// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../DataAssets/VertexPaintMaterialDataAsset.h"
#include "../Prerequisites/MaterialDataAssetPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexPaintMaterialDataAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintMaterialDataAsset();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintMaterialDataAsset_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct();
// End Cross Module References
#if WITH_EDITOR
	DEFINE_FUNCTION(UVertexPaintMaterialDataAsset::execClearAllPhysicsSurfaceFamilies)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllPhysicsSurfaceFamilies();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintMaterialDataAsset::execRemoveChildFromPhysicsSurfaceFamily)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_parentPhysicsSurface);
		P_GET_PROPERTY(FByteProperty,Z_Param_childPhysicsSurface);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveChildFromPhysicsSurfaceFamily(EPhysicalSurface(Z_Param_parentPhysicsSurface),EPhysicalSurface(Z_Param_childPhysicsSurface));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintMaterialDataAsset::execAddChildToPhysicsSurfaceFamily)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_parentPhysicsSurface);
		P_GET_PROPERTY(FByteProperty,Z_Param_childPhysicsSurface);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddChildToPhysicsSurfaceFamily(EPhysicalSurface(Z_Param_parentPhysicsSurface),EPhysicalSurface(Z_Param_childPhysicsSurface));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintMaterialDataAsset::execRemovePhysicsSurfaceFamily)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_parentPhysicsSurface);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePhysicsSurfaceFamily(EPhysicalSurface(Z_Param_parentPhysicsSurface));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintMaterialDataAsset::execAddPhysicsSurfaceFamily)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_parentPhysicsSurface);
		P_GET_STRUCT(FVertexPaintParentPhysicsSurfaceStruct,Z_Param_parentPhysicsSurfaceStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPhysicsSurfaceFamily(EPhysicalSurface(Z_Param_parentPhysicsSurface),Z_Param_parentPhysicsSurfaceStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintMaterialDataAsset::execRemoveFromVertexPaintMaterialInterface)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UMaterialInterface>,Z_Param_material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFromVertexPaintMaterialInterface(Z_Param_material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintMaterialDataAsset::execAddToVertexPaintMaterialInterface)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UMaterialInterface>,Z_Param_material);
		P_GET_STRUCT(FVertexPaintMaterialDataAssetStruct,Z_Param_materialDataAssetStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToVertexPaintMaterialInterface(Z_Param_material,Z_Param_materialDataAssetStruct);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UVertexPaintMaterialDataAsset::StaticRegisterNativesUVertexPaintMaterialDataAsset()
	{
#if WITH_EDITOR
		UClass* Class = UVertexPaintMaterialDataAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildToPhysicsSurfaceFamily", &UVertexPaintMaterialDataAsset::execAddChildToPhysicsSurfaceFamily },
			{ "AddPhysicsSurfaceFamily", &UVertexPaintMaterialDataAsset::execAddPhysicsSurfaceFamily },
			{ "AddToVertexPaintMaterialInterface", &UVertexPaintMaterialDataAsset::execAddToVertexPaintMaterialInterface },
			{ "ClearAllPhysicsSurfaceFamilies", &UVertexPaintMaterialDataAsset::execClearAllPhysicsSurfaceFamilies },
			{ "RemoveChildFromPhysicsSurfaceFamily", &UVertexPaintMaterialDataAsset::execRemoveChildFromPhysicsSurfaceFamily },
			{ "RemoveFromVertexPaintMaterialInterface", &UVertexPaintMaterialDataAsset::execRemoveFromVertexPaintMaterialInterface },
			{ "RemovePhysicsSurfaceFamily", &UVertexPaintMaterialDataAsset::execRemovePhysicsSurfaceFamily },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddChildToPhysicsSurfaceFamily_Statics
	{
		struct VertexPaintMaterialDataAsset_eventAddChildToPhysicsSurfaceFamily_Parms
		{
			TEnumAsByte<EPhysicalSurface> parentPhysicsSurface;
			TEnumAsByte<EPhysicalSurface> childPhysicsSurface;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_parentPhysicsSurface;
		static const UECodeGen_Private::FBytePropertyParams NewProp_childPhysicsSurface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddChildToPhysicsSurfaceFamily_Statics::NewProp_parentPhysicsSurface = { "parentPhysicsSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintMaterialDataAsset_eventAddChildToPhysicsSurfaceFamily_Parms, parentPhysicsSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddChildToPhysicsSurfaceFamily_Statics::NewProp_childPhysicsSurface = { "childPhysicsSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintMaterialDataAsset_eventAddChildToPhysicsSurfaceFamily_Parms, childPhysicsSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddChildToPhysicsSurfaceFamily_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddChildToPhysicsSurfaceFamily_Statics::NewProp_parentPhysicsSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddChildToPhysicsSurfaceFamily_Statics::NewProp_childPhysicsSurface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddChildToPhysicsSurfaceFamily_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintMaterialDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddChildToPhysicsSurfaceFamily_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintMaterialDataAsset, nullptr, "AddChildToPhysicsSurfaceFamily", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddChildToPhysicsSurfaceFamily_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddChildToPhysicsSurfaceFamily_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddChildToPhysicsSurfaceFamily_Statics::VertexPaintMaterialDataAsset_eventAddChildToPhysicsSurfaceFamily_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddChildToPhysicsSurfaceFamily_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddChildToPhysicsSurfaceFamily_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddChildToPhysicsSurfaceFamily_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddChildToPhysicsSurfaceFamily_Statics::VertexPaintMaterialDataAsset_eventAddChildToPhysicsSurfaceFamily_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddChildToPhysicsSurfaceFamily()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddChildToPhysicsSurfaceFamily_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddPhysicsSurfaceFamily_Statics
	{
		struct VertexPaintMaterialDataAsset_eventAddPhysicsSurfaceFamily_Parms
		{
			TEnumAsByte<EPhysicalSurface> parentPhysicsSurface;
			FVertexPaintParentPhysicsSurfaceStruct parentPhysicsSurfaceStruct;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_parentPhysicsSurface;
		static const UECodeGen_Private::FStructPropertyParams NewProp_parentPhysicsSurfaceStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddPhysicsSurfaceFamily_Statics::NewProp_parentPhysicsSurface = { "parentPhysicsSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintMaterialDataAsset_eventAddPhysicsSurfaceFamily_Parms, parentPhysicsSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddPhysicsSurfaceFamily_Statics::NewProp_parentPhysicsSurfaceStruct = { "parentPhysicsSurfaceStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintMaterialDataAsset_eventAddPhysicsSurfaceFamily_Parms, parentPhysicsSurfaceStruct), Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct, METADATA_PARAMS(0, nullptr) }; // 367238135
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddPhysicsSurfaceFamily_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddPhysicsSurfaceFamily_Statics::NewProp_parentPhysicsSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddPhysicsSurfaceFamily_Statics::NewProp_parentPhysicsSurfaceStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddPhysicsSurfaceFamily_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "Comment", "// NOTE Doesn't have a .Contains check here because then we can't remove it if the material was Forced deleted and the TMap had null\n" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintMaterialDataAsset.h" },
		{ "ToolTip", "NOTE Doesn't have a .Contains check here because then we can't remove it if the material was Forced deleted and the TMap had null" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddPhysicsSurfaceFamily_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintMaterialDataAsset, nullptr, "AddPhysicsSurfaceFamily", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddPhysicsSurfaceFamily_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddPhysicsSurfaceFamily_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddPhysicsSurfaceFamily_Statics::VertexPaintMaterialDataAsset_eventAddPhysicsSurfaceFamily_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddPhysicsSurfaceFamily_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddPhysicsSurfaceFamily_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddPhysicsSurfaceFamily_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddPhysicsSurfaceFamily_Statics::VertexPaintMaterialDataAsset_eventAddPhysicsSurfaceFamily_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddPhysicsSurfaceFamily()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddPhysicsSurfaceFamily_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics
	{
		struct VertexPaintMaterialDataAsset_eventAddToVertexPaintMaterialInterface_Parms
		{
			TSoftObjectPtr<UMaterialInterface> material;
			FVertexPaintMaterialDataAssetStruct materialDataAssetStruct;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_material;
		static const UECodeGen_Private::FStructPropertyParams NewProp_materialDataAssetStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintMaterialDataAsset_eventAddToVertexPaintMaterialInterface_Parms, material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::NewProp_materialDataAssetStruct = { "materialDataAssetStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintMaterialDataAsset_eventAddToVertexPaintMaterialInterface_Parms, materialDataAssetStruct), Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct, METADATA_PARAMS(0, nullptr) }; // 3331871051
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::NewProp_material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::NewProp_materialDataAssetStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintMaterialDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintMaterialDataAsset, nullptr, "AddToVertexPaintMaterialInterface", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::VertexPaintMaterialDataAsset_eventAddToVertexPaintMaterialInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::VertexPaintMaterialDataAsset_eventAddToVertexPaintMaterialInterface_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UVertexPaintMaterialDataAsset_ClearAllPhysicsSurfaceFamilies_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintMaterialDataAsset_ClearAllPhysicsSurfaceFamilies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintMaterialDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_ClearAllPhysicsSurfaceFamilies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintMaterialDataAsset, nullptr, "ClearAllPhysicsSurfaceFamilies", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_ClearAllPhysicsSurfaceFamilies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintMaterialDataAsset_ClearAllPhysicsSurfaceFamilies_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVertexPaintMaterialDataAsset_ClearAllPhysicsSurfaceFamilies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintMaterialDataAsset_ClearAllPhysicsSurfaceFamilies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveChildFromPhysicsSurfaceFamily_Statics
	{
		struct VertexPaintMaterialDataAsset_eventRemoveChildFromPhysicsSurfaceFamily_Parms
		{
			TEnumAsByte<EPhysicalSurface> parentPhysicsSurface;
			TEnumAsByte<EPhysicalSurface> childPhysicsSurface;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_parentPhysicsSurface;
		static const UECodeGen_Private::FBytePropertyParams NewProp_childPhysicsSurface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveChildFromPhysicsSurfaceFamily_Statics::NewProp_parentPhysicsSurface = { "parentPhysicsSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintMaterialDataAsset_eventRemoveChildFromPhysicsSurfaceFamily_Parms, parentPhysicsSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveChildFromPhysicsSurfaceFamily_Statics::NewProp_childPhysicsSurface = { "childPhysicsSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintMaterialDataAsset_eventRemoveChildFromPhysicsSurfaceFamily_Parms, childPhysicsSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveChildFromPhysicsSurfaceFamily_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveChildFromPhysicsSurfaceFamily_Statics::NewProp_parentPhysicsSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveChildFromPhysicsSurfaceFamily_Statics::NewProp_childPhysicsSurface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveChildFromPhysicsSurfaceFamily_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintMaterialDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveChildFromPhysicsSurfaceFamily_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintMaterialDataAsset, nullptr, "RemoveChildFromPhysicsSurfaceFamily", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveChildFromPhysicsSurfaceFamily_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveChildFromPhysicsSurfaceFamily_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveChildFromPhysicsSurfaceFamily_Statics::VertexPaintMaterialDataAsset_eventRemoveChildFromPhysicsSurfaceFamily_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveChildFromPhysicsSurfaceFamily_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveChildFromPhysicsSurfaceFamily_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveChildFromPhysicsSurfaceFamily_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveChildFromPhysicsSurfaceFamily_Statics::VertexPaintMaterialDataAsset_eventRemoveChildFromPhysicsSurfaceFamily_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveChildFromPhysicsSurfaceFamily()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveChildFromPhysicsSurfaceFamily_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics
	{
		struct VertexPaintMaterialDataAsset_eventRemoveFromVertexPaintMaterialInterface_Parms
		{
			TSoftObjectPtr<UMaterialInterface> material;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintMaterialDataAsset_eventRemoveFromVertexPaintMaterialInterface_Parms, material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::NewProp_material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintMaterialDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintMaterialDataAsset, nullptr, "RemoveFromVertexPaintMaterialInterface", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::VertexPaintMaterialDataAsset_eventRemoveFromVertexPaintMaterialInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::VertexPaintMaterialDataAsset_eventRemoveFromVertexPaintMaterialInterface_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemovePhysicsSurfaceFamily_Statics
	{
		struct VertexPaintMaterialDataAsset_eventRemovePhysicsSurfaceFamily_Parms
		{
			TEnumAsByte<EPhysicalSurface> parentPhysicsSurface;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_parentPhysicsSurface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemovePhysicsSurfaceFamily_Statics::NewProp_parentPhysicsSurface = { "parentPhysicsSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintMaterialDataAsset_eventRemovePhysicsSurfaceFamily_Parms, parentPhysicsSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemovePhysicsSurfaceFamily_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemovePhysicsSurfaceFamily_Statics::NewProp_parentPhysicsSurface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemovePhysicsSurfaceFamily_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintMaterialDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemovePhysicsSurfaceFamily_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintMaterialDataAsset, nullptr, "RemovePhysicsSurfaceFamily", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemovePhysicsSurfaceFamily_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemovePhysicsSurfaceFamily_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemovePhysicsSurfaceFamily_Statics::VertexPaintMaterialDataAsset_eventRemovePhysicsSurfaceFamily_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemovePhysicsSurfaceFamily_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemovePhysicsSurfaceFamily_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemovePhysicsSurfaceFamily_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemovePhysicsSurfaceFamily_Statics::VertexPaintMaterialDataAsset_eventRemovePhysicsSurfaceFamily_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemovePhysicsSurfaceFamily()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemovePhysicsSurfaceFamily_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexPaintMaterialDataAsset);
	UClass* Z_Construct_UClass_UVertexPaintMaterialDataAsset_NoRegister()
	{
		return UVertexPaintMaterialDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexPaintMaterialInterfaces_ValueProp;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_vertexPaintMaterialInterfaces_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintMaterialInterfaces_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_vertexPaintMaterialInterfaces;
		static const UECodeGen_Private::FStructPropertyParams NewProp_physicsSurfaceFamilies_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_physicsSurfaceFamilies_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_physicsSurfaceFamilies_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_physicsSurfaceFamilies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::DependentSingletons) < 16);
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddChildToPhysicsSurfaceFamily, "AddChildToPhysicsSurfaceFamily" }, // 1558008429
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddPhysicsSurfaceFamily, "AddPhysicsSurfaceFamily" }, // 2772044144
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface, "AddToVertexPaintMaterialInterface" }, // 1409763673
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UVertexPaintMaterialDataAsset_ClearAllPhysicsSurfaceFamilies, "ClearAllPhysicsSurfaceFamilies" }, // 2218660881
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveChildFromPhysicsSurfaceFamily, "RemoveChildFromPhysicsSurfaceFamily" }, // 498820172
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface, "RemoveFromVertexPaintMaterialInterface" }, // 683990504
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemovePhysicsSurfaceFamily, "RemovePhysicsSurfaceFamily" }, // 2000893510
#endif //WITH_EDITOR
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::FuncInfo) < 2048);
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "DataAssets/VertexPaintMaterialDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintMaterialDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_vertexPaintMaterialInterfaces_ValueProp = { "vertexPaintMaterialInterfaces", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct, METADATA_PARAMS(0, nullptr) }; // 3331871051
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_vertexPaintMaterialInterfaces_Key_KeyProp = { "vertexPaintMaterialInterfaces_Key", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_vertexPaintMaterialInterfaces_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "Comment", "// TMap of All Materials that uses Vertex Colors\n" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintMaterialDataAsset.h" },
		{ "ToolTip", "TMap of All Materials that uses Vertex Colors" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_vertexPaintMaterialInterfaces = { "vertexPaintMaterialInterfaces", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintMaterialDataAsset, vertexPaintMaterialInterfaces), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_vertexPaintMaterialInterfaces_MetaData), Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_vertexPaintMaterialInterfaces_MetaData) }; // 3331871051
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_physicsSurfaceFamilies_ValueProp = { "physicsSurfaceFamilies", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct, METADATA_PARAMS(0, nullptr) }; // 367238135
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_physicsSurfaceFamilies_Key_KeyProp = { "physicsSurfaceFamilies_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_physicsSurfaceFamilies_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintMaterialDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_physicsSurfaceFamilies = { "physicsSurfaceFamilies", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintMaterialDataAsset, physicsSurfaceFamilies), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_physicsSurfaceFamilies_MetaData), Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_physicsSurfaceFamilies_MetaData) }; // 2508321301 367238135
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_vertexPaintMaterialInterfaces_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_vertexPaintMaterialInterfaces_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_vertexPaintMaterialInterfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_physicsSurfaceFamilies_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_physicsSurfaceFamilies_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_physicsSurfaceFamilies,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexPaintMaterialDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::ClassParams = {
		&UVertexPaintMaterialDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVertexPaintMaterialDataAsset()
	{
		if (!Z_Registration_Info_UClass_UVertexPaintMaterialDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexPaintMaterialDataAsset.OuterSingleton, Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexPaintMaterialDataAsset.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<UVertexPaintMaterialDataAsset>()
	{
		return UVertexPaintMaterialDataAsset::StaticClass();
	}
	UVertexPaintMaterialDataAsset::UVertexPaintMaterialDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexPaintMaterialDataAsset);
	UVertexPaintMaterialDataAsset::~UVertexPaintMaterialDataAsset() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintMaterialDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintMaterialDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexPaintMaterialDataAsset, UVertexPaintMaterialDataAsset::StaticClass, TEXT("UVertexPaintMaterialDataAsset"), &Z_Registration_Info_UClass_UVertexPaintMaterialDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexPaintMaterialDataAsset), 3313840308U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintMaterialDataAsset_h_2090850877(TEXT("/Script/VertexPaintDetectionPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintMaterialDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintMaterialDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
