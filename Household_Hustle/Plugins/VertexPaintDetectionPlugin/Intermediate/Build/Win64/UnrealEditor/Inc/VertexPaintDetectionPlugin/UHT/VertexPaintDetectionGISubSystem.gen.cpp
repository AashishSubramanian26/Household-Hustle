// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Subsystems/VertexPaintDetectionGISubSystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "../Prerequisites/AdditionalDataPrerequisites.h"
#include "../Prerequisites/TaskResultsPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexPaintDetectionGISubSystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintColorSnippetRefs_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintDetectionGISubSystem();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintDetectionGISubSystem_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintDetectionTaskQueue_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintMaterialDataAsset_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintOptimizationDataAsset_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature();
	VERTEXPAINTDETECTIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics
	{
		struct _Script_VertexPaintDetectionPlugin_eventVertexPaintTaskFinished_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::NewProp_taskResultInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::NewProp_taskResultInfo = { "taskResultInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VertexPaintDetectionPlugin_eventVertexPaintTaskFinished_Parms, taskResultInfo), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::NewProp_taskResultInfo_MetaData), Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::NewProp_taskResultInfo_MetaData) }; // 3152737793
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::NewProp_paintTaskResultInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::NewProp_paintTaskResultInfo = { "paintTaskResultInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VertexPaintDetectionPlugin_eventVertexPaintTaskFinished_Parms, paintTaskResultInfo), Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::NewProp_paintTaskResultInfo_MetaData), Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::NewProp_paintTaskResultInfo_MetaData) }; // 3289238885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::NewProp_additionalData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::NewProp_additionalData = { "additionalData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VertexPaintDetectionPlugin_eventVertexPaintTaskFinished_Parms, additionalData), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::NewProp_additionalData_MetaData), Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::NewProp_additionalData_MetaData) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::NewProp_taskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::NewProp_paintTaskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::NewProp_additionalData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Paint Job Delegates\n" },
		{ "ModuleRelativePath", "Subsystems/VertexPaintDetectionGISubSystem.h" },
		{ "ToolTip", "Paint Job Delegates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin, nullptr, "VertexPaintTaskFinished__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::_Script_VertexPaintDetectionPlugin_eventVertexPaintTaskFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::_Script_VertexPaintDetectionPlugin_eventVertexPaintTaskFinished_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FVertexPaintTaskFinished_DelegateWrapper(const FMulticastScriptDelegate& VertexPaintTaskFinished, FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectPaintTaskResultInfo const& paintTaskResultInfo, FVertexDetectAdditionalDataToPassThrough const& additionalData)
{
	struct _Script_VertexPaintDetectionPlugin_eventVertexPaintTaskFinished_Parms
	{
		FVertexDetectTaskResultInfo taskResultInfo;
		FVertexDetectPaintTaskResultInfo paintTaskResultInfo;
		FVertexDetectAdditionalDataToPassThrough additionalData;
	};
	_Script_VertexPaintDetectionPlugin_eventVertexPaintTaskFinished_Parms Parms;
	Parms.taskResultInfo=taskResultInfo;
	Parms.paintTaskResultInfo=paintTaskResultInfo;
	Parms.additionalData=additionalData;
	VertexPaintTaskFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature_Statics
	{
		struct _Script_VertexPaintDetectionPlugin_eventVertexDetectTaskFinished_Parms
		{
			FVertexDetectTaskResultInfo taskResultInfo;
			FVertexDetectAdditionalDataToPassThrough additionalData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_taskResultInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_taskResultInfo;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature_Statics::NewProp_taskResultInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature_Statics::NewProp_taskResultInfo = { "taskResultInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VertexPaintDetectionPlugin_eventVertexDetectTaskFinished_Parms, taskResultInfo), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature_Statics::NewProp_taskResultInfo_MetaData), Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature_Statics::NewProp_taskResultInfo_MetaData) }; // 3152737793
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature_Statics::NewProp_additionalData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature_Statics::NewProp_additionalData = { "additionalData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VertexPaintDetectionPlugin_eventVertexDetectTaskFinished_Parms, additionalData), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature_Statics::NewProp_additionalData_MetaData), Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature_Statics::NewProp_additionalData_MetaData) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature_Statics::NewProp_taskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature_Statics::NewProp_additionalData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Detection Job Delegates\n" },
		{ "ModuleRelativePath", "Subsystems/VertexPaintDetectionGISubSystem.h" },
		{ "ToolTip", "Detection Job Delegates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin, nullptr, "VertexDetectTaskFinished__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature_Statics::_Script_VertexPaintDetectionPlugin_eventVertexDetectTaskFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature_Statics::_Script_VertexPaintDetectionPlugin_eventVertexDetectTaskFinished_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FVertexDetectTaskFinished_DelegateWrapper(const FMulticastScriptDelegate& VertexDetectTaskFinished, FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectAdditionalDataToPassThrough const& additionalData)
{
	struct _Script_VertexPaintDetectionPlugin_eventVertexDetectTaskFinished_Parms
	{
		FVertexDetectTaskResultInfo taskResultInfo;
		FVertexDetectAdditionalDataToPassThrough additionalData;
	};
	_Script_VertexPaintDetectionPlugin_eventVertexDetectTaskFinished_Parms Parms;
	Parms.taskResultInfo=taskResultInfo;
	Parms.additionalData=additionalData;
	VertexDetectTaskFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UVertexPaintDetectionGISubSystem::StaticRegisterNativesUVertexPaintDetectionGISubSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexPaintDetectionGISubSystem);
	UClass* Z_Construct_UClass_UVertexPaintDetectionGISubSystem_NoRegister()
	{
		return UVertexPaintDetectionGISubSystem::StaticClass();
	}
	struct Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintTaskFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_vertexPaintTaskFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexDetectTaskFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_vertexDetectTaskFinished;
		static const UECodeGen_Private::FStructPropertyParams NewProp_cleanupOldVertexColorBufferTimers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cleanupOldVertexColorBufferTimers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_cleanupOldVertexColorBufferTimers;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cachedPhysicalMaterialAssets_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_cachedPhysicalMaterialAssets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cachedPhysicalMaterialAssets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_cachedPhysicalMaterialAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintColorSnippetReferenceDataAssetCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_vertexPaintColorSnippetReferenceDataAssetCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintOptimizationDataAssetCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_vertexPaintOptimizationDataAssetCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintMaterialDataAssetCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_vertexPaintMaterialDataAssetCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_taskQueue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_taskQueue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Subsystems/VertexPaintDetectionGISubSystem.h" },
		{ "ModuleRelativePath", "Subsystems/VertexPaintDetectionGISubSystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexPaintTaskFinished_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Subsystems/VertexPaintDetectionGISubSystem.h" },
		{ "ToolTip", "Broadcasts when Finished a Paint Task." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexPaintTaskFinished = { "vertexPaintTaskFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintDetectionGISubSystem, vertexPaintTaskFinished), Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexPaintTaskFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexPaintTaskFinished_MetaData), Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexPaintTaskFinished_MetaData) }; // 1229447643
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexDetectTaskFinished_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Subsystems/VertexPaintDetectionGISubSystem.h" },
		{ "ToolTip", "Broadcasts when Finished a Detect Task." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexDetectTaskFinished = { "vertexDetectTaskFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintDetectionGISubSystem, vertexDetectTaskFinished), Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_VertexDetectTaskFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexDetectTaskFinished_MetaData), Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexDetectTaskFinished_MetaData) }; // 882205021
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cleanupOldVertexColorBufferTimers_Inner = { "cleanupOldVertexColorBufferTimers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(0, nullptr) }; // 3999327403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cleanupOldVertexColorBufferTimers_MetaData[] = {
		{ "ModuleRelativePath", "Subsystems/VertexPaintDetectionGISubSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cleanupOldVertexColorBufferTimers = { "cleanupOldVertexColorBufferTimers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintDetectionGISubSystem, cleanupOldVertexColorBufferTimers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cleanupOldVertexColorBufferTimers_MetaData), Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cleanupOldVertexColorBufferTimers_MetaData) }; // 3999327403
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cachedPhysicalMaterialAssets_ValueProp = { "cachedPhysicalMaterialAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cachedPhysicalMaterialAssets_Key_KeyProp = { "cachedPhysicalMaterialAssets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cachedPhysicalMaterialAssets_MetaData[] = {
		{ "Comment", "// Caches\n" },
		{ "ModuleRelativePath", "Subsystems/VertexPaintDetectionGISubSystem.h" },
		{ "ToolTip", "Caches" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cachedPhysicalMaterialAssets = { "cachedPhysicalMaterialAssets", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintDetectionGISubSystem, cachedPhysicalMaterialAssets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cachedPhysicalMaterialAssets_MetaData), Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cachedPhysicalMaterialAssets_MetaData) }; // 2508321301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexPaintColorSnippetReferenceDataAssetCache_MetaData[] = {
		{ "ModuleRelativePath", "Subsystems/VertexPaintDetectionGISubSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexPaintColorSnippetReferenceDataAssetCache = { "vertexPaintColorSnippetReferenceDataAssetCache", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintDetectionGISubSystem, vertexPaintColorSnippetReferenceDataAssetCache), Z_Construct_UClass_UVertexPaintColorSnippetRefs_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexPaintColorSnippetReferenceDataAssetCache_MetaData), Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexPaintColorSnippetReferenceDataAssetCache_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexPaintOptimizationDataAssetCache_MetaData[] = {
		{ "Comment", "// Caches these so they're in memory at all time, so we don't have to worry about a use case where they may not be in memory when a asynctask has started, and that we will get a crash because we can't load them on the async thread\n" },
		{ "ModuleRelativePath", "Subsystems/VertexPaintDetectionGISubSystem.h" },
		{ "ToolTip", "Caches these so they're in memory at all time, so we don't have to worry about a use case where they may not be in memory when a asynctask has started, and that we will get a crash because we can't load them on the async thread" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexPaintOptimizationDataAssetCache = { "vertexPaintOptimizationDataAssetCache", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintDetectionGISubSystem, vertexPaintOptimizationDataAssetCache), Z_Construct_UClass_UVertexPaintOptimizationDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexPaintOptimizationDataAssetCache_MetaData), Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexPaintOptimizationDataAssetCache_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexPaintMaterialDataAssetCache_MetaData[] = {
		{ "ModuleRelativePath", "Subsystems/VertexPaintDetectionGISubSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexPaintMaterialDataAssetCache = { "vertexPaintMaterialDataAssetCache", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintDetectionGISubSystem, vertexPaintMaterialDataAssetCache), Z_Construct_UClass_UVertexPaintMaterialDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexPaintMaterialDataAssetCache_MetaData), Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexPaintMaterialDataAssetCache_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_taskQueue_MetaData[] = {
		{ "ModuleRelativePath", "Subsystems/VertexPaintDetectionGISubSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_taskQueue = { "taskQueue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintDetectionGISubSystem, taskQueue), Z_Construct_UClass_UVertexPaintDetectionTaskQueue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_taskQueue_MetaData), Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_taskQueue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexPaintTaskFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexDetectTaskFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cleanupOldVertexColorBufferTimers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cleanupOldVertexColorBufferTimers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cachedPhysicalMaterialAssets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cachedPhysicalMaterialAssets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cachedPhysicalMaterialAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexPaintColorSnippetReferenceDataAssetCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexPaintOptimizationDataAssetCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexPaintMaterialDataAssetCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_taskQueue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexPaintDetectionGISubSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::ClassParams = {
		&UVertexPaintDetectionGISubSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVertexPaintDetectionGISubSystem()
	{
		if (!Z_Registration_Info_UClass_UVertexPaintDetectionGISubSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexPaintDetectionGISubSystem.OuterSingleton, Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexPaintDetectionGISubSystem.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<UVertexPaintDetectionGISubSystem>()
	{
		return UVertexPaintDetectionGISubSystem::StaticClass();
	}
	UVertexPaintDetectionGISubSystem::UVertexPaintDetectionGISubSystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexPaintDetectionGISubSystem);
	UVertexPaintDetectionGISubSystem::~UVertexPaintDetectionGISubSystem() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Subsystems_VertexPaintDetectionGISubSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Subsystems_VertexPaintDetectionGISubSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexPaintDetectionGISubSystem, UVertexPaintDetectionGISubSystem::StaticClass, TEXT("UVertexPaintDetectionGISubSystem"), &Z_Registration_Info_UClass_UVertexPaintDetectionGISubSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexPaintDetectionGISubSystem), 3649059936U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Subsystems_VertexPaintDetectionGISubSystem_h_3462483311(TEXT("/Script/VertexPaintDetectionPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Subsystems_VertexPaintDetectionGISubSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Subsystems_VertexPaintDetectionGISubSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
