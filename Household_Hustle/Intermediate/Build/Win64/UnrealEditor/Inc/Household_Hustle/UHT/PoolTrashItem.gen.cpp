// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Household_Hustle/Public/PoolTrashItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoolTrashItem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	HOUSEHOLD_HUSTLE_API UClass* Z_Construct_UClass_APoolTrashItem();
	HOUSEHOLD_HUSTLE_API UClass* Z_Construct_UClass_APoolTrashItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Household_Hustle();
// End Cross Module References
	void APoolTrashItem::StaticRegisterNativesAPoolTrashItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APoolTrashItem);
	UClass* Z_Construct_UClass_APoolTrashItem_NoRegister()
	{
		return APoolTrashItem::StaticClass();
	}
	struct Z_Construct_UClass_APoolTrashItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APoolTrashItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Household_Hustle,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APoolTrashItem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoolTrashItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoolTrashItem.h" },
		{ "ModuleRelativePath", "Public/PoolTrashItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APoolTrashItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APoolTrashItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APoolTrashItem_Statics::ClassParams = {
		&APoolTrashItem::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APoolTrashItem_Statics::Class_MetaDataParams), Z_Construct_UClass_APoolTrashItem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APoolTrashItem()
	{
		if (!Z_Registration_Info_UClass_APoolTrashItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APoolTrashItem.OuterSingleton, Z_Construct_UClass_APoolTrashItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APoolTrashItem.OuterSingleton;
	}
	template<> HOUSEHOLD_HUSTLE_API UClass* StaticClass<APoolTrashItem>()
	{
		return APoolTrashItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APoolTrashItem);
	APoolTrashItem::~APoolTrashItem() {}
	struct Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Source_Household_Hustle_Public_PoolTrashItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Source_Household_Hustle_Public_PoolTrashItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APoolTrashItem, APoolTrashItem::StaticClass, TEXT("APoolTrashItem"), &Z_Registration_Info_UClass_APoolTrashItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APoolTrashItem), 1993829627U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Source_Household_Hustle_Public_PoolTrashItem_h_2844695933(TEXT("/Script/Household_Hustle"),
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Source_Household_Hustle_Public_PoolTrashItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Source_Household_Hustle_Public_PoolTrashItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
