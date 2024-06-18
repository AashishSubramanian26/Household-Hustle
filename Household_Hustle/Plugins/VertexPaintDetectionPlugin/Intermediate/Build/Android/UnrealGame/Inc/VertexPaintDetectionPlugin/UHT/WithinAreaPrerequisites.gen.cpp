// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/WithinAreaPrerequisites.h"
#include "../Prerequisites/FundementalsPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWithinAreaPrerequisites() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintWithinAreaShape();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_Enum_PaintWithinAreaShape;
	static UEnum* Enum_PaintWithinAreaShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_Enum_PaintWithinAreaShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_Enum_PaintWithinAreaShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintWithinAreaShape, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("Enum_PaintWithinAreaShape"));
		}
		return Z_Registration_Info_UEnum_Enum_PaintWithinAreaShape.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UEnum* StaticEnum<Enum_PaintWithinAreaShape>()
	{
		return Enum_PaintWithinAreaShape_StaticEnum();
	}
	struct Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintWithinAreaShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintWithinAreaShape_Statics::Enumerators[] = {
		{ "Enum_PaintWithinAreaShape::isSquareOrRectangleShape", (int64)Enum_PaintWithinAreaShape::isSquareOrRectangleShape },
		{ "Enum_PaintWithinAreaShape::isSphereShape", (int64)Enum_PaintWithinAreaShape::isSphereShape },
		{ "Enum_PaintWithinAreaShape::isComplexShape", (int64)Enum_PaintWithinAreaShape::isComplexShape },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintWithinAreaShape_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//-------------------------------------------------------\n" },
		{ "isComplexShape.Comment", "//-------------------------------------------------------\n" },
		{ "isComplexShape.DisplayName", "Is Complex Shape" },
		{ "isComplexShape.Name", "Enum_PaintWithinAreaShape::isComplexShape" },
		{ "isComplexShape.Tooltip", "Complex Shapes are Skeletal Meshes, Spline Meshes, or Static Mesh that isn't a Cube/Rectangle/Sphere. These are Slower as we run traces to check if in the complex shape. " },
		{ "isSphereShape.Comment", "//-------------------------------------------------------\n" },
		{ "isSphereShape.DisplayName", "Is Sphere Shape" },
		{ "isSphereShape.Name", "Enum_PaintWithinAreaShape::isSphereShape" },
		{ "isSphereShape.Tooltip", "Fast as they only check if the vertex is within Bounds" },
		{ "isSquareOrRectangleShape.Comment", "//-------------------------------------------------------\n" },
		{ "isSquareOrRectangleShape.DisplayName", "Is Square or Rectangle Shape" },
		{ "isSquareOrRectangleShape.Name", "Enum_PaintWithinAreaShape::isSquareOrRectangleShape" },
		{ "isSquareOrRectangleShape.Tooltip", "Fast as they only check if the vertex is within Bounds" },
		{ "ModuleRelativePath", "Prerequisites/WithinAreaPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintWithinAreaShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		"Enum_PaintWithinAreaShape",
		"Enum_PaintWithinAreaShape",
		Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintWithinAreaShape_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintWithinAreaShape_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintWithinAreaShape_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintWithinAreaShape_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintWithinAreaShape()
	{
		if (!Z_Registration_Info_UEnum_Enum_PaintWithinAreaShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_Enum_PaintWithinAreaShape.InnerSingleton, Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintWithinAreaShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_Enum_PaintWithinAreaShape.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPainthWithinArea_ComponentToCheckIfIsWithinInfo;
class UScriptStruct* FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPainthWithinArea_ComponentToCheckIfIsWithinInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPainthWithinArea_ComponentToCheckIfIsWithinInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPainthWithinArea_ComponentToCheckIfIsWithinInfo"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPainthWithinArea_ComponentToCheckIfIsWithinInfo.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo>()
{
	return FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_componentToCheckIfIsWithin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_componentToCheckIfIsWithin;
		static const UECodeGen_Private::FBytePropertyParams NewProp_paintWithinAreaShape_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintWithinAreaShape_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_paintWithinAreaShape;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Component To Check If Is Within Info\n" },
		{ "ModuleRelativePath", "Prerequisites/WithinAreaPrerequisites.h" },
		{ "ToolTip", "Component To Check If Is Within Info" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::NewProp_componentToCheckIfIsWithin_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Prerequisites/WithinAreaPrerequisites.h" },
		{ "ToolTip", "The Primitive Component to check if within, for example a Cube, Rectangle, Sphere or even a Skeletal Mesh, Spline Mesh or Landscape if you opt for Complex Shape." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::NewProp_componentToCheckIfIsWithin = { "componentToCheckIfIsWithin", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo, componentToCheckIfIsWithin), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::NewProp_componentToCheckIfIsWithin_MetaData), Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::NewProp_componentToCheckIfIsWithin_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::NewProp_paintWithinAreaShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::NewProp_paintWithinAreaShape_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/WithinAreaPrerequisites.h" },
		{ "ToolTip", "Which shape to use, i.e. shape of the Component passed in. Cube/Rectangle and Sphere is the Cheapest. Complex does a line trace on each vertex to check if its within it, which makes it more expensive, but can support any kind of shape and is required for Skeletal, Spline Mesh and Landscapes." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::NewProp_paintWithinAreaShape = { "paintWithinAreaShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo, paintWithinAreaShape), Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_PaintWithinAreaShape, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::NewProp_paintWithinAreaShape_MetaData), Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::NewProp_paintWithinAreaShape_MetaData) }; // 2310526787
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::NewProp_componentToCheckIfIsWithin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::NewProp_paintWithinAreaShape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::NewProp_paintWithinAreaShape,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexPainthWithinArea_ComponentToCheckIfIsWithinInfo",
		Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::PropPointers),
		sizeof(FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo),
		alignof(FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPainthWithinArea_ComponentToCheckIfIsWithinInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPainthWithinArea_ComponentToCheckIfIsWithinInfo.InnerSingleton, Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPainthWithinArea_ComponentToCheckIfIsWithinInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintDetectWithinAreaSettings;
class UScriptStruct* FVertexPaintDetectWithinAreaSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintDetectWithinAreaSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintDetectWithinAreaSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintDetectWithinAreaSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintDetectWithinAreaSettings.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintDetectWithinAreaSettings>()
{
	return FVertexPaintDetectWithinAreaSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_componentsToCheckIfIsWithin_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_componentsToCheckIfIsWithin_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_componentsToCheckIfIsWithin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_includeVertexColorsWithinArea_MetaData[];
#endif
		static void NewProp_includeVertexColorsWithinArea_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_includeVertexColorsWithinArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_includeVertexPositionsWithinrea_MetaData[];
#endif
		static void NewProp_includeVertexPositionsWithinrea_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_includeVertexPositionsWithinrea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_includeVertexNormalsWithinArea_MetaData[];
#endif
		static void NewProp_includeVertexNormalsWithinArea_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_includeVertexNormalsWithinArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_includeAmountOfColorsOfEachChannelWithinArea_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_includeAmountOfColorsOfEachChannelWithinArea;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Within Area Settings\n" },
		{ "ModuleRelativePath", "Prerequisites/WithinAreaPrerequisites.h" },
		{ "ToolTip", "Within Area Settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintDetectWithinAreaSettings>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_componentsToCheckIfIsWithin_Inner = { "componentsToCheckIfIsWithin", nullptr, (EPropertyFlags)0x0000008000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo, METADATA_PARAMS(0, nullptr) }; // 1489508262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_componentsToCheckIfIsWithin_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/WithinAreaPrerequisites.h" },
		{ "ToolTip", "The Primitive Components to check if within, for example a Cube, Rectangle, Sphere or even a Skeletal Mesh if you opt for Complex Shape." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_componentsToCheckIfIsWithin = { "componentsToCheckIfIsWithin", nullptr, (EPropertyFlags)0x0010008000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintDetectWithinAreaSettings, componentsToCheckIfIsWithin), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_componentsToCheckIfIsWithin_MetaData), Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_componentsToCheckIfIsWithin_MetaData) }; // 1489508262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeVertexColorsWithinArea_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/WithinAreaPrerequisites.h" },
		{ "ToolTip", "If we should include the vertex colors that is within the area." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeVertexColorsWithinArea_SetBit(void* Obj)
	{
		((FVertexPaintDetectWithinAreaSettings*)Obj)->includeVertexColorsWithinArea = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeVertexColorsWithinArea = { "includeVertexColorsWithinArea", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPaintDetectWithinAreaSettings), &Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeVertexColorsWithinArea_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeVertexColorsWithinArea_MetaData), Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeVertexColorsWithinArea_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeVertexPositionsWithinrea_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/WithinAreaPrerequisites.h" },
		{ "ToolTip", "If we should include the vertex positions in component space that is within the area." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeVertexPositionsWithinrea_SetBit(void* Obj)
	{
		((FVertexPaintDetectWithinAreaSettings*)Obj)->includeVertexPositionsWithinrea = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeVertexPositionsWithinrea = { "includeVertexPositionsWithinrea", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPaintDetectWithinAreaSettings), &Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeVertexPositionsWithinrea_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeVertexPositionsWithinrea_MetaData), Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeVertexPositionsWithinrea_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeVertexNormalsWithinArea_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/WithinAreaPrerequisites.h" },
		{ "ToolTip", "If we should include the vertex normals that is within the area." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeVertexNormalsWithinArea_SetBit(void* Obj)
	{
		((FVertexPaintDetectWithinAreaSettings*)Obj)->includeVertexNormalsWithinArea = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeVertexNormalsWithinArea = { "includeVertexNormalsWithinArea", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPaintDetectWithinAreaSettings), &Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeVertexNormalsWithinArea_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeVertexNormalsWithinArea_MetaData), Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeVertexNormalsWithinArea_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeAmountOfColorsOfEachChannelWithinArea_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/WithinAreaPrerequisites.h" },
		{ "ToolTip", "If we should include the amount of colors of each channel, such as amount, average strength and % of each channel and physics surface." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeAmountOfColorsOfEachChannelWithinArea = { "includeAmountOfColorsOfEachChannelWithinArea", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintDetectWithinAreaSettings, includeAmountOfColorsOfEachChannelWithinArea), Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeAmountOfColorsOfEachChannelWithinArea_MetaData), Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeAmountOfColorsOfEachChannelWithinArea_MetaData) }; // 1213306487
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_componentsToCheckIfIsWithin_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_componentsToCheckIfIsWithin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeVertexColorsWithinArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeVertexPositionsWithinrea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeVertexNormalsWithinArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewProp_includeAmountOfColorsOfEachChannelWithinArea,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexPaintDetectWithinAreaSettings",
		Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::PropPointers),
		sizeof(FVertexPaintDetectWithinAreaSettings),
		alignof(FVertexPaintDetectWithinAreaSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintDetectWithinAreaSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintDetectWithinAreaSettings.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintDetectWithinAreaSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_WithinAreaPrerequisites_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_WithinAreaPrerequisites_h_Statics::EnumInfo[] = {
		{ Enum_PaintWithinAreaShape_StaticEnum, TEXT("Enum_PaintWithinAreaShape"), &Z_Registration_Info_UEnum_Enum_PaintWithinAreaShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2310526787U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_WithinAreaPrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo::StaticStruct, Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo_Statics::NewStructOps, TEXT("VertexPainthWithinArea_ComponentToCheckIfIsWithinInfo"), &Z_Registration_Info_UScriptStruct_VertexPainthWithinArea_ComponentToCheckIfIsWithinInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo), 1489508262U) },
		{ FVertexPaintDetectWithinAreaSettings::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintDetectWithinAreaSettings_Statics::NewStructOps, TEXT("VertexPaintDetectWithinAreaSettings"), &Z_Registration_Info_UScriptStruct_VertexPaintDetectWithinAreaSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintDetectWithinAreaSettings), 317522931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_WithinAreaPrerequisites_h_164712161(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_WithinAreaPrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_WithinAreaPrerequisites_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_WithinAreaPrerequisites_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_WithinAreaPrerequisites_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
