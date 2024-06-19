// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoAddColorEntireMeshComponent.h"
#include "../Prerequisites/PaintEntireMeshPrerequisites.h"
#include "AutoAddColorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoAddColorEntireMeshComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UAutoAddColorComponent();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UAutoAddColorEntireMeshComponent();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UAutoAddColorEntireMeshComponent_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAutoAddColorSettings();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct();
// End Cross Module References
	DEFINE_FUNCTION(UAutoAddColorEntireMeshComponent::execAddAutoPaintEntireMesh)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FVertexPaintOnEntireMeshStruct,Z_Param_paintEntireMeshSettings);
		P_GET_STRUCT(FAutoAddColorSettings,Z_Param_autoAddColorSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAutoPaintEntireMesh(Z_Param_meshComponent,Z_Param_paintEntireMeshSettings,Z_Param_autoAddColorSettings);
		P_NATIVE_END;
	}
	void UAutoAddColorEntireMeshComponent::StaticRegisterNativesUAutoAddColorEntireMeshComponent()
	{
		UClass* Class = UAutoAddColorEntireMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAutoPaintEntireMesh", &UAutoAddColorEntireMeshComponent::execAddAutoPaintEntireMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh_Statics
	{
		struct AutoAddColorEntireMeshComponent_eventAddAutoPaintEntireMesh_Parms
		{
			UPrimitiveComponent* meshComponent;
			FVertexPaintOnEntireMeshStruct paintEntireMeshSettings;
			FAutoAddColorSettings autoAddColorSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintEntireMeshSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_autoAddColorSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoAddColorEntireMeshComponent_eventAddAutoPaintEntireMesh_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh_Statics::NewProp_paintEntireMeshSettings = { "paintEntireMeshSettings", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoAddColorEntireMeshComponent_eventAddAutoPaintEntireMesh_Parms, paintEntireMeshSettings), Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct, METADATA_PARAMS(0, nullptr) }; // 2098589667
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh_Statics::NewProp_autoAddColorSettings = { "autoAddColorSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoAddColorEntireMeshComponent_eventAddAutoPaintEntireMesh_Parms, autoAddColorSettings), Z_Construct_UScriptStruct_FAutoAddColorSettings, METADATA_PARAMS(0, nullptr) }; // 2463745312
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh_Statics::NewProp_paintEntireMeshSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh_Statics::NewProp_autoAddColorSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Auto Paint Component|Entire Mesh" },
		{ "ModuleRelativePath", "Components/AutoAddColorEntireMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a Mesh to be Auto painted with specific settings. If it's already been added then updated the settings with the new one. In AutoAddColorSettings you can set a delay between tasks, which is useful if you for instance is drying a character but it's going to fast, then you add maybe 0.1 or so to make it slower." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoAddColorEntireMeshComponent, nullptr, "AddAutoPaintEntireMesh", nullptr, nullptr, Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh_Statics::AutoAddColorEntireMeshComponent_eventAddAutoPaintEntireMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh_Statics::AutoAddColorEntireMeshComponent_eventAddAutoPaintEntireMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoAddColorEntireMeshComponent);
	UClass* Z_Construct_UClass_UAutoAddColorEntireMeshComponent_NoRegister()
	{
		return UAutoAddColorEntireMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_autoPaintRootMeshAtBeginPlay_PaintEntireMeshSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_autoPaintRootMeshAtBeginPlay_PaintEntireMeshSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_autoPaintingEntireMeshesWithSettings_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_autoPaintingEntireMeshesWithSettings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_autoPaintingEntireMeshesWithSettings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_autoPaintingEntireMeshesWithSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAutoAddColorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoAddColorEntireMeshComponent_AddAutoPaintEntireMesh, "AddAutoPaintEntireMesh" }, // 2903191986
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "DisplayName", "Auto Add Color Paint Entire Mesh Component" },
		{ "IncludePath", "Components/AutoAddColorEntireMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Components/AutoAddColorEntireMeshComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::NewProp_autoPaintRootMeshAtBeginPlay_PaintEntireMeshSettings_MetaData[] = {
		{ "Category", "Auto Paint|Auto Paint Root Mesh at Begin Play" },
		{ "ModuleRelativePath", "Components/AutoAddColorEntireMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Paint Entire Mesh Settings to paint the root mesh with at begin play." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::NewProp_autoPaintRootMeshAtBeginPlay_PaintEntireMeshSettings = { "autoPaintRootMeshAtBeginPlay_PaintEntireMeshSettings", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoAddColorEntireMeshComponent, autoPaintRootMeshAtBeginPlay_PaintEntireMeshSettings), Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::NewProp_autoPaintRootMeshAtBeginPlay_PaintEntireMeshSettings_MetaData), Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::NewProp_autoPaintRootMeshAtBeginPlay_PaintEntireMeshSettings_MetaData) }; // 2098589667
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::NewProp_autoPaintingEntireMeshesWithSettings_ValueProp = { "autoPaintingEntireMeshesWithSettings", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct, METADATA_PARAMS(0, nullptr) }; // 2098589667
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::NewProp_autoPaintingEntireMeshesWithSettings_Key_KeyProp = { "autoPaintingEntireMeshesWithSettings_Key", nullptr, (EPropertyFlags)0x0000008000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::NewProp_autoPaintingEntireMeshesWithSettings_MetaData[] = {
		{ "ModuleRelativePath", "Components/AutoAddColorEntireMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::NewProp_autoPaintingEntireMeshesWithSettings = { "autoPaintingEntireMeshesWithSettings", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoAddColorEntireMeshComponent, autoPaintingEntireMeshesWithSettings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::NewProp_autoPaintingEntireMeshesWithSettings_MetaData), Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::NewProp_autoPaintingEntireMeshesWithSettings_MetaData) }; // 2098589667
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::NewProp_autoPaintRootMeshAtBeginPlay_PaintEntireMeshSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::NewProp_autoPaintingEntireMeshesWithSettings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::NewProp_autoPaintingEntireMeshesWithSettings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::NewProp_autoPaintingEntireMeshesWithSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoAddColorEntireMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::ClassParams = {
		&UAutoAddColorEntireMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAutoAddColorEntireMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UAutoAddColorEntireMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoAddColorEntireMeshComponent.OuterSingleton, Z_Construct_UClass_UAutoAddColorEntireMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAutoAddColorEntireMeshComponent.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<UAutoAddColorEntireMeshComponent>()
	{
		return UAutoAddColorEntireMeshComponent::StaticClass();
	}
	UAutoAddColorEntireMeshComponent::UAutoAddColorEntireMeshComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoAddColorEntireMeshComponent);
	UAutoAddColorEntireMeshComponent::~UAutoAddColorEntireMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorEntireMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorEntireMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAutoAddColorEntireMeshComponent, UAutoAddColorEntireMeshComponent::StaticClass, TEXT("UAutoAddColorEntireMeshComponent"), &Z_Registration_Info_UClass_UAutoAddColorEntireMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoAddColorEntireMeshComponent), 4221603128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorEntireMeshComponent_h_2889627993(TEXT("/Script/VertexPaintDetectionPlugin"),
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorEntireMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorEntireMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
