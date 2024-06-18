// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VertexPaintClothOverlapComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexPaintClothOverlapComponent() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintClothOverlapComponent();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintClothOverlapComponent_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintClothOverlapComponentsStruct();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintClothOverlapComponentsStruct;
class UScriptStruct* FVertexPaintClothOverlapComponentsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintClothOverlapComponentsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintClothOverlapComponentsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintClothOverlapComponentsStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintClothOverlapComponentsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintClothOverlapComponentsStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintClothOverlapComponentsStruct>()
{
	return FVertexPaintClothOverlapComponentsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintClothOverlapComponentsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintClothOverlapComponentsStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/VertexPaintClothOverlapComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintClothOverlapComponentsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintClothOverlapComponentsStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintClothOverlapComponentsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexPaintClothOverlapComponentsStruct",
		nullptr,
		0,
		sizeof(FVertexPaintClothOverlapComponentsStruct),
		alignof(FVertexPaintClothOverlapComponentsStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintClothOverlapComponentsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintClothOverlapComponentsStruct_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintClothOverlapComponentsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintClothOverlapComponentsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintClothOverlapComponentsStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintClothOverlapComponentsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintClothOverlapComponentsStruct.InnerSingleton;
	}
	DEFINE_FUNCTION(UVertexPaintClothOverlapComponent::execOnRep_ClothOverlapTracingEnabledRep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ClothOverlapTracingEnabledRep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintClothOverlapComponent::execSetClothOverlapTracingEnabled)
	{
		P_GET_UBOOL(Z_Param_enableClothTracing);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClothOverlapTracingEnabled(Z_Param_enableClothTracing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintClothOverlapComponent::execSetClothObjectsToSphereTrace)
	{
		P_GET_TARRAY(TEnumAsByte<EObjectTypeQuery>,Z_Param_objects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClothObjectsToSphereTrace(Z_Param_objects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintClothOverlapComponent::execGetClothObjectsToSphereTrace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TEnumAsByte<EObjectTypeQuery> >*)Z_Param__Result=P_THIS->GetClothObjectsToSphereTrace();
		P_NATIVE_END;
	}
	void UVertexPaintClothOverlapComponent::StaticRegisterNativesUVertexPaintClothOverlapComponent()
	{
		UClass* Class = UVertexPaintClothOverlapComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetClothObjectsToSphereTrace", &UVertexPaintClothOverlapComponent::execGetClothObjectsToSphereTrace },
			{ "OnRep_ClothOverlapTracingEnabledRep", &UVertexPaintClothOverlapComponent::execOnRep_ClothOverlapTracingEnabledRep },
			{ "SetClothObjectsToSphereTrace", &UVertexPaintClothOverlapComponent::execSetClothObjectsToSphereTrace },
			{ "SetClothOverlapTracingEnabled", &UVertexPaintClothOverlapComponent::execSetClothOverlapTracingEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVertexPaintClothOverlapComponent_GetClothObjectsToSphereTrace_Statics
	{
		struct VertexPaintClothOverlapComponent_eventGetClothObjectsToSphereTrace_Parms
		{
			TArray<TEnumAsByte<EObjectTypeQuery> > ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintClothOverlapComponent_GetClothObjectsToSphereTrace_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintClothOverlapComponent_GetClothObjectsToSphereTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintClothOverlapComponent_eventGetClothObjectsToSphereTrace_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3930035403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintClothOverlapComponent_GetClothObjectsToSphereTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintClothOverlapComponent_GetClothObjectsToSphereTrace_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintClothOverlapComponent_GetClothObjectsToSphereTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintClothOverlapComponent_GetClothObjectsToSphereTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cloth Overlap Settings" },
		{ "ModuleRelativePath", "Components/VertexPaintClothOverlapComponent.h" },
		{ "ToolTip", "Returns the Cloth Objects currently set to sphere trace." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintClothOverlapComponent_GetClothObjectsToSphereTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintClothOverlapComponent, nullptr, "GetClothObjectsToSphereTrace", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintClothOverlapComponent_GetClothObjectsToSphereTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintClothOverlapComponent_GetClothObjectsToSphereTrace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintClothOverlapComponent_GetClothObjectsToSphereTrace_Statics::VertexPaintClothOverlapComponent_eventGetClothObjectsToSphereTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintClothOverlapComponent_GetClothObjectsToSphereTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintClothOverlapComponent_GetClothObjectsToSphereTrace_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintClothOverlapComponent_GetClothObjectsToSphereTrace_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintClothOverlapComponent_GetClothObjectsToSphereTrace_Statics::VertexPaintClothOverlapComponent_eventGetClothObjectsToSphereTrace_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintClothOverlapComponent_GetClothObjectsToSphereTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintClothOverlapComponent_GetClothObjectsToSphereTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintClothOverlapComponent_OnRep_ClothOverlapTracingEnabledRep_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintClothOverlapComponent_OnRep_ClothOverlapTracingEnabledRep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/VertexPaintClothOverlapComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintClothOverlapComponent_OnRep_ClothOverlapTracingEnabledRep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintClothOverlapComponent, nullptr, "OnRep_ClothOverlapTracingEnabledRep", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintClothOverlapComponent_OnRep_ClothOverlapTracingEnabledRep_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintClothOverlapComponent_OnRep_ClothOverlapTracingEnabledRep_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVertexPaintClothOverlapComponent_OnRep_ClothOverlapTracingEnabledRep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintClothOverlapComponent_OnRep_ClothOverlapTracingEnabledRep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothObjectsToSphereTrace_Statics
	{
		struct VertexPaintClothOverlapComponent_eventSetClothObjectsToSphereTrace_Parms
		{
			TArray<TEnumAsByte<EObjectTypeQuery> > objects;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_objects_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_objects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothObjectsToSphereTrace_Statics::NewProp_objects_Inner = { "objects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothObjectsToSphereTrace_Statics::NewProp_objects = { "objects", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintClothOverlapComponent_eventSetClothObjectsToSphereTrace_Parms, objects), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3930035403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothObjectsToSphereTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothObjectsToSphereTrace_Statics::NewProp_objects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothObjectsToSphereTrace_Statics::NewProp_objects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothObjectsToSphereTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cloth Overlap Settings" },
		{ "ModuleRelativePath", "Components/VertexPaintClothOverlapComponent.h" },
		{ "ToolTip", "Sets the Cloth Objects it should sphere trace to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothObjectsToSphereTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintClothOverlapComponent, nullptr, "SetClothObjectsToSphereTrace", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothObjectsToSphereTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothObjectsToSphereTrace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothObjectsToSphereTrace_Statics::VertexPaintClothOverlapComponent_eventSetClothObjectsToSphereTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothObjectsToSphereTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothObjectsToSphereTrace_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothObjectsToSphereTrace_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothObjectsToSphereTrace_Statics::VertexPaintClothOverlapComponent_eventSetClothObjectsToSphereTrace_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothObjectsToSphereTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothObjectsToSphereTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothOverlapTracingEnabled_Statics
	{
		struct VertexPaintClothOverlapComponent_eventSetClothOverlapTracingEnabled_Parms
		{
			bool enableClothTracing;
		};
		static void NewProp_enableClothTracing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enableClothTracing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothOverlapTracingEnabled_Statics::NewProp_enableClothTracing_SetBit(void* Obj)
	{
		((VertexPaintClothOverlapComponent_eventSetClothOverlapTracingEnabled_Parms*)Obj)->enableClothTracing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothOverlapTracingEnabled_Statics::NewProp_enableClothTracing = { "enableClothTracing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintClothOverlapComponent_eventSetClothOverlapTracingEnabled_Parms), &Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothOverlapTracingEnabled_Statics::NewProp_enableClothTracing_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothOverlapTracingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothOverlapTracingEnabled_Statics::NewProp_enableClothTracing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothOverlapTracingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cloth Overlap Settings" },
		{ "ModuleRelativePath", "Components/VertexPaintClothOverlapComponent.h" },
		{ "ToolTip", "Activates / DeActivates Cloth Overlap Tracing. Useful if you don't want to have it activated all the time but enable it when you want to have more attention to detail on the cloth, like in a cutscene or something similar." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothOverlapTracingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintClothOverlapComponent, nullptr, "SetClothOverlapTracingEnabled", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothOverlapTracingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothOverlapTracingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothOverlapTracingEnabled_Statics::VertexPaintClothOverlapComponent_eventSetClothOverlapTracingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothOverlapTracingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothOverlapTracingEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothOverlapTracingEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothOverlapTracingEnabled_Statics::VertexPaintClothOverlapComponent_eventSetClothOverlapTracingEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothOverlapTracingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothOverlapTracingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexPaintClothOverlapComponent);
	UClass* Z_Construct_UClass_UVertexPaintClothOverlapComponent_NoRegister()
	{
		return UVertexPaintClothOverlapComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothOverlapTracingEnabled_MetaData[];
#endif
		static void NewProp_clothOverlapTracingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_clothOverlapTracingEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothVertexTraceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_clothVertexTraceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothVertexTraceIntervall_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_clothVertexTraceIntervall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debugClothSphereTraces_MetaData[];
#endif
		static void NewProp_debugClothSphereTraces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_debugClothSphereTraces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_parentSkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_parentSkeletalMeshComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_parentSkeletalMeshComponentClothingAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_parentSkeletalMeshComponentClothingAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_parentSkeletalMeshComponentClothingAssets;
		static const UECodeGen_Private::FBytePropertyParams NewProp_clothObjectsToSphereTrace_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothObjectsToSphereTrace_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_clothObjectsToSphereTrace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothOverlappingActorsAndComponent_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_clothOverlappingActorsAndComponent_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothOverlappingActorsAndComponent_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_clothOverlappingActorsAndComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothBoneTransformsInComponentSpaceTemp_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_clothBoneTransformsInComponentSpaceTemp_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothBoneTransformsInComponentSpaceTemp_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_clothBoneTransformsInComponentSpaceTemp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothBoneQuaternionsInComponentSpaceTemp_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_clothBoneQuaternionsInComponentSpaceTemp_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothBoneQuaternionsInComponentSpaceTemp_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_clothBoneQuaternionsInComponentSpaceTemp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVertexPaintClothOverlapComponent_GetClothObjectsToSphereTrace, "GetClothObjectsToSphereTrace" }, // 491356350
		{ &Z_Construct_UFunction_UVertexPaintClothOverlapComponent_OnRep_ClothOverlapTracingEnabledRep, "OnRep_ClothOverlapTracingEnabledRep" }, // 3034406153
		{ &Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothObjectsToSphereTrace, "SetClothObjectsToSphereTrace" }, // 3882457815
		{ &Z_Construct_UFunction_UVertexPaintClothOverlapComponent_SetClothOverlapTracingEnabled, "SetClothOverlapTracingEnabled" }, // 509679142
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "DisplayName", "Cloth Overlap Component" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/VertexPaintClothOverlapComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Components/VertexPaintClothOverlapComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothOverlapTracingEnabled_MetaData[] = {
		{ "Category", "Cloth Overlap Settings" },
		{ "ModuleRelativePath", "Components/VertexPaintClothOverlapComponent.h" },
		{ "ToolTip", "If we should run the traces" },
	};
#endif
	void Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothOverlapTracingEnabled_SetBit(void* Obj)
	{
		((UVertexPaintClothOverlapComponent*)Obj)->clothOverlapTracingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothOverlapTracingEnabled = { "clothOverlapTracingEnabled", "OnRep_ClothOverlapTracingEnabledRep", (EPropertyFlags)0x0010000100000035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVertexPaintClothOverlapComponent), &Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothOverlapTracingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothOverlapTracingEnabled_MetaData), Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothOverlapTracingEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothVertexTraceRadius_MetaData[] = {
		{ "Category", "Cloth Overlap Settings" },
		{ "ModuleRelativePath", "Components/VertexPaintClothOverlapComponent.h" },
		{ "ToolTip", "Size of each sphere trace on the cloth vertex position. Can be larger if you opt to only trace every other vertex or similar." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothVertexTraceRadius = { "clothVertexTraceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintClothOverlapComponent, clothVertexTraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothVertexTraceRadius_MetaData), Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothVertexTraceRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothVertexTraceIntervall_MetaData[] = {
		{ "Category", "Cloth Overlap Settings" },
		{ "ModuleRelativePath", "Components/VertexPaintClothOverlapComponent.h" },
		{ "ToolTip", "0 or 1 = Traces every vertex, 2 every other vertex etc. \nCan be used to optimize the tracing!" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothVertexTraceIntervall = { "clothVertexTraceIntervall", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintClothOverlapComponent, clothVertexTraceIntervall), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothVertexTraceIntervall_MetaData), Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothVertexTraceIntervall_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_debugClothSphereTraces_MetaData[] = {
		{ "Category", "Cloth Overlap Settings" },
		{ "ModuleRelativePath", "Components/VertexPaintClothOverlapComponent.h" },
		{ "ToolTip", "Show the sphere trace locations" },
	};
#endif
	void Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_debugClothSphereTraces_SetBit(void* Obj)
	{
		((UVertexPaintClothOverlapComponent*)Obj)->debugClothSphereTraces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_debugClothSphereTraces = { "debugClothSphereTraces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVertexPaintClothOverlapComponent), &Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_debugClothSphereTraces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_debugClothSphereTraces_MetaData), Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_debugClothSphereTraces_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_parentSkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/VertexPaintClothOverlapComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_parentSkeletalMeshComponent = { "parentSkeletalMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintClothOverlapComponent, parentSkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_parentSkeletalMeshComponent_MetaData), Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_parentSkeletalMeshComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_parentSkeletalMeshComponentClothingAssets_Inner = { "parentSkeletalMeshComponentClothingAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClothingAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_parentSkeletalMeshComponentClothingAssets_MetaData[] = {
		{ "ModuleRelativePath", "Components/VertexPaintClothOverlapComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_parentSkeletalMeshComponentClothingAssets = { "parentSkeletalMeshComponentClothingAssets", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintClothOverlapComponent, parentSkeletalMeshComponentClothingAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_parentSkeletalMeshComponentClothingAssets_MetaData), Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_parentSkeletalMeshComponentClothingAssets_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothObjectsToSphereTrace_Inner = { "clothObjectsToSphereTrace", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothObjectsToSphereTrace_MetaData[] = {
		{ "Category", "Cloth Overlap Settings" },
		{ "ModuleRelativePath", "Components/VertexPaintClothOverlapComponent.h" },
		{ "ToolTip", "Can set which channels it should overlap here, so in case you want it to overlap other channels other than the skeletal mesh component its attached to that is possible." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothObjectsToSphereTrace = { "clothObjectsToSphereTrace", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintClothOverlapComponent, clothObjectsToSphereTrace), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothObjectsToSphereTrace_MetaData), Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothObjectsToSphereTrace_MetaData) }; // 3930035403
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothOverlappingActorsAndComponent_ValueProp = { "clothOverlappingActorsAndComponent", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVertexPaintClothOverlapComponentsStruct, METADATA_PARAMS(0, nullptr) }; // 3893402909
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothOverlappingActorsAndComponent_Key_KeyProp = { "clothOverlappingActorsAndComponent_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothOverlappingActorsAndComponent_MetaData[] = {
		{ "ModuleRelativePath", "Components/VertexPaintClothOverlapComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothOverlappingActorsAndComponent = { "clothOverlappingActorsAndComponent", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintClothOverlapComponent, clothOverlappingActorsAndComponent), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothOverlappingActorsAndComponent_MetaData), Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothOverlappingActorsAndComponent_MetaData) }; // 3893402909
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothBoneTransformsInComponentSpaceTemp_ValueProp = { "clothBoneTransformsInComponentSpaceTemp", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothBoneTransformsInComponentSpaceTemp_Key_KeyProp = { "clothBoneTransformsInComponentSpaceTemp_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClothingAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothBoneTransformsInComponentSpaceTemp_MetaData[] = {
		{ "ModuleRelativePath", "Components/VertexPaintClothOverlapComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothBoneTransformsInComponentSpaceTemp = { "clothBoneTransformsInComponentSpaceTemp", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintClothOverlapComponent, clothBoneTransformsInComponentSpaceTemp), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothBoneTransformsInComponentSpaceTemp_MetaData), Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothBoneTransformsInComponentSpaceTemp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothBoneQuaternionsInComponentSpaceTemp_ValueProp = { "clothBoneQuaternionsInComponentSpaceTemp", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothBoneQuaternionsInComponentSpaceTemp_Key_KeyProp = { "clothBoneQuaternionsInComponentSpaceTemp_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClothingAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothBoneQuaternionsInComponentSpaceTemp_MetaData[] = {
		{ "ModuleRelativePath", "Components/VertexPaintClothOverlapComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothBoneQuaternionsInComponentSpaceTemp = { "clothBoneQuaternionsInComponentSpaceTemp", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintClothOverlapComponent, clothBoneQuaternionsInComponentSpaceTemp), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothBoneQuaternionsInComponentSpaceTemp_MetaData), Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothBoneQuaternionsInComponentSpaceTemp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothOverlapTracingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothVertexTraceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothVertexTraceIntervall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_debugClothSphereTraces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_parentSkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_parentSkeletalMeshComponentClothingAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_parentSkeletalMeshComponentClothingAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothObjectsToSphereTrace_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothObjectsToSphereTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothOverlappingActorsAndComponent_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothOverlappingActorsAndComponent_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothOverlappingActorsAndComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothBoneTransformsInComponentSpaceTemp_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothBoneTransformsInComponentSpaceTemp_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothBoneTransformsInComponentSpaceTemp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothBoneQuaternionsInComponentSpaceTemp_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothBoneQuaternionsInComponentSpaceTemp_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::NewProp_clothBoneQuaternionsInComponentSpaceTemp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexPaintClothOverlapComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::ClassParams = {
		&UVertexPaintClothOverlapComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVertexPaintClothOverlapComponent()
	{
		if (!Z_Registration_Info_UClass_UVertexPaintClothOverlapComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexPaintClothOverlapComponent.OuterSingleton, Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexPaintClothOverlapComponent.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<UVertexPaintClothOverlapComponent>()
	{
		return UVertexPaintClothOverlapComponent::StaticClass();
	}

	void UVertexPaintClothOverlapComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_clothOverlapTracingEnabled(TEXT("clothOverlapTracingEnabled"));

		const bool bIsValid = true
			&& Name_clothOverlapTracingEnabled == ClassReps[(int32)ENetFields_Private::clothOverlapTracingEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UVertexPaintClothOverlapComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexPaintClothOverlapComponent);
	UVertexPaintClothOverlapComponent::~UVertexPaintClothOverlapComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintClothOverlapComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintClothOverlapComponent_h_Statics::ScriptStructInfo[] = {
		{ FVertexPaintClothOverlapComponentsStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintClothOverlapComponentsStruct_Statics::NewStructOps, TEXT("VertexPaintClothOverlapComponentsStruct"), &Z_Registration_Info_UScriptStruct_VertexPaintClothOverlapComponentsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintClothOverlapComponentsStruct), 3893402909U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintClothOverlapComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexPaintClothOverlapComponent, UVertexPaintClothOverlapComponent::StaticClass, TEXT("UVertexPaintClothOverlapComponent"), &Z_Registration_Info_UClass_UVertexPaintClothOverlapComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexPaintClothOverlapComponent), 2840588774U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintClothOverlapComponent_h_286994266(TEXT("/Script/VertexPaintDetectionPlugin"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintClothOverlapComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintClothOverlapComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintClothOverlapComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_VertexPaintClothOverlapComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
