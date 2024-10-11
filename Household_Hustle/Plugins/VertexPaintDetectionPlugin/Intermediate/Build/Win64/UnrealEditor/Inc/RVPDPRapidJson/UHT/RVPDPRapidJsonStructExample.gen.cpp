// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../RVPDPRapidJsonStructExample.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRVPDPRapidJsonStructExample() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	RVPDPRAPIDJSON_API UClass* Z_Construct_UClass_ARVPDPRapidJsonStructExample();
	RVPDPRAPIDJSON_API UClass* Z_Construct_UClass_ARVPDPRapidJsonStructExample_NoRegister();
	RVPDPRAPIDJSON_API UScriptStruct* Z_Construct_UScriptStruct_FRVPDPRapidJsonCustomStructSerialization();
	RVPDPRAPIDJSON_API UScriptStruct* Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample();
	UPackage* Z_Construct_UPackage__Script_RVPDPRapidJson();
// End Cross Module References

static_assert(std::is_polymorphic<FRVPDPRapidJsonMyCustomStructSerializationExample>() == std::is_polymorphic<FRVPDPRapidJsonCustomStructSerialization>(), "USTRUCT FRVPDPRapidJsonMyCustomStructSerializationExample cannot be polymorphic unless super FRVPDPRapidJsonCustomStructSerialization is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RVPDPRapidJsonMyCustomStructSerializationExample;
class UScriptStruct* FRVPDPRapidJsonMyCustomStructSerializationExample::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RVPDPRapidJsonMyCustomStructSerializationExample.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RVPDPRapidJsonMyCustomStructSerializationExample.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample, (UObject*)Z_Construct_UPackage__Script_RVPDPRapidJson(), TEXT("RVPDPRapidJsonMyCustomStructSerializationExample"));
	}
	return Z_Registration_Info_UScriptStruct_RVPDPRapidJsonMyCustomStructSerializationExample.OuterSingleton;
}
template<> RVPDPRAPIDJSON_API UScriptStruct* StaticStruct<FRVPDPRapidJsonMyCustomStructSerializationExample>()
{
	return FRVPDPRapidJsonMyCustomStructSerializationExample::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Age_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Age;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "RVPDPRapidJsonStructExample.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRVPDPRapidJsonMyCustomStructSerializationExample>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Custom Struct Serialization Example" },
		{ "ModuleRelativePath", "RVPDPRapidJsonStructExample.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRVPDPRapidJsonMyCustomStructSerializationExample, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample_Statics::NewProp_Age_MetaData[] = {
		{ "Category", "Custom Struct Serialization Example" },
		{ "ModuleRelativePath", "RVPDPRapidJsonStructExample.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample_Statics::NewProp_Age = { "Age", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRVPDPRapidJsonMyCustomStructSerializationExample, Age), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample_Statics::NewProp_Age_MetaData), Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample_Statics::NewProp_Age_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample_Statics::NewProp_Age,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RVPDPRapidJson,
		Z_Construct_UScriptStruct_FRVPDPRapidJsonCustomStructSerialization,
		&NewStructOps,
		"RVPDPRapidJsonMyCustomStructSerializationExample",
		Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample_Statics::PropPointers),
		sizeof(FRVPDPRapidJsonMyCustomStructSerializationExample),
		alignof(FRVPDPRapidJsonMyCustomStructSerializationExample),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample()
	{
		if (!Z_Registration_Info_UScriptStruct_RVPDPRapidJsonMyCustomStructSerializationExample.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RVPDPRapidJsonMyCustomStructSerializationExample.InnerSingleton, Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RVPDPRapidJsonMyCustomStructSerializationExample.InnerSingleton;
	}
	void ARVPDPRapidJsonStructExample::StaticRegisterNativesARVPDPRapidJsonStructExample()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARVPDPRapidJsonStructExample);
	UClass* Z_Construct_UClass_ARVPDPRapidJsonStructExample_NoRegister()
	{
		return ARVPDPRapidJsonStructExample::StaticClass();
	}
	struct Z_Construct_UClass_ARVPDPRapidJsonStructExample_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARVPDPRapidJsonStructExample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RVPDPRapidJson,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARVPDPRapidJsonStructExample_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARVPDPRapidJsonStructExample_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RVPDPRapidJsonStructExample.h" },
		{ "ModuleRelativePath", "RVPDPRapidJsonStructExample.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARVPDPRapidJsonStructExample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARVPDPRapidJsonStructExample>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARVPDPRapidJsonStructExample_Statics::ClassParams = {
		&ARVPDPRapidJsonStructExample::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARVPDPRapidJsonStructExample_Statics::Class_MetaDataParams), Z_Construct_UClass_ARVPDPRapidJsonStructExample_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARVPDPRapidJsonStructExample()
	{
		if (!Z_Registration_Info_UClass_ARVPDPRapidJsonStructExample.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARVPDPRapidJsonStructExample.OuterSingleton, Z_Construct_UClass_ARVPDPRapidJsonStructExample_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARVPDPRapidJsonStructExample.OuterSingleton;
	}
	template<> RVPDPRAPIDJSON_API UClass* StaticClass<ARVPDPRapidJsonStructExample>()
	{
		return ARVPDPRapidJsonStructExample::StaticClass();
	}
	ARVPDPRapidJsonStructExample::ARVPDPRapidJsonStructExample(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARVPDPRapidJsonStructExample);
	ARVPDPRapidJsonStructExample::~ARVPDPRapidJsonStructExample() {}
	struct Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_RVPDPRapidJson_RVPDPRapidJsonStructExample_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_RVPDPRapidJson_RVPDPRapidJsonStructExample_h_Statics::ScriptStructInfo[] = {
		{ FRVPDPRapidJsonMyCustomStructSerializationExample::StaticStruct, Z_Construct_UScriptStruct_FRVPDPRapidJsonMyCustomStructSerializationExample_Statics::NewStructOps, TEXT("RVPDPRapidJsonMyCustomStructSerializationExample"), &Z_Registration_Info_UScriptStruct_RVPDPRapidJsonMyCustomStructSerializationExample, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRVPDPRapidJsonMyCustomStructSerializationExample), 2509765290U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_RVPDPRapidJson_RVPDPRapidJsonStructExample_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARVPDPRapidJsonStructExample, ARVPDPRapidJsonStructExample::StaticClass, TEXT("ARVPDPRapidJsonStructExample"), &Z_Registration_Info_UClass_ARVPDPRapidJsonStructExample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARVPDPRapidJsonStructExample), 3751919158U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_RVPDPRapidJson_RVPDPRapidJsonStructExample_h_954305079(TEXT("/Script/RVPDPRapidJson"),
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_RVPDPRapidJson_RVPDPRapidJsonStructExample_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_RVPDPRapidJson_RVPDPRapidJsonStructExample_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_RVPDPRapidJson_RVPDPRapidJsonStructExample_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_RVPDPRapidJson_RVPDPRapidJsonStructExample_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
