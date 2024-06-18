// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Prerequisites/FundementalsPrerequisites.h"
#include "../Prerequisites/CompareMeshColorsPrerequisites.h"
#include "../Utility/VertexPaintDetectionLog.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFundementalsPrerequisites() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectEventSettings();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectFundementalStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintDebugSettings();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexPaintMultiThreadSettingsStruct;
class UScriptStruct* FVertexPaintMultiThreadSettingsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexPaintMultiThreadSettingsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexPaintMultiThreadSettingsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexPaintMultiThreadSettingsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexPaintMultiThreadSettingsStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexPaintMultiThreadSettingsStruct>()
{
	return FVertexPaintMultiThreadSettingsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_useMultithreadingForCalculations_MetaData[];
#endif
		static void NewProp_useMultithreadingForCalculations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_useMultithreadingForCalculations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Multi Thread Settings \n" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "Multi Thread Settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexPaintMultiThreadSettingsStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct_Statics::NewProp_useMultithreadingForCalculations_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "Whether to use Multithreading for Calculations instead of using Game Thread. Is recommended since you get will get better FPS. Each Mesh will have their own Calculation Task queue where each paint job is based off of the result of the previous. Detection Jobs will be set to be first in the queue so they will run the fastest." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct_Statics::NewProp_useMultithreadingForCalculations_SetBit(void* Obj)
	{
		((FVertexPaintMultiThreadSettingsStruct*)Obj)->useMultithreadingForCalculations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct_Statics::NewProp_useMultithreadingForCalculations = { "useMultithreadingForCalculations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexPaintMultiThreadSettingsStruct), &Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct_Statics::NewProp_useMultithreadingForCalculations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct_Statics::NewProp_useMultithreadingForCalculations_MetaData), Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct_Statics::NewProp_useMultithreadingForCalculations_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct_Statics::NewProp_useMultithreadingForCalculations,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexPaintMultiThreadSettingsStruct",
		Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct_Statics::PropPointers),
		sizeof(FVertexPaintMultiThreadSettingsStruct),
		alignof(FVertexPaintMultiThreadSettingsStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexPaintMultiThreadSettingsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexPaintMultiThreadSettingsStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexPaintMultiThreadSettingsStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectIncludeAmountOfPaintedColorsOfEachChannel;
class UScriptStruct* FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectIncludeAmountOfPaintedColorsOfEachChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectIncludeAmountOfPaintedColorsOfEachChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectIncludeAmountOfPaintedColorsOfEachChannel"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectIncludeAmountOfPaintedColorsOfEachChannel.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel>()
{
	return FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_includeVertexColorChannelResultOfEachChannel_MetaData[];
#endif
		static void NewProp_includeVertexColorChannelResultOfEachChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_includeVertexColorChannelResultOfEachChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_includePhysicsSurfaceResultOfEachChannel_MetaData[];
#endif
		static void NewProp_includePhysicsSurfaceResultOfEachChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_includePhysicsSurfaceResultOfEachChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_includeIfMinColorAmountIs_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_includeIfMinColorAmountIs;
		static const UECodeGen_Private::FBytePropertyParams NewProp_includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Include Amount Of Painted Colors Of Each Channel\n" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "Include Amount Of Painted Colors Of Each Channel" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includeVertexColorChannelResultOfEachChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "If we should get the Percent, Average Amount, and How many vertices on each RGBA Vertex Color Channel, so you can for instance check if the Red Channel has is over a certain %. \n This is really useful if you have something like splaboon, where you want to know, how much in Percent of Red and Blue is on this Mesh above this minimum amount. \nNOTE That if True and if we're running a paint/detect job that usually doesn't have to loop through the vertices, like Get All Colors Only, SetMeshComponentColors, or Paint Color Snippet, then this will make it loop through the vertices so we can get the data, meaning with this included those task types may take a tiny bit longer to finish. Not as long as a regular task like Paint at Location since we're not looping through Sections etc. though." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includeVertexColorChannelResultOfEachChannel_SetBit(void* Obj)
	{
		((FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel*)Obj)->includeVertexColorChannelResultOfEachChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includeVertexColorChannelResultOfEachChannel = { "includeVertexColorChannelResultOfEachChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel), &Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includeVertexColorChannelResultOfEachChannel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includeVertexColorChannelResultOfEachChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includeVertexColorChannelResultOfEachChannel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includePhysicsSurfaceResultOfEachChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "If True then we will get the Percent, Amount and Average Amount for every Physics Surface that was registered to each color channel on the Mesh Materials, so you can for instance get that Sand had X %, and X amount of Vertices etc. In the callback results the first in the TMap will be the one with the highest %. \nNOTE that if this is true, then the task may take roughly 25% longer time to finish since it requires a few more loops for every vertex, and paint/detect jobs that usually don't need to loop through sections of the mesh like Get All Colors Only, Paint Color Snippet or Paint Entire Mesh with Set, will have to do so, meaning with this true the task will take just as long as a regular Paint at Location that has this to true for instance." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includePhysicsSurfaceResultOfEachChannel_SetBit(void* Obj)
	{
		((FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel*)Obj)->includePhysicsSurfaceResultOfEachChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includePhysicsSurfaceResultOfEachChannel = { "includePhysicsSurfaceResultOfEachChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel), &Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includePhysicsSurfaceResultOfEachChannel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includePhysicsSurfaceResultOfEachChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includePhysicsSurfaceResultOfEachChannel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includeIfMinColorAmountIs_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "If Min this Amount of color value on R, G, B or A then they will be included. So if you for instance want to check if something is fully painted on a channel, then you can set this to like 0.999" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includeIfMinColorAmountIs = { "includeIfMinColorAmountIs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel, includeIfMinColorAmountIs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includeIfMinColorAmountIs_MetaData), Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includeIfMinColorAmountIs_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel_Inner = { "includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "If we should optionally Only include results on channels that has either of these surfaces registered, or is a part of their family. For instance if you have a Physics Surface Family Parent Registered as Wet, and a Cobble-Puddle as child, then you can add Wet here and even if the Material has Cobble-Puddle on it that will be included. \nUseful if you're looking for the results of a specific physics surface and don't care about anything else." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel = { "includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel, includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel_MetaData) }; // 2508321301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includeVertexColorChannelResultOfEachChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includePhysicsSurfaceResultOfEachChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includeIfMinColorAmountIs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewProp_includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectIncludeAmountOfPaintedColorsOfEachChannel",
		Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::PropPointers),
		sizeof(FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel),
		alignof(FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectIncludeAmountOfPaintedColorsOfEachChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectIncludeAmountOfPaintedColorsOfEachChannel.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectIncludeAmountOfPaintedColorsOfEachChannel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectEventSettings;
class UScriptStruct* FVertexDetectEventSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectEventSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectEventSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectEventSettings, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectEventSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectEventSettings.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectEventSettings>()
{
	return FVertexDetectEventSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runCallbackDelegate_MetaData[];
#endif
		static void NewProp_runCallbackDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_runCallbackDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runCallbackInterfacesOnObject_MetaData[];
#endif
		static void NewProp_runCallbackInterfacesOnObject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_runCallbackInterfacesOnObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_objectToRunInterfacesOn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_objectToRunInterfacesOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runCallbackInterfacesOnObjectComponents_MetaData[];
#endif
		static void NewProp_runCallbackInterfacesOnObjectComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_runCallbackInterfacesOnObjectComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_includeVertexDataOnlyForLOD0_MetaData[];
#endif
		static void NewProp_includeVertexDataOnlyForLOD0_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_includeVertexDataOnlyForLOD0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_includeColorsOfEachBone_MetaData[];
#endif
		static void NewProp_includeColorsOfEachBone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_includeColorsOfEachBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_includeAmountOfPaintedColorsOfEachChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_includeAmountOfPaintedColorsOfEachChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_compareMeshColorsToColorArray_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_compareMeshColorsToColorArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_includeVertexColorData_MetaData[];
#endif
		static void NewProp_includeVertexColorData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_includeVertexColorData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_includeSerializedVertexColorData_MetaData[];
#endif
		static void NewProp_includeSerializedVertexColorData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_includeSerializedVertexColorData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_includeVertexPositionData_MetaData[];
#endif
		static void NewProp_includeVertexPositionData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_includeVertexPositionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_includeVertexNormalData_MetaData[];
#endif
		static void NewProp_includeVertexNormalData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_includeVertexNormalData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Event Settings\n" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "Event Settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectEventSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_runCallbackDelegate_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "If we should run the Paint Components Callback Delegate whether the Task was a Success / Fail." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_runCallbackDelegate_SetBit(void* Obj)
	{
		((FVertexDetectEventSettings*)Obj)->runCallbackDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_runCallbackDelegate = { "runCallbackDelegate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectEventSettings), &Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_runCallbackDelegate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_runCallbackDelegate_MetaData), Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_runCallbackDelegate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_runCallbackInterfacesOnObject_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "If we should run the interface on the Object. If objectToRunInterfacesOn is null then default it to run the interface on the Actor we Paint/Detect On." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_runCallbackInterfacesOnObject_SetBit(void* Obj)
	{
		((FVertexDetectEventSettings*)Obj)->runCallbackInterfacesOnObject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_runCallbackInterfacesOnObject = { "runCallbackInterfacesOnObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectEventSettings), &Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_runCallbackInterfacesOnObject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_runCallbackInterfacesOnObject_MetaData), Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_runCallbackInterfacesOnObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_objectToRunInterfacesOn_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "If Null then will default to run Interfaces on the Actor we Painted/Detected, but you can change if it should run on another object. Useful if you for instance have some sort of manager in the level that you want to callbacks to run on when you paint regular static meshes in the level." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_objectToRunInterfacesOn = { "objectToRunInterfacesOn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectEventSettings, objectToRunInterfacesOn), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_objectToRunInterfacesOn_MetaData), Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_objectToRunInterfacesOn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_runCallbackInterfacesOnObjectComponents_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "If objectToRunInterfacesOn is an Actor which can have Components, then if we should run the Paint/Detect Interfaces on the Components of that Actor as well. If it's null then it will default to the actor painted/detect on." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_runCallbackInterfacesOnObjectComponents_SetBit(void* Obj)
	{
		((FVertexDetectEventSettings*)Obj)->runCallbackInterfacesOnObjectComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_runCallbackInterfacesOnObjectComponents = { "runCallbackInterfacesOnObjectComponents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectEventSettings), &Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_runCallbackInterfacesOnObjectComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_runCallbackInterfacesOnObjectComponents_MetaData), Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_runCallbackInterfacesOnObjectComponents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexDataOnlyForLOD0_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "If we only return data for LOD0. This can save performance if the mesh is extremely heavy. There was a noticable difference on a mesh that had 980k vertices if only returned LOD0 and not the other LODs. Should only be false if you actually plan on using the data for the other LODs." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexDataOnlyForLOD0_SetBit(void* Obj)
	{
		((FVertexDetectEventSettings*)Obj)->includeVertexDataOnlyForLOD0 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexDataOnlyForLOD0 = { "includeVertexDataOnlyForLOD0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectEventSettings), &Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexDataOnlyForLOD0_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexDataOnlyForLOD0_MetaData), Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexDataOnlyForLOD0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeColorsOfEachBone_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "If looping through all vertices then will get the colors of each bone at LOD0 as well and include it in the callback settings. \nIf True and it is a Task that by default don't loop through vertices like Paint Color Snippet, Paint Entire Mesh with Set, or Detect with GetColorsOnly, then this will still make it loop through the vertices afterwards so it can get data for this. So those tasks that are usually extremely quick will take a bit longer to calculate if this is true, so only recommend setting to true if you actually need the data." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeColorsOfEachBone_SetBit(void* Obj)
	{
		((FVertexDetectEventSettings*)Obj)->includeColorsOfEachBone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeColorsOfEachBone = { "includeColorsOfEachBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectEventSettings), &Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeColorsOfEachBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeColorsOfEachBone_MetaData), Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeColorsOfEachBone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeAmountOfPaintedColorsOfEachChannel_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "If we set amount of vertices that had color for each channel, and amount of percent each channel has as well. Really useful if you have something like splaboon, where you want to know, how much in Percent of Red and Blue is on this Mesh. \nNote that if we're running a paint job that doesn't have to loop through the vertices, like Detect with Get Colors Only, or Paint Color Snippet, then this will make it loop through the vertices after so it can correctly fill the struct. This means that a task like Paint Color Snippet that is usually extremely quick can take a bit longer to finish, unlike tasks like Paint at Location which won't get their calculation speed affected since they're already looping through the Vertices." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeAmountOfPaintedColorsOfEachChannel = { "includeAmountOfPaintedColorsOfEachChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectEventSettings, includeAmountOfPaintedColorsOfEachChannel), Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeAmountOfPaintedColorsOfEachChannel_MetaData), Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeAmountOfPaintedColorsOfEachChannel_MetaData) }; // 1213306487
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_compareMeshColorsToColorArray_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "With this you can get the Matching Percent between the Meshes Current Vertex Colors (If paint job then colors after paint was applied) and the ones we send in here. \n\nThis is useful if you for instance have a Drawing Game, or a Tutorial where the player has to fill in a pattern that has been pre-filled, or just Mimick the pattern an AI is painting." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_compareMeshColorsToColorArray = { "compareMeshColorsToColorArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectEventSettings, compareMeshColorsToColorArray), Z_Construct_UScriptStruct_FVertexDetectCompareMeshColorsToColorArrayStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_compareMeshColorsToColorArray_MetaData), Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_compareMeshColorsToColorArray_MetaData) }; // 2401451574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexColorData_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "If we include the color data, if false, we can save some performance if the mesh is extremely heavy. There was a noticable difference on a mesh that had 980k vert, but if it's just 50k or so there's not much difference." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexColorData_SetBit(void* Obj)
	{
		((FVertexDetectEventSettings*)Obj)->includeVertexColorData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexColorData = { "includeVertexColorData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectEventSettings), &Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexColorData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexColorData_MetaData), Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexColorData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeSerializedVertexColorData_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "If true then we will Serialize the Color Array for each LOD and return an array of strings, each representing color data for each LOD that can be De-Serialized to get the Color Data in Array format again." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeSerializedVertexColorData_SetBit(void* Obj)
	{
		((FVertexDetectEventSettings*)Obj)->includeSerializedVertexColorData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeSerializedVertexColorData = { "includeSerializedVertexColorData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectEventSettings), &Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeSerializedVertexColorData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeSerializedVertexColorData_MetaData), Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeSerializedVertexColorData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexPositionData_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "If we include the position data, if false, we can save some performance if the mesh is extremely heavy. There was a noticable difference on a mesh that had 980k vertices if we didn't include everything. \nIf True and it is a Task that by default don't loop through all vertices, like Paint Color Snippet, Paint Entire Mesh with Set, or Detect with GetColorsOnly, then this will still make it loop through the vertices afterwards so it can get data for this. Only recommend setting to true if you actually need the data." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexPositionData_SetBit(void* Obj)
	{
		((FVertexDetectEventSettings*)Obj)->includeVertexPositionData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexPositionData = { "includeVertexPositionData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectEventSettings), &Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexPositionData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexPositionData_MetaData), Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexPositionData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexNormalData_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "If we include the Normal data, if false, we can save some performance if the mesh is extremely heavy. There was a noticable difference on a mesh that had 980k vertices if we didn't include everything. \nIf True and it is a Task that by default don't loop through vertices like Paint Color Snippet, Paint Entire Mesh with Set, or Detect with GetColorsOnly, then this will still make it loop through the vertices afterwards so it can get data for this. Only recommend setting to true if you actually need the data." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexNormalData_SetBit(void* Obj)
	{
		((FVertexDetectEventSettings*)Obj)->includeVertexNormalData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexNormalData = { "includeVertexNormalData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectEventSettings), &Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexNormalData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexNormalData_MetaData), Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexNormalData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_runCallbackDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_runCallbackInterfacesOnObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_objectToRunInterfacesOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_runCallbackInterfacesOnObjectComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexDataOnlyForLOD0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeColorsOfEachBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeAmountOfPaintedColorsOfEachChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_compareMeshColorsToColorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexColorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeSerializedVertexColorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexPositionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewProp_includeVertexNormalData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectEventSettings",
		Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::PropPointers),
		sizeof(FVertexDetectEventSettings),
		alignof(FVertexDetectEventSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectEventSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectEventSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectEventSettings.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectEventSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectGetAverageColorStruct;
class UScriptStruct* FVertexDetectGetAverageColorStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectGetAverageColorStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectGetAverageColorStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectGetAverageColorStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectGetAverageColorStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectGetAverageColorStruct>()
{
	return FVertexDetectGetAverageColorStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_areaRangeToGetAvarageColorFrom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_areaRangeToGetAvarageColorFrom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexNormalToHitNormal_MinimumDotProductToBeAccountedFor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexNormalToHitNormal_MinimumDotProductToBeAccountedFor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Get Average Color\n" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "Get Average Color" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectGetAverageColorStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct_Statics::NewProp_areaRangeToGetAvarageColorFrom_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "The Range we will get the average colors from. Has to be above 0 to get the average color." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct_Statics::NewProp_areaRangeToGetAvarageColorFrom = { "areaRangeToGetAvarageColorFrom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectGetAverageColorStruct, areaRangeToGetAvarageColorFrom), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct_Statics::NewProp_areaRangeToGetAvarageColorFrom_MetaData), Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct_Statics::NewProp_areaRangeToGetAvarageColorFrom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct_Statics::NewProp_VertexNormalToHitNormal_MinimumDotProductToBeAccountedFor_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "If the Vertex Normal and Hit Normal Dot is Min this then takes that vertex colors into account. -1 will take all vertices in the area into account, 1 only the vertices that has the same normal as the Hit Normal. So if you for instance want to get the average of one side of a wall, then you could have it to be 1, otherwise if it's -1 then it will take the vertices on the other side of the wall as well." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct_Statics::NewProp_VertexNormalToHitNormal_MinimumDotProductToBeAccountedFor = { "VertexNormalToHitNormal_MinimumDotProductToBeAccountedFor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectGetAverageColorStruct, VertexNormalToHitNormal_MinimumDotProductToBeAccountedFor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct_Statics::NewProp_VertexNormalToHitNormal_MinimumDotProductToBeAccountedFor_MetaData), Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct_Statics::NewProp_VertexNormalToHitNormal_MinimumDotProductToBeAccountedFor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct_Statics::NewProp_areaRangeToGetAvarageColorFrom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct_Statics::NewProp_VertexNormalToHitNormal_MinimumDotProductToBeAccountedFor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectGetAverageColorStruct",
		Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct_Statics::PropPointers),
		sizeof(FVertexDetectGetAverageColorStruct),
		alignof(FVertexDetectGetAverageColorStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectGetAverageColorStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectGetAverageColorStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectGetAverageColorStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectFundementalStruct;
class UScriptStruct* FVertexDetectFundementalStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectFundementalStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectFundementalStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectFundementalStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectFundementalStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectFundementalStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectFundementalStruct>()
{
	return FVertexDetectFundementalStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_taskWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_taskWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_componentItem_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_componentItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_callbackSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_callbackSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_multiThreadSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_multiThreadSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ignoreTaskQueueLimit_MetaData[];
#endif
		static void NewProp_ignoreTaskQueueLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ignoreTaskQueueLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debugSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_debugSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Fundemental Struct\n" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "Fundemental Struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectFundementalStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_taskWorld_MetaData[] = {
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_taskWorld = { "taskWorld", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectFundementalStruct, taskWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_taskWorld_MetaData), Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_taskWorld_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_actor_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "Actor to Paint / Detect" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectFundementalStruct, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_actor_MetaData), Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_meshComponent_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "Skeletal or Static Mesh Component to Paint / Detect" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectFundementalStruct, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_meshComponent_MetaData), Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_meshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_componentItem_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "This is used if it was an Instanced Mesh, for example Foliage, so we can get the specific instance and check the correct location from it. You can get this from Trace Hit or Overlap Events. \nIf you're not using Instanced Meshes then you don't have to bother with this at all." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_componentItem = { "componentItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectFundementalStruct, componentItem), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_componentItem_MetaData), Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_componentItem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_callbackSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "You can set what you can to return. If you're Painting / Detecting on extremely large meshes like 1 million vertices big, then it can make a bit difference if you don't return any colors, position and normals." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_callbackSettings = { "callbackSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectFundementalStruct, callbackSettings), Z_Construct_UScriptStruct_FVertexDetectEventSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_callbackSettings_MetaData), Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_callbackSettings_MetaData) }; // 3671379324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_multiThreadSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "Recommend running with Multithreading True so the game thread doesn't get affected by the Paint/Detect Job, meaning your FPS won't get affected as much. Remember to be aware of the Paint Task Queue, if you for instance paint every single frame on a very heavy mesh, then it won't have time to finish one task before another is being added to the queue, which means it will grow very large and you won't see the difference of your paint input until we get to that task, which may take a few seconds if the queue has grown very large. \nDepending on what you're doing you can have a small delay if painting every frame, so you paint every other frame, or you can add the next task when the current task is finished since you get a callback event." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_multiThreadSettings = { "multiThreadSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectFundementalStruct, multiThreadSettings), Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_multiThreadSettings_MetaData), Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_multiThreadSettings_MetaData) }; // 3051403810
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_ignoreTaskQueueLimit_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "If True, we ignore the task queue limit that's set in the Project Settings. It's not recommended to change this, as we don't want the task queue to grow to large as it will affect performance and quality if it becomes to big, if it grows extremely large than you should review the implementation where you paint/detect colors. \n\nThis is mostly for things like Save/Load Systems, where if you want to Load a Saved Game and have saved vertex colors on a bunch of Meshes, and need to queue up possibly several hundreds of paint tasks but just once." },
	};
#endif
	void Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_ignoreTaskQueueLimit_SetBit(void* Obj)
	{
		((FVertexDetectFundementalStruct*)Obj)->ignoreTaskQueueLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_ignoreTaskQueueLimit = { "ignoreTaskQueueLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVertexDetectFundementalStruct), &Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_ignoreTaskQueueLimit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_ignoreTaskQueueLimit_MetaData), Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_ignoreTaskQueueLimit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_debugSettings_MetaData[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "The Debug Settings for the Task, you can hover over each one to read more about it! \nNOTE Some may require you to turn off multithreading for the task job, since we can't draw debug symbols on an async thread." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_debugSettings = { "debugSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexDetectFundementalStruct, debugSettings), Z_Construct_UScriptStruct_FVertexPaintDebugSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_debugSettings_MetaData), Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_debugSettings_MetaData) }; // 917895573
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_taskWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_componentItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_callbackSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_multiThreadSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_ignoreTaskQueueLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewProp_debugSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"VertexDetectFundementalStruct",
		Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::PropPointers),
		sizeof(FVertexDetectFundementalStruct),
		alignof(FVertexDetectFundementalStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectFundementalStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectFundementalStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectFundementalStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectFundementalStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVertexDetectStruct>() == std::is_polymorphic<FVertexDetectFundementalStruct>(), "USTRUCT FVertexDetectStruct cannot be polymorphic unless super FVertexDetectFundementalStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexDetectStruct;
class UScriptStruct* FVertexDetectStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexDetectStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexDetectStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexDetectStruct, (UObject*)Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("VertexDetectStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexDetectStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FVertexDetectStruct>()
{
	return FVertexDetectStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexDetectStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexDetectStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Vertex Detect Info\n" },
		{ "ModuleRelativePath", "Prerequisites/FundementalsPrerequisites.h" },
		{ "ToolTip", "Vertex Detect Info" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexDetectStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexDetectStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexDetectStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		Z_Construct_UScriptStruct_FVertexDetectFundementalStruct,
		&NewStructOps,
		"VertexDetectStruct",
		nullptr,
		0,
		sizeof(FVertexDetectStruct),
		alignof(FVertexDetectStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexDetectStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexDetectStruct_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexDetectStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexDetectStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexDetectStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexDetectStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_FundementalsPrerequisites_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_FundementalsPrerequisites_h_Statics::ScriptStructInfo[] = {
		{ FVertexPaintMultiThreadSettingsStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexPaintMultiThreadSettingsStruct_Statics::NewStructOps, TEXT("VertexPaintMultiThreadSettingsStruct"), &Z_Registration_Info_UScriptStruct_VertexPaintMultiThreadSettingsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexPaintMultiThreadSettingsStruct), 3051403810U) },
		{ FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel_Statics::NewStructOps, TEXT("VertexDetectIncludeAmountOfPaintedColorsOfEachChannel"), &Z_Registration_Info_UScriptStruct_VertexDetectIncludeAmountOfPaintedColorsOfEachChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel), 1213306487U) },
		{ FVertexDetectEventSettings::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectEventSettings_Statics::NewStructOps, TEXT("VertexDetectEventSettings"), &Z_Registration_Info_UScriptStruct_VertexDetectEventSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectEventSettings), 3671379324U) },
		{ FVertexDetectGetAverageColorStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectGetAverageColorStruct_Statics::NewStructOps, TEXT("VertexDetectGetAverageColorStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectGetAverageColorStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectGetAverageColorStruct), 1635215642U) },
		{ FVertexDetectFundementalStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectFundementalStruct_Statics::NewStructOps, TEXT("VertexDetectFundementalStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectFundementalStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectFundementalStruct), 3773718030U) },
		{ FVertexDetectStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexDetectStruct_Statics::NewStructOps, TEXT("VertexDetectStruct"), &Z_Registration_Info_UScriptStruct_VertexDetectStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexDetectStruct), 727474636U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_FundementalsPrerequisites_h_1078934229(TEXT("/Script/VertexPaintDetectionPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_FundementalsPrerequisites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Prerequisites_FundementalsPrerequisites_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
