// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../VertexPaintDetectionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexPaintDetectionSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintColorSnippetRefs_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintDetectionSettings();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintDetectionSettings_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintMaterialDataAsset_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintOptimizationDataAsset_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_ETVertexPaintThreadPriority();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETVertexPaintThreadPriority;
	static UEnum* ETVertexPaintThreadPriority_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETVertexPaintThreadPriority.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETVertexPaintThreadPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VertexPaintDetectionPlugin_ETVertexPaintThreadPriority, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("ETVertexPaintThreadPriority"));
		}
		return Z_Registration_Info_UEnum_ETVertexPaintThreadPriority.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UEnum* StaticEnum<ETVertexPaintThreadPriority>()
	{
		return ETVertexPaintThreadPriority_StaticEnum();
	}
	struct Z_Construct_UEnum_VertexPaintDetectionPlugin_ETVertexPaintThreadPriority_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VertexPaintDetectionPlugin_ETVertexPaintThreadPriority_Statics::Enumerators[] = {
		{ "ETVertexPaintThreadPriority::TimeCritical", (int64)ETVertexPaintThreadPriority::TimeCritical },
		{ "ETVertexPaintThreadPriority::Highest", (int64)ETVertexPaintThreadPriority::Highest },
		{ "ETVertexPaintThreadPriority::Normal", (int64)ETVertexPaintThreadPriority::Normal },
		{ "ETVertexPaintThreadPriority::Slowest", (int64)ETVertexPaintThreadPriority::Slowest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VertexPaintDetectionPlugin_ETVertexPaintThreadPriority_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Since the engines own EThreadPriority isn't blueprint type i had to make our own \n" },
		{ "Highest.DisplayName", "Highest" },
		{ "Highest.Name", "ETVertexPaintThreadPriority::Highest" },
		{ "ModuleRelativePath", "VertexPaintDetectionSettings.h" },
		{ "Normal.DisplayName", "Normal" },
		{ "Normal.Name", "ETVertexPaintThreadPriority::Normal" },
		{ "Slowest.DisplayName", "Slow" },
		{ "Slowest.Name", "ETVertexPaintThreadPriority::Slowest" },
		{ "TimeCritical.DisplayName", "Time Critical" },
		{ "TimeCritical.Name", "ETVertexPaintThreadPriority::TimeCritical" },
		{ "ToolTip", "Since the engines own EThreadPriority isn't blueprint type i had to make our own" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VertexPaintDetectionPlugin_ETVertexPaintThreadPriority_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		"ETVertexPaintThreadPriority",
		"ETVertexPaintThreadPriority",
		Z_Construct_UEnum_VertexPaintDetectionPlugin_ETVertexPaintThreadPriority_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VertexPaintDetectionPlugin_ETVertexPaintThreadPriority_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VertexPaintDetectionPlugin_ETVertexPaintThreadPriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VertexPaintDetectionPlugin_ETVertexPaintThreadPriority_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_ETVertexPaintThreadPriority()
	{
		if (!Z_Registration_Info_UEnum_ETVertexPaintThreadPriority.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETVertexPaintThreadPriority.InnerSingleton, Z_Construct_UEnum_VertexPaintDetectionPlugin_ETVertexPaintThreadPriority_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETVertexPaintThreadPriority.InnerSingleton;
	}
	void UVertexPaintDetectionSettings::StaticRegisterNativesUVertexPaintDetectionSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexPaintDetectionSettings);
	UClass* Z_Construct_UClass_UVertexPaintDetectionSettings_NoRegister()
	{
		return UVertexPaintDetectionSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVertexPaintDetectionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled_MetaData[];
#endif
		static void NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintAndDetectionPlugin_MaxAmountOfAllowedTasksPerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_vertexPaintAndDetectionPlugin_MaxAmountOfAllowedTasksPerMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_vertexPaintAndDetectionPlugin_MultithreadPriority_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintAndDetectionPlugin_MultithreadPriority_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_vertexPaintAndDetectionPlugin_MultithreadPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintAndDetectionPlugin_UseMaximumAmountOfCoresForMultithreading_MetaData[];
#endif
		static void NewProp_vertexPaintAndDetectionPlugin_UseMaximumAmountOfCoresForMultithreading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_vertexPaintAndDetectionPlugin_UseMaximumAmountOfCoresForMultithreading;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "DisplayName", "Runtime Vertex Paint and Detection Plugin Settings" },
		{ "IncludePath", "VertexPaintDetectionSettings.h" },
		{ "ModuleRelativePath", "VertexPaintDetectionSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "VertexPaintDetectionSettings.h" },
		{ "ToolTip", "Which Optimization Data Asset we should use when painting. Meshes that are registered in it are only painted on those amounts of LODs which can save alot of performance. \nThis can be changed in the Editor Widget." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse = { "vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse", nullptr, (EPropertyFlags)0x0014000000024015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintDetectionSettings, vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse), Z_Construct_UClass_UVertexPaintOptimizationDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse_MetaData), Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "VertexPaintDetectionSettings.h" },
		{ "ToolTip", "Which Vertex Paint Material Data Asset to use. This is the data asset you register your materials that use vertex colors that you want to detect what is on what channel etc. \nIf there is none set then you can't detect vertex data, you can only paint. \nThis can be changed in the Editor Widget." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse = { "vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse", nullptr, (EPropertyFlags)0x0014000000024015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintDetectionSettings, vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse), Z_Construct_UClass_UVertexPaintMaterialDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse_MetaData), Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "VertexPaintDetectionSettings.h" },
		{ "ToolTip", "Which Data Asset to store references to Color Snippet Data Assets. Used so we can more optimally get which color snippet data asset to bring into memory so we don't have to go through them all in order to find a stored snippet. \nThis can be changed in the Editor Widget." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse = { "vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse", nullptr, (EPropertyFlags)0x0014000000024015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintDetectionSettings, vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse), Z_Construct_UClass_UVertexPaintColorSnippetRefs_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse_MetaData), Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "VertexPaintDetectionSettings.h" },
		{ "ToolTip", "If we should Show Notifications when making changes in the Editor Widget." },
	};
