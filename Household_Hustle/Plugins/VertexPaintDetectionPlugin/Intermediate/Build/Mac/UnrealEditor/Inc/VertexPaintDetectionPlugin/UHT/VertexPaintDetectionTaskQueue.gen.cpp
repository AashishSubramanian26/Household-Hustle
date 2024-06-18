// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Async/VertexPaintDetectionTaskQueue.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "../Prerequisites/CalculateColorsPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexPaintDetectionTaskQueue() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintDetectionTaskQueue();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintDetectionTaskQueue_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_TaskRemovedFromQueue__DelegateSignature();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCalculateColorsInfo();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTaskQueueIDInfo();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_TaskRemovedFromQueue__DelegateSignature_Statics
	{
		struct _Script_VertexPaintDetectionPlugin_eventTaskRemovedFromQueue_Parms
		{
			FCalculateColorsInfo taskRemoved;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_taskRemoved_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_taskRemoved;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_TaskRemovedFromQueue__DelegateSignature_Statics::NewProp_taskRemoved_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_TaskRemovedFromQueue__DelegateSignature_Statics::NewProp_taskRemoved = { "taskRemoved", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VertexPaintDetectionPlugin_eventTaskRemovedFromQueue_Parms, taskRemoved), Z_Construct_UScriptStruct_FCalculateColorsInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_TaskRemovedFromQueue__DelegateSignature_Statics::NewProp_taskRemoved_MetaData), Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_TaskRemovedFromQueue__DelegateSignature_Statics::NewProp_taskRemoved_MetaData) }; // 4211247501
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_TaskRemovedFromQueue__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_TaskRemovedFromQueue__DelegateSignature_Statics::NewProp_taskRemoved,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_TaskRemovedFromQueue__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Async/VertexPaintDetectionTaskQueue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_TaskRemovedFromQueue__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin, nullptr, "TaskRemovedFromQueue__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_TaskRemovedFromQueue__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_TaskRemovedFromQueue__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_TaskRemovedFromQueue__DelegateSignature_Statics::_Script_VertexPaintDetectionPlugin_eventTaskRemovedFromQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_TaskRemovedFromQueue__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_TaskRemovedFromQueue__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_TaskRemovedFromQueue__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_TaskRemovedFromQueue__DelegateSignature_Statics::_Script_VertexPaintDetectionPlugin_eventTaskRemovedFromQueue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_TaskRemovedFromQueue__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VertexPaintDetectionPlugin_TaskRemovedFromQueue__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTaskRemovedFromQueue_DelegateWrapper(const FMulticastScriptDelegate& TaskRemovedFromQueue, FCalculateColorsInfo const& taskRemoved)
{
	struct _Script_VertexPaintDetectionPlugin_eventTaskRemovedFromQueue_Parms
	{
		FCalculateColorsInfo taskRemoved;
	};
	_Script_VertexPaintDetectionPlugin_eventTaskRemovedFromQueue_Parms Parms;
	Parms.taskRemoved=taskRemoved;
	TaskRemovedFromQueue.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TaskQueueIDInfo;
class UScriptStruct* FTaskQueueIDInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TaskQueueIDInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TaskQueueIDInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaskQueueIDInfo, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("TaskQueueIDInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TaskQueueIDInfo.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FTaskQueueIDInfo>()
{
	return FTaskQueueIDInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTaskQueueIDInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskQueueIDInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Async/VertexPaintDetectionTaskQueue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTaskQueueIDInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaskQueueIDInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaskQueueIDInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"TaskQueueIDInfo",
		nullptr,
		0,
		sizeof(FTaskQueueIDInfo),
		alignof(FTaskQueueIDInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskQueueIDInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTaskQueueIDInfo_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTaskQueueIDInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_TaskQueueIDInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TaskQueueIDInfo.InnerSingleton, Z_Construct_UScriptStruct_FTaskQueueIDInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TaskQueueIDInfo.InnerSingleton;
	}
	void UVertexPaintDetectionTaskQueue::StaticRegisterNativesUVertexPaintDetectionTaskQueue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexPaintDetectionTaskQueue);
	UClass* Z_Construct_UClass_UVertexPaintDetectionTaskQueue_NoRegister()
	{
		return UVertexPaintDetectionTaskQueue::StaticClass();
	}
	struct Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexColorPaint_QueueThreadPool_ResetTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexColorPaint_QueueThreadPool_ResetTimer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_calculateColorsPaintQueue_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_calculateColorsPaintQueue_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_calculateColorsPaintQueue_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_calculateColorsPaintQueue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_componentPaintTaskIDs_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_componentPaintTaskIDs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_componentPaintTaskIDs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_componentPaintTaskIDs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_calculateColorsDetectionQueue_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_calculateColorsDetectionQueue_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_calculateColorsDetectionQueue_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_calculateColorsDetectionQueue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_componentDetectTaskIDs_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_componentDetectTaskIDs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_componentDetectTaskIDs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_componentDetectTaskIDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Async/VertexPaintDetectionTaskQueue.h" },
		{ "ModuleRelativePath", "Async/VertexPaintDetectionTaskQueue.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_vertexColorPaint_QueueThreadPool_ResetTimer_MetaData[] = {
		{ "ModuleRelativePath", "Async/VertexPaintDetectionTaskQueue.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_vertexColorPaint_QueueThreadPool_ResetTimer = { "vertexColorPaint_QueueThreadPool_ResetTimer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintDetectionTaskQueue, vertexColorPaint_QueueThreadPool_ResetTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_vertexColorPaint_QueueThreadPool_ResetTimer_MetaData), Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_vertexColorPaint_QueueThreadPool_ResetTimer_MetaData) }; // 3999327403
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_calculateColorsPaintQueue_ValueProp = { "calculateColorsPaintQueue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCalculateColorsInfo, METADATA_PARAMS(0, nullptr) }; // 4211247501
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_calculateColorsPaintQueue_Key_KeyProp = { "calculateColorsPaintQueue_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_calculateColorsPaintQueue_MetaData[] = {
		{ "Comment", "// We use 2 sets of TMaps, one with just the task ID and info of that task, so we don't have any dependency on a pointer to remove or get things from it, and another we're we use the component ptr to the get the amount of tasks and Task IDs of that mesh. By using it, we could make a solution where if a mesh wasn't valid, we could refresh the Task Queue without having to store memory heavy local variables of the task info struct, just check the invalid ptr, get the Tasks IDs that it had and Remove them from the Task queue. \n" },
		{ "ModuleRelativePath", "Async/VertexPaintDetectionTaskQueue.h" },
		{ "ToolTip", "We use 2 sets of TMaps, one with just the task ID and info of that task, so we don't have any dependency on a pointer to remove or get things from it, and another we're we use the component ptr to the get the amount of tasks and Task IDs of that mesh. By using it, we could make a solution where if a mesh wasn't valid, we could refresh the Task Queue without having to store memory heavy local variables of the task info struct, just check the invalid ptr, get the Tasks IDs that it had and Remove them from the Task queue." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_calculateColorsPaintQueue = { "calculateColorsPaintQueue", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintDetectionTaskQueue, calculateColorsPaintQueue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_calculateColorsPaintQueue_MetaData), Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_calculateColorsPaintQueue_MetaData) }; // 4211247501
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_componentPaintTaskIDs_ValueProp = { "componentPaintTaskIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTaskQueueIDInfo, METADATA_PARAMS(0, nullptr) }; // 1708367134
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_componentPaintTaskIDs_Key_KeyProp = { "componentPaintTaskIDs_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_componentPaintTaskIDs_MetaData[] = {
		{ "ModuleRelativePath", "Async/VertexPaintDetectionTaskQueue.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_componentPaintTaskIDs = { "componentPaintTaskIDs", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintDetectionTaskQueue, componentPaintTaskIDs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_componentPaintTaskIDs_MetaData), Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_componentPaintTaskIDs_MetaData) }; // 1708367134
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_calculateColorsDetectionQueue_ValueProp = { "calculateColorsDetectionQueue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCalculateColorsInfo, METADATA_PARAMS(0, nullptr) }; // 4211247501
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_calculateColorsDetectionQueue_Key_KeyProp = { "calculateColorsDetectionQueue_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_calculateColorsDetectionQueue_MetaData[] = {
		{ "ModuleRelativePath", "Async/VertexPaintDetectionTaskQueue.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_calculateColorsDetectionQueue = { "calculateColorsDetectionQueue", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintDetectionTaskQueue, calculateColorsDetectionQueue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_calculateColorsDetectionQueue_MetaData), Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_calculateColorsDetectionQueue_MetaData) }; // 4211247501
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_componentDetectTaskIDs_ValueProp = { "componentDetectTaskIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTaskQueueIDInfo, METADATA_PARAMS(0, nullptr) }; // 1708367134
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_componentDetectTaskIDs_Key_KeyProp = { "componentDetectTaskIDs_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_componentDetectTaskIDs_MetaData[] = {
		{ "ModuleRelativePath", "Async/VertexPaintDetectionTaskQueue.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_componentDetectTaskIDs = { "componentDetectTaskIDs", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintDetectionTaskQueue, componentDetectTaskIDs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_componentDetectTaskIDs_MetaData), Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_componentDetectTaskIDs_MetaData) }; // 1708367134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_vertexColorPaint_QueueThreadPool_ResetTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_calculateColorsPaintQueue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_calculateColorsPaintQueue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_calculateColorsPaintQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_componentPaintTaskIDs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_componentPaintTaskIDs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_componentPaintTaskIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_calculateColorsDetectionQueue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_calculateColorsDetectionQueue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_calculateColorsDetectionQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_componentDetectTaskIDs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_componentDetectTaskIDs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::NewProp_componentDetectTaskIDs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexPaintDetectionTaskQueue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::ClassParams = {
		&UVertexPaintDetectionTaskQueue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::Class_MetaDataParams), Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVertexPaintDetectionTaskQueue()
	{
		if (!Z_Registration_Info_UClass_UVertexPaintDetectionTaskQueue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexPaintDetectionTaskQueue.OuterSingleton, Z_Construct_UClass_UVertexPaintDetectionTaskQueue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexPaintDetectionTaskQueue.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<UVertexPaintDetectionTaskQueue>()
	{
		return UVertexPaintDetectionTaskQueue::StaticClass();
	}
	UVertexPaintDetectionTaskQueue::UVertexPaintDetectionTaskQueue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexPaintDetectionTaskQueue);
	UVertexPaintDetectionTaskQueue::~UVertexPaintDetectionTaskQueue() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Async_VertexPaintDetectionTaskQueue_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Async_VertexPaintDetectionTaskQueue_h_Statics::ScriptStructInfo[] = {
		{ FTaskQueueIDInfo::StaticStruct, Z_Construct_UScriptStruct_FTaskQueueIDInfo_Statics::NewStructOps, TEXT("TaskQueueIDInfo"), &Z_Registration_Info_UScriptStruct_TaskQueueIDInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTaskQueueIDInfo), 1708367134U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Async_VertexPaintDetectionTaskQueue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexPaintDetectionTaskQueue, UVertexPaintDetectionTaskQueue::StaticClass, TEXT("UVertexPaintDetectionTaskQueue"), &Z_Registration_Info_UClass_UVertexPaintDetectionTaskQueue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexPaintDetectionTaskQueue), 1654418560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Async_VertexPaintDetectionTaskQueue_h_3401854588(TEXT("/Script/VertexPaintDetectionPlugin"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Async_VertexPaintDetectionTaskQueue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Async_VertexPaintDetectionTaskQueue_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Async_VertexPaintDetectionTaskQueue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Async_VertexPaintDetectionTaskQueue_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
