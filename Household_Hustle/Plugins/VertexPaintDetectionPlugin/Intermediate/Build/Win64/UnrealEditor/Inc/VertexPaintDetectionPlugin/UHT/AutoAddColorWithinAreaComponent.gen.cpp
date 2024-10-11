// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoAddColorWithinAreaComponent.h"
#include "../Prerequisites/PaintWithinAreaPrerequisites.h"
#include "AutoAddColorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoAddColorWithinAreaComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UAutoAddColorComponent();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UAutoAddColorWithinAreaComponent();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UAutoAddColorWithinAreaComponent_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAutoAddColorSettings();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct();
// End Cross Module References
	DEFINE_FUNCTION(UAutoAddColorWithinAreaComponent::execAddAutoPaintWithinArea)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FVertexPainthWithinAreaStruct,Z_Param_paintWithinAreaSettings);
		P_GET_STRUCT(FAutoAddColorSettings,Z_Param_autoAddColorSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAutoPaintWithinArea(Z_Param_meshComponent,Z_Param_paintWithinAreaSettings,Z_Param_autoAddColorSettings);
		P_NATIVE_END;
	}
	void UAutoAddColorWithinAreaComponent::StaticRegisterNativesUAutoAddColorWithinAreaComponent()
	{
		UClass* Class = UAutoAddColorWithinAreaComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAutoPaintWithinArea", &UAutoAddColorWithinAreaComponent::execAddAutoPaintWithinArea },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea_Statics
	{
		struct AutoAddColorWithinAreaComponent_eventAddAutoPaintWithinArea_Parms
		{
			UPrimitiveComponent* meshComponent;
			FVertexPainthWithinAreaStruct paintWithinAreaSettings;
			FAutoAddColorSettings autoAddColorSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintWithinAreaSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_autoAddColorSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoAddColorWithinAreaComponent_eventAddAutoPaintWithinArea_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea_Statics::NewProp_paintWithinAreaSettings = { "paintWithinAreaSettings", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoAddColorWithinAreaComponent_eventAddAutoPaintWithinArea_Parms, paintWithinAreaSettings), Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct, METADATA_PARAMS(0, nullptr) }; // 1823502113
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea_Statics::NewProp_autoAddColorSettings = { "autoAddColorSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoAddColorWithinAreaComponent_eventAddAutoPaintWithinArea_Parms, autoAddColorSettings), Z_Construct_UScriptStruct_FAutoAddColorSettings, METADATA_PARAMS(0, nullptr) }; // 2463745312
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea_Statics::NewProp_paintWithinAreaSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea_Statics::NewProp_autoAddColorSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Auto Paint Component|Within Area" },
		{ "ModuleRelativePath", "Components/AutoAddColorWithinAreaComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a Mesh to be Auto painted with specific settings. If it's already been added then updated the settings with the new one. In AutoAddColorSettings you can set a delay between tasks, which is useful if you for instance is drying a character but it's going to fast, then you add maybe 0.1 or so to make it slower." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoAddColorWithinAreaComponent, nullptr, "AddAutoPaintWithinArea", nullptr, nullptr, Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea_Statics::AutoAddColorWithinAreaComponent_eventAddAutoPaintWithinArea_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea_Statics::AutoAddColorWithinAreaComponent_eventAddAutoPaintWithinArea_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoAddColorWithinAreaComponent);
	UClass* Z_Construct_UClass_UAutoAddColorWithinAreaComponent_NoRegister()
	{
		return UAutoAddColorWithinAreaComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onlyPaintOnMovingMeshZ_MetaData[];
#endif
		static void NewProp_onlyPaintOnMovingMeshZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_onlyPaintOnMovingMeshZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onlyPaintOnMovingMeshXY_MetaData[];
#endif
		static void NewProp_onlyPaintOnMovingMeshXY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_onlyPaintOnMovingMeshXY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onlyPaintOnRotatedMesh_MetaData[];
#endif
		static void NewProp_onlyPaintOnRotatedMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_onlyPaintOnRotatedMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onlyPaintOnReScaledMesh_MetaData[];
#endif
		static void NewProp_onlyPaintOnReScaledMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_onlyPaintOnReScaledMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_autoPaintingWithinAreaWithSettings_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_autoPaintingWithinAreaWithSettings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_autoPaintingWithinAreaWithSettings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_autoPaintingWithinAreaWithSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_meshComponentsToCheckIfMoved_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponentsToCheckIfMoved_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponentsToCheckIfMoved_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_meshComponentsToCheckIfMoved;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAutoAddColorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoAddColorWithinAreaComponent_AddAutoPaintWithinArea, "AddAutoPaintWithinArea" }, // 16161134
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "DisplayName", "Auto Add Color Paint Within Area Component" },
		{ "IncludePath", "Components/AutoAddColorWithinAreaComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Components/AutoAddColorWithinAreaComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnMovingMeshZ_MetaData[] = {
		{ "Category", "Auto Paint|Within Area" },
		{ "ModuleRelativePath", "Components/AutoAddColorWithinAreaComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optimization so you have the option to only start another auto paint within area if any change has occured on the Mesh Location Z. For instance if a character actively walking down into a lake and not just standing in it. The draw back is that this component will have to tick to check if the change has happened." },
#endif
	};
#endif
	void Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnMovingMeshZ_SetBit(void* Obj)
	{
		((UAutoAddColorWithinAreaComponent*)Obj)->onlyPaintOnMovingMeshZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnMovingMeshZ = { "onlyPaintOnMovingMeshZ", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoAddColorWithinAreaComponent), &Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnMovingMeshZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnMovingMeshZ_MetaData), Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnMovingMeshZ_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnMovingMeshXY_MetaData[] = {
		{ "Category", "Auto Paint|Within Area" },
		{ "ModuleRelativePath", "Components/AutoAddColorWithinAreaComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optimization so you have the option to only start another auto paint within area if any change has occured on the Mesh Location XY. For instance if a character is swimming in a lake but is just floating at the surface and not swimming in any direction. The draw back is that this component will have to tick to check if the change has happened." },
#endif
	};
#endif
	void Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnMovingMeshXY_SetBit(void* Obj)
	{
		((UAutoAddColorWithinAreaComponent*)Obj)->onlyPaintOnMovingMeshXY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnMovingMeshXY = { "onlyPaintOnMovingMeshXY", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoAddColorWithinAreaComponent), &Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnMovingMeshXY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnMovingMeshXY_MetaData), Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnMovingMeshXY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnRotatedMesh_MetaData[] = {
		{ "Category", "Auto Paint|Within Area" },
		{ "ModuleRelativePath", "Components/AutoAddColorWithinAreaComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optimization so you have the option to only start another auto paint within area if any change has occured on the Mesh Rotation. The draw back is that this component will have to tick to check if the change has happened." },
#endif
	};
#endif
	void Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnRotatedMesh_SetBit(void* Obj)
	{
		((UAutoAddColorWithinAreaComponent*)Obj)->onlyPaintOnRotatedMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnRotatedMesh = { "onlyPaintOnRotatedMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoAddColorWithinAreaComponent), &Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnRotatedMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnRotatedMesh_MetaData), Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnRotatedMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnReScaledMesh_MetaData[] = {
		{ "Category", "Auto Paint|Within Area" },
		{ "ModuleRelativePath", "Components/AutoAddColorWithinAreaComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optimization so you have the option to only start another auto paint within area if any change has occured on the Mesh Scale. The draw back is that this component will have to tick to check if the change has happened." },
#endif
	};
#endif
	void Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnReScaledMesh_SetBit(void* Obj)
	{
		((UAutoAddColorWithinAreaComponent*)Obj)->onlyPaintOnReScaledMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnReScaledMesh = { "onlyPaintOnReScaledMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoAddColorWithinAreaComponent), &Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnReScaledMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnReScaledMesh_MetaData), Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnReScaledMesh_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_autoPaintingWithinAreaWithSettings_ValueProp = { "autoPaintingWithinAreaWithSettings", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct, METADATA_PARAMS(0, nullptr) }; // 1823502113
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_autoPaintingWithinAreaWithSettings_Key_KeyProp = { "autoPaintingWithinAreaWithSettings_Key", nullptr, (EPropertyFlags)0x0000008000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_autoPaintingWithinAreaWithSettings_MetaData[] = {
		{ "ModuleRelativePath", "Components/AutoAddColorWithinAreaComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_autoPaintingWithinAreaWithSettings = { "autoPaintingWithinAreaWithSettings", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoAddColorWithinAreaComponent, autoPaintingWithinAreaWithSettings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_autoPaintingWithinAreaWithSettings_MetaData), Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_autoPaintingWithinAreaWithSettings_MetaData) }; // 1823502113
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_meshComponentsToCheckIfMoved_ValueProp = { "meshComponentsToCheckIfMoved", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_meshComponentsToCheckIfMoved_Key_KeyProp = { "meshComponentsToCheckIfMoved_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_meshComponentsToCheckIfMoved_MetaData[] = {
		{ "ModuleRelativePath", "Components/AutoAddColorWithinAreaComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_meshComponentsToCheckIfMoved = { "meshComponentsToCheckIfMoved", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoAddColorWithinAreaComponent, meshComponentsToCheckIfMoved), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_meshComponentsToCheckIfMoved_MetaData), Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_meshComponentsToCheckIfMoved_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnMovingMeshZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnMovingMeshXY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnRotatedMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_onlyPaintOnReScaledMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_autoPaintingWithinAreaWithSettings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_autoPaintingWithinAreaWithSettings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_autoPaintingWithinAreaWithSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_meshComponentsToCheckIfMoved_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_meshComponentsToCheckIfMoved_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::NewProp_meshComponentsToCheckIfMoved,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoAddColorWithinAreaComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::ClassParams = {
		&UAutoAddColorWithinAreaComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAutoAddColorWithinAreaComponent()
	{
		if (!Z_Registration_Info_UClass_UAutoAddColorWithinAreaComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoAddColorWithinAreaComponent.OuterSingleton, Z_Construct_UClass_UAutoAddColorWithinAreaComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAutoAddColorWithinAreaComponent.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<UAutoAddColorWithinAreaComponent>()
	{
		return UAutoAddColorWithinAreaComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoAddColorWithinAreaComponent);
	UAutoAddColorWithinAreaComponent::~UAutoAddColorWithinAreaComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorWithinAreaComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorWithinAreaComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAutoAddColorWithinAreaComponent, UAutoAddColorWithinAreaComponent::StaticClass, TEXT("UAutoAddColorWithinAreaComponent"), &Z_Registration_Info_UClass_UAutoAddColorWithinAreaComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoAddColorWithinAreaComponent), 2580405391U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorWithinAreaComponent_h_522527368(TEXT("/Script/VertexPaintDetectionPlugin"),
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorWithinAreaComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Components_AutoAddColorWithinAreaComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
