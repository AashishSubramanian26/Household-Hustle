// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/ColorSnippetPrerequisites.h"
#include "../Prerequisites/CorePrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorSnippetPrerequisites() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintPaintColorSnippetSetting();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVertexPaintPaintColorSnippetSetting;
	static UEnum* EVertexPaintPaintColorSnippetSetting_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVertexPaintPaintColorSnippetSetting.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVertexPaintPaintColorSnippetSetting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintPaintColorSnippetSetting, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("EVertexPaintPaintColorSnippetSetting"));
		}
		return Z_Registration_Info_UEnum_EVertexPaintPaintColorSnippetSetting.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UEnum* StaticEnum<EVertexPaintPaintColorSnippetSetting>()
	{
		return EVertexPaintPaintColorSnippetSetting_StaticEnum();
	}
	struct Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintPaintColorSnippetSetting_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintPaintColorSnippetSetting_Statics::Enumerators[] = {
		{ "EVertexPaintPaintColorSnippetSetting::PaintSingleSnippet", (int64)EVertexPaintPaintColorSnippetSetting::PaintSingleSnippet },
		{ "EVertexPaintPaintColorSnippetSetting::PaintGroupSnippet", (int64)EVertexPaintPaintColorSnippetSetting::PaintGroupSnippet },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintPaintColorSnippetSetting_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Paint Color Snippet Setting\n" },
		{ "ModuleRelativePath", "Prerequisites/ColorSnippetPrerequisites.h" },
		{ "PaintGroupSnippet.DisplayName", "Paint Group Snippet" },
		{ "PaintGroupSnippet.Name", "EVertexPaintPaintColorSnippetSetting::PaintGroupSnippet" },
		{ "PaintGroupSnippet.Tooltip", "Will Paint a Group Snippet if one has been selected and the correct Meshes that is used by the group is connected. " },
		{ "PaintSingleSnippet.DisplayName", "Paint Single Snippet" },
		{ "PaintSingleSnippet.Name", "EVertexPaintPaintColorSnippetSetting::PaintSingleSnippet" },
		{ "PaintSingleSnippet.Tooltip", "Will just Paint the Selected Snippet as Expected. " },
		{ "ToolTip", "Paint Color Snippet Setting" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintPaintColorSnippetSetting_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		"EVertexPaintPaintColorSnippetSetting",
		"EVertexPaintPaintColorSnippetSetting",
		Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintPaintColorSnippetSetting_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintPaintColorSnippetSetting_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintPaintColorSnippetSetting_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintPaintColorSnippetSetting_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintPaintColorSnippetSetting()
	{
		if (!Z_Registration_Info_UEnum_EVertexPaintPaintColorSnippetSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVertexPaintPaintColorSnippetSetting.InnerSingleton, Z_Construct_UEnum_VertexPaintDetectionPlugin_EVertexPaintPaintColorSnippetSetting_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVertexPaintPaintColorSnippetSetting.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectStoredColorSnippetInfo;
class UScriptStruct* FVertexDetectStoredColorSnippetInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectStoredColorSnippetInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectStoredColorSnippetInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectStoredColorSnippetInfo"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectStoredColorSnippetInfo.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectStoredColorSnippetInfo>()
{
	return FVertexDetectStoredColorSnippetInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_colorSnippetDataAssetStoredOn_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_colorSnippetDataAssetStoredOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_objectColorSnippetBelongsTo_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_objectColorSnippetBelongsTo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isPartOfAGroupSnippet_MetaData[];
#endif
		static void NewProp_isPartOfAGroupSnippet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isPartOfAGroupSnippet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_groupSnippetID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_groupSnippetID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_relativeLocationToGroupCenterPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_relativeLocationToGroupCenterPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dotProductToGroupCenterPoint_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dotProductToGroupCenterPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Stored Color Snippet Info\n" },
		{ "ModuleRelativePath", "Prerequisites/ColorSnippetPrerequisites.h" },
		{ "ToolTip", "Stored Color Snippet Info" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectStoredColorSnippetInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_colorSnippetDataAssetStoredOn_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ColorSnippetPrerequisites.h" },
		{ "ToolTip", "The Vertex Color Snippet Data Asset that stores the snippet datas for this mesh, if any has been added from the Editor Widget when in editor. NOTE Can't be added in runtime! \nCan be used if you for instance want a bunch of zombies with different blood patterns on them, then you can store a bunch of different snippets and randomize which to use when spawning a zombie. When we look them up the data asset is loaded into memory but not cached so it can get GC since we only need to use it for the remainder of the execution." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_colorSnippetDataAssetStoredOn = { "colorSnippetDataAssetStoredOn", nullptr, (EPropertyFlags)0x0014000000020005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectStoredColorSnippetInfo, colorSnippetDataAssetStoredOn), Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_colorSnippetDataAssetStoredOn_MetaData), Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_colorSnippetDataAssetStoredOn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_objectColorSnippetBelongsTo_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ColorSnippetPrerequisites.h" },
		{ "ToolTip", "Object the colors belong to" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_objectColorSnippetBelongsTo = { "objectColorSnippetBelongsTo", nullptr, (EPropertyFlags)0x0014000000020005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectStoredColorSnippetInfo, objectColorSnippetBelongsTo), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_objectColorSnippetBelongsTo_MetaData), Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_objectColorSnippetBelongsTo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_isPartOfAGroupSnippet_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ColorSnippetPrerequisites.h" },
		{ "ToolTip", "If this belongs to be Group Snippet." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_isPartOfAGroupSnippet_SetBit(void* Obj)
	{
		((FVertexDetectStoredColorSnippetInfo*)Obj)->isPartOfAGroupSnippet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_isPartOfAGroupSnippet = { "isPartOfAGroupSnippet", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectStoredColorSnippetInfo), &Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_isPartOfAGroupSnippet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_isPartOfAGroupSnippet_MetaData), Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_isPartOfAGroupSnippet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_groupSnippetID_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ColorSnippetPrerequisites.h" },
		{ "ToolTip", "The Group Snippet this belongs to." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_groupSnippetID = { "groupSnippetID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectStoredColorSnippetInfo, groupSnippetID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_groupSnippetID_MetaData), Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_groupSnippetID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_relativeLocationToGroupCenterPoint_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ColorSnippetPrerequisites.h" },
		{ "ToolTip", "The Relative Location this had to the Group Meshes when stored. This is used to identify each mesh when painting again so we can get which mesh should be painted with which snippets, so we can be independent of soft ptrs pointing to components in specific levels but be able to spawn in stuff and have it work as well." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_relativeLocationToGroupCenterPoint = { "relativeLocationToGroupCenterPoint", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectStoredColorSnippetInfo, relativeLocationToGroupCenterPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_relativeLocationToGroupCenterPoint_MetaData), Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_relativeLocationToGroupCenterPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_dotProductToGroupCenterPoint_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ColorSnippetPrerequisites.h" },
		{ "ToolTip", "The Dot Product this mesh had to the group center point, used to check if something has been rotated incorrectly, where if so we dont want to paint the snippet since then it won't look accurate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_dotProductToGroupCenterPoint = { "dotProductToGroupCenterPoint", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectStoredColorSnippetInfo, dotProductToGroupCenterPoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_dotProductToGroupCenterPoint_MetaData), Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_dotProductToGroupCenterPoint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_colorSnippetDataAssetStoredOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_objectColorSnippetBelongsTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_isPartOfAGroupSnippet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_groupSnippetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_relativeLocationToGroupCenterPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewProp_dotProductToGroupCenterPoint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectStoredColorSnippetInfo",
		Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::PropPointers),
		sizeof(FVertexDetectStoredColorSnippetInfo),
		alignof(FVertexDetectStoredColorSnippetInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectStoredColorSnippetInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectStoredColorSnippetInfo.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectStoredColorSnippetInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectColorSnippetReferenceDataStruct;
class UScriptStruct* FVertexDetectColorSnippetReferenceDataStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectColorSnippetReferenceDataStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectColorSnippetReferenceDataStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectColorSnippetReferenceDataStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectColorSnippetReferenceDataStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectColorSnippetReferenceDataStruct>()
{
	return FVertexDetectColorSnippetReferenceDataStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_colorSnippetsStorageInfo_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_colorSnippetsStorageInfo_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_colorSnippetsStorageInfo_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_colorSnippetsStorageInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Color Snippet Reference Data\n" },
		{ "ModuleRelativePath", "Prerequisites/ColorSnippetPrerequisites.h" },
		{ "ToolTip", "Color Snippet Reference Data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectColorSnippetReferenceDataStruct>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct_Statics::NewProp_colorSnippetsStorageInfo_ValueProp = { "colorSnippetsStorageInfo", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo, METADATA_PARAMS(0, nullptr) }; // 3403720996
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct_Statics::NewProp_colorSnippetsStorageInfo_Key_KeyProp = { "colorSnippetsStorageInfo_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct_Statics::NewProp_colorSnippetsStorageInfo_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ColorSnippetPrerequisites.h" },
		{ "ToolTip", "Information about the Stored Snippet, such as which Color Snippet Data Asset we can get the colors, if it was part of a Group, if so the Relative Location of the group." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct_Statics::NewProp_colorSnippetsStorageInfo = { "colorSnippetsStorageInfo", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectColorSnippetReferenceDataStruct, colorSnippetsStorageInfo), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct_Statics::NewProp_colorSnippetsStorageInfo_MetaData), Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct_Statics::NewProp_colorSnippetsStorageInfo_MetaData) }; // 3403720996
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct_Statics::NewProp_colorSnippetsStorageInfo_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct_Statics::NewProp_colorSnippetsStorageInfo_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct_Statics::NewProp_colorSnippetsStorageInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectColorSnippetReferenceDataStruct",
		Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct_Statics::PropPointers),
		sizeof(FVertexDetectColorSnippetReferenceDataStruct),
		alignof(FVertexDetectColorSnippetReferenceDataStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectColorSnippetReferenceDataStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectColorSnippetReferenceDataStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectColorSnippetReferenceDataStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectColorSnippetDataStruct;
class UScriptStruct* FVertexDetectColorSnippetDataStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectColorSnippetDataStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectColorSnippetDataStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectColorSnippetDataStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectColorSnippetDataStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectColorSnippetDataStruct>()
{
	return FVertexDetectColorSnippetDataStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_objectColorSnippetBelongsTo_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_objectColorSnippetBelongsTo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_colorSnippetDataPerLOD_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_colorSnippetDataPerLOD_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_colorSnippetDataPerLOD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Color Snippet Data\n" },
		{ "ModuleRelativePath", "Prerequisites/ColorSnippetPrerequisites.h" },
		{ "ToolTip", "Color Snippet Data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectColorSnippetDataStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::NewProp_objectColorSnippetBelongsTo_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ColorSnippetPrerequisites.h" },
		{ "ToolTip", "Object the colors belong to" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::NewProp_objectColorSnippetBelongsTo = { "objectColorSnippetBelongsTo", nullptr, (EPropertyFlags)0x0014000000020005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectColorSnippetDataStruct, objectColorSnippetBelongsTo), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::NewProp_objectColorSnippetBelongsTo_MetaData), Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::NewProp_objectColorSnippetBelongsTo_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::NewProp_colorSnippetDataPerLOD_Inner = { "colorSnippetDataPerLOD", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexDetectMeshDataPerLODStruct, METADATA_PARAMS(0, nullptr) }; // 3735622610
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::NewProp_colorSnippetDataPerLOD_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ColorSnippetPrerequisites.h" },
		{ "ToolTip", "The Color Snippet Data Per LOD" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::NewProp_colorSnippetDataPerLOD = { "colorSnippetDataPerLOD", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectColorSnippetDataStruct, colorSnippetDataPerLOD), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::NewProp_colorSnippetDataPerLOD_MetaData), Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::NewProp_colorSnippetDataPerLOD_MetaData) }; // 3735622610
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::NewProp_objectColorSnippetBelongsTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::NewProp_colorSnippetDataPerLOD_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::NewProp_colorSnippetDataPerLOD,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectColorSnippetDataStruct",
		Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::PropPointers),
		sizeof(FVertexDetectColorSnippetDataStruct),
		alignof(FVertexDetectColorSnippetDataStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectColorSnippetDataStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectColorSnippetDataStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectColorSnippetDataStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectGroupColorSnippetInfo;
class UScriptStruct* FVertexDetectGroupColorSnippetInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectGroupColorSnippetInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectGroupColorSnippetInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectGroupColorSnippetInfo"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectGroupColorSnippetInfo.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectGroupColorSnippetInfo>()
{
	return FVertexDetectGroupColorSnippetInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_groupSnippetID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_groupSnippetID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_colorSnippetDataAssetStoredOn_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_colorSnippetDataAssetStoredOn;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_associatedGroupMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_associatedGroupMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_associatedGroupMeshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Group Color Snippet Info\n" },
		{ "ModuleRelativePath", "Prerequisites/ColorSnippetPrerequisites.h" },
		{ "ToolTip", "Group Color Snippet Info" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectGroupColorSnippetInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::NewProp_groupSnippetID_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ColorSnippetPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::NewProp_groupSnippetID = { "groupSnippetID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectGroupColorSnippetInfo, groupSnippetID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::NewProp_groupSnippetID_MetaData), Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::NewProp_groupSnippetID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::NewProp_colorSnippetDataAssetStoredOn_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ColorSnippetPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::NewProp_colorSnippetDataAssetStoredOn = { "colorSnippetDataAssetStoredOn", nullptr, (EPropertyFlags)0x0014000000020005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectGroupColorSnippetInfo, colorSnippetDataAssetStoredOn), Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::NewProp_colorSnippetDataAssetStoredOn_MetaData), Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::NewProp_colorSnippetDataAssetStoredOn_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::NewProp_associatedGroupMeshes_Inner = { "associatedGroupMeshes", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::NewProp_associatedGroupMeshes_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ColorSnippetPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::NewProp_associatedGroupMeshes = { "associatedGroupMeshes", nullptr, (EPropertyFlags)0x0014000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectGroupColorSnippetInfo, associatedGroupMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::NewProp_associatedGroupMeshes_MetaData), Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::NewProp_associatedGroupMeshes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::NewProp_groupSnippetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::NewProp_colorSnippetDataAssetStoredOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::NewProp_associatedGroupMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::NewProp_associatedGroupMeshes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectGroupColorSnippetInfo",
		Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::PropPointers),
		sizeof(FVertexDetectGroupColorSnippetInfo),
		alignof(FVertexDetectGroupColorSnippetInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectGroupColorSnippetInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectGroupColorSnippetInfo.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectGroupColorSnippetInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintColorSnippetDataAssetInfo;
class UScriptStruct* FVertexPaintColorSnippetDataAssetInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintColorSnippetDataAssetInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintColorSnippetDataAssetInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintColorSnippetDataAssetInfo"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintColorSnippetDataAssetInfo.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintColorSnippetDataAssetInfo>()
{
	return FVertexPaintColorSnippetDataAssetInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_colorSnippetID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_colorSnippetID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_colorSnippetDataAssetSnippetIsStoredIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_colorSnippetDataAssetSnippetIsStoredIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Color Snippet Data Asset Info\n" },
		{ "ModuleRelativePath", "Prerequisites/ColorSnippetPrerequisites.h" },
		{ "ToolTip", "Color Snippet Data Asset Info" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintColorSnippetDataAssetInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics::NewProp_colorSnippetID_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/ColorSnippetPrerequisites.h" },
		{ "ToolTip", "The Color Snippet Tag but in FString Format" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics::NewProp_colorSnippetID = { "colorSnippetID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintColorSnippetDataAssetInfo, colorSnippetID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics::NewProp_colorSnippetID_MetaData), Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics::NewProp_colorSnippetID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics::NewProp_colorSnippetDataAssetSnippetIsStoredIn_MetaData[] = {
		{ "Comment", "// Gets set after we've loaded in the data asset so we in async task can de-serialize the color snippet from it and get the colors in TArray<FColor> Format. \n" },
		{ "ModuleRelativePath", "Prerequisites/ColorSnippetPrerequisites.h" },
		{ "ToolTip", "Gets set after we've loaded in the data asset so we in async task can de-serialize the color snippet from it and get the colors in TArray<FColor> Format." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics::NewProp_colorSnippetDataAssetSnippetIsStoredIn = { "colorSnippetDataAssetSnippetIsStoredIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexPaintColorSnippetDataAssetInfo, colorSnippetDataAssetSnippetIsStoredIn), Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics::NewProp_colorSnippetDataAssetSnippetIsStoredIn_MetaData), Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics::NewProp_colorSnippetDataAssetSnippetIsStoredIn_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics::NewProp_colorSnippetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics::NewProp_colorSnippetDataAssetSnippetIsStoredIn,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexPaintColorSnippetDataAssetInfo",
		Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics::PropPointers),
		sizeof(FVertexPaintColorSnippetDataAssetInfo),
		alignof(FVertexPaintColorSnippetDataAssetInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintColorSnippetDataAssetInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintColorSnippetDataAssetInfo.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintColorSnippetDataAssetInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_ColorSnippetPrerequisites_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_ColorSnippetPrerequisites_h_Statics::EnumInfo[] = {
		{ EVertexPaintPaintColorSnippetSetting_StaticEnum, TEXT("EVertexPaintPaintColorSnippetSetting"), &Z_Registration_Info_UEnum_EVertexPaintPaintColorSnippetSetting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3010838445U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_ColorSnippetPrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FVertexDetectStoredColorSnippetInfo::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo_Statics::NewStructOps, TEXT("VertexDetectStoredColorSnippetInfo"), &Z_Registration_Info_UScriptStruct_VertexDetectStoredColorSnippetInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectStoredColorSnippetInfo), 3403720996U) },
		{ FVertexDetectColorSnippetReferenceDataStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct_Statics::NewStructOps, TEXT("VertexDetectColorSnippetReferenceDataStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectColorSnippetReferenceDataStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectColorSnippetReferenceDataStruct), 2492893847U) },
		{ FVertexDetectColorSnippetDataStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectColorSnippetDataStruct_Statics::NewStructOps, TEXT("VertexDetectColorSnippetDataStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectColorSnippetDataStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectColorSnippetDataStruct), 908707546U) },
		{ FVertexDetectGroupColorSnippetInfo::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo_Statics::NewStructOps, TEXT("VertexDetectGroupColorSnippetInfo"), &Z_Registration_Info_UScriptStruct_VertexDetectGroupColorSnippetInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectGroupColorSnippetInfo), 3428583167U) },
		{ FVertexPaintColorSnippetDataAssetInfo::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintColorSnippetDataAssetInfo_Statics::NewStructOps, TEXT("VertexPaintColorSnippetDataAssetInfo"), &Z_Registration_Info_UScriptStruct_VertexPaintColorSnippetDataAssetInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintColorSnippetDataAssetInfo), 1971015773U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_ColorSnippetPrerequisites_h_529889460(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_ColorSnippetPrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_ColorSnippetPrerequisites_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_ColorSnippetPrerequisites_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_ColorSnippetPrerequisites_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
