// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionLibs/VertexPaintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
 struct FVertexDetectStoredColorSnippetInfo;
 struct FVertexPaintParentPhysicsSurfaceStruct;
class AActor;
class UBoxComponent;
class UChaosWheeledVehicleMovementComponent;
class UClothingAssetBase;
class UDynamicMesh;
class UGeometryScriptDebug;
class UMaterialInterface;
class UMaterialInterface; struct FVertexPaintMaterialDataAssetStruct;
class UObject;
class UPhysicalMaterial;
class UPrimitiveComponent;
class UPrimitiveComponent; 
class USkeletalMesh;
class USkeletalMeshComponent;
class USkinnedMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UVertexPaintColorSnippetRefs;
class UVertexPaintMaterialDataAsset;
class UVertexPaintOptimizationDataAsset;
class UWorld;
enum class Enum_SurfaceAtChannel : uint8;
struct FColor;
struct FGameplayTag;
struct FGameplayTag; class UVertexPaintColorSnippetDataAsset;
struct FGeometryScriptColorFlags;
struct FHitResult;
struct FLatentActionInfo;
struct FLinearColor;
struct FVertexDetectAmountOfPaintedColorsOfEachChannel;
struct FVertexDetectChaosClothPhysicsSettings;
struct FVertexDetectMeshDataStruct;
#ifdef VERTEXPAINTDETECTIONPLUGIN_VertexPaintFunctionLibrary_generated_h
#error "VertexPaintFunctionLibrary.generated.h already included, missing '#pragma once' in VertexPaintFunctionLibrary.h"
#endif
#define VERTEXPAINTDETECTIONPLUGIN_VertexPaintFunctionLibrary_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintFunctionLibrary_h_37_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintFunctionLibrary_h_37_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintFunctionLibrary_h_37_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintFunctionLibrary_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateChaosClothPhysicsWithExistingColorsAsync); \
	DECLARE_FUNCTION(execUpdateChaosClothPhysicsWithExistingColors); \
	DECLARE_FUNCTION(execSetChaosClothPhysics); \
	DECLARE_FUNCTION(execGetClothAssets); \
	DECLARE_FUNCTION(execSetChaosWheeledVehicleFrictionMultiplier_Wrapper); \
	DECLARE_FUNCTION(execGetComponentBoundsBottomWorldZ); \
	DECLARE_FUNCTION(execGetComponentBoundsTopWorldZ); \
	DECLARE_FUNCTION(execReliableFColorToFLinearColor); \
	DECLARE_FUNCTION(execReliableFLinearToFColor); \
	DECLARE_FUNCTION(execGetSubstringAfterLastCharacter); \
	DECLARE_FUNCTION(execCalcAABBWithoutUniformCheck); \
	DECLARE_FUNCTION(execGetMeshComponentSourceMesh); \
	DECLARE_FUNCTION(execRemoveComponentFromDetectTaskQueue); \
	DECLARE_FUNCTION(execRemoveComponentFromPaintTaskQueue); \
	DECLARE_FUNCTION(execGetPhysicalMaterialUsingPhysicsSurface_Wrapper); \
	DECLARE_FUNCTION(execIsPlayInEditor); \
	DECLARE_FUNCTION(execObjectTypeToCollisionChannel); \
	DECLARE_FUNCTION(execCollisionChannelToObjectType); \
	DECLARE_FUNCTION(execVertexPaintDetectionPlugin_GetSkeletalMesh); \
	DECLARE_FUNCTION(execVertexPaintDetectionPlugin_SortAssetsNamesAlphabetically); \
	DECLARE_FUNCTION(execVertexPaintDetectionPlugin_SortStringArrayAlphabetically); \
	DECLARE_FUNCTION(execSetSkeletalMeshAndReleaseResources); \
	DECLARE_FUNCTION(execSetStaticMeshAndReleaseResources); \
	DECLARE_FUNCTION(execDrawPrimitiveComponentBoundsBox); \
	DECLARE_FUNCTION(execGetAllPhysicsSurfaces); \
	DECLARE_FUNCTION(execGetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper); \
	DECLARE_FUNCTION(execGetTheMostDominantPhysicsSurface_Wrapper); \
	DECLARE_FUNCTION(execGetColorsToApplyFromPhysicsSurface_Wrapper); \
	DECLARE_FUNCTION(execGetMeshComponentVertexColorsAtLOD_Wrapper); \
	DECLARE_FUNCTION(execGetMeshComponentAmountOfVerticesOnLOD); \
	DECLARE_FUNCTION(execGetMeshComponentVertexColors_Wrapper); \
	DECLARE_FUNCTION(execGetMeshColorSnippetTagInGroup); \
	DECLARE_FUNCTION(execGetAllColorSnippetsUnderGroupSnippetAsString); \
	DECLARE_FUNCTION(execGetAllTagsUnderTagCategory); \
	DECLARE_FUNCTION(execGetMeshColorSnippetsTagsInTagCategory_Wrapper); \
	DECLARE_FUNCTION(execGetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper); \
	DECLARE_FUNCTION(execGetAllMeshColorSnippetsAsTags_Wrapper); \
	DECLARE_FUNCTION(execGetAllMeshColorSnippetsAsString_Wrapper); \
	DECLARE_FUNCTION(execGetCalculateColorsDetectionTasksAmount_Wrapper); \
	DECLARE_FUNCTION(execGetCalculateColorsPaintTasksAmount_Wrapper); \
	DECLARE_FUNCTION(execGetAmountOfLODsToPaintOn); \
	DECLARE_FUNCTION(execGetVertexPaintMaterialDataAsset); \
	DECLARE_FUNCTION(execGetOptimizationDataAsset); \
	DECLARE_FUNCTION(execGetColorSnippetReferenceDataAsset); \
	DECLARE_FUNCTION(execMultiCapsuleTraceForClosestUniqueMeshes_Wrapper); \
	DECLARE_FUNCTION(execIsWorldValid); \
	DECLARE_FUNCTION(execGetPhysicsSurfacesRegisteredToMaterial); \
	DECLARE_FUNCTION(execSetMeshConstantVertexColorsAndEnablesThem); \
	DECLARE_FUNCTION(execGetAmountOfPaintedColorsForEachChannel); \
	DECLARE_FUNCTION(execGetAmountOfPaintedColorsForEachChannelAsync); \
	DECLARE_FUNCTION(execGetColorSnippetVertexColorsAsync); \
	DECLARE_FUNCTION(execAdjustBoxCollisionToFillAreaBetweenTwoLocations); \
	DECLARE_FUNCTION(execDoesPhysicsSurfaceBelongToPhysicsSurfaceFamily); \
	DECLARE_FUNCTION(execGetPhysicsSurfaceFamilies_Wrapper); \
	DECLARE_FUNCTION(execGetParentsOfPhysicsSurface_Wrapper); \
	DECLARE_FUNCTION(execIsMaterialAddedToPaintOnMaterialDataAsset_Wrapper); \
	DECLARE_FUNCTION(execGetVertexPaintMaterialInterface_Wrapper);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintFunctionLibrary_h_37_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintFunctionLibrary_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVertexPaintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVertexPaintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVertexPaintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VertexPaintDetectionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVertexPaintFunctionLibrary)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintFunctionLibrary_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVertexPaintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVertexPaintFunctionLibrary(UVertexPaintFunctionLibrary&&); \
	NO_API UVertexPaintFunctionLibrary(const UVertexPaintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVertexPaintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVertexPaintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVertexPaintFunctionLibrary) \
	NO_API virtual ~UVertexPaintFunctionLibrary();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintFunctionLibrary_h_34_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintFunctionLibrary_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintFunctionLibrary_h_37_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintFunctionLibrary_h_37_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintFunctionLibrary_h_37_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintFunctionLibrary_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintFunctionLibrary_h_37_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintFunctionLibrary_h_37_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintFunctionLibrary_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<class UVertexPaintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
