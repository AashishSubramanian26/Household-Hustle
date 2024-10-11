// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Household_Hustle/Public/PoolWater.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoolWater() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	HOUSEHOLD_HUSTLE_API UClass* Z_Construct_UClass_APoolWater();
	HOUSEHOLD_HUSTLE_API UClass* Z_Construct_UClass_APoolWater_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Household_Hustle();
// End Cross Module References
	void APoolWater::StaticRegisterNativesAPoolWater()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APoolWater);
	UClass* Z_Construct_UClass_APoolWater_NoRegister()
	{
		return APoolWater::StaticClass();
	}
	struct Z_Construct_UClass_APoolWater_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_trashActorArr_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trashActorArr_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_trashActorArr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trashCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_trashCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_poolBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_poolBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APoolWater_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Household_Hustle,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APoolWater_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoolWater_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoolWater.h" },
		{ "ModuleRelativePath", "Public/PoolWater.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APoolWater_Statics::NewProp_trashActorArr_Inner = { "trashActorArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoolWater_Statics::NewProp_trashActorArr_MetaData[] = {
		{ "Category", "PoolWater" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array of trash items in the water\n" },
#endif
		{ "DisplayName", "TrashArray" },
		{ "ModuleRelativePath", "Public/PoolWater.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of trash items in the water" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APoolWater_Statics::NewProp_trashActorArr = { "trashActorArr", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APoolWater, trashActorArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APoolWater_Statics::NewProp_trashActorArr_MetaData), Z_Construct_UClass_APoolWater_Statics::NewProp_trashActorArr_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoolWater_Statics::NewProp_trashCount_MetaData[] = {
		{ "Category", "PoolWater" },
		{ "DisplayName", "TrashCount" },
		{ "ModuleRelativePath", "Public/PoolWater.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APoolWater_Statics::NewProp_trashCount = { "trashCount", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APoolWater, trashCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APoolWater_Statics::NewProp_trashCount_MetaData), Z_Construct_UClass_APoolWater_Statics::NewProp_trashCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoolWater_Statics::NewProp_poolBox_MetaData[] = {
		{ "Category", "PoolWater" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PoolWater.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APoolWater_Statics::NewProp_poolBox = { "poolBox", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APoolWater, poolBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APoolWater_Statics::NewProp_poolBox_MetaData), Z_Construct_UClass_APoolWater_Statics::NewProp_poolBox_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APoolWater_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoolWater_Statics::NewProp_trashActorArr_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoolWater_Statics::NewProp_trashActorArr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoolWater_Statics::NewProp_trashCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoolWater_Statics::NewProp_poolBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APoolWater_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APoolWater>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APoolWater_Statics::ClassParams = {
		&APoolWater::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APoolWater_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APoolWater_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APoolWater_Statics::Class_MetaDataParams), Z_Construct_UClass_APoolWater_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APoolWater_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APoolWater()
	{
		if (!Z_Registration_Info_UClass_APoolWater.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APoolWater.OuterSingleton, Z_Construct_UClass_APoolWater_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APoolWater.OuterSingleton;
	}
	template<> HOUSEHOLD_HUSTLE_API UClass* StaticClass<APoolWater>()
	{
		return APoolWater::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APoolWater);
	APoolWater::~APoolWater() {}
	struct Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Source_Household_Hustle_Public_PoolWater_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Source_Household_Hustle_Public_PoolWater_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APoolWater, APoolWater::StaticClass, TEXT("APoolWater"), &Z_Registration_Info_UClass_APoolWater, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APoolWater), 3550275573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Source_Household_Hustle_Public_PoolWater_h_3323555385(TEXT("/Script/Household_Hustle"),
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Source_Household_Hustle_Public_PoolWater_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Source_Household_Hustle_Public_PoolWater_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
