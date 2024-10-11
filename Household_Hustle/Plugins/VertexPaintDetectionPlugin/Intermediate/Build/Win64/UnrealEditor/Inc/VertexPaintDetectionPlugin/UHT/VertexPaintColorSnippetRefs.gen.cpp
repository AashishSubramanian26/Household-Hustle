// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../DataAssets/VertexPaintColorSnippetRefs.h"
#include "../Prerequisites/ColorSnippetPrerequisites.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexPaintColorSnippetRefs() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintColorSnippetRefs();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintColorSnippetRefs_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo();
// End Cross Module References
	DEFINE_FUNCTION(UVertexPaintColorSnippetRefs::execGetObjectFromSnippetID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_snippetID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UObject>*)Z_Param__Result=P_THIS->GetObjectFromSnippetID(Z_Param_snippetID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintColorSnippetRefs::execContainsColorSnippet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_snippetID);
		P_GET_UBOOL(Z_Param_optionalHasToBeStoredInDataAsset);
		P_GET_OBJECT(UVertexPaintColorSnippetDataAsset,Z_Param_dataAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContainsColorSnippet(Z_Param_snippetID,Z_Param_optionalHasToBeStoredInDataAsset,Z_Param_dataAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintColorSnippetRefs::execCheckAndGetTheComponentsThatMatchGroupChildSnippets)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupSnippetID);
		P_GET_TARRAY(UPrimitiveComponent*,Z_Param_meshComponents);
		P_GET_TMAP_REF(FString,UPrimitiveComponent*,Z_Param_Out_childSnippetsAndMatchingMeshes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckAndGetTheComponentsThatMatchGroupChildSnippets(Z_Param_WorldContextObject,Z_Param_groupSnippetID,Z_Param_meshComponents,Z_Param_Out_childSnippetsAndMatchingMeshes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintColorSnippetRefs::execGetChildSnippetInfosAssociatedWithGroupSnippetID)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupSnippetID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FVertexDetectStoredColorSnippetInfo>*)Z_Param__Result=P_THIS->GetChildSnippetInfosAssociatedWithGroupSnippetID(Z_Param_WorldContextObject,Z_Param_groupSnippetID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintColorSnippetRefs::execGetAllGroupSnippetsInSpecifiedDataAsset)
	{
		P_GET_OBJECT(UVertexPaintColorSnippetDataAsset,Z_Param_colorSnippetDataAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FVertexDetectGroupColorSnippetInfo>*)Z_Param__Result=P_THIS->GetAllGroupSnippetsInSpecifiedDataAsset(Z_Param_colorSnippetDataAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintColorSnippetRefs::execGetAllColorSnippetsInSpecifiedDataAsset)
	{
		P_GET_OBJECT(UVertexPaintColorSnippetDataAsset,Z_Param_colorSnippetDataAsset);
		P_GET_UBOOL(Z_Param_includeChildGroupSnippets);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FVertexDetectStoredColorSnippetInfo>*)Z_Param__Result=P_THIS->GetAllColorSnippetsInSpecifiedDataAsset(Z_Param_colorSnippetDataAsset,Z_Param_includeChildGroupSnippets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintColorSnippetRefs::execGetAllColorSnippetsAndDataAssetForObject)
	{
		P_GET_OBJECT(UObject,Z_Param_object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FVertexDetectStoredColorSnippetInfo>*)Z_Param__Result=P_THIS->GetAllColorSnippetsAndDataAssetForObject(Z_Param_object);
		P_NATIVE_END;
	}
	void UVertexPaintColorSnippetRefs::StaticRegisterNativesUVertexPaintColorSnippetRefs()
	{
		UClass* Class = UVertexPaintColorSnippetRefs::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckAndGetTheComponentsThatMatchGroupChildSnippets", &UVertexPaintColorSnippetRefs::execCheckAndGetTheComponentsThatMatchGroupChildSnippets },
			{ "ContainsColorSnippet", &UVertexPaintColorSnippetRefs::execContainsColorSnippet },
			{ "GetAllColorSnippetsAndDataAssetForObject", &UVertexPaintColorSnippetRefs::execGetAllColorSnippetsAndDataAssetForObject },
			{ "GetAllColorSnippetsInSpecifiedDataAsset", &UVertexPaintColorSnippetRefs::execGetAllColorSnippetsInSpecifiedDataAsset },
			{ "GetAllGroupSnippetsInSpecifiedDataAsset", &UVertexPaintColorSnippetRefs::execGetAllGroupSnippetsInSpecifiedDataAsset },
			{ "GetChildSnippetInfosAssociatedWithGroupSnippetID", &UVertexPaintColorSnippetRefs::execGetChildSnippetInfosAssociatedWithGroupSnippetID },
			{ "GetObjectFromSnippetID", &UVertexPaintColorSnippetRefs::execGetObjectFromSnippetID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics
	{
		struct VertexPaintColorSnippetRefs_eventCheckAndGetTheComponentsThatMatchGroupChildSnippets_Parms
		{
			const UObject* WorldContextObject;
			FString groupSnippetID;
			TArray<UPrimitiveComponent*> meshComponents;
			TMap<FString,UPrimitiveComponent*> childSnippetsAndMatchingMeshes;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_groupSnippetID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_meshComponents;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_childSnippetsAndMatchingMeshes_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_childSnippetsAndMatchingMeshes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_childSnippetsAndMatchingMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_childSnippetsAndMatchingMeshes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintColorSnippetRefs_eventCheckAndGetTheComponentsThatMatchGroupChildSnippets_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_groupSnippetID = { "groupSnippetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintColorSnippetRefs_eventCheckAndGetTheComponentsThatMatchGroupChildSnippets_Parms, groupSnippetID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_meshComponents_Inner = { "meshComponents", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_meshComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_meshComponents = { "meshComponents", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintColorSnippetRefs_eventCheckAndGetTheComponentsThatMatchGroupChildSnippets_Parms, meshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_meshComponents_MetaData), Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_meshComponents_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_childSnippetsAndMatchingMeshes_ValueProp = { "childSnippetsAndMatchingMeshes", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_childSnippetsAndMatchingMeshes_Key_KeyProp = { "childSnippetsAndMatchingMeshes_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_childSnippetsAndMatchingMeshes_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_childSnippetsAndMatchingMeshes = { "childSnippetsAndMatchingMeshes", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintColorSnippetRefs_eventCheckAndGetTheComponentsThatMatchGroupChildSnippets_Parms, childSnippetsAndMatchingMeshes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_childSnippetsAndMatchingMeshes_MetaData), Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_childSnippetsAndMatchingMeshes_MetaData) };
	void Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VertexPaintColorSnippetRefs_eventCheckAndGetTheComponentsThatMatchGroupChildSnippets_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintColorSnippetRefs_eventCheckAndGetTheComponentsThatMatchGroupChildSnippets_Parms), &Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_groupSnippetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_meshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_meshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_childSnippetsAndMatchingMeshes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_childSnippetsAndMatchingMeshes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_childSnippetsAndMatchingMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Color Snippets" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintColorSnippetRefs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will get and check if the meshComponent we pass through, matches what the Group Snippet ID requires, i.e. the correct amount of components, with right source mesh, relative location etc. If any of the meshes it at an off location or rotated differently then it will fail, since it doesn't fully match and we shouldn't be allowed to Paint / Preview it." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintColorSnippetRefs, nullptr, "CheckAndGetTheComponentsThatMatchGroupChildSnippets", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::VertexPaintColorSnippetRefs_eventCheckAndGetTheComponentsThatMatchGroupChildSnippets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::VertexPaintColorSnippetRefs_eventCheckAndGetTheComponentsThatMatchGroupChildSnippets_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics
	{
		struct VertexPaintColorSnippetRefs_eventContainsColorSnippet_Parms
		{
			FString snippetID;
			bool optionalHasToBeStoredInDataAsset;
			UVertexPaintColorSnippetDataAsset* dataAsset;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_snippetID;
		static void NewProp_optionalHasToBeStoredInDataAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_optionalHasToBeStoredInDataAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dataAsset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::NewProp_snippetID = { "snippetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintColorSnippetRefs_eventContainsColorSnippet_Parms, snippetID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::NewProp_optionalHasToBeStoredInDataAsset_SetBit(void* Obj)
	{
		((VertexPaintColorSnippetRefs_eventContainsColorSnippet_Parms*)Obj)->optionalHasToBeStoredInDataAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::NewProp_optionalHasToBeStoredInDataAsset = { "optionalHasToBeStoredInDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintColorSnippetRefs_eventContainsColorSnippet_Parms), &Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::NewProp_optionalHasToBeStoredInDataAsset_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::NewProp_dataAsset = { "dataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintColorSnippetRefs_eventContainsColorSnippet_Parms, dataAsset), Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VertexPaintColorSnippetRefs_eventContainsColorSnippet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintColorSnippetRefs_eventContainsColorSnippet_Parms), &Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::NewProp_snippetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::NewProp_optionalHasToBeStoredInDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::NewProp_dataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Color Snippets" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintColorSnippetRefs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintColorSnippetRefs, nullptr, "ContainsColorSnippet", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::VertexPaintColorSnippetRefs_eventContainsColorSnippet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::VertexPaintColorSnippetRefs_eventContainsColorSnippet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics
	{
		struct VertexPaintColorSnippetRefs_eventGetAllColorSnippetsAndDataAssetForObject_Parms
		{
			const UObject* object;
			TMap<FString,FVertexDetectStoredColorSnippetInfo> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_object;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::NewProp_object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::NewProp_object = { "object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintColorSnippetRefs_eventGetAllColorSnippetsAndDataAssetForObject_Parms, object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::NewProp_object_MetaData), Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::NewProp_object_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo, METADATA_PARAMS(0, nullptr) }; // 1190266067
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintColorSnippetRefs_eventGetAllColorSnippetsAndDataAssetForObject_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1190266067
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::NewProp_object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Color Snippets" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintColorSnippetRefs.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintColorSnippetRefs, nullptr, "GetAllColorSnippetsAndDataAssetForObject", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::VertexPaintColorSnippetRefs_eventGetAllColorSnippetsAndDataAssetForObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::VertexPaintColorSnippetRefs_eventGetAllColorSnippetsAndDataAssetForObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics
	{
		struct VertexPaintColorSnippetRefs_eventGetAllColorSnippetsInSpecifiedDataAsset_Parms
		{
			const UVertexPaintColorSnippetDataAsset* colorSnippetDataAsset;
			bool includeChildGroupSnippets;
			TMap<FString,FVertexDetectStoredColorSnippetInfo> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_colorSnippetDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_colorSnippetDataAsset;
		static void NewProp_includeChildGroupSnippets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_includeChildGroupSnippets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::NewProp_colorSnippetDataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::NewProp_colorSnippetDataAsset = { "colorSnippetDataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintColorSnippetRefs_eventGetAllColorSnippetsInSpecifiedDataAsset_Parms, colorSnippetDataAsset), Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::NewProp_colorSnippetDataAsset_MetaData), Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::NewProp_colorSnippetDataAsset_MetaData) };
	void Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::NewProp_includeChildGroupSnippets_SetBit(void* Obj)
	{
		((VertexPaintColorSnippetRefs_eventGetAllColorSnippetsInSpecifiedDataAsset_Parms*)Obj)->includeChildGroupSnippets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::NewProp_includeChildGroupSnippets = { "includeChildGroupSnippets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintColorSnippetRefs_eventGetAllColorSnippetsInSpecifiedDataAsset_Parms), &Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::NewProp_includeChildGroupSnippets_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo, METADATA_PARAMS(0, nullptr) }; // 1190266067
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintColorSnippetRefs_eventGetAllColorSnippetsInSpecifiedDataAsset_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1190266067
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::NewProp_colorSnippetDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::NewProp_includeChildGroupSnippets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Color Snippets" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintColorSnippetRefs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all registered color snippets in specified Data Asset. NOTE Intended for Editor Scripting, uses LoadSynchronous etc. so not recommended in runtime. Can optionally include all group snipepts as well, i.e. the one that gets appended with _0, _1 etc." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintColorSnippetRefs, nullptr, "GetAllColorSnippetsInSpecifiedDataAsset", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::VertexPaintColorSnippetRefs_eventGetAllColorSnippetsInSpecifiedDataAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::VertexPaintColorSnippetRefs_eventGetAllColorSnippetsInSpecifiedDataAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics
	{
		struct VertexPaintColorSnippetRefs_eventGetAllGroupSnippetsInSpecifiedDataAsset_Parms
		{
			const UVertexPaintColorSnippetDataAsset* colorSnippetDataAsset;
			TMap<FString,FVertexDetectGroupColorSnippetInfo> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_colorSnippetDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_colorSnippetDataAsset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics::NewProp_colorSnippetDataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics::NewProp_colorSnippetDataAsset = { "colorSnippetDataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintColorSnippetRefs_eventGetAllGroupSnippetsInSpecifiedDataAsset_Parms, colorSnippetDataAsset), Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics::NewProp_colorSnippetDataAsset_MetaData), Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics::NewProp_colorSnippetDataAsset_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo, METADATA_PARAMS(0, nullptr) }; // 4034582278
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintColorSnippetRefs_eventGetAllGroupSnippetsInSpecifiedDataAsset_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4034582278
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics::NewProp_colorSnippetDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Color Snippets" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintColorSnippetRefs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get All Group Snippet in the specific color snippet data asset." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintColorSnippetRefs, nullptr, "GetAllGroupSnippetsInSpecifiedDataAsset", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics::VertexPaintColorSnippetRefs_eventGetAllGroupSnippetsInSpecifiedDataAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics::VertexPaintColorSnippetRefs_eventGetAllGroupSnippetsInSpecifiedDataAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics
	{
		struct VertexPaintColorSnippetRefs_eventGetChildSnippetInfosAssociatedWithGroupSnippetID_Parms
		{
			const UObject* WorldContextObject;
			FString groupSnippetID;
			TMap<FString,FVertexDetectStoredColorSnippetInfo> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_groupSnippetID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintColorSnippetRefs_eventGetChildSnippetInfosAssociatedWithGroupSnippetID_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::NewProp_groupSnippetID = { "groupSnippetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintColorSnippetRefs_eventGetChildSnippetInfosAssociatedWithGroupSnippetID_Parms, groupSnippetID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo, METADATA_PARAMS(0, nullptr) }; // 1190266067
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintColorSnippetRefs_eventGetChildSnippetInfosAssociatedWithGroupSnippetID_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1190266067
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::NewProp_groupSnippetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Color Snippets" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintColorSnippetRefs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get all the Color Snippet Infos such as which data asset its stored at, relative location, dot product etc. for snippets belonging to a group." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintColorSnippetRefs, nullptr, "GetChildSnippetInfosAssociatedWithGroupSnippetID", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::VertexPaintColorSnippetRefs_eventGetChildSnippetInfosAssociatedWithGroupSnippetID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::VertexPaintColorSnippetRefs_eventGetChildSnippetInfosAssociatedWithGroupSnippetID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics
	{
		struct VertexPaintColorSnippetRefs_eventGetObjectFromSnippetID_Parms
		{
			FString snippetID;
			TSoftObjectPtr<UObject> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_snippetID;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::NewProp_snippetID = { "snippetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintColorSnippetRefs_eventGetObjectFromSnippetID_Parms, snippetID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintColorSnippetRefs_eventGetObjectFromSnippetID_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::NewProp_snippetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Color Snippets" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintColorSnippetRefs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintColorSnippetRefs, nullptr, "GetObjectFromSnippetID", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::VertexPaintColorSnippetRefs_eventGetObjectFromSnippetID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::VertexPaintColorSnippetRefs_eventGetObjectFromSnippetID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexPaintColorSnippetRefs);
	UClass* Z_Construct_UClass_UVertexPaintColorSnippetRefs_NoRegister()
	{
		return UVertexPaintColorSnippetRefs::StaticClass();
	}
	struct Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_staticMeshesColorSnippets_ValueProp;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_staticMeshesColorSnippets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staticMeshesColorSnippets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_staticMeshesColorSnippets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_skeletalMeshesColorSnippets_ValueProp;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_skeletalMeshesColorSnippets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshesColorSnippets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_skeletalMeshesColorSnippets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_groupSnippetsAndAssociatedMeshes_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_groupSnippetsAndAssociatedMeshes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_groupSnippetsAndAssociatedMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_groupSnippetsAndAssociatedMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_allAvailableColorSnippets_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_allAvailableColorSnippets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVertexPaintColorSnippetRefs_CheckAndGetTheComponentsThatMatchGroupChildSnippets, "CheckAndGetTheComponentsThatMatchGroupChildSnippets" }, // 3096245701
		{ &Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet, "ContainsColorSnippet" }, // 1775588554
		{ &Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject, "GetAllColorSnippetsAndDataAssetForObject" }, // 1380739996
		{ &Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsInSpecifiedDataAsset, "GetAllColorSnippetsInSpecifiedDataAsset" }, // 4048832960
		{ &Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllGroupSnippetsInSpecifiedDataAsset, "GetAllGroupSnippetsInSpecifiedDataAsset" }, // 694884009
		{ &Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetChildSnippetInfosAssociatedWithGroupSnippetID, "GetChildSnippetInfosAssociatedWithGroupSnippetID" }, // 1537412114
		{ &Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID, "GetObjectFromSnippetID" }, // 926890899
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DataAssets/VertexPaintColorSnippetRefs.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintColorSnippetRefs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_staticMeshesColorSnippets_ValueProp = { "staticMeshesColorSnippets", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct, METADATA_PARAMS(0, nullptr) }; // 62734311
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_staticMeshesColorSnippets_Key_KeyProp = { "staticMeshesColorSnippets_Key", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_staticMeshesColorSnippets_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Color Snippets" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintColorSnippetRefs.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_staticMeshesColorSnippets = { "staticMeshesColorSnippets", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintColorSnippetRefs, staticMeshesColorSnippets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_staticMeshesColorSnippets_MetaData), Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_staticMeshesColorSnippets_MetaData) }; // 62734311
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_skeletalMeshesColorSnippets_ValueProp = { "skeletalMeshesColorSnippets", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct, METADATA_PARAMS(0, nullptr) }; // 62734311
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_skeletalMeshesColorSnippets_Key_KeyProp = { "skeletalMeshesColorSnippets_Key", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_skeletalMeshesColorSnippets_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Color Snippets" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintColorSnippetRefs.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_skeletalMeshesColorSnippets = { "skeletalMeshesColorSnippets", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintColorSnippetRefs, skeletalMeshesColorSnippets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_skeletalMeshesColorSnippets_MetaData), Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_skeletalMeshesColorSnippets_MetaData) }; // 62734311
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_groupSnippetsAndAssociatedMeshes_ValueProp = { "groupSnippetsAndAssociatedMeshes", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo, METADATA_PARAMS(0, nullptr) }; // 4034582278
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_groupSnippetsAndAssociatedMeshes_Key_KeyProp = { "groupSnippetsAndAssociatedMeshes_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_groupSnippetsAndAssociatedMeshes_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Color Snippets" },
		{ "ModuleRelativePath", "DataAssets/VertexPaintColorSnippetRefs.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_groupSnippetsAndAssociatedMeshes = { "groupSnippetsAndAssociatedMeshes", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintColorSnippetRefs, groupSnippetsAndAssociatedMeshes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_groupSnippetsAndAssociatedMeshes_MetaData), Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_groupSnippetsAndAssociatedMeshes_MetaData) }; // 4034582278
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_allAvailableColorSnippets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*VisibleAnywhere*/" },
#endif
		{ "ModuleRelativePath", "DataAssets/VertexPaintColorSnippetRefs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VisibleAnywhere" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_allAvailableColorSnippets = { "allAvailableColorSnippets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintColorSnippetRefs, allAvailableColorSnippets), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_allAvailableColorSnippets_MetaData), Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_allAvailableColorSnippets_MetaData) }; // 405371792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_staticMeshesColorSnippets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_staticMeshesColorSnippets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_staticMeshesColorSnippets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_skeletalMeshesColorSnippets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_skeletalMeshesColorSnippets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_skeletalMeshesColorSnippets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_groupSnippetsAndAssociatedMeshes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_groupSnippetsAndAssociatedMeshes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_groupSnippetsAndAssociatedMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_allAvailableColorSnippets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexPaintColorSnippetRefs>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::ClassParams = {
		&UVertexPaintColorSnippetRefs::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::Class_MetaDataParams), Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVertexPaintColorSnippetRefs()
	{
		if (!Z_Registration_Info_UClass_UVertexPaintColorSnippetRefs.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexPaintColorSnippetRefs.OuterSingleton, Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexPaintColorSnippetRefs.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<UVertexPaintColorSnippetRefs>()
	{
		return UVertexPaintColorSnippetRefs::StaticClass();
	}
	UVertexPaintColorSnippetRefs::UVertexPaintColorSnippetRefs(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexPaintColorSnippetRefs);
	UVertexPaintColorSnippetRefs::~UVertexPaintColorSnippetRefs() {}
	struct Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintColorSnippetRefs_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintColorSnippetRefs_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexPaintColorSnippetRefs, UVertexPaintColorSnippetRefs::StaticClass, TEXT("UVertexPaintColorSnippetRefs"), &Z_Registration_Info_UClass_UVertexPaintColorSnippetRefs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexPaintColorSnippetRefs), 4013145079U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintColorSnippetRefs_h_1857097290(TEXT("/Script/VertexPaintDetectionPlugin"),
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintColorSnippetRefs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_DataAssets_VertexPaintColorSnippetRefs_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