#endif
	void Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled_SetBit(void* Obj)
	{
		((UVertexPaintDetectionSettings*)Obj)->vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled = { "vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVertexPaintDetectionSettings), &Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled_MetaData), Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationDuration_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "VertexPaintDetectionSettings.h" },
		{ "ToolTip", "Duration of the Notifications that pop up when making certain changes in  the editor widget." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationDuration = { "vertexPaintAndDetectionPlugin_EditorWidgetNotificationDuration", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintDetectionSettings, vertexPaintAndDetectionPlugin_EditorWidgetNotificationDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationDuration_MetaData), Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MaxAmountOfAllowedTasksPerMesh_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "VertexPaintDetectionSettings.h" },
		{ "ToolTip", "This is the Max Amount of Tasks a Mesh can have, any new Tasks will Declined. Don't recommend changing this too much since if the Task Queue grows to large, performance will be affected since the TMaps become much more heavier when you run .Add, .FindRef etc. For instance at 1000 Tasks you can drop to 20FPS. \nRecommend making sure you don't add more Tasks than you need, for instance adding the new task when the current task is finished instead of every frame. If the queue grows too large, paint jobs will feel unresponsive as well since it may take a while before it reaches the latest added task." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MaxAmountOfAllowedTasksPerMesh = { "vertexPaintAndDetectionPlugin_MaxAmountOfAllowedTasksPerMesh", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintDetectionSettings, vertexPaintAndDetectionPlugin_MaxAmountOfAllowedTasksPerMesh), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MaxAmountOfAllowedTasksPerMesh_MetaData), Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MaxAmountOfAllowedTasksPerMesh_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MultithreadPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MultithreadPriority_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "VertexPaintDetectionSettings.h" },
		{ "ToolTip", "The Priority of the Thread Pool we're creating for Painting/Detecting." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MultithreadPriority = { "vertexPaintAndDetectionPlugin_MultithreadPriority", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintDetectionSettings, vertexPaintAndDetectionPlugin_MultithreadPriority), Z_Construct_UEnum_VertexPaintDetectionPlugin_ETVertexPaintThreadPriority, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MultithreadPriority_MetaData), Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MultithreadPriority_MetaData) }; // 710913261
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_UseMaximumAmountOfCoresForMultithreading_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "VertexPaintDetectionSettings.h" },
		{ "ToolTip", "Will get the Max amount of cores using FGenericPlatformMisc::NumberOfCoresIncludingHyperthreads() instead of the regular FGenericPlatformMisc::NumberOfWorkerThreadsToSpawn(). This may be useful if your game is all about the vertex painting/detection like a Tatoo game or something and you don't have any other heavy things that may require use of the threads." },
	};
#endif
	void Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_UseMaximumAmountOfCoresForMultithreading_SetBit(void* Obj)
	{
		((UVertexPaintDetectionSettings*)Obj)->vertexPaintAndDetectionPlugin_UseMaximumAmountOfCoresForMultithreading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_UseMaximumAmountOfCoresForMultithreading = { "vertexPaintAndDetectionPlugin_UseMaximumAmountOfCoresForMultithreading", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVertexPaintDetectionSettings), &Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_UseMaximumAmountOfCoresForMultithreading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_UseMaximumAmountOfCoresForMultithreading_MetaData), Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_UseMaximumAmountOfCoresForMultithreading_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MaxAmountOfAllowedTasksPerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MultithreadPriority_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MultithreadPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_UseMaximumAmountOfCoresForMultithreading,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexPaintDetectionSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::ClassParams = {
		&UVertexPaintDetectionSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVertexPaintDetectionSettings()
	{
		if (!Z_Registration_Info_UClass_UVertexPaintDetectionSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexPaintDetectionSettings.OuterSingleton, Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexPaintDetectionSettings.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<UVertexPaintDetectionSettings>()
	{
		return UVertexPaintDetectionSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexPaintDetectionSettings);
	UVertexPaintDetectionSettings::~UVertexPaintDetectionSettings() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_Statics::EnumInfo[] = {
		{ ETVertexPaintThreadPriority_StaticEnum, TEXT("ETVertexPaintThreadPriority"), &Z_Registration_Info_UEnum_ETVertexPaintThreadPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 710913261U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexPaintDetectionSettings, UVertexPaintDetectionSettings::StaticClass, TEXT("UVertexPaintDetectionSettings"), &Z_Registration_Info_UClass_UVertexPaintDetectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexPaintDetectionSettings), 3961715873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_145090013(TEXT("/Script/VertexPaintDetectionPlugin"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
