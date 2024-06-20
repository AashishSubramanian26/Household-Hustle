// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../FunctionLibs/VertexPaintTasksFunctionLibrary.h"
#include "../Prerequisites/AdditionalDataPrerequisites.h"
#include "../Prerequisites/GetClosestVertexDataPrerequisites.h"
#include "../Prerequisites/GetColorsOnlyPrerequisites.h"
#include "../Prerequisites/GetColorsWithinAreaPrerequisites.h"
#include "../Prerequisites/PaintAtLocationPrerequisites.h"
#include "../Prerequisites/PaintEntireMeshPrerequisites.h"
#include "../Prerequisites/PaintSnippetsPrerequisites.h"
#include "../Prerequisites/PaintWithinAreaPrerequisites.h"
#include "../Prerequisites/SetColorsWithStringPrerequisites.h"
#include "../Prerequisites/SetMeshColorsPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexPaintTasksFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintTasksFunctionLibrary();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintTasksFunctionLibrary_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectGetColorsOnlyStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectInfoStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintGroupSnippetStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString();
// End Cross Module References
	DEFINE_FUNCTION(UVertexPaintTasksFunctionLibrary::execSetMeshComponentVertexColorsUsingSerializedString_Wrapper)
	{
		P_GET_OBJECT(UVertexPaintDetectionComponent,Z_Param_runtimeVertexPaintAndDetectionComponent);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FVertexPaintSetMeshComponentVertexColorsUsingSerializedString,Z_Param_setMeshComponentVertexColorsUsingSerializedStringSettings);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalDataToPassThrough);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintTasksFunctionLibrary::SetMeshComponentVertexColorsUsingSerializedString_Wrapper(Z_Param_runtimeVertexPaintAndDetectionComponent,Z_Param_meshComponent,Z_Param_setMeshComponentVertexColorsUsingSerializedStringSettings,Z_Param_additionalDataToPassThrough);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintTasksFunctionLibrary::execSetMeshComponentVertexColors_Wrapper)
	{
		P_GET_OBJECT(UVertexPaintDetectionComponent,Z_Param_runtimeVertexPaintAndDetectionComponent);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FVertexPaintSetMeshComponentVertexColors,Z_Param_setMeshComponentVertexColorsSettings);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalDataToPassThrough);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintTasksFunctionLibrary::SetMeshComponentVertexColors_Wrapper(Z_Param_runtimeVertexPaintAndDetectionComponent,Z_Param_meshComponent,Z_Param_setMeshComponentVertexColorsSettings,Z_Param_additionalDataToPassThrough);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintTasksFunctionLibrary::execPaintGroupSnippetOnMesh_Wrapper)
	{
		P_GET_OBJECT(UVertexPaintDetectionComponent,Z_Param_runtimeVertexPaintAndDetectionComponent);
		P_GET_TARRAY(UPrimitiveComponent*,Z_Param_groupSnippetMeshes);
		P_GET_STRUCT(FVertexPaintGroupSnippetStruct,Z_Param_paintGroupSnippetStruct);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalDataToPassThrough);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintTasksFunctionLibrary::PaintGroupSnippetOnMesh_Wrapper(Z_Param_runtimeVertexPaintAndDetectionComponent,Z_Param_groupSnippetMeshes,Z_Param_paintGroupSnippetStruct,Z_Param_additionalDataToPassThrough);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintTasksFunctionLibrary::execPaintColorSnippetOnMesh_Wrappers)
	{
		P_GET_OBJECT(UVertexPaintDetectionComponent,Z_Param_runtimeVertexPaintAndDetectionComponent);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FVertexPaintColorSnippetStruct,Z_Param_paintColorSnippetStruct);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalDataToPassThrough);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintTasksFunctionLibrary::PaintColorSnippetOnMesh_Wrappers(Z_Param_runtimeVertexPaintAndDetectionComponent,Z_Param_meshComponent,Z_Param_paintColorSnippetStruct,Z_Param_additionalDataToPassThrough);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintTasksFunctionLibrary::execPaintOnEntireMesh_Wrapper)
	{
		P_GET_OBJECT(UVertexPaintDetectionComponent,Z_Param_runtimeVertexPaintAndDetectionComponent);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FVertexPaintOnEntireMeshStruct,Z_Param_paintOnEntireMeshStruct);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalDataToPassThrough);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintTasksFunctionLibrary::PaintOnEntireMesh_Wrapper(Z_Param_runtimeVertexPaintAndDetectionComponent,Z_Param_meshComponent,Z_Param_paintOnEntireMeshStruct,Z_Param_additionalDataToPassThrough);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintTasksFunctionLibrary::execPaintOnMeshWithinArea_Wrapper)
	{
		P_GET_OBJECT(UVertexPaintDetectionComponent,Z_Param_runtimeVertexPaintAndDetectionComponent);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FVertexPainthWithinAreaStruct,Z_Param_paintWithinAreaStruct);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalDataToPassThrough);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintTasksFunctionLibrary::PaintOnMeshWithinArea_Wrapper(Z_Param_runtimeVertexPaintAndDetectionComponent,Z_Param_meshComponent,Z_Param_paintWithinAreaStruct,Z_Param_additionalDataToPassThrough);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintTasksFunctionLibrary::execPaintOnMeshAtLocation_Wrapper)
	{
		P_GET_OBJECT(UVertexPaintDetectionComponent,Z_Param_runtimeVertexPaintAndDetectionComponent);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FVertexPaintAtLocationStruct,Z_Param_paintAtLocationStruct);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalDataToPassThrough);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintTasksFunctionLibrary::PaintOnMeshAtLocation_Wrapper(Z_Param_runtimeVertexPaintAndDetectionComponent,Z_Param_meshComponent,Z_Param_paintAtLocationStruct,Z_Param_additionalDataToPassThrough);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintTasksFunctionLibrary::execGetColorsWithinArea_Wrapper)
	{
		P_GET_OBJECT(UVertexPaintDetectionComponent,Z_Param_runtimeVertexPaintAndDetectionComponent);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FVertexDetectGetColorsWithinAreaStruct,Z_Param_getColorsWithinAreaStruct);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalDataToPassThrough);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintTasksFunctionLibrary::GetColorsWithinArea_Wrapper(Z_Param_runtimeVertexPaintAndDetectionComponent,Z_Param_meshComponent,Z_Param_getColorsWithinAreaStruct,Z_Param_additionalDataToPassThrough);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintTasksFunctionLibrary::execGetAllVertexColorsOnly_Wrapper)
	{
		P_GET_OBJECT(UVertexPaintDetectionComponent,Z_Param_runtimeVertexPaintAndDetectionComponent);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FVertexDetectGetColorsOnlyStruct,Z_Param_getAllVertexColorsStruct);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalDataToPassThrough);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintTasksFunctionLibrary::GetAllVertexColorsOnly_Wrapper(Z_Param_runtimeVertexPaintAndDetectionComponent,Z_Param_meshComponent,Z_Param_getAllVertexColorsStruct,Z_Param_additionalDataToPassThrough);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintTasksFunctionLibrary::execGetClosestVertexDataOnMesh_Wrapper)
	{
		P_GET_OBJECT(UVertexPaintDetectionComponent,Z_Param_runtimeVertexPaintAndDetectionComponent);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FVertexDetectInfoStruct,Z_Param_getClosestVertexDataStruct);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalDataToPassThrough);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintTasksFunctionLibrary::GetClosestVertexDataOnMesh_Wrapper(Z_Param_runtimeVertexPaintAndDetectionComponent,Z_Param_meshComponent,Z_Param_getClosestVertexDataStruct,Z_Param_additionalDataToPassThrough);
		P_NATIVE_END;
	}
	void UVertexPaintTasksFunctionLibrary::StaticRegisterNativesUVertexPaintTasksFunctionLibrary()
	{
		UClass* Class = UVertexPaintTasksFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllVertexColorsOnly_Wrapper", &UVertexPaintTasksFunctionLibrary::execGetAllVertexColorsOnly_Wrapper },
			{ "GetClosestVertexDataOnMesh_Wrapper", &UVertexPaintTasksFunctionLibrary::execGetClosestVertexDataOnMesh_Wrapper },
			{ "GetColorsWithinArea_Wrapper", &UVertexPaintTasksFunctionLibrary::execGetColorsWithinArea_Wrapper },
			{ "PaintColorSnippetOnMesh_Wrappers", &UVertexPaintTasksFunctionLibrary::execPaintColorSnippetOnMesh_Wrappers },
			{ "PaintGroupSnippetOnMesh_Wrapper", &UVertexPaintTasksFunctionLibrary::execPaintGroupSnippetOnMesh_Wrapper },
			{ "PaintOnEntireMesh_Wrapper", &UVertexPaintTasksFunctionLibrary::execPaintOnEntireMesh_Wrapper },
			{ "PaintOnMeshAtLocation_Wrapper", &UVertexPaintTasksFunctionLibrary::execPaintOnMeshAtLocation_Wrapper },
			{ "PaintOnMeshWithinArea_Wrapper", &UVertexPaintTasksFunctionLibrary::execPaintOnMeshWithinArea_Wrapper },
			{ "SetMeshComponentVertexColors_Wrapper", &UVertexPaintTasksFunctionLibrary::execSetMeshComponentVertexColors_Wrapper },
			{ "SetMeshComponentVertexColorsUsingSerializedString_Wrapper", &UVertexPaintTasksFunctionLibrary::execSetMeshComponentVertexColorsUsingSerializedString_Wrapper },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics
	{
		struct VertexPaintTasksFunctionLibrary_eventGetAllVertexColorsOnly_Wrapper_Parms
		{
			UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent;
			UPrimitiveComponent* meshComponent;
			FVertexDetectGetColorsOnlyStruct getAllVertexColorsStruct;
			FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_runtimeVertexPaintAndDetectionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_getAllVertexColorsStruct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalDataToPassThrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent = { "runtimeVertexPaintAndDetectionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventGetAllVertexColorsOnly_Wrapper_Parms, runtimeVertexPaintAndDetectionComponent), Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventGetAllVertexColorsOnly_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_getAllVertexColorsStruct = { "getAllVertexColorsStruct", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventGetAllVertexColorsOnly_Wrapper_Parms, getAllVertexColorsStruct), Z_Construct_UScriptStruct_FVertexDetectGetColorsOnlyStruct, METADATA_PARAMS(0, nullptr) }; // 1846039242
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_additionalDataToPassThrough = { "additionalDataToPassThrough", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventGetAllVertexColorsOnly_Wrapper_Parms, additionalDataToPassThrough), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(0, nullptr) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_getAllVertexColorsStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_additionalDataToPassThrough,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Detect" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintTasksFunctionLibrary.h" },
		{ "ToolTip", "Get All Vertex Colors Only on Static, Skeletal or Spline Meshes. This is faster than GetClosestVertexDataOnMesh since it doesn't require the task to loop through the vertices, but only gets the total colors. If you change the callback settings to return the positions and/or normal, the bones and the colors (if skeletal mesh comp), or get amount of color for each channel, then it will also loop through the vertices in order to get those, but will make the task take just as long as GetClosestVertexDataOnMesh. \n\nNOTE Make sure includeVertexColorData is True in the Callback Settings if you intend to make use of the Vertex Colors when the Callback is Run!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintTasksFunctionLibrary, nullptr, "GetAllVertexColorsOnly_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::VertexPaintTasksFunctionLibrary_eventGetAllVertexColorsOnly_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::VertexPaintTasksFunctionLibrary_eventGetAllVertexColorsOnly_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics
	{
		struct VertexPaintTasksFunctionLibrary_eventGetClosestVertexDataOnMesh_Wrapper_Parms
		{
			UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent;
			UPrimitiveComponent* meshComponent;
			FVertexDetectInfoStruct getClosestVertexDataStruct;
			FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_runtimeVertexPaintAndDetectionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_getClosestVertexDataStruct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalDataToPassThrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent = { "runtimeVertexPaintAndDetectionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventGetClosestVertexDataOnMesh_Wrapper_Parms, runtimeVertexPaintAndDetectionComponent), Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventGetClosestVertexDataOnMesh_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_getClosestVertexDataStruct = { "getClosestVertexDataStruct", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventGetClosestVertexDataOnMesh_Wrapper_Parms, getClosestVertexDataStruct), Z_Construct_UScriptStruct_FVertexDetectInfoStruct, METADATA_PARAMS(0, nullptr) }; // 148266220
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_additionalDataToPassThrough = { "additionalDataToPassThrough", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventGetClosestVertexDataOnMesh_Wrapper_Parms, additionalDataToPassThrough), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(0, nullptr) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_getClosestVertexDataStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_additionalDataToPassThrough,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Detect" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintTasksFunctionLibrary.h" },
		{ "ToolTip", "Gets the Closest Vertex Data on  Static, Skeletal, or Spline Meshes such as Colors, Position and Normal. It can also return All of the Colors, Positions and Normals if set to do so in the callback settings, as well as Get Average Color within an Area, and the Estimated Color at Actual Hit Location. \nTrace Complex has to be True if doing a trace onto the mesh so we can get the faceIndex for Static Meshes! \ndetectWith is the source of the hit, for example Shoe, Bullet etc. and will just be returned in the Detected Delegate. \nIf Area of Effect is higher than 0, then you can get the Average Color and Physics Surface of that Area! \nGetEstimatedColorAtHitLocationSettings will get the vertex colors as close to the hit location as possible, which is useful if meshes have few vertices. \n\nDetection Tasks will always get moved to be the first in a Task Queue, so they run as quickly as possible since they're often used for SFX and/or VFX." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintTasksFunctionLibrary, nullptr, "GetClosestVertexDataOnMesh_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::VertexPaintTasksFunctionLibrary_eventGetClosestVertexDataOnMesh_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::VertexPaintTasksFunctionLibrary_eventGetClosestVertexDataOnMesh_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics
	{
		struct VertexPaintTasksFunctionLibrary_eventGetColorsWithinArea_Wrapper_Parms
		{
			UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent;
			UPrimitiveComponent* meshComponent;
			FVertexDetectGetColorsWithinAreaStruct getColorsWithinAreaStruct;
			FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_runtimeVertexPaintAndDetectionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_getColorsWithinAreaStruct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalDataToPassThrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent = { "runtimeVertexPaintAndDetectionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventGetColorsWithinArea_Wrapper_Parms, runtimeVertexPaintAndDetectionComponent), Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventGetColorsWithinArea_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::NewProp_getColorsWithinAreaStruct = { "getColorsWithinAreaStruct", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventGetColorsWithinArea_Wrapper_Parms, getColorsWithinAreaStruct), Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct, METADATA_PARAMS(0, nullptr) }; // 2501455522
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::NewProp_additionalDataToPassThrough = { "additionalDataToPassThrough", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventGetColorsWithinArea_Wrapper_Parms, additionalDataToPassThrough), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(0, nullptr) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::NewProp_getColorsWithinAreaStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::NewProp_additionalDataToPassThrough,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Detect" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintTasksFunctionLibrary.h" },
		{ "ToolTip", "Get Colors Within Area on Static, Skeletal or Spline Meshes. This is similar to the Paint Within Area, except it doesn't apply any paint jobs but can Instead just Get Colors, Position, Normals and amount of color of each channel such as % etc. of the vertices just within the Area. \nThese settings can be made in the Within Area Settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintTasksFunctionLibrary, nullptr, "GetColorsWithinArea_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::VertexPaintTasksFunctionLibrary_eventGetColorsWithinArea_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::VertexPaintTasksFunctionLibrary_eventGetColorsWithinArea_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics
	{
		struct VertexPaintTasksFunctionLibrary_eventPaintColorSnippetOnMesh_Wrappers_Parms
		{
			UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent;
			UPrimitiveComponent* meshComponent;
			FVertexPaintColorSnippetStruct paintColorSnippetStruct;
			FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_runtimeVertexPaintAndDetectionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintColorSnippetStruct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalDataToPassThrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_runtimeVertexPaintAndDetectionComponent = { "runtimeVertexPaintAndDetectionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventPaintColorSnippetOnMesh_Wrappers_Parms, runtimeVertexPaintAndDetectionComponent), Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventPaintColorSnippetOnMesh_Wrappers_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_paintColorSnippetStruct = { "paintColorSnippetStruct", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventPaintColorSnippetOnMesh_Wrappers_Parms, paintColorSnippetStruct), Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct, METADATA_PARAMS(0, nullptr) }; // 1699173422
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_additionalDataToPassThrough = { "additionalDataToPassThrough", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventPaintColorSnippetOnMesh_Wrappers_Parms, additionalDataToPassThrough), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(0, nullptr) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_runtimeVertexPaintAndDetectionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_paintColorSnippetStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_additionalDataToPassThrough,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Paint" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintTasksFunctionLibrary.h" },
		{ "ToolTip", "Paints a Color Snippet on Mesh with the Color Snippet Tag Provided, if the Tag is registered for the Mesh. If it isn't registered for the mesh, or set to default, but we've set to Randomize a Tag under a category, then we will do that instead, if there any tags under that category that is registered to the Mesh. \n\nColor Snippets can be very useful if you want to be able to store snippets of exactly how a Mesh should look for later use, for example variations of Weapon Skins, or if you want your character to look exactly in a certain way for a level, cutscene, or just want to store different variations of zombies and randomly choose a snippet when spawning one. \n\nAffect Cloth Physics is a UE5 Exclusive Feature!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintTasksFunctionLibrary, nullptr, "PaintColorSnippetOnMesh_Wrappers", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::VertexPaintTasksFunctionLibrary_eventPaintColorSnippetOnMesh_Wrappers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::VertexPaintTasksFunctionLibrary_eventPaintColorSnippetOnMesh_Wrappers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics
	{
		struct VertexPaintTasksFunctionLibrary_eventPaintGroupSnippetOnMesh_Wrapper_Parms
		{
			UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent;
			TArray<UPrimitiveComponent*> groupSnippetMeshes;
			FVertexPaintGroupSnippetStruct paintGroupSnippetStruct;
			FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_runtimeVertexPaintAndDetectionComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_groupSnippetMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_groupSnippetMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_groupSnippetMeshes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintGroupSnippetStruct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalDataToPassThrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent = { "runtimeVertexPaintAndDetectionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventPaintGroupSnippetOnMesh_Wrapper_Parms, runtimeVertexPaintAndDetectionComponent), Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::NewProp_groupSnippetMeshes_Inner = { "groupSnippetMeshes", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::NewProp_groupSnippetMeshes_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::NewProp_groupSnippetMeshes = { "groupSnippetMeshes", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventPaintGroupSnippetOnMesh_Wrapper_Parms, groupSnippetMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::NewProp_groupSnippetMeshes_MetaData), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::NewProp_groupSnippetMeshes_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::NewProp_paintGroupSnippetStruct = { "paintGroupSnippetStruct", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventPaintGroupSnippetOnMesh_Wrapper_Parms, paintGroupSnippetStruct), Z_Construct_UScriptStruct_FVertexPaintGroupSnippetStruct, METADATA_PARAMS(0, nullptr) }; // 3428602239
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::NewProp_additionalDataToPassThrough = { "additionalDataToPassThrough", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventPaintGroupSnippetOnMesh_Wrapper_Parms, additionalDataToPassThrough), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(0, nullptr) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::NewProp_groupSnippetMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::NewProp_groupSnippetMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::NewProp_paintGroupSnippetStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::NewProp_additionalDataToPassThrough,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Paint" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintTasksFunctionLibrary.h" },
		{ "ToolTip", "Paints a Group Snippet on Mesh with the Color Snippet Tag Provided, if it is a Group Snippet Tag. Group Snippets can be very useful if you want Store and Paint Snippets that should run across several mesh components, such as if you have a character with several split up skeletal mesh components, or Canvas that's been split up into several small static mesh components so you get high vertex density but with low task time. \n\nAffect Cloth Physics is a UE5 Exclusive Feature!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintTasksFunctionLibrary, nullptr, "PaintGroupSnippetOnMesh_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::VertexPaintTasksFunctionLibrary_eventPaintGroupSnippetOnMesh_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::VertexPaintTasksFunctionLibrary_eventPaintGroupSnippetOnMesh_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics
	{
		struct VertexPaintTasksFunctionLibrary_eventPaintOnEntireMesh_Wrapper_Parms
		{
			UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent;
			UPrimitiveComponent* meshComponent;
			FVertexPaintOnEntireMeshStruct paintOnEntireMeshStruct;
			FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_runtimeVertexPaintAndDetectionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintOnEntireMeshStruct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalDataToPassThrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent = { "runtimeVertexPaintAndDetectionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventPaintOnEntireMesh_Wrapper_Parms, runtimeVertexPaintAndDetectionComponent), Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventPaintOnEntireMesh_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_paintOnEntireMeshStruct = { "paintOnEntireMeshStruct", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventPaintOnEntireMesh_Wrapper_Parms, paintOnEntireMeshStruct), Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct, METADATA_PARAMS(0, nullptr) }; // 1206873762
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_additionalDataToPassThrough = { "additionalDataToPassThrough", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventPaintOnEntireMesh_Wrapper_Parms, additionalDataToPassThrough), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(0, nullptr) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_paintOnEntireMeshStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_additionalDataToPassThrough,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Paint" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintTasksFunctionLibrary.h" },
		{ "ToolTip", "Paint Vertex Colors on the Entire Mesh on Static, Skeletal or Spline Meshes. \n\n In the Apply Vertex Color Settings you can choose to Set the colors, which is useful if the Mesh's default colors is undesirable and you want to 'Clean' the Mesh by painting it with 0, 0, 0, 0. Remember that with UEs Mesh Painting Tool you can propogate colors to the source mesh permanently, so you can set the source to always be 0, 0, 0, 0. \nPaint Entire Mesh can be combined effectively with Paint Color Conditions under Apply Vertex Color Settings, where you can for instance Paint Entire Mesh, but only if a Channel is between certain values, so for instance under Rooftops won't get painted. \nYou can opt to Paint on Random Vertices over the Entire Mesh as well, which is great for Rain Effects or similar. \n\nAffect Cloth Physics is a UE5 Exclusive Feature!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintTasksFunctionLibrary, nullptr, "PaintOnEntireMesh_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::VertexPaintTasksFunctionLibrary_eventPaintOnEntireMesh_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::VertexPaintTasksFunctionLibrary_eventPaintOnEntireMesh_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics
	{
		struct VertexPaintTasksFunctionLibrary_eventPaintOnMeshAtLocation_Wrapper_Parms
		{
			UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent;
			UPrimitiveComponent* meshComponent;
			FVertexPaintAtLocationStruct paintAtLocationStruct;
			FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_runtimeVertexPaintAndDetectionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintAtLocationStruct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalDataToPassThrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent = { "runtimeVertexPaintAndDetectionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventPaintOnMeshAtLocation_Wrapper_Parms, runtimeVertexPaintAndDetectionComponent), Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventPaintOnMeshAtLocation_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_paintAtLocationStruct = { "paintAtLocationStruct", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventPaintOnMeshAtLocation_Wrapper_Parms, paintAtLocationStruct), Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct, METADATA_PARAMS(0, nullptr) }; // 4077106337
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_additionalDataToPassThrough = { "additionalDataToPassThrough", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventPaintOnMeshAtLocation_Wrapper_Parms, additionalDataToPassThrough), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(0, nullptr) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_paintAtLocationStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_additionalDataToPassThrough,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Paint" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintTasksFunctionLibrary.h" },
		{ "ToolTip", "Paint Vertex Colors in Runtime on Static, Skeletal or Spline Meshes. \n\nStrength to Apply should be between -1 - 1, Fall Off Strength 0-1, Area of Effect > 0, Area of Effect with Full Color > 0 if you want to have an area around the paint location to be fully painted. \n\nPaint on Color Limit can be used if you don't want to paint over a certain amount on a channel, for instance if Rain should only be able to make you wet up to a certain amount. \n\nTrace Complex has to be True if Line Tracing as it is required to get the faceIndex! \n\nAffect Cloth Physics is a UE5 Exclusive Feature!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintTasksFunctionLibrary, nullptr, "PaintOnMeshAtLocation_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::VertexPaintTasksFunctionLibrary_eventPaintOnMeshAtLocation_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::VertexPaintTasksFunctionLibrary_eventPaintOnMeshAtLocation_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics
	{
		struct VertexPaintTasksFunctionLibrary_eventPaintOnMeshWithinArea_Wrapper_Parms
		{
			UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent;
			UPrimitiveComponent* meshComponent;
			FVertexPainthWithinAreaStruct paintWithinAreaStruct;
			FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_runtimeVertexPaintAndDetectionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintWithinAreaStruct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalDataToPassThrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent = { "runtimeVertexPaintAndDetectionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventPaintOnMeshWithinArea_Wrapper_Parms, runtimeVertexPaintAndDetectionComponent), Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventPaintOnMeshWithinArea_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_paintWithinAreaStruct = { "paintWithinAreaStruct", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventPaintOnMeshWithinArea_Wrapper_Parms, paintWithinAreaStruct), Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct, METADATA_PARAMS(0, nullptr) }; // 958617516
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_additionalDataToPassThrough = { "additionalDataToPassThrough", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventPaintOnMeshWithinArea_Wrapper_Parms, additionalDataToPassThrough), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(0, nullptr) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_paintWithinAreaStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_additionalDataToPassThrough,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Paint" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintTasksFunctionLibrary.h" },
		{ "ToolTip", "Paint Vertex Colors on a Static, Skeletal or Spline Meshes on what is Within the componentToCheckIfIsWithins Area. \n\nStrength to Apply should be between -1 - 1, Fall Off Strength 0-1, Area of Effect with Full Color > 0 if you want an area in the component location to have full color. \n\nRecommended to use isSphereShape, or isSquareOrRectangleShape such as a big rectangle for for example a body of water, as they are the faster Tasks. \n\nisComplexShape is slower since for every vertex on the component that is within the bounds of componentToCheckIfIsWithin, we line trace to see if it hits componentToCheckIfIsWithin collison. Should only be used if you really need a mesh with complex shapes, like if you paint a pattern or want to paint how a skeletal mesh is posed. \n\nNOTE Extra Extent to Apply Paint does Not work for isComplexShape. \n\nAffect Cloth Physics is a UE5 Exclusive Feature!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintTasksFunctionLibrary, nullptr, "PaintOnMeshWithinArea_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::VertexPaintTasksFunctionLibrary_eventPaintOnMeshWithinArea_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::VertexPaintTasksFunctionLibrary_eventPaintOnMeshWithinArea_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics
	{
		struct VertexPaintTasksFunctionLibrary_eventSetMeshComponentVertexColors_Wrapper_Parms
		{
			UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent;
			UPrimitiveComponent* meshComponent;
			FVertexPaintSetMeshComponentVertexColors setMeshComponentVertexColorsSettings;
			FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_runtimeVertexPaintAndDetectionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_setMeshComponentVertexColorsSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalDataToPassThrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent = { "runtimeVertexPaintAndDetectionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventSetMeshComponentVertexColors_Wrapper_Parms, runtimeVertexPaintAndDetectionComponent), Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventSetMeshComponentVertexColors_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_setMeshComponentVertexColorsSettings = { "setMeshComponentVertexColorsSettings", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventSetMeshComponentVertexColors_Wrapper_Parms, setMeshComponentVertexColorsSettings), Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors, METADATA_PARAMS(0, nullptr) }; // 3521629976
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_additionalDataToPassThrough = { "additionalDataToPassThrough", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventSetMeshComponentVertexColors_Wrapper_Parms, additionalDataToPassThrough), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(0, nullptr) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_setMeshComponentVertexColorsSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_additionalDataToPassThrough,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Paint" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintTasksFunctionLibrary.h" },
		{ "ToolTip", "Sets Vertex Colors to Component Using a Vertex COlor Array. Array has to match the amount of vertices the meshComponent has. This is useful for Save/Load Systems in case you've Saved the colors before and want to Load them later." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintTasksFunctionLibrary, nullptr, "SetMeshComponentVertexColors_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::VertexPaintTasksFunctionLibrary_eventSetMeshComponentVertexColors_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::VertexPaintTasksFunctionLibrary_eventSetMeshComponentVertexColors_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics
	{
		struct VertexPaintTasksFunctionLibrary_eventSetMeshComponentVertexColorsUsingSerializedString_Wrapper_Parms
		{
			UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent;
			UPrimitiveComponent* meshComponent;
			FVertexPaintSetMeshComponentVertexColorsUsingSerializedString setMeshComponentVertexColorsUsingSerializedStringSettings;
			FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_runtimeVertexPaintAndDetectionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_setMeshComponentVertexColorsUsingSerializedStringSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalDataToPassThrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent = { "runtimeVertexPaintAndDetectionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventSetMeshComponentVertexColorsUsingSerializedString_Wrapper_Parms, runtimeVertexPaintAndDetectionComponent), Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventSetMeshComponentVertexColorsUsingSerializedString_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_setMeshComponentVertexColorsUsingSerializedStringSettings = { "setMeshComponentVertexColorsUsingSerializedStringSettings", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventSetMeshComponentVertexColorsUsingSerializedString_Wrapper_Parms, setMeshComponentVertexColorsUsingSerializedStringSettings), Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString, METADATA_PARAMS(0, nullptr) }; // 3911707442
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_additionalDataToPassThrough = { "additionalDataToPassThrough", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintTasksFunctionLibrary_eventSetMeshComponentVertexColorsUsingSerializedString_Wrapper_Parms, additionalDataToPassThrough), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(0, nullptr) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_setMeshComponentVertexColorsUsingSerializedStringSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_additionalDataToPassThrough,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Paint" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintTasksFunctionLibrary.h" },
		{ "ToolTip", "Sets Color Data to a Component using Serialized String. This is useful for Save/Load Systems in case you've Saved the colors before and want to Load them later." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintTasksFunctionLibrary, nullptr, "SetMeshComponentVertexColorsUsingSerializedString_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::VertexPaintTasksFunctionLibrary_eventSetMeshComponentVertexColorsUsingSerializedString_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::VertexPaintTasksFunctionLibrary_eventSetMeshComponentVertexColorsUsingSerializedString_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexPaintTasksFunctionLibrary);
	UClass* Z_Construct_UClass_UVertexPaintTasksFunctionLibrary_NoRegister()
	{
		return UVertexPaintTasksFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVertexPaintTasksFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexPaintTasksFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintTasksFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVertexPaintTasksFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetAllVertexColorsOnly_Wrapper, "GetAllVertexColorsOnly_Wrapper" }, // 1595522574
		{ &Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper, "GetClosestVertexDataOnMesh_Wrapper" }, // 765439432
		{ &Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_GetColorsWithinArea_Wrapper, "GetColorsWithinArea_Wrapper" }, // 3402935374
		{ &Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintColorSnippetOnMesh_Wrappers, "PaintColorSnippetOnMesh_Wrappers" }, // 918695106
		{ &Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintGroupSnippetOnMesh_Wrapper, "PaintGroupSnippetOnMesh_Wrapper" }, // 2345987859
		{ &Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnEntireMesh_Wrapper, "PaintOnEntireMesh_Wrapper" }, // 2463979186
		{ &Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshAtLocation_Wrapper, "PaintOnMeshAtLocation_Wrapper" }, // 405228854
		{ &Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_PaintOnMeshWithinArea_Wrapper, "PaintOnMeshWithinArea_Wrapper" }, // 3773456724
		{ &Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColors_Wrapper, "SetMeshComponentVertexColors_Wrapper" }, // 1184688956
		{ &Z_Construct_UFunction_UVertexPaintTasksFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper, "SetMeshComponentVertexColorsUsingSerializedString_Wrapper" }, // 860585180
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintTasksFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintTasksFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FunctionLibs/VertexPaintTasksFunctionLibrary.h" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintTasksFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexPaintTasksFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexPaintTasksFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexPaintTasksFunctionLibrary_Statics::ClassParams = {
		&UVertexPaintTasksFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintTasksFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVertexPaintTasksFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVertexPaintTasksFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UVertexPaintTasksFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexPaintTasksFunctionLibrary.OuterSingleton, Z_Construct_UClass_UVertexPaintTasksFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexPaintTasksFunctionLibrary.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<UVertexPaintTasksFunctionLibrary>()
	{
		return UVertexPaintTasksFunctionLibrary::StaticClass();
	}
	UVertexPaintTasksFunctionLibrary::UVertexPaintTasksFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexPaintTasksFunctionLibrary);
	UVertexPaintTasksFunctionLibrary::~UVertexPaintTasksFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintTasksFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintTasksFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexPaintTasksFunctionLibrary, UVertexPaintTasksFunctionLibrary::StaticClass, TEXT("UVertexPaintTasksFunctionLibrary"), &Z_Registration_Info_UClass_UVertexPaintTasksFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexPaintTasksFunctionLibrary), 1072211785U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintTasksFunctionLibrary_h_468032047(TEXT("/Script/VertexPaintDetectionPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintTasksFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintTasksFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
