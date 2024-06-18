// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoAddColorComponent.h"
#include "../Prerequisites/AdditionalDataPrerequisites.h"
#include "../Prerequisites/TaskResultsPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoAddColorComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UAutoAddColorComponent();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UAutoAddColorComponent_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintDetectionComponent();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAutoAddColorSettings();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAutoPaintTaskResults();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutoAddColorSettings;
class UScriptStruct* FAutoAddColorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutoAddColorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutoAddColorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoAddColorSettings, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("AutoAddColorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AutoAddColorSettings.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FAutoAddColorSettings>()
{
	return FAutoAddColorSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_delayBetweenTasks_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_delayBetweenTasks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stopAutoPaintingMeshIfFullyPainted_MetaData[];
#endif
		static void NewProp_stopAutoPaintingMeshIfFullyPainted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_stopAutoPaintingMeshIfFullyPainted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stopAutoPaintingMeshIfCompletelyEmpty_MetaData[];
#endif
		static void NewProp_stopAutoPaintingMeshIfCompletelyEmpty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_stopAutoPaintingMeshIfCompletelyEmpty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoAddColorSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::NewProp_delayBetweenTasks_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Auto Paint Component" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
		{ "ToolTip", "If we should have a delay until we start auto adding colors again. Useful if you're for instance drying a character but don't want it to dry too fast." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::NewProp_delayBetweenTasks = { "delayBetweenTasks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoAddColorSettings, delayBetweenTasks), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::NewProp_delayBetweenTasks_MetaData), Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::NewProp_delayBetweenTasks_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::NewProp_stopAutoPaintingMeshIfFullyPainted_MetaData[] = {
		{ "Category", "Auto Paint|Optimization Settings" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
		{ "ToolTip", "If True then this will Stop Auto Painting the Mesh if it's Fully Painted of the Channels / Physics Surfaces we're Trying to Apply." },
	};
#endif
	void Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::NewProp_stopAutoPaintingMeshIfFullyPainted_SetBit(void* Obj)
	{
		((FAutoAddColorSettings*)Obj)->stopAutoPaintingMeshIfFullyPainted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::NewProp_stopAutoPaintingMeshIfFullyPainted = { "stopAutoPaintingMeshIfFullyPainted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutoAddColorSettings), &Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::NewProp_stopAutoPaintingMeshIfFullyPainted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::NewProp_stopAutoPaintingMeshIfFullyPainted_MetaData), Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::NewProp_stopAutoPaintingMeshIfFullyPainted_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::NewProp_stopAutoPaintingMeshIfCompletelyEmpty_MetaData[] = {
		{ "Category", "Auto Paint|Optimization Settings" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
		{ "ToolTip", "If True then this will Stop Auto Painting the Mesh if it's Completely Empty of the Channels / Physics Surfaces we're Trying to Remove. \nCan be useful if you have a centralized system, for example a Singleton that listens to Overlaps of Water Bodies and Starts Auto Paint Entire Mesh on them for Drying to make sure they all can Dry in sync. But if a Mesh leaves the water body and has become fully dried, then it can stop auto painting it, i.e. clean it out of it's list so it only has the relevant Meshes in it." },
	};
#endif
	void Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::NewProp_stopAutoPaintingMeshIfCompletelyEmpty_SetBit(void* Obj)
	{
		((FAutoAddColorSettings*)Obj)->stopAutoPaintingMeshIfCompletelyEmpty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::NewProp_stopAutoPaintingMeshIfCompletelyEmpty = { "stopAutoPaintingMeshIfCompletelyEmpty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutoAddColorSettings), &Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::NewProp_stopAutoPaintingMeshIfCompletelyEmpty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::NewProp_stopAutoPaintingMeshIfCompletelyEmpty_MetaData), Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::NewProp_stopAutoPaintingMeshIfCompletelyEmpty_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::NewProp_delayBetweenTasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::NewProp_stopAutoPaintingMeshIfFullyPainted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::NewProp_stopAutoPaintingMeshIfCompletelyEmpty,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"AutoAddColorSettings",
		Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::PropPointers),
		sizeof(FAutoAddColorSettings),
		alignof(FAutoAddColorSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAutoAddColorSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AutoAddColorSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutoAddColorSettings.InnerSingleton, Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutoAddColorSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutoPaintTaskResults;
class UScriptStruct* FAutoPaintTaskResults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutoPaintTaskResults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutoPaintTaskResults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoPaintTaskResults, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("AutoPaintTaskResults"));
	}
	return Z_Registration_Info_UScriptStruct_AutoPaintTaskResults.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FAutoPaintTaskResults>()
{
	return FAutoPaintTaskResults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutoPaintTaskResults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoPaintTaskResults_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutoPaintTaskResults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoPaintTaskResults>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoPaintTaskResults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"AutoPaintTaskResults",
		nullptr,
		0,
		sizeof(FAutoPaintTaskResults),
		alignof(FAutoPaintTaskResults),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoPaintTaskResults_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutoPaintTaskResults_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutoPaintTaskResults()
	{
		if (!Z_Registration_Info_UScriptStruct_AutoPaintTaskResults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutoPaintTaskResults.InnerSingleton, Z_Construct_UScriptStruct_FAutoPaintTaskResults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutoPaintTaskResults.InnerSingleton;
	}
	DEFINE_FUNCTION(UAutoAddColorComponent::execStartNewRoundOfTasks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartNewRoundOfTasks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutoAddColorComponent::execAutoPaintDelayFinished)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AutoPaintDelayFinished(Z_Param_meshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutoAddColorComponent::execAutoPaintedActorDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_destroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AutoPaintedActorDestroyed(Z_Param_destroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutoAddColorComponent::execPaintTaskFinished)
	{
		P_GET_STRUCT_REF(FVertexDetectTaskResultInfo,Z_Param_Out_taskResultInfo);
		P_GET_STRUCT_REF(FVertexDetectPaintTaskResultInfo,Z_Param_Out_paintTaskResultInfo);
		P_GET_STRUCT_REF(FVertexDetectAdditionalDataToPassThrough,Z_Param_Out_additionalData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PaintTaskFinished(Z_Param_Out_taskResultInfo,Z_Param_Out_paintTaskResultInfo,Z_Param_Out_additionalData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutoAddColorComponent::execGetIsAutoPainting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsAutoPainting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutoAddColorComponent::execGetMeshesBeingAutoPainted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<UPrimitiveComponent*,FAutoAddColorSettings>*)Z_Param__Result=P_THIS->GetMeshesBeingAutoPainted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutoAddColorComponent::execResumeAutoPaintingMesh)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumeAutoPaintingMesh(Z_Param_meshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutoAddColorComponent::execPauseAutoPaintingMesh)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseAutoPaintingMesh(Z_Param_meshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutoAddColorComponent::execStopAutoPaintingMesh)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAutoPaintingMesh(Z_Param_meshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutoAddColorComponent::execStopAllAutoPainting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAllAutoPainting();
		P_NATIVE_END;
	}
	void UAutoAddColorComponent::StaticRegisterNativesUAutoAddColorComponent()
	{
		UClass* Class = UAutoAddColorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutoPaintDelayFinished", &UAutoAddColorComponent::execAutoPaintDelayFinished },
			{ "AutoPaintedActorDestroyed", &UAutoAddColorComponent::execAutoPaintedActorDestroyed },
			{ "GetIsAutoPainting", &UAutoAddColorComponent::execGetIsAutoPainting },
			{ "GetMeshesBeingAutoPainted", &UAutoAddColorComponent::execGetMeshesBeingAutoPainted },
			{ "PaintTaskFinished", &UAutoAddColorComponent::execPaintTaskFinished },
			{ "PauseAutoPaintingMesh", &UAutoAddColorComponent::execPauseAutoPaintingMesh },
			{ "ResumeAutoPaintingMesh", &UAutoAddColorComponent::execResumeAutoPaintingMesh },
			{ "StartNewRoundOfTasks", &UAutoAddColorComponent::execStartNewRoundOfTasks },
			{ "StopAllAutoPainting", &UAutoAddColorComponent::execStopAllAutoPainting },
			{ "StopAutoPaintingMesh", &UAutoAddColorComponent::execStopAutoPaintingMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintDelayFinished_Statics
	{
		struct AutoAddColorComponent_eventAutoPaintDelayFinished_Parms
		{
			UPrimitiveComponent* meshComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintDelayFinished_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintDelayFinished_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoAddColorComponent_eventAutoPaintDelayFinished_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintDelayFinished_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintDelayFinished_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintDelayFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintDelayFinished_Statics::NewProp_meshComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintDelayFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintDelayFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoAddColorComponent, nullptr, "AutoPaintDelayFinished", nullptr, nullptr, Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintDelayFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintDelayFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintDelayFinished_Statics::AutoAddColorComponent_eventAutoPaintDelayFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintDelayFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintDelayFinished_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintDelayFinished_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintDelayFinished_Statics::AutoAddColorComponent_eventAutoPaintDelayFinished_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintDelayFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintDelayFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintedActorDestroyed_Statics
	{
		struct AutoAddColorComponent_eventAutoPaintedActorDestroyed_Parms
		{
			AActor* destroyedActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_destroyedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintedActorDestroyed_Statics::NewProp_destroyedActor = { "destroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoAddColorComponent_eventAutoPaintedActorDestroyed_Parms, destroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintedActorDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintedActorDestroyed_Statics::NewProp_destroyedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintedActorDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintedActorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoAddColorComponent, nullptr, "AutoPaintedActorDestroyed", nullptr, nullptr, Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintedActorDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintedActorDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintedActorDestroyed_Statics::AutoAddColorComponent_eventAutoPaintedActorDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintedActorDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintedActorDestroyed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintedActorDestroyed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintedActorDestroyed_Statics::AutoAddColorComponent_eventAutoPaintedActorDestroyed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintedActorDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintedActorDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoAddColorComponent_GetIsAutoPainting_Statics
	{
		struct AutoAddColorComponent_eventGetIsAutoPainting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAutoAddColorComponent_GetIsAutoPainting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AutoAddColorComponent_eventGetIsAutoPainting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutoAddColorComponent_GetIsAutoPainting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoAddColorComponent_eventGetIsAutoPainting_Parms), &Z_Construct_UFunction_UAutoAddColorComponent_GetIsAutoPainting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoAddColorComponent_GetIsAutoPainting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoAddColorComponent_GetIsAutoPainting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorComponent_GetIsAutoPainting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Auto Paint Component" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoAddColorComponent_GetIsAutoPainting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoAddColorComponent, nullptr, "GetIsAutoPainting", nullptr, nullptr, Z_Construct_UFunction_UAutoAddColorComponent_GetIsAutoPainting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_GetIsAutoPainting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoAddColorComponent_GetIsAutoPainting_Statics::AutoAddColorComponent_eventGetIsAutoPainting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_GetIsAutoPainting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoAddColorComponent_GetIsAutoPainting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_GetIsAutoPainting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAutoAddColorComponent_GetIsAutoPainting_Statics::AutoAddColorComponent_eventGetIsAutoPainting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAutoAddColorComponent_GetIsAutoPainting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoAddColorComponent_GetIsAutoPainting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoAddColorComponent_GetMeshesBeingAutoPainted_Statics
	{
		struct AutoAddColorComponent_eventGetMeshesBeingAutoPainted_Parms
		{
			TMap<UPrimitiveComponent*,FAutoAddColorSettings> ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoAddColorComponent_GetMeshesBeingAutoPainted_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAutoAddColorSettings, METADATA_PARAMS(0, nullptr) }; // 294965315
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoAddColorComponent_GetMeshesBeingAutoPainted_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UAutoAddColorComponent_GetMeshesBeingAutoPainted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoAddColorComponent_eventGetMeshesBeingAutoPainted_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 294965315
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoAddColorComponent_GetMeshesBeingAutoPainted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoAddColorComponent_GetMeshesBeingAutoPainted_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoAddColorComponent_GetMeshesBeingAutoPainted_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoAddColorComponent_GetMeshesBeingAutoPainted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorComponent_GetMeshesBeingAutoPainted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Auto Paint Component" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoAddColorComponent_GetMeshesBeingAutoPainted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoAddColorComponent, nullptr, "GetMeshesBeingAutoPainted", nullptr, nullptr, Z_Construct_UFunction_UAutoAddColorComponent_GetMeshesBeingAutoPainted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_GetMeshesBeingAutoPainted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoAddColorComponent_GetMeshesBeingAutoPainted_Statics::AutoAddColorComponent_eventGetMeshesBeingAutoPainted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_GetMeshesBeingAutoPainted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoAddColorComponent_GetMeshesBeingAutoPainted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_GetMeshesBeingAutoPainted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAutoAddColorComponent_GetMeshesBeingAutoPainted_Statics::AutoAddColorComponent_eventGetMeshesBeingAutoPainted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAutoAddColorComponent_GetMeshesBeingAutoPainted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoAddColorComponent_GetMeshesBeingAutoPainted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics
	{
		struct AutoAddColorComponent_eventPaintTaskFinished_Parms
		{
			FVertexDetectTaskResultInfo taskResultInfo;
			FVertexDetectPaintTaskResultInfo paintTaskResultInfo;
			FVertexDetectAdditionalDataToPassThrough additionalData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_taskResultInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_taskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintTaskResultInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintTaskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_additionalData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::NewProp_taskResultInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::NewProp_taskResultInfo = { "taskResultInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoAddColorComponent_eventPaintTaskFinished_Parms, taskResultInfo), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::NewProp_taskResultInfo_MetaData), Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::NewProp_taskResultInfo_MetaData) }; // 3152737793
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::NewProp_paintTaskResultInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::NewProp_paintTaskResultInfo = { "paintTaskResultInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoAddColorComponent_eventPaintTaskFinished_Parms, paintTaskResultInfo), Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::NewProp_paintTaskResultInfo_MetaData), Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::NewProp_paintTaskResultInfo_MetaData) }; // 3289238885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::NewProp_additionalData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::NewProp_additionalData = { "additionalData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoAddColorComponent_eventPaintTaskFinished_Parms, additionalData), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::NewProp_additionalData_MetaData), Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::NewProp_additionalData_MetaData) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::NewProp_taskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::NewProp_paintTaskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::NewProp_additionalData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoAddColorComponent, nullptr, "PaintTaskFinished", nullptr, nullptr, Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::AutoAddColorComponent_eventPaintTaskFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::AutoAddColorComponent_eventPaintTaskFinished_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoAddColorComponent_PauseAutoPaintingMesh_Statics
	{
		struct AutoAddColorComponent_eventPauseAutoPaintingMesh_Parms
		{
			UPrimitiveComponent* meshComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorComponent_PauseAutoPaintingMesh_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoAddColorComponent_PauseAutoPaintingMesh_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoAddColorComponent_eventPauseAutoPaintingMesh_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_PauseAutoPaintingMesh_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UAutoAddColorComponent_PauseAutoPaintingMesh_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoAddColorComponent_PauseAutoPaintingMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoAddColorComponent_PauseAutoPaintingMesh_Statics::NewProp_meshComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorComponent_PauseAutoPaintingMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Auto Paint Component" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoAddColorComponent_PauseAutoPaintingMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoAddColorComponent, nullptr, "PauseAutoPaintingMesh", nullptr, nullptr, Z_Construct_UFunction_UAutoAddColorComponent_PauseAutoPaintingMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_PauseAutoPaintingMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoAddColorComponent_PauseAutoPaintingMesh_Statics::AutoAddColorComponent_eventPauseAutoPaintingMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_PauseAutoPaintingMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoAddColorComponent_PauseAutoPaintingMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_PauseAutoPaintingMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAutoAddColorComponent_PauseAutoPaintingMesh_Statics::AutoAddColorComponent_eventPauseAutoPaintingMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAutoAddColorComponent_PauseAutoPaintingMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoAddColorComponent_PauseAutoPaintingMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoAddColorComponent_ResumeAutoPaintingMesh_Statics
	{
		struct AutoAddColorComponent_eventResumeAutoPaintingMesh_Parms
		{
			UPrimitiveComponent* meshComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorComponent_ResumeAutoPaintingMesh_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoAddColorComponent_ResumeAutoPaintingMesh_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoAddColorComponent_eventResumeAutoPaintingMesh_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_ResumeAutoPaintingMesh_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UAutoAddColorComponent_ResumeAutoPaintingMesh_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoAddColorComponent_ResumeAutoPaintingMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoAddColorComponent_ResumeAutoPaintingMesh_Statics::NewProp_meshComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorComponent_ResumeAutoPaintingMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Auto Paint Component" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoAddColorComponent_ResumeAutoPaintingMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoAddColorComponent, nullptr, "ResumeAutoPaintingMesh", nullptr, nullptr, Z_Construct_UFunction_UAutoAddColorComponent_ResumeAutoPaintingMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_ResumeAutoPaintingMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoAddColorComponent_ResumeAutoPaintingMesh_Statics::AutoAddColorComponent_eventResumeAutoPaintingMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_ResumeAutoPaintingMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoAddColorComponent_ResumeAutoPaintingMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_ResumeAutoPaintingMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAutoAddColorComponent_ResumeAutoPaintingMesh_Statics::AutoAddColorComponent_eventResumeAutoPaintingMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAutoAddColorComponent_ResumeAutoPaintingMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoAddColorComponent_ResumeAutoPaintingMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoAddColorComponent_StartNewRoundOfTasks_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorComponent_StartNewRoundOfTasks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoAddColorComponent_StartNewRoundOfTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoAddColorComponent, nullptr, "StartNewRoundOfTasks", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_StartNewRoundOfTasks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoAddColorComponent_StartNewRoundOfTasks_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAutoAddColorComponent_StartNewRoundOfTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoAddColorComponent_StartNewRoundOfTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoAddColorComponent_StopAllAutoPainting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorComponent_StopAllAutoPainting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Auto Paint Component" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoAddColorComponent_StopAllAutoPainting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoAddColorComponent, nullptr, "StopAllAutoPainting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_StopAllAutoPainting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoAddColorComponent_StopAllAutoPainting_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAutoAddColorComponent_StopAllAutoPainting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoAddColorComponent_StopAllAutoPainting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoAddColorComponent_StopAutoPaintingMesh_Statics
	{
		struct AutoAddColorComponent_eventStopAutoPaintingMesh_Parms
		{
			UPrimitiveComponent* meshComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorComponent_StopAutoPaintingMesh_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoAddColorComponent_StopAutoPaintingMesh_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoAddColorComponent_eventStopAutoPaintingMesh_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_StopAutoPaintingMesh_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UAutoAddColorComponent_StopAutoPaintingMesh_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoAddColorComponent_StopAutoPaintingMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoAddColorComponent_StopAutoPaintingMesh_Statics::NewProp_meshComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorComponent_StopAutoPaintingMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Auto Paint Component" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoAddColorComponent_StopAutoPaintingMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoAddColorComponent, nullptr, "StopAutoPaintingMesh", nullptr, nullptr, Z_Construct_UFunction_UAutoAddColorComponent_StopAutoPaintingMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_StopAutoPaintingMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoAddColorComponent_StopAutoPaintingMesh_Statics::AutoAddColorComponent_eventStopAutoPaintingMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_StopAutoPaintingMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoAddColorComponent_StopAutoPaintingMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorComponent_StopAutoPaintingMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAutoAddColorComponent_StopAutoPaintingMesh_Statics::AutoAddColorComponent_eventStopAutoPaintingMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAutoAddColorComponent_StopAutoPaintingMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoAddColorComponent_StopAutoPaintingMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoAddColorComponent);
	UClass* Z_Construct_UClass_UAutoAddColorComponent_NoRegister()
	{
		return UAutoAddColorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAutoAddColorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_applyOneFrameDelayBetweenTasksForInstigatingComponent_MetaData[];
#endif
		static void NewProp_applyOneFrameDelayBetweenTasksForInstigatingComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_applyOneFrameDelayBetweenTasksForInstigatingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_verifyMeshComponentsInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_verifyMeshComponentsInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onlyStartNewTaskIfChangeWasMade_MetaData[];
#endif
		static void NewProp_onlyStartNewTaskIfChangeWasMade_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_onlyStartNewTaskIfChangeWasMade;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onlyStartNewRoundOfTasksIfAllHasBeenFinished_MetaData[];
#endif
		static void NewProp_onlyStartNewRoundOfTasksIfAllHasBeenFinished_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_onlyStartNewRoundOfTasksIfAllHasBeenFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minimumDurationOfRoundOfTasks_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minimumDurationOfRoundOfTasks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isAllowedToAutoPaintAtBeginPlay_MetaData[];
#endif
		static void NewProp_isAllowedToAutoPaintAtBeginPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isAllowedToAutoPaintAtBeginPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_autoPaintRootMeshAtBeginPlay_MetaData[];
#endif
		static void NewProp_autoPaintRootMeshAtBeginPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_autoPaintRootMeshAtBeginPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_autoPaintRootMeshAtBeginPlay_DelaySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_autoPaintRootMeshAtBeginPlay_DelaySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_printDebugLogsToScreen_MetaData[];
#endif
		static void NewProp_printDebugLogsToScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_printDebugLogsToScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_printDebugLogsToScreen_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_printDebugLogsToScreen_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_printDebugLogsToOutputLog_MetaData[];
#endif
		static void NewProp_printDebugLogsToOutputLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_printDebugLogsToOutputLog;
		static const UECodeGen_Private::FStructPropertyParams NewProp_autoPaintingMeshes_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_autoPaintingMeshes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_autoPaintingMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_autoPaintingMeshes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_onlyStartNewRoundOfTasksIfAllHasBeenFinished_CachedResults_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onlyStartNewRoundOfTasksIfAllHasBeenFinished_CachedResults_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_onlyStartNewRoundOfTasksIfAllHasBeenFinished_CachedResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoAddColorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVertexPaintDetectionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAutoAddColorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintDelayFinished, "AutoPaintDelayFinished" }, // 1195444138
		{ &Z_Construct_UFunction_UAutoAddColorComponent_AutoPaintedActorDestroyed, "AutoPaintedActorDestroyed" }, // 3179176205
		{ &Z_Construct_UFunction_UAutoAddColorComponent_GetIsAutoPainting, "GetIsAutoPainting" }, // 1632555966
		{ &Z_Construct_UFunction_UAutoAddColorComponent_GetMeshesBeingAutoPainted, "GetMeshesBeingAutoPainted" }, // 2898552974
		{ &Z_Construct_UFunction_UAutoAddColorComponent_PaintTaskFinished, "PaintTaskFinished" }, // 920732003
		{ &Z_Construct_UFunction_UAutoAddColorComponent_PauseAutoPaintingMesh, "PauseAutoPaintingMesh" }, // 1536807072
		{ &Z_Construct_UFunction_UAutoAddColorComponent_ResumeAutoPaintingMesh, "ResumeAutoPaintingMesh" }, // 1806189055
		{ &Z_Construct_UFunction_UAutoAddColorComponent_StartNewRoundOfTasks, "StartNewRoundOfTasks" }, // 398988031
		{ &Z_Construct_UFunction_UAutoAddColorComponent_StopAllAutoPainting, "StopAllAutoPainting" }, // 3974697294
		{ &Z_Construct_UFunction_UAutoAddColorComponent_StopAutoPaintingMesh, "StopAutoPaintingMesh" }, // 248866736
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/AutoAddColorComponent.h" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_applyOneFrameDelayBetweenTasksForInstigatingComponent_MetaData[] = {
		{ "Category", "Auto Paint|Fundemental Settings" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
		{ "ToolTip", "When the Task is Finished, if the instigating auto paint component Shouldn't immediately queue up another task but instead do it after 0.01 seconds even if delay between tasks is set to 0. \nThis is very useful since if several auto paint components is working together, for example a Auto Within Area Component for a Lake, and a Auto Entire Mesh Component for Drying, then it works much better since they let each other jump in and queue up a new task since they're both listening for paint finish task event for that mesh component." },
	};
#endif
	void Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_applyOneFrameDelayBetweenTasksForInstigatingComponent_SetBit(void* Obj)
	{
		((UAutoAddColorComponent*)Obj)->applyOneFrameDelayBetweenTasksForInstigatingComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_applyOneFrameDelayBetweenTasksForInstigatingComponent = { "applyOneFrameDelayBetweenTasksForInstigatingComponent", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoAddColorComponent), &Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_applyOneFrameDelayBetweenTasksForInstigatingComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_applyOneFrameDelayBetweenTasksForInstigatingComponent_MetaData), Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_applyOneFrameDelayBetweenTasksForInstigatingComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_verifyMeshComponentsInterval_MetaData[] = {
		{ "Category", "Auto Paint|Fundemental Settings" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
		{ "ToolTip", "If the Auto Paint isn't currently auto painting anything or waiting for a delay to finish to queue up something else, then we start a looping timer to verify the cached meshes so in case any gets destroyed they get cleaned up. Default to 60 which the default GC interval." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_verifyMeshComponentsInterval = { "verifyMeshComponentsInterval", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoAddColorComponent, verifyMeshComponentsInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_verifyMeshComponentsInterval_MetaData), Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_verifyMeshComponentsInterval_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_onlyStartNewTaskIfChangeWasMade_MetaData[] = {
		{ "Category", "Auto Paint|Optimization Settings" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
		{ "ToolTip", "Optional Optimization so we don't start another task if no change was made from the task that got finished. \nThis may be useful if you have several auto paint components that is working together since another component can run tasks and make another component check again if they should start auto painting. \nLike a Auto Paint Within Area for a Lake, and a Auto Paint Entire Mesh for Drying a Character. If this is true for the auto paint entire mesh drying component, then it won't continously attempt to Dry the character if there was no difference, for instance if the Mesh is completely under the water, or standing still in the water and the Mesh is completely dry above it. If the mesh moves, the auto paint within area component for the lake can trigger tasks will which make the entire mesh drying component check if it should start drying, so if they move up from the lake it can start drying the parts that are wet." },
	};
#endif
	void Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_onlyStartNewTaskIfChangeWasMade_SetBit(void* Obj)
	{
		((UAutoAddColorComponent*)Obj)->onlyStartNewTaskIfChangeWasMade = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_onlyStartNewTaskIfChangeWasMade = { "onlyStartNewTaskIfChangeWasMade", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoAddColorComponent), &Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_onlyStartNewTaskIfChangeWasMade_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_onlyStartNewTaskIfChangeWasMade_MetaData), Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_onlyStartNewTaskIfChangeWasMade_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_onlyStartNewRoundOfTasksIfAllHasBeenFinished_MetaData[] = {
		{ "Category", "Auto Paint|Rounds of Tasks Settings" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
		{ "ToolTip", "If all Tasks has to be Finished before we can Add new ones. This may be useful if this is something like Auto Paint Entire Mesh for Drying of Wet Characters and other Meshes that may have different amount of vertcies. Because then their tasks will not finish exactly the same, meaning they could get dried unevenly fast. \nBut with this, all of the Meshes will run the same amount of Tasks so they would Dry equally fast. \nIf this is true then the Delay Between Tasks set for the Mesh will be ignored since it has to wait for them all to finish, so the one set below will be used instead." },
	};
#endif
	void Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_onlyStartNewRoundOfTasksIfAllHasBeenFinished_SetBit(void* Obj)
	{
		((UAutoAddColorComponent*)Obj)->onlyStartNewRoundOfTasksIfAllHasBeenFinished = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_onlyStartNewRoundOfTasksIfAllHasBeenFinished = { "onlyStartNewRoundOfTasksIfAllHasBeenFinished", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoAddColorComponent), &Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_onlyStartNewRoundOfTasksIfAllHasBeenFinished_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_onlyStartNewRoundOfTasksIfAllHasBeenFinished_MetaData), Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_onlyStartNewRoundOfTasksIfAllHasBeenFinished_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_minimumDurationOfRoundOfTasks_MetaData[] = {
		{ "Category", "Auto Paint|Rounds of Tasks Settings" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
		{ "ToolTip", "If the Round of Tasks finishes before this duration, we can invoke a delay with the time left to this duration, so if the round has finished in 0.1 second, but you've set this to 0.3, then we will have a 0.2 second delay before the next round starts. \nThis is useful if for example if you have a centralized system that handles all Drying of meshes, but there is only 1 mesh being dried so the task and round finishes very quickly compared to if you're drying 20 meshes, meaning the mesh dries too fast. \nBut with this, you can have a minimum duration of the round, so things can't dry too fast. \nThe issue of uneven drying can still persist where if drying many and heavy meshes the round may take too long and the drying go to slow instead. This is something we can't do anything about, except simply recommending having lighter meshes, and atleast it's better with too slow and realistic drying instead of too fast." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_minimumDurationOfRoundOfTasks = { "minimumDurationOfRoundOfTasks", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoAddColorComponent, minimumDurationOfRoundOfTasks), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_minimumDurationOfRoundOfTasks_MetaData), Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_minimumDurationOfRoundOfTasks_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_isAllowedToAutoPaintAtBeginPlay_MetaData[] = {
		{ "Category", "Auto Paint|Auto Paint Root Mesh at Begin Play" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
		{ "ToolTip", "Some children may not support auto painting at begin play, like Paint At Location since it requires a location. Had to be VisibleAnywhere for EditConditions to work." },
	};
#endif
	void Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_isAllowedToAutoPaintAtBeginPlay_SetBit(void* Obj)
	{
		((UAutoAddColorComponent*)Obj)->isAllowedToAutoPaintAtBeginPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_isAllowedToAutoPaintAtBeginPlay = { "isAllowedToAutoPaintAtBeginPlay", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoAddColorComponent), &Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_isAllowedToAutoPaintAtBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_isAllowedToAutoPaintAtBeginPlay_MetaData), Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_isAllowedToAutoPaintAtBeginPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_autoPaintRootMeshAtBeginPlay_MetaData[] = {
		{ "Category", "Auto Paint|Auto Paint Root Mesh at Begin Play" },
		{ "EditCondition", "isAllowedToAutoPaintAtBeginPlay" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
		{ "ToolTip", "If the we should start Auto Painting the Root Component of the Actor this component is on on begin play, if the root comp is a Primitive Component, like static or skeletal mesh. \nThis is useful if the Actor may not be a Blueprint, but just a Static/Skeletal Mesh Actor in the level that you may want to Dry if they become Wet or something." },
	};
#endif
	void Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_autoPaintRootMeshAtBeginPlay_SetBit(void* Obj)
	{
		((UAutoAddColorComponent*)Obj)->autoPaintRootMeshAtBeginPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_autoPaintRootMeshAtBeginPlay = { "autoPaintRootMeshAtBeginPlay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoAddColorComponent), &Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_autoPaintRootMeshAtBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_autoPaintRootMeshAtBeginPlay_MetaData), Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_autoPaintRootMeshAtBeginPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_autoPaintRootMeshAtBeginPlay_DelaySettings_MetaData[] = {
		{ "Category", "Auto Paint|Auto Paint Root Mesh at Begin Play" },
		{ "EditCondition", "isAllowedToAutoPaintAtBeginPlay" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
		{ "ToolTip", "The Delay Settings when starting auto paint at begin play on the root mesh comp." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_autoPaintRootMeshAtBeginPlay_DelaySettings = { "autoPaintRootMeshAtBeginPlay_DelaySettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoAddColorComponent, autoPaintRootMeshAtBeginPlay_DelaySettings), Z_Construct_UScriptStruct_FAutoAddColorSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_autoPaintRootMeshAtBeginPlay_DelaySettings_MetaData), Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_autoPaintRootMeshAtBeginPlay_DelaySettings_MetaData) }; // 294965315
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_printDebugLogsToScreen_MetaData[] = {
		{ "Category", "Auto Paint|Debug Settings" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_printDebugLogsToScreen_SetBit(void* Obj)
	{
		((UAutoAddColorComponent*)Obj)->printDebugLogsToScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_printDebugLogsToScreen = { "printDebugLogsToScreen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoAddColorComponent), &Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_printDebugLogsToScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_printDebugLogsToScreen_MetaData), Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_printDebugLogsToScreen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_printDebugLogsToScreen_Duration_MetaData[] = {
		{ "Category", "Auto Paint|Debug Settings" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_printDebugLogsToScreen_Duration = { "printDebugLogsToScreen_Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoAddColorComponent, printDebugLogsToScreen_Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_printDebugLogsToScreen_Duration_MetaData), Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_printDebugLogsToScreen_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_printDebugLogsToOutputLog_MetaData[] = {
		{ "Category", "Auto Paint|Debug Settings" },
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_printDebugLogsToOutputLog_SetBit(void* Obj)
	{
		((UAutoAddColorComponent*)Obj)->printDebugLogsToOutputLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_printDebugLogsToOutputLog = { "printDebugLogsToOutputLog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoAddColorComponent), &Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_printDebugLogsToOutputLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_printDebugLogsToOutputLog_MetaData), Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_printDebugLogsToOutputLog_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_autoPaintingMeshes_ValueProp = { "autoPaintingMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAutoAddColorSettings, METADATA_PARAMS(0, nullptr) }; // 294965315
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_autoPaintingMeshes_Key_KeyProp = { "autoPaintingMeshes_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_autoPaintingMeshes_MetaData[] = {
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_autoPaintingMeshes = { "autoPaintingMeshes", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoAddColorComponent, autoPaintingMeshes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_autoPaintingMeshes_MetaData), Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_autoPaintingMeshes_MetaData) }; // 294965315
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_onlyStartNewRoundOfTasksIfAllHasBeenFinished_CachedResults_Inner = { "onlyStartNewRoundOfTasksIfAllHasBeenFinished_CachedResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAutoPaintTaskResults, METADATA_PARAMS(0, nullptr) }; // 1645833921
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_onlyStartNewRoundOfTasksIfAllHasBeenFinished_CachedResults_MetaData[] = {
		{ "ModuleRelativePath", "Components/AutoAddColorComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_onlyStartNewRoundOfTasksIfAllHasBeenFinished_CachedResults = { "onlyStartNewRoundOfTasksIfAllHasBeenFinished_CachedResults", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoAddColorComponent, onlyStartNewRoundOfTasksIfAllHasBeenFinished_CachedResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_onlyStartNewRoundOfTasksIfAllHasBeenFinished_CachedResults_MetaData), Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_onlyStartNewRoundOfTasksIfAllHasBeenFinished_CachedResults_MetaData) }; // 1645833921
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoAddColorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_applyOneFrameDelayBetweenTasksForInstigatingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_verifyMeshComponentsInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_onlyStartNewTaskIfChangeWasMade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_onlyStartNewRoundOfTasksIfAllHasBeenFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_minimumDurationOfRoundOfTasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_isAllowedToAutoPaintAtBeginPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_autoPaintRootMeshAtBeginPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_autoPaintRootMeshAtBeginPlay_DelaySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_printDebugLogsToScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_printDebugLogsToScreen_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_printDebugLogsToOutputLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_autoPaintingMeshes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_autoPaintingMeshes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_autoPaintingMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_onlyStartNewRoundOfTasksIfAllHasBeenFinished_CachedResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorComponent_Statics::NewProp_onlyStartNewRoundOfTasksIfAllHasBeenFinished_CachedResults,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoAddColorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoAddColorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoAddColorComponent_Statics::ClassParams = {
		&UAutoAddColorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAutoAddColorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoAddColorComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAutoAddColorComponent()
	{
		if (!Z_Registration_Info_UClass_UAutoAddColorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoAddColorComponent.OuterSingleton, Z_Construct_UClass_UAutoAddColorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAutoAddColorComponent.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<UAutoAddColorComponent>()
	{
		return UAutoAddColorComponent::StaticClass();
	}
	UAutoAddColorComponent::UAutoAddColorComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoAddColorComponent);
	UAutoAddColorComponent::~UAutoAddColorComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorComponent_h_Statics::ScriptStructInfo[] = {
		{ FAutoAddColorSettings::StaticStruct, Z_Construct_UScriptStruct_FAutoAddColorSettings_Statics::NewStructOps, TEXT("AutoAddColorSettings"), &Z_Registration_Info_UScriptStruct_AutoAddColorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutoAddColorSettings), 294965315U) },
		{ FAutoPaintTaskResults::StaticStruct, Z_Construct_UScriptStruct_FAutoPaintTaskResults_Statics::NewStructOps, TEXT("AutoPaintTaskResults"), &Z_Registration_Info_UScriptStruct_AutoPaintTaskResults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutoPaintTaskResults), 1645833921U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAutoAddColorComponent, UAutoAddColorComponent::StaticClass, TEXT("UAutoAddColorComponent"), &Z_Registration_Info_UClass_UAutoAddColorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoAddColorComponent), 68403804U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorComponent_h_3813692802(TEXT("/Script/VertexPaintDetectionPlugin"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
