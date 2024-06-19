// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Utility/VertexPaintDetectionLog.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexPaintDetectionLog() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintDebugSettings();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintTaskSpecificDebugSymbolsSettings;
class UScriptStruct* FVertexPaintTaskSpecificDebugSymbolsSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintTaskSpecificDebugSymbolsSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintTaskSpecificDebugSymbolsSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintTaskSpecificDebugSymbolsSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintTaskSpecificDebugSymbolsSettings.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintTaskSpecificDebugSymbolsSettings>()
{
	return FVertexPaintTaskSpecificDebugSymbolsSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_drawTaskDebugSymbols_MetaData[];
#endif
		static void NewProp_drawTaskDebugSymbols_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_drawTaskDebugSymbols;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_drawTaskDebugSymbolsDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_drawTaskDebugSymbolsDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Task Specific Debug Symbols Settings\n" },
#endif
		{ "ModuleRelativePath", "Utility/VertexPaintDetectionLog.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Task Specific Debug Symbols Settings" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintTaskSpecificDebugSymbolsSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::NewProp_drawTaskDebugSymbols_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Debug Settings|Paint Within Area Symbols" },
		{ "ModuleRelativePath", "Utility/VertexPaintDetectionLog.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will Draw any Debug Symbols Related to the Task being done, for example the Bounds that we use if it's a Paint Within Area Task." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::NewProp_drawTaskDebugSymbols_SetBit(void* Obj)
	{
		((FVertexPaintTaskSpecificDebugSymbolsSettings*)Obj)->drawTaskDebugSymbols = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::NewProp_drawTaskDebugSymbols = { "drawTaskDebugSymbols", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPaintTaskSpecificDebugSymbolsSettings), &Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::NewProp_drawTaskDebugSymbols_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::NewProp_drawTaskDebugSymbols_MetaData), Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::NewProp_drawTaskDebugSymbols_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::NewProp_drawTaskDebugSymbolsDuration_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Debug Settings|Paint Within Area Symbols" },
		{ "ModuleRelativePath", "Utility/VertexPaintDetectionLog.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::NewProp_drawTaskDebugSymbolsDuration = { "drawTaskDebugSymbolsDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintTaskSpecificDebugSymbolsSettings, drawTaskDebugSymbolsDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::NewProp_drawTaskDebugSymbolsDuration_MetaData), Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::NewProp_drawTaskDebugSymbolsDuration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::NewProp_drawTaskDebugSymbols,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::NewProp_drawTaskDebugSymbolsDuration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexPaintTaskSpecificDebugSymbolsSettings",
		Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::PropPointers),
		sizeof(FVertexPaintTaskSpecificDebugSymbolsSettings),
		alignof(FVertexPaintTaskSpecificDebugSymbolsSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintTaskSpecificDebugSymbolsSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintTaskSpecificDebugSymbolsSettings.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintTaskSpecificDebugSymbolsSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintGameThreadSpecificDebugSettings;
class UScriptStruct* FVertexPaintGameThreadSpecificDebugSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintGameThreadSpecificDebugSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintGameThreadSpecificDebugSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintGameThreadSpecificDebugSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintGameThreadSpecificDebugSettings.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintGameThreadSpecificDebugSettings>()
{
	return FVertexPaintGameThreadSpecificDebugSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_drawVertexPositionDebugPoint_MetaData[];
#endif
		static void NewProp_drawVertexPositionDebugPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_drawVertexPositionDebugPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_drawVertexPositionDebugPointIfGotPaintApplied_MetaData[];
#endif
		static void NewProp_drawVertexPositionDebugPointIfGotPaintApplied_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_drawVertexPositionDebugPointIfGotPaintApplied;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_drawClothVertexPositionDebugPoint_MetaData[];
#endif
		static void NewProp_drawClothVertexPositionDebugPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_drawClothVertexPositionDebugPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_drawVertexNormalDebugArrow_MetaData[];
#endif
		static void NewProp_drawVertexNormalDebugArrow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_drawVertexNormalDebugArrow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_drawPaintConditionsDebugSymbols_MetaData[];
#endif
		static void NewProp_drawPaintConditionsDebugSymbols_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_drawPaintConditionsDebugSymbols;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_drawGameThreadSpecificDebugSymbolsDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_drawGameThreadSpecificDebugSymbolsDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Game Thread Specific Debug Settings\n" },
#endif
		{ "ModuleRelativePath", "Utility/VertexPaintDetectionLog.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game Thread Specific Debug Settings" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintGameThreadSpecificDebugSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawVertexPositionDebugPoint_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Debug Settings|Vertex Symbols" },
		{ "ModuleRelativePath", "Utility/VertexPaintDetectionLog.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draws a Debug Point for Each Vertex of the Mesh. \nNOTE! Only possible if running the Paint Job with Multithreading set to False, and can be quite expensive if the Mesh has a lot of Vertices." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawVertexPositionDebugPoint_SetBit(void* Obj)
	{
		((FVertexPaintGameThreadSpecificDebugSettings*)Obj)->drawVertexPositionDebugPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawVertexPositionDebugPoint = { "drawVertexPositionDebugPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPaintGameThreadSpecificDebugSettings), &Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawVertexPositionDebugPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawVertexPositionDebugPoint_MetaData), Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawVertexPositionDebugPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawVertexPositionDebugPointIfGotPaintApplied_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Debug Settings|Vertex Symbols" },
		{ "ModuleRelativePath", "Utility/VertexPaintDetectionLog.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draws a Debug Point for the Vertex of the Mesh that got paint applied. \nNOTE! Only possible if running the Paint Job with Multithreading set to False, and can be quite expensive if the Mesh has a lot of Vertices." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawVertexPositionDebugPointIfGotPaintApplied_SetBit(void* Obj)
	{
		((FVertexPaintGameThreadSpecificDebugSettings*)Obj)->drawVertexPositionDebugPointIfGotPaintApplied = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawVertexPositionDebugPointIfGotPaintApplied = { "drawVertexPositionDebugPointIfGotPaintApplied", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPaintGameThreadSpecificDebugSettings), &Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawVertexPositionDebugPointIfGotPaintApplied_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawVertexPositionDebugPointIfGotPaintApplied_MetaData), Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawVertexPositionDebugPointIfGotPaintApplied_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawClothVertexPositionDebugPoint_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Debug Settings|Vertex Symbols" },
		{ "ModuleRelativePath", "Utility/VertexPaintDetectionLog.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draws a Debug Point for Each Vertex of Cloths of the Mesh we're looping through. \nNOTE! Only possible if running the Paint Job with Multithreading set to False, and can be quite expensive if the Cloth has a lot of Vertices." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawClothVertexPositionDebugPoint_SetBit(void* Obj)
	{
		((FVertexPaintGameThreadSpecificDebugSettings*)Obj)->drawClothVertexPositionDebugPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawClothVertexPositionDebugPoint = { "drawClothVertexPositionDebugPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPaintGameThreadSpecificDebugSettings), &Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawClothVertexPositionDebugPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawClothVertexPositionDebugPoint_MetaData), Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawClothVertexPositionDebugPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawVertexNormalDebugArrow_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Debug Settings|Vertex Symbols" },
		{ "ModuleRelativePath", "Utility/VertexPaintDetectionLog.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draws a Debug Arrow for each Vertex Normal. \nNOTE! Only possible if running the Paint Job with Multithreading set to False, and can be quite expensive if the Mesh has a lot of Vertices." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawVertexNormalDebugArrow_SetBit(void* Obj)
	{
		((FVertexPaintGameThreadSpecificDebugSettings*)Obj)->drawVertexNormalDebugArrow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawVertexNormalDebugArrow = { "drawVertexNormalDebugArrow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPaintGameThreadSpecificDebugSettings), &Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawVertexNormalDebugArrow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawVertexNormalDebugArrow_MetaData), Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawVertexNormalDebugArrow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawPaintConditionsDebugSymbols_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Debug Settings|Paint Condition Symbols" },
		{ "ModuleRelativePath", "Utility/VertexPaintDetectionLog.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will draw any debug symbols for paint conditions used, if the paint condition has any. For instance Line of Sight Condition will draw a Line to indicate if it has line of sight or if blocked etc. \nNOTE! Only possible if running the Paint Job with Multithreading set to False, and can be quite expensive if the Mesh has a lot of Vertices." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawPaintConditionsDebugSymbols_SetBit(void* Obj)
	{
		((FVertexPaintGameThreadSpecificDebugSettings*)Obj)->drawPaintConditionsDebugSymbols = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawPaintConditionsDebugSymbols = { "drawPaintConditionsDebugSymbols", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPaintGameThreadSpecificDebugSettings), &Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawPaintConditionsDebugSymbols_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawPaintConditionsDebugSymbols_MetaData), Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawPaintConditionsDebugSymbols_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawGameThreadSpecificDebugSymbolsDuration_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Debug Settings|Vertex Symbols" },
		{ "ModuleRelativePath", "Utility/VertexPaintDetectionLog.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Duration of the Drawn Vertex Points. Can be very low if you're painting every frame." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawGameThreadSpecificDebugSymbolsDuration = { "drawGameThreadSpecificDebugSymbolsDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintGameThreadSpecificDebugSettings, drawGameThreadSpecificDebugSymbolsDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawGameThreadSpecificDebugSymbolsDuration_MetaData), Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawGameThreadSpecificDebugSymbolsDuration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawVertexPositionDebugPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawVertexPositionDebugPointIfGotPaintApplied,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawClothVertexPositionDebugPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawVertexNormalDebugArrow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawPaintConditionsDebugSymbols,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewProp_drawGameThreadSpecificDebugSymbolsDuration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexPaintGameThreadSpecificDebugSettings",
		Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::PropPointers),
		sizeof(FVertexPaintGameThreadSpecificDebugSettings),
		alignof(FVertexPaintGameThreadSpecificDebugSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintGameThreadSpecificDebugSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintGameThreadSpecificDebugSettings.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintGameThreadSpecificDebugSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintDebugSettings;
class UScriptStruct* FVertexPaintDebugSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintDebugSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintDebugSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintDebugSettings, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintDebugSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintDebugSettings.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintDebugSettings>()
{
	return FVertexPaintDebugSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_worldTaskWasCreatedIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_worldTaskWasCreatedIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_printLogsToScreen_MetaData[];
#endif
		static void NewProp_printLogsToScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_printLogsToScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_printLogsToScreen_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_printLogsToScreen_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_printLogsToOutputLog_MetaData[];
#endif
		static void NewProp_printLogsToOutputLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_printLogsToOutputLog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gameThreadSpecificDebugSymbols_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_gameThreadSpecificDebugSymbols;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_taskSpecificDebugSymbols_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_taskSpecificDebugSymbols;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Debug Settings\n" },
#endif
		{ "ModuleRelativePath", "Utility/VertexPaintDetectionLog.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug Settings" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintDebugSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_worldTaskWasCreatedIn_MetaData[] = {
		{ "ModuleRelativePath", "Utility/VertexPaintDetectionLog.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_worldTaskWasCreatedIn = { "worldTaskWasCreatedIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintDebugSettings, worldTaskWasCreatedIn), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_worldTaskWasCreatedIn_MetaData), Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_worldTaskWasCreatedIn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_printLogsToScreen_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Debug Settings|Logs" },
		{ "ModuleRelativePath", "Utility/VertexPaintDetectionLog.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If should print logs to screen." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_printLogsToScreen_SetBit(void* Obj)
	{
		((FVertexPaintDebugSettings*)Obj)->printLogsToScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_printLogsToScreen = { "printLogsToScreen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPaintDebugSettings), &Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_printLogsToScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_printLogsToScreen_MetaData), Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_printLogsToScreen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_printLogsToScreen_Duration_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Debug Settings|Logs" },
		{ "ModuleRelativePath", "Utility/VertexPaintDetectionLog.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Duration of the Print Strings on the Screen" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_printLogsToScreen_Duration = { "printLogsToScreen_Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintDebugSettings, printLogsToScreen_Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_printLogsToScreen_Duration_MetaData), Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_printLogsToScreen_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_printLogsToOutputLog_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Debug Settings|Logs" },
		{ "ModuleRelativePath", "Utility/VertexPaintDetectionLog.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If should print logs to output log." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_printLogsToOutputLog_SetBit(void* Obj)
	{
		((FVertexPaintDebugSettings*)Obj)->printLogsToOutputLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_printLogsToOutputLog = { "printLogsToOutputLog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPaintDebugSettings), &Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_printLogsToOutputLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_printLogsToOutputLog_MetaData), Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_printLogsToOutputLog_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_gameThreadSpecificDebugSymbols_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Debug Settings|Vertex Symbols" },
		{ "ModuleRelativePath", "Utility/VertexPaintDetectionLog.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Has options for drawing debug symbols for each vertex and paint conditions. Will only be visible if the task is run on the Game Thread, i.e. Multithreading set to false." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_gameThreadSpecificDebugSymbols = { "gameThreadSpecificDebugSymbols", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintDebugSettings, gameThreadSpecificDebugSymbols), Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_gameThreadSpecificDebugSymbols_MetaData), Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_gameThreadSpecificDebugSymbols_MetaData) }; // 1408775368
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_taskSpecificDebugSymbols_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Debug Settings|Paint Within Area Symbols" },
		{ "ModuleRelativePath", "Utility/VertexPaintDetectionLog.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will Draw any Debug Symbols Related to the Task being done, for example the Bounds that we use if it's a Paint Within Area Task." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_taskSpecificDebugSymbols = { "taskSpecificDebugSymbols", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintDebugSettings, taskSpecificDebugSymbols), Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_taskSpecificDebugSymbols_MetaData), Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_taskSpecificDebugSymbols_MetaData) }; // 2060492001
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_worldTaskWasCreatedIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_printLogsToScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_printLogsToScreen_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_printLogsToOutputLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_gameThreadSpecificDebugSymbols,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewProp_taskSpecificDebugSymbols,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexPaintDebugSettings",
		Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::PropPointers),
		sizeof(FVertexPaintDebugSettings),
		alignof(FVertexPaintDebugSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintDebugSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintDebugSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintDebugSettings.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintDebugSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Utility_VertexPaintDetectionLog_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Utility_VertexPaintDetectionLog_h_Statics::ScriptStructInfo[] = {
		{ FVertexPaintTaskSpecificDebugSymbolsSettings::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintTaskSpecificDebugSymbolsSettings_Statics::NewStructOps, TEXT("VertexPaintTaskSpecificDebugSymbolsSettings"), &Z_Registration_Info_UScriptStruct_VertexPaintTaskSpecificDebugSymbolsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintTaskSpecificDebugSymbolsSettings), 2060492001U) },
		{ FVertexPaintGameThreadSpecificDebugSettings::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintGameThreadSpecificDebugSettings_Statics::NewStructOps, TEXT("VertexPaintGameThreadSpecificDebugSettings"), &Z_Registration_Info_UScriptStruct_VertexPaintGameThreadSpecificDebugSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintGameThreadSpecificDebugSettings), 1408775368U) },
		{ FVertexPaintDebugSettings::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintDebugSettings_Statics::NewStructOps, TEXT("VertexPaintDebugSettings"), &Z_Registration_Info_UScriptStruct_VertexPaintDebugSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintDebugSettings), 1082315985U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Utility_VertexPaintDetectionLog_h_1423806428(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Utility_VertexPaintDetectionLog_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Utility_VertexPaintDetectionLog_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
