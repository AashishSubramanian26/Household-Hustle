// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../DataAssets/VertexPaintOptimizationDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexPaintOptimizationDataAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintOptimizationDataAsset();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintOptimizationDataAsset_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaintOnLODSettingsStruct;
class UScriptStruct* FPaintOnLODSettingsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaintOnLODSettingsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaintOnLODSettingsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("PaintOnLODSettingsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_PaintOnLODSettingsStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FPaintOnLODSettingsStruct>()
{
	return FPaintOnLODSettingsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxAmountOfLODsToPaint_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_maxAmountOfLODsToPaint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Paint On LOD Settings Struct\n" },
#endif
		{ "ModuleRelativePath", "DataAssets/VertexPaintOptimizationDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Paint On LOD Settings Struct" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaintOnLODSettingsStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::NewProp_maxAmountOfLODsToPaint_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintOptimizationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::NewProp_maxAmountOfLODsToPaint = { "maxAmountOfLODsToPaint", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaintOnLODSettingsStruct, maxAmountOfLODsToPaint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::NewProp_maxAmountOfLODsToPaint_MetaData), Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::NewProp_maxAmountOfLODsToPaint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::NewProp_maxAmountOfLODsToPaint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"PaintOnLODSettingsStruct",
		Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::PropPointers),
		sizeof(FPaintOnLODSettingsStruct),
		alignof(FPaintOnLODSettingsStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_PaintOnLODSettingsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaintOnLODSettingsStruct.InnerSingleton, Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaintOnLODSettingsStruct.InnerSingleton;
	}
	DEFINE_FUNCTION(UVertexPaintOptimizationDataAsset::execGetSkeletalMeshNumOfLODsToPaint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<USkeletalMesh*,FPaintOnLODSettingsStruct>*)Z_Param__Result=P_THIS->GetSkeletalMeshNumOfLODsToPaint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintOptimizationDataAsset::execGetStaticMeshNumOfLODsToPaint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<UStaticMesh*,FPaintOnLODSettingsStruct>*)Z_Param__Result=P_THIS->GetStaticMeshNumOfLODsToPaint();
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UVertexPaintOptimizationDataAsset::execRemoveFromSkeletalMeshNumOfLODsToPaint)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_skeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFromSkeletalMeshNumOfLODsToPaint(Z_Param_skeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintOptimizationDataAsset::execRemoveFromStaticMeshNumOfLODsToPaint)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_staticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFromStaticMeshNumOfLODsToPaint(Z_Param_staticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintOptimizationDataAsset::execAddToSkeletalMeshNumOfLODsToPaint)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_skeletalMesh);
		P_GET_STRUCT(FPaintOnLODSettingsStruct,Z_Param_paintOnLODSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToSkeletalMeshNumOfLODsToPaint(Z_Param_skeletalMesh,Z_Param_paintOnLODSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintOptimizationDataAsset::execAddToStaticMeshNumOfLODsToPaint)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_staticMesh);
		P_GET_STRUCT(FPaintOnLODSettingsStruct,Z_Param_paintOnLODSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToStaticMeshNumOfLODsToPaint(Z_Param_staticMesh,Z_Param_paintOnLODSettings);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UVertexPaintOptimizationDataAsset::StaticRegisterNativesUVertexPaintOptimizationDataAsset()
	{
		UClass* Class = UVertexPaintOptimizationDataAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
			{ "AddToSkeletalMeshNumOfLODsToPaint", &UVertexPaintOptimizationDataAsset::execAddToSkeletalMeshNumOfLODsToPaint },
			{ "AddToStaticMeshNumOfLODsToPaint", &UVertexPaintOptimizationDataAsset::execAddToStaticMeshNumOfLODsToPaint },
#endif // WITH_EDITOR
			{ "GetSkeletalMeshNumOfLODsToPaint", &UVertexPaintOptimizationDataAsset::execGetSkeletalMeshNumOfLODsToPaint },
			{ "GetStaticMeshNumOfLODsToPaint", &UVertexPaintOptimizationDataAsset::execGetStaticMeshNumOfLODsToPaint },
#if WITH_EDITOR
			{ "RemoveFromSkeletalMeshNumOfLODsToPaint", &UVertexPaintOptimizationDataAsset::execRemoveFromSkeletalMeshNumOfLODsToPaint },
			{ "RemoveFromStaticMeshNumOfLODsToPaint", &UVertexPaintOptimizationDataAsset::execRemoveFromStaticMeshNumOfLODsToPaint },
#endif // WITH_EDITOR
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToSkeletalMeshNumOfLODsToPaint_Statics
	{
		struct VertexPaintOptimizationDataAsset_eventAddToSkeletalMeshNumOfLODsToPaint_Parms
		{
			USkeletalMesh* skeletalMesh;
			FPaintOnLODSettingsStruct paintOnLODSettings;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintOnLODSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToSkeletalMeshNumOfLODsToPaint_Statics::NewProp_skeletalMesh = { "skeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintOptimizationDataAsset_eventAddToSkeletalMeshNumOfLODsToPaint_Parms, skeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToSkeletalMeshNumOfLODsToPaint_Statics::NewProp_paintOnLODSettings = { "paintOnLODSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintOptimizationDataAsset_eventAddToSkeletalMeshNumOfLODsToPaint_Parms, paintOnLODSettings), Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct, METADATA_PARAMS(0, nullptr) }; // 3789772124
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToSkeletalMeshNumOfLODsToPaint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToSkeletalMeshNumOfLODsToPaint_Statics::NewProp_skeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToSkeletalMeshNumOfLODsToPaint_Statics::NewProp_paintOnLODSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToSkeletalMeshNumOfLODsToPaint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Optimization|Paint on LODs" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintOptimizationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToSkeletalMeshNumOfLODsToPaint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintOptimizationDataAsset, nullptr, "AddToSkeletalMeshNumOfLODsToPaint", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToSkeletalMeshNumOfLODsToPaint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToSkeletalMeshNumOfLODsToPaint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToSkeletalMeshNumOfLODsToPaint_Statics::VertexPaintOptimizationDataAsset_eventAddToSkeletalMeshNumOfLODsToPaint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToSkeletalMeshNumOfLODsToPaint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToSkeletalMeshNumOfLODsToPaint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToSkeletalMeshNumOfLODsToPaint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToSkeletalMeshNumOfLODsToPaint_Statics::VertexPaintOptimizationDataAsset_eventAddToSkeletalMeshNumOfLODsToPaint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToSkeletalMeshNumOfLODsToPaint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToSkeletalMeshNumOfLODsToPaint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToStaticMeshNumOfLODsToPaint_Statics
	{
		struct VertexPaintOptimizationDataAsset_eventAddToStaticMeshNumOfLODsToPaint_Parms
		{
			UStaticMesh* staticMesh;
			FPaintOnLODSettingsStruct paintOnLODSettings;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_staticMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintOnLODSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToStaticMeshNumOfLODsToPaint_Statics::NewProp_staticMesh = { "staticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintOptimizationDataAsset_eventAddToStaticMeshNumOfLODsToPaint_Parms, staticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToStaticMeshNumOfLODsToPaint_Statics::NewProp_paintOnLODSettings = { "paintOnLODSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintOptimizationDataAsset_eventAddToStaticMeshNumOfLODsToPaint_Parms, paintOnLODSettings), Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct, METADATA_PARAMS(0, nullptr) }; // 3789772124
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToStaticMeshNumOfLODsToPaint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToStaticMeshNumOfLODsToPaint_Statics::NewProp_staticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToStaticMeshNumOfLODsToPaint_Statics::NewProp_paintOnLODSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToStaticMeshNumOfLODsToPaint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Optimization|Paint on LODs" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintOptimizationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToStaticMeshNumOfLODsToPaint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintOptimizationDataAsset, nullptr, "AddToStaticMeshNumOfLODsToPaint", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToStaticMeshNumOfLODsToPaint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToStaticMeshNumOfLODsToPaint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToStaticMeshNumOfLODsToPaint_Statics::VertexPaintOptimizationDataAsset_eventAddToStaticMeshNumOfLODsToPaint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToStaticMeshNumOfLODsToPaint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToStaticMeshNumOfLODsToPaint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToStaticMeshNumOfLODsToPaint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToStaticMeshNumOfLODsToPaint_Statics::VertexPaintOptimizationDataAsset_eventAddToStaticMeshNumOfLODsToPaint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToStaticMeshNumOfLODsToPaint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToStaticMeshNumOfLODsToPaint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetSkeletalMeshNumOfLODsToPaint_Statics
	{
		struct VertexPaintOptimizationDataAsset_eventGetSkeletalMeshNumOfLODsToPaint_Parms
		{
			TMap<USkeletalMesh*,FPaintOnLODSettingsStruct> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetSkeletalMeshNumOfLODsToPaint_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct, METADATA_PARAMS(0, nullptr) }; // 3789772124
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetSkeletalMeshNumOfLODsToPaint_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetSkeletalMeshNumOfLODsToPaint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintOptimizationDataAsset_eventGetSkeletalMeshNumOfLODsToPaint_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3789772124
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetSkeletalMeshNumOfLODsToPaint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetSkeletalMeshNumOfLODsToPaint_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetSkeletalMeshNumOfLODsToPaint_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetSkeletalMeshNumOfLODsToPaint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetSkeletalMeshNumOfLODsToPaint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Optimization|Paint on LODs" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintOptimizationDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many LODs to Paint on Static Meshes that are Added here, given that it has that many LODs. Also if the amount set is the max amount that should be stored. Meshes that aren't added here will be painted on all their LODs." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetSkeletalMeshNumOfLODsToPaint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintOptimizationDataAsset, nullptr, "GetSkeletalMeshNumOfLODsToPaint", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetSkeletalMeshNumOfLODsToPaint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetSkeletalMeshNumOfLODsToPaint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetSkeletalMeshNumOfLODsToPaint_Statics::VertexPaintOptimizationDataAsset_eventGetSkeletalMeshNumOfLODsToPaint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetSkeletalMeshNumOfLODsToPaint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetSkeletalMeshNumOfLODsToPaint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetSkeletalMeshNumOfLODsToPaint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetSkeletalMeshNumOfLODsToPaint_Statics::VertexPaintOptimizationDataAsset_eventGetSkeletalMeshNumOfLODsToPaint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetSkeletalMeshNumOfLODsToPaint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetSkeletalMeshNumOfLODsToPaint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetStaticMeshNumOfLODsToPaint_Statics
	{
		struct VertexPaintOptimizationDataAsset_eventGetStaticMeshNumOfLODsToPaint_Parms
		{
			TMap<UStaticMesh*,FPaintOnLODSettingsStruct> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetStaticMeshNumOfLODsToPaint_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct, METADATA_PARAMS(0, nullptr) }; // 3789772124
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetStaticMeshNumOfLODsToPaint_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetStaticMeshNumOfLODsToPaint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintOptimizationDataAsset_eventGetStaticMeshNumOfLODsToPaint_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3789772124
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetStaticMeshNumOfLODsToPaint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetStaticMeshNumOfLODsToPaint_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetStaticMeshNumOfLODsToPaint_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetStaticMeshNumOfLODsToPaint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetStaticMeshNumOfLODsToPaint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Optimization|Paint on LODs" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintOptimizationDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many LODs to Paint on Static Meshes that are Added here, given that it has that many LODs. Also if the amount set is the max amount that should be stored. Meshes that aren't added here will be painted on all their LODs." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetStaticMeshNumOfLODsToPaint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintOptimizationDataAsset, nullptr, "GetStaticMeshNumOfLODsToPaint", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetStaticMeshNumOfLODsToPaint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetStaticMeshNumOfLODsToPaint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetStaticMeshNumOfLODsToPaint_Statics::VertexPaintOptimizationDataAsset_eventGetStaticMeshNumOfLODsToPaint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetStaticMeshNumOfLODsToPaint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetStaticMeshNumOfLODsToPaint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetStaticMeshNumOfLODsToPaint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetStaticMeshNumOfLODsToPaint_Statics::VertexPaintOptimizationDataAsset_eventGetStaticMeshNumOfLODsToPaint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetStaticMeshNumOfLODsToPaint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetStaticMeshNumOfLODsToPaint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromSkeletalMeshNumOfLODsToPaint_Statics
	{
		struct VertexPaintOptimizationDataAsset_eventRemoveFromSkeletalMeshNumOfLODsToPaint_Parms
		{
			USkeletalMesh* skeletalMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromSkeletalMeshNumOfLODsToPaint_Statics::NewProp_skeletalMesh = { "skeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintOptimizationDataAsset_eventRemoveFromSkeletalMeshNumOfLODsToPaint_Parms, skeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromSkeletalMeshNumOfLODsToPaint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromSkeletalMeshNumOfLODsToPaint_Statics::NewProp_skeletalMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromSkeletalMeshNumOfLODsToPaint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Optimization|Paint on LODs" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintOptimizationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromSkeletalMeshNumOfLODsToPaint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintOptimizationDataAsset, nullptr, "RemoveFromSkeletalMeshNumOfLODsToPaint", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromSkeletalMeshNumOfLODsToPaint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromSkeletalMeshNumOfLODsToPaint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromSkeletalMeshNumOfLODsToPaint_Statics::VertexPaintOptimizationDataAsset_eventRemoveFromSkeletalMeshNumOfLODsToPaint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromSkeletalMeshNumOfLODsToPaint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromSkeletalMeshNumOfLODsToPaint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromSkeletalMeshNumOfLODsToPaint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromSkeletalMeshNumOfLODsToPaint_Statics::VertexPaintOptimizationDataAsset_eventRemoveFromSkeletalMeshNumOfLODsToPaint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromSkeletalMeshNumOfLODsToPaint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromSkeletalMeshNumOfLODsToPaint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromStaticMeshNumOfLODsToPaint_Statics
	{
		struct VertexPaintOptimizationDataAsset_eventRemoveFromStaticMeshNumOfLODsToPaint_Parms
		{
			UStaticMesh* staticMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_staticMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromStaticMeshNumOfLODsToPaint_Statics::NewProp_staticMesh = { "staticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintOptimizationDataAsset_eventRemoveFromStaticMeshNumOfLODsToPaint_Parms, staticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromStaticMeshNumOfLODsToPaint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromStaticMeshNumOfLODsToPaint_Statics::NewProp_staticMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromStaticMeshNumOfLODsToPaint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Optimization|Paint on LODs" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintOptimizationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromStaticMeshNumOfLODsToPaint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintOptimizationDataAsset, nullptr, "RemoveFromStaticMeshNumOfLODsToPaint", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromStaticMeshNumOfLODsToPaint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromStaticMeshNumOfLODsToPaint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromStaticMeshNumOfLODsToPaint_Statics::VertexPaintOptimizationDataAsset_eventRemoveFromStaticMeshNumOfLODsToPaint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromStaticMeshNumOfLODsToPaint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromStaticMeshNumOfLODsToPaint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromStaticMeshNumOfLODsToPaint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromStaticMeshNumOfLODsToPaint_Statics::VertexPaintOptimizationDataAsset_eventRemoveFromStaticMeshNumOfLODsToPaint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromStaticMeshNumOfLODsToPaint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromStaticMeshNumOfLODsToPaint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexPaintOptimizationDataAsset);
	UClass* Z_Construct_UClass_UVertexPaintOptimizationDataAsset_NoRegister()
	{
		return UVertexPaintOptimizationDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_staticMeshNumOfLODsToPaint_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_staticMeshNumOfLODsToPaint_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staticMeshNumOfLODsToPaint_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_staticMeshNumOfLODsToPaint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_skeletalMeshNumOfLODsToPaint_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshNumOfLODsToPaint_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshNumOfLODsToPaint_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_skeletalMeshNumOfLODsToPaint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToSkeletalMeshNumOfLODsToPaint, "AddToSkeletalMeshNumOfLODsToPaint" }, // 3700571183
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_AddToStaticMeshNumOfLODsToPaint, "AddToStaticMeshNumOfLODsToPaint" }, // 1991172714
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetSkeletalMeshNumOfLODsToPaint, "GetSkeletalMeshNumOfLODsToPaint" }, // 3907975845
		{ &Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_GetStaticMeshNumOfLODsToPaint, "GetStaticMeshNumOfLODsToPaint" }, // 3396435425
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromSkeletalMeshNumOfLODsToPaint, "RemoveFromSkeletalMeshNumOfLODsToPaint" }, // 1467815102
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UVertexPaintOptimizationDataAsset_RemoveFromStaticMeshNumOfLODsToPaint, "RemoveFromStaticMeshNumOfLODsToPaint" }, // 2859935750
#endif //WITH_EDITOR
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------\n" },
#endif
		{ "IncludePath", "DataAssets/VertexPaintOptimizationDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintOptimizationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_staticMeshNumOfLODsToPaint_ValueProp = { "staticMeshNumOfLODsToPaint", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct, METADATA_PARAMS(0, nullptr) }; // 3789772124
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_staticMeshNumOfLODsToPaint_Key_KeyProp = { "staticMeshNumOfLODsToPaint_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_staticMeshNumOfLODsToPaint_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Optimization|Paint on LODs" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintOptimizationDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many LODs to Paint on Static Meshes that are Added here, given that it has that many LODs. Also if the amount set is the max amount that should be stored. Meshes that aren't added here will be painted on all their LODs." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_staticMeshNumOfLODsToPaint = { "staticMeshNumOfLODsToPaint", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintOptimizationDataAsset, staticMeshNumOfLODsToPaint), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_staticMeshNumOfLODsToPaint_MetaData), Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_staticMeshNumOfLODsToPaint_MetaData) }; // 3789772124
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_skeletalMeshNumOfLODsToPaint_ValueProp = { "skeletalMeshNumOfLODsToPaint", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct, METADATA_PARAMS(0, nullptr) }; // 3789772124
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_skeletalMeshNumOfLODsToPaint_Key_KeyProp = { "skeletalMeshNumOfLODsToPaint_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_skeletalMeshNumOfLODsToPaint_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Optimization|Paint on LODs" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintOptimizationDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many LODs to Paint on Static Meshes that are Added here, given that it has that many LODs. Also if the amount set is the max amount that should be stored. Meshes that aren't added here will be painted on all their LODs." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_skeletalMeshNumOfLODsToPaint = { "skeletalMeshNumOfLODsToPaint", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintOptimizationDataAsset, skeletalMeshNumOfLODsToPaint), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_skeletalMeshNumOfLODsToPaint_MetaData), Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_skeletalMeshNumOfLODsToPaint_MetaData) }; // 3789772124
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_staticMeshNumOfLODsToPaint_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_staticMeshNumOfLODsToPaint_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_staticMeshNumOfLODsToPaint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_skeletalMeshNumOfLODsToPaint_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_skeletalMeshNumOfLODsToPaint_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_skeletalMeshNumOfLODsToPaint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexPaintOptimizationDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::ClassParams = {
		&UVertexPaintOptimizationDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVertexPaintOptimizationDataAsset()
	{
		if (!Z_Registration_Info_UClass_UVertexPaintOptimizationDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexPaintOptimizationDataAsset.OuterSingleton, Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexPaintOptimizationDataAsset.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<UVertexPaintOptimizationDataAsset>()
	{
		return UVertexPaintOptimizationDataAsset::StaticClass();
	}
	UVertexPaintOptimizationDataAsset::UVertexPaintOptimizationDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexPaintOptimizationDataAsset);
	UVertexPaintOptimizationDataAsset::~UVertexPaintOptimizationDataAsset() {}
	struct Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_Statics::ScriptStructInfo[] = {
		{ FPaintOnLODSettingsStruct::StaticStruct, Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::NewStructOps, TEXT("PaintOnLODSettingsStruct"), &Z_Registration_Info_UScriptStruct_PaintOnLODSettingsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaintOnLODSettingsStruct), 3789772124U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexPaintOptimizationDataAsset, UVertexPaintOptimizationDataAsset::StaticClass, TEXT("UVertexPaintOptimizationDataAsset"), &Z_Registration_Info_UClass_UVertexPaintOptimizationDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexPaintOptimizationDataAsset), 1885719167U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_1449074336(TEXT("/Script/VertexPaintDetectionPlugin"),
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintOptimizationDataAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
