// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoAddColorPaintAtLocComponent.h"
#include "../Prerequisites/PaintAtLocationPrerequisites.h"
#include "AutoAddColorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoAddColorPaintAtLocComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UAutoAddColorComponent();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UAutoAddColorPaintAtLocComponent();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAutoAddColorSettings();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct();
// End Cross Module References
	DEFINE_FUNCTION(UAutoAddColorPaintAtLocComponent::execAddAutoPaintAtLocation)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FVertexPaintAtLocationStruct,Z_Param_paintAtLocationSettings);
		P_GET_STRUCT(FAutoAddColorSettings,Z_Param_autoAddColorSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAutoPaintAtLocation(Z_Param_meshComponent,Z_Param_paintAtLocationSettings,Z_Param_autoAddColorSettings);
		P_NATIVE_END;
	}
	void UAutoAddColorPaintAtLocComponent::StaticRegisterNativesUAutoAddColorPaintAtLocComponent()
	{
		UClass* Class = UAutoAddColorPaintAtLocComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAutoPaintAtLocation", &UAutoAddColorPaintAtLocComponent::execAddAutoPaintAtLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation_Statics
	{
		struct AutoAddColorPaintAtLocComponent_eventAddAutoPaintAtLocation_Parms
		{
			UPrimitiveComponent* meshComponent;
			FVertexPaintAtLocationStruct paintAtLocationSettings;
			FAutoAddColorSettings autoAddColorSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintAtLocationSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_autoAddColorSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoAddColorPaintAtLocComponent_eventAddAutoPaintAtLocation_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation_Statics::NewProp_paintAtLocationSettings = { "paintAtLocationSettings", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoAddColorPaintAtLocComponent_eventAddAutoPaintAtLocation_Parms, paintAtLocationSettings), Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct, METADATA_PARAMS(0, nullptr) }; // 4077106337
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation_Statics::NewProp_autoAddColorSettings = { "autoAddColorSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoAddColorPaintAtLocComponent_eventAddAutoPaintAtLocation_Parms, autoAddColorSettings), Z_Construct_UScriptStruct_FAutoAddColorSettings, METADATA_PARAMS(0, nullptr) }; // 294965315
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation_Statics::NewProp_paintAtLocationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation_Statics::NewProp_autoAddColorSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Auto Paint Component|Paint At Location" },
		{ "ModuleRelativePath", "Components/AutoAddColorPaintAtLocComponent.h" },
		{ "ToolTip", "Adds a Mesh to be Auto painted with specific settings. If it's already been added then updated the settings with the new one. In AutoAddColorSettings you can set a delay between tasks, which is useful if you for instance is drying a character but it's going to fast, then you add maybe 0.1 or so to make it slower." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoAddColorPaintAtLocComponent, nullptr, "AddAutoPaintAtLocation", nullptr, nullptr, Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation_Statics::AutoAddColorPaintAtLocComponent_eventAddAutoPaintAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation_Statics::AutoAddColorPaintAtLocComponent_eventAddAutoPaintAtLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoAddColorPaintAtLocComponent);
	UClass* Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_NoRegister()
	{
		return UAutoAddColorPaintAtLocComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_autoPaintingAtLocationWithSettings_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_autoPaintingAtLocationWithSettings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_autoPaintingAtLocationWithSettings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_autoPaintingAtLocationWithSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAutoAddColorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoAddColorPaintAtLocComponent_AddAutoPaintAtLocation, "AddAutoPaintAtLocation" }, // 3789177205
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "DisplayName", "Auto Add Color Paint At Location Component" },
		{ "IncludePath", "Components/AutoAddColorPaintAtLocComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Components/AutoAddColorPaintAtLocComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::NewProp_autoPaintingAtLocationWithSettings_ValueProp = { "autoPaintingAtLocationWithSettings", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct, METADATA_PARAMS(0, nullptr) }; // 4077106337
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::NewProp_autoPaintingAtLocationWithSettings_Key_KeyProp = { "autoPaintingAtLocationWithSettings_Key", nullptr, (EPropertyFlags)0x0000008000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::NewProp_autoPaintingAtLocationWithSettings_MetaData[] = {
		{ "ModuleRelativePath", "Components/AutoAddColorPaintAtLocComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::NewProp_autoPaintingAtLocationWithSettings = { "autoPaintingAtLocationWithSettings", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoAddColorPaintAtLocComponent, autoPaintingAtLocationWithSettings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::NewProp_autoPaintingAtLocationWithSettings_MetaData), Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::NewProp_autoPaintingAtLocationWithSettings_MetaData) }; // 4077106337
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::NewProp_autoPaintingAtLocationWithSettings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::NewProp_autoPaintingAtLocationWithSettings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::NewProp_autoPaintingAtLocationWithSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoAddColorPaintAtLocComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::ClassParams = {
		&UAutoAddColorPaintAtLocComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAutoAddColorPaintAtLocComponent()
	{
		if (!Z_Registration_Info_UClass_UAutoAddColorPaintAtLocComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoAddColorPaintAtLocComponent.OuterSingleton, Z_Construct_UClass_UAutoAddColorPaintAtLocComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAutoAddColorPaintAtLocComponent.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<UAutoAddColorPaintAtLocComponent>()
	{
		return UAutoAddColorPaintAtLocComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoAddColorPaintAtLocComponent);
	UAutoAddColorPaintAtLocComponent::~UAutoAddColorPaintAtLocComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorPaintAtLocComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorPaintAtLocComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAutoAddColorPaintAtLocComponent, UAutoAddColorPaintAtLocComponent::StaticClass, TEXT("UAutoAddColorPaintAtLocComponent"), &Z_Registration_Info_UClass_UAutoAddColorPaintAtLocComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoAddColorPaintAtLocComponent), 3327617946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorPaintAtLocComponent_h_4160686896(TEXT("/Script/VertexPaintDetectionPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorPaintAtLocComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorPaintAtLocComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
