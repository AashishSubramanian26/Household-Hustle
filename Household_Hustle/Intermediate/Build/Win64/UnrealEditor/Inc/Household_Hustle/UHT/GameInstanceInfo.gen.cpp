// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Household_Hustle/Public/GameInstanceInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInstanceInfo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	HOUSEHOLD_HUSTLE_API UClass* Z_Construct_UClass_UGameInstanceInfo();
	HOUSEHOLD_HUSTLE_API UClass* Z_Construct_UClass_UGameInstanceInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Household_Hustle();
// End Cross Module References
	void UGameInstanceInfo::StaticRegisterNativesUGameInstanceInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameInstanceInfo);
	UClass* Z_Construct_UClass_UGameInstanceInfo_NoRegister()
	{
		return UGameInstanceInfo::StaticClass();
	}
	struct Z_Construct_UClass_UGameInstanceInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_day_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_day;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_allowance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_allowance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paused_MetaData[];
#endif
		static void NewProp_paused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_paused;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameInstanceInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Household_Hustle,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInstanceInfo_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameInstanceInfo.h" },
		{ "ModuleRelativePath", "Public/GameInstanceInfo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInstanceInfo_Statics::NewProp_day_MetaData[] = {
		{ "Category", "GameInstanceInfo" },
		{ "DisplayName", "Day" },
		{ "ModuleRelativePath", "Public/GameInstanceInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameInstanceInfo_Statics::NewProp_day = { "day", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameInstanceInfo, day), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceInfo_Statics::NewProp_day_MetaData), Z_Construct_UClass_UGameInstanceInfo_Statics::NewProp_day_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInstanceInfo_Statics::NewProp_allowance_MetaData[] = {
		{ "Category", "GameInstanceInfo" },
		{ "DisplayName", "Allowance" },
		{ "ModuleRelativePath", "Public/GameInstanceInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameInstanceInfo_Statics::NewProp_allowance = { "allowance", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameInstanceInfo, allowance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceInfo_Statics::NewProp_allowance_MetaData), Z_Construct_UClass_UGameInstanceInfo_Statics::NewProp_allowance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInstanceInfo_Statics::NewProp_paused_MetaData[] = {
		{ "Category", "GameInstanceInfo" },
		{ "DisplayName", "Paused?" },
		{ "ModuleRelativePath", "Public/GameInstanceInfo.h" },
	};
#endif
	void Z_Construct_UClass_UGameInstanceInfo_Statics::NewProp_paused_SetBit(void* Obj)
	{
		((UGameInstanceInfo*)Obj)->paused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameInstanceInfo_Statics::NewProp_paused = { "paused", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameInstanceInfo), &Z_Construct_UClass_UGameInstanceInfo_Statics::NewProp_paused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceInfo_Statics::NewProp_paused_MetaData), Z_Construct_UClass_UGameInstanceInfo_Statics::NewProp_paused_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameInstanceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstanceInfo_Statics::NewProp_day,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstanceInfo_Statics::NewProp_allowance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstanceInfo_Statics::NewProp_paused,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameInstanceInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameInstanceInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameInstanceInfo_Statics::ClassParams = {
		&UGameInstanceInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameInstanceInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceInfo_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameInstanceInfo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceInfo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGameInstanceInfo()
	{
		if (!Z_Registration_Info_UClass_UGameInstanceInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameInstanceInfo.OuterSingleton, Z_Construct_UClass_UGameInstanceInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameInstanceInfo.OuterSingleton;
	}
	template<> HOUSEHOLD_HUSTLE_API UClass* StaticClass<UGameInstanceInfo>()
	{
		return UGameInstanceInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInstanceInfo);
	UGameInstanceInfo::~UGameInstanceInfo() {}
	struct Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Source_Household_Hustle_Public_GameInstanceInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Source_Household_Hustle_Public_GameInstanceInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameInstanceInfo, UGameInstanceInfo::StaticClass, TEXT("UGameInstanceInfo"), &Z_Registration_Info_UClass_UGameInstanceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameInstanceInfo), 294701284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Source_Household_Hustle_Public_GameInstanceInfo_h_3336065321(TEXT("/Script/Household_Hustle"),
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Source_Household_Hustle_Public_GameInstanceInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Source_Household_Hustle_Public_GameInstanceInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
