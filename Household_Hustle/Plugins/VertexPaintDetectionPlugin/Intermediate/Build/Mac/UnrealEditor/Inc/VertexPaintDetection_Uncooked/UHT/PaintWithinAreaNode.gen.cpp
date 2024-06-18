// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VertexPaintDetection_Uncooked/PaintWithinAreaNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaintWithinAreaNode() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetection_Uncooked();
	VERTEXPAINTDETECTION_UNCOOKED_API UClass* Z_Construct_UClass_UPaintWithinAreaNode();
	VERTEXPAINTDETECTION_UNCOOKED_API UClass* Z_Construct_UClass_UPaintWithinAreaNode_NoRegister();
	VERTEXPAINTDETECTION_UNCOOKED_API UClass* Z_Construct_UClass_UVertexPaintDetectionOnMeshNode();
// End Cross Module References
	void UPaintWithinAreaNode::StaticRegisterNativesUPaintWithinAreaNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaintWithinAreaNode);
	UClass* Z_Construct_UClass_UPaintWithinAreaNode_NoRegister()
	{
		return UPaintWithinAreaNode::StaticClass();
	}
	struct Z_Construct_UClass_UPaintWithinAreaNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaintWithinAreaNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVertexPaintDetectionOnMeshNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetection_Uncooked,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaintWithinAreaNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaintWithinAreaNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PaintWithinAreaNode.h" },
		{ "ModuleRelativePath", "PaintWithinAreaNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaintWithinAreaNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaintWithinAreaNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaintWithinAreaNode_Statics::ClassParams = {
		&UPaintWithinAreaNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaintWithinAreaNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaintWithinAreaNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPaintWithinAreaNode()
	{
		if (!Z_Registration_Info_UClass_UPaintWithinAreaNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaintWithinAreaNode.OuterSingleton, Z_Construct_UClass_UPaintWithinAreaNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaintWithinAreaNode.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTION_UNCOOKED_API UClass* StaticClass<UPaintWithinAreaNode>()
	{
		return UPaintWithinAreaNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaintWithinAreaNode);
	UPaintWithinAreaNode::~UPaintWithinAreaNode() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetection_Uncooked_PaintWithinAreaNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetection_Uncooked_PaintWithinAreaNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaintWithinAreaNode, UPaintWithinAreaNode::StaticClass, TEXT("UPaintWithinAreaNode"), &Z_Registration_Info_UClass_UPaintWithinAreaNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaintWithinAreaNode), 102427794U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetection_Uncooked_PaintWithinAreaNode_h_4131096763(TEXT("/Script/VertexPaintDetection_Uncooked"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetection_Uncooked_PaintWithinAreaNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetection_Uncooked_PaintWithinAreaNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
