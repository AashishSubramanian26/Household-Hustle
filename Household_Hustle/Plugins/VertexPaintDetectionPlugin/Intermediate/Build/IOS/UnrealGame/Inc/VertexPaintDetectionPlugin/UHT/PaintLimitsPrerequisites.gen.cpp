// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/PaintLimitsPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaintLimitsPrerequisites() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintingLimitPhysicsSurface();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintingLimitStruct();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintingLimitStruct;
class UScriptStruct* FVertexPaintingLimitStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintingLimitStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintingLimitStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintingLimitStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintingLimitStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintingLimitStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintingLimitStruct>()
{
	return FVertexPaintingLimitStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_usePaintLimits_MetaData[];
#endif
		static void NewProp_usePaintLimits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_usePaintLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_limitColorIfTheColorWasAlreadyOverTheLimit_MetaData[];
#endif
		static void NewProp_limitColorIfTheColorWasAlreadyOverTheLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_limitColorIfTheColorWasAlreadyOverTheLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Vertex Paint On Mesh Limits\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintLimitsPrerequisites.h" },
		{ "ToolTip", "Vertex Paint On Mesh Limits" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintingLimitStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::NewProp_usePaintLimits_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintLimitsPrerequisites.h" },
		{ "ToolTip", "Paint Limits are useful if you have something like light Rain that should be able to make characters completely drenched but only a bit wet. Then you can use this to limit how much the Rain can paint on whatever Channel." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::NewProp_usePaintLimits_SetBit(void* Obj)
	{
		((FVertexPaintingLimitStruct*)Obj)->usePaintLimits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::NewProp_usePaintLimits = { "usePaintLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPaintingLimitStruct), &Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::NewProp_usePaintLimits_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::NewProp_usePaintLimits_MetaData), Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::NewProp_usePaintLimits_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::NewProp_limitColorIfTheColorWasAlreadyOverTheLimit_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintLimitsPrerequisites.h" },
		{ "ToolTip", "If the Color was already over the limit before we Applied any, then should we clamp that color or not. Should be false if you for instance have a water drop that paints with limit of 0.75, that goes over an already fully watered surface, then the drop shouldn't change and make the surface has less water." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::NewProp_limitColorIfTheColorWasAlreadyOverTheLimit_SetBit(void* Obj)
	{
		((FVertexPaintingLimitStruct*)Obj)->limitColorIfTheColorWasAlreadyOverTheLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::NewProp_limitColorIfTheColorWasAlreadyOverTheLimit = { "limitColorIfTheColorWasAlreadyOverTheLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPaintingLimitStruct), &Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::NewProp_limitColorIfTheColorWasAlreadyOverTheLimit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::NewProp_limitColorIfTheColorWasAlreadyOverTheLimit_MetaData), Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::NewProp_limitColorIfTheColorWasAlreadyOverTheLimit_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::NewProp_usePaintLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::NewProp_limitColorIfTheColorWasAlreadyOverTheLimit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexPaintingLimitStruct",
		Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::PropPointers),
		sizeof(FVertexPaintingLimitStruct),
		alignof(FVertexPaintingLimitStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintingLimitStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintingLimitStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintingLimitStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintingLimitStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVertexPaintingLimitRGBA>() == std::is_polymorphic<FVertexPaintingLimitStruct>(), "USTRUCT FVertexPaintingLimitRGBA cannot be polymorphic unless super FVertexPaintingLimitStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintingLimitRGBA;
class UScriptStruct* FVertexPaintingLimitRGBA::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintingLimitRGBA.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintingLimitRGBA.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintingLimitRGBA"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintingLimitRGBA.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintingLimitRGBA>()
{
	return FVertexPaintingLimitRGBA::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintLimitOnRedChannel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_paintLimitOnRedChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintLimitOnGreenChannel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_paintLimitOnGreenChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintLimitOnBlueChannel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_paintLimitOnBlueChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintLimitOnAlphaChannel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_paintLimitOnAlphaChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Vertex Paint On Mesh Limits - RGBA\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintLimitsPrerequisites.h" },
		{ "ToolTip", "Vertex Paint On Mesh Limits - RGBA" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintingLimitRGBA>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::NewProp_paintLimitOnRedChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintLimitsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::NewProp_paintLimitOnRedChannel = { "paintLimitOnRedChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintingLimitRGBA, paintLimitOnRedChannel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::NewProp_paintLimitOnRedChannel_MetaData), Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::NewProp_paintLimitOnRedChannel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::NewProp_paintLimitOnGreenChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintLimitsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::NewProp_paintLimitOnGreenChannel = { "paintLimitOnGreenChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintingLimitRGBA, paintLimitOnGreenChannel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::NewProp_paintLimitOnGreenChannel_MetaData), Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::NewProp_paintLimitOnGreenChannel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::NewProp_paintLimitOnBlueChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintLimitsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::NewProp_paintLimitOnBlueChannel = { "paintLimitOnBlueChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintingLimitRGBA, paintLimitOnBlueChannel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::NewProp_paintLimitOnBlueChannel_MetaData), Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::NewProp_paintLimitOnBlueChannel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::NewProp_paintLimitOnAlphaChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintLimitsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::NewProp_paintLimitOnAlphaChannel = { "paintLimitOnAlphaChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintingLimitRGBA, paintLimitOnAlphaChannel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::NewProp_paintLimitOnAlphaChannel_MetaData), Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::NewProp_paintLimitOnAlphaChannel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::NewProp_paintLimitOnRedChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::NewProp_paintLimitOnGreenChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::NewProp_paintLimitOnBlueChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::NewProp_paintLimitOnAlphaChannel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexPaintingLimitStruct,
		&NewStructOps,
		"VertexPaintingLimitRGBA",
		Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::PropPointers),
		sizeof(FVertexPaintingLimitRGBA),
		alignof(FVertexPaintingLimitRGBA),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintingLimitRGBA.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintingLimitRGBA.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintingLimitRGBA.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVertexPaintingLimitPhysicsSurface>() == std::is_polymorphic<FVertexPaintingLimitStruct>(), "USTRUCT FVertexPaintingLimitPhysicsSurface cannot be polymorphic unless super FVertexPaintingLimitStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintingLimitPhysicsSurface;
class UScriptStruct* FVertexPaintingLimitPhysicsSurface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintingLimitPhysicsSurface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintingLimitPhysicsSurface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintingLimitPhysicsSurface, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintingLimitPhysicsSurface"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintingLimitPhysicsSurface.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintingLimitPhysicsSurface>()
{
	return FVertexPaintingLimitPhysicsSurface::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintingLimitPhysicsSurface_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintLimitOnPhysicsSurface_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_paintLimitOnPhysicsSurface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintingLimitPhysicsSurface_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Vertex Paint On Mesh Limits - Physics Surface\n" },
		{ "ModuleRelativePath", "Prerequisites/PaintLimitsPrerequisites.h" },
		{ "ToolTip", "Vertex Paint On Mesh Limits - Physics Surface" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintingLimitPhysicsSurface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintingLimitPhysicsSurface>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintingLimitPhysicsSurface_Statics::NewProp_paintLimitOnPhysicsSurface_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/PaintLimitsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexPaintingLimitPhysicsSurface_Statics::NewProp_paintLimitOnPhysicsSurface = { "paintLimitOnPhysicsSurface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintingLimitPhysicsSurface, paintLimitOnPhysicsSurface), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintingLimitPhysicsSurface_Statics::NewProp_paintLimitOnPhysicsSurface_MetaData), Z_Construct_UScriptStruct_FVertexPaintingLimitPhysicsSurface_Statics::NewProp_paintLimitOnPhysicsSurface_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintingLimitPhysicsSurface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintingLimitPhysicsSurface_Statics::NewProp_paintLimitOnPhysicsSurface,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintingLimitPhysicsSurface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexPaintingLimitStruct,
		&NewStructOps,
		"VertexPaintingLimitPhysicsSurface",
		Z_Construct_UScriptStruct_FVertexPaintingLimitPhysicsSurface_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintingLimitPhysicsSurface_Statics::PropPointers),
		sizeof(FVertexPaintingLimitPhysicsSurface),
		alignof(FVertexPaintingLimitPhysicsSurface),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintingLimitPhysicsSurface_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintingLimitPhysicsSurface_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintingLimitPhysicsSurface_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintingLimitPhysicsSurface()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintingLimitPhysicsSurface.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintingLimitPhysicsSurface.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintingLimitPhysicsSurface_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintingLimitPhysicsSurface.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintLimitsPrerequisites_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintLimitsPrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FVertexPaintingLimitStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintingLimitStruct_Statics::NewStructOps, TEXT("VertexPaintingLimitStruct"), &Z_Registration_Info_UScriptStruct_VertexPaintingLimitStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintingLimitStruct), 112908438U) },
		{ FVertexPaintingLimitRGBA::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintingLimitRGBA_Statics::NewStructOps, TEXT("VertexPaintingLimitRGBA"), &Z_Registration_Info_UScriptStruct_VertexPaintingLimitRGBA, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintingLimitRGBA), 2970671258U) },
		{ FVertexPaintingLimitPhysicsSurface::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintingLimitPhysicsSurface_Statics::NewStructOps, TEXT("VertexPaintingLimitPhysicsSurface"), &Z_Registration_Info_UScriptStruct_VertexPaintingLimitPhysicsSurface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintingLimitPhysicsSurface), 153516782U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintLimitsPrerequisites_h_841675361(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintLimitsPrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_PaintLimitsPrerequisites_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
