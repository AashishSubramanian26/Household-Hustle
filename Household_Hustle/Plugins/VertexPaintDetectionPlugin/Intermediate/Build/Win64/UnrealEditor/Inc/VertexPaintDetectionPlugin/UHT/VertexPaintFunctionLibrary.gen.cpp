// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../FunctionLibs/VertexPaintFunctionLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "../Prerequisites/ChaosClothPhysicsPrerequisites.h"
#include "../Prerequisites/ColorSnippetPrerequisites.h"
#include "../Prerequisites/CorePrerequisites.h"
#include "../Prerequisites/MaterialDataAssetPrerequisites.h"
#include "../Prerequisites/TaskResultsPrerequisites.h"
#include "GameplayTagContainer.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexPaintFunctionLibrary() {}
// Cross Module References
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptColorFlags();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintColorSnippetRefs_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintFunctionLibrary();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintFunctionLibrary_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintMaterialDataAsset_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintOptimizationDataAsset_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_SurfaceAtChannel();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct();
// End Cross Module References
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execUpdateChaosClothPhysicsWithExistingColorsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::UpdateChaosClothPhysicsWithExistingColorsAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_skeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execUpdateChaosClothPhysicsWithExistingColors)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::UpdateChaosClothPhysicsWithExistingColors(Z_Param_skeletalMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execSetChaosClothPhysics)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMeshComponent);
		P_GET_OBJECT(UClothingAssetBase,Z_Param_clothingAsset);
		P_GET_STRUCT_REF(FVertexDetectChaosClothPhysicsSettings,Z_Param_Out_clothPhysicsSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::SetChaosClothPhysics(Z_Param_skeletalMeshComponent,Z_Param_clothingAsset,Z_Param_Out_clothPhysicsSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetClothAssets)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_skeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UClothingAssetBase*>*)Z_Param__Result=UVertexPaintFunctionLibrary::GetClothAssets(Z_Param_skeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execSetChaosWheeledVehicleFrictionMultiplier_Wrapper)
	{
		P_GET_OBJECT(UChaosWheeledVehicleMovementComponent,Z_Param_chaosWheeledVehicleMovementComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_wheelIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_friction);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::SetChaosWheeledVehicleFrictionMultiplier_Wrapper(Z_Param_chaosWheeledVehicleMovementComponent,Z_Param_wheelIndex,Z_Param_friction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetComponentBoundsBottomWorldZ)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UVertexPaintFunctionLibrary::GetComponentBoundsBottomWorldZ(Z_Param_component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetComponentBoundsTopWorldZ)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UVertexPaintFunctionLibrary::GetComponentBoundsTopWorldZ(Z_Param_component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execReliableFColorToFLinearColor)
	{
		P_GET_STRUCT(FColor,Z_Param_color);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UVertexPaintFunctionLibrary::ReliableFColorToFLinearColor(Z_Param_color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execReliableFLinearToFColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_linearColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=UVertexPaintFunctionLibrary::ReliableFLinearToFColor(Z_Param_linearColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetSubstringAfterLastCharacter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_string);
		P_GET_PROPERTY(FStrProperty,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVertexPaintFunctionLibrary::GetSubstringAfterLastCharacter(Z_Param_string,Z_Param_character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execCalcAABBWithoutUniformCheck)
	{
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_MeshComponent);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_LocalToWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=UVertexPaintFunctionLibrary::CalcAABBWithoutUniformCheck(Z_Param_MeshComponent,Z_Param_Out_LocalToWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetMeshComponentSourceMesh)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UObject**)Z_Param__Result=UVertexPaintFunctionLibrary::GetMeshComponentSourceMesh(Z_Param_meshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execRemoveComponentFromDetectTaskQueue)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_component);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::RemoveComponentFromDetectTaskQueue(Z_Param_component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execRemoveComponentFromPaintTaskQueue)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_component);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::RemoveComponentFromPaintTaskQueue(Z_Param_component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetPhysicalMaterialUsingPhysicsSurface_Wrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_physicalMaterialClass);
		P_GET_PROPERTY(FByteProperty,Z_Param_physicsSurface);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhysicalMaterial**)Z_Param__Result=UVertexPaintFunctionLibrary::GetPhysicalMaterialUsingPhysicsSurface_Wrapper(Z_Param_WorldContextObject,Z_Param_physicalMaterialClass,EPhysicalSurface(Z_Param_physicsSurface));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execIsPlayInEditor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVertexPaintFunctionLibrary::IsPlayInEditor(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execObjectTypeToCollisionChannel)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=UVertexPaintFunctionLibrary::ObjectTypeToCollisionChannel(EObjectTypeQuery(Z_Param_object));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execCollisionChannelToObjectType)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EObjectTypeQuery>*)Z_Param__Result=UVertexPaintFunctionLibrary::CollisionChannelToObjectType(ECollisionChannel(Z_Param_channel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_GetSkeletalMesh)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMeshComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_GetSkeletalMesh(Z_Param_skeletalMeshComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_SortAssetsNamesAlphabetically)
	{
		P_GET_TMAP(int32,FString,Z_Param_assetIndexAndName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<int32,FString>*)Z_Param__Result=UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically(Z_Param_assetIndexAndName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_SortStringArrayAlphabetically)
	{
		P_GET_TARRAY(FString,Z_Param_strings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_SortStringArrayAlphabetically(Z_Param_strings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execSetSkeletalMeshAndReleaseResources)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMeshComponent);
		P_GET_OBJECT(USkeletalMesh,Z_Param_newMesh);
		P_GET_UBOOL(Z_Param_clearVertexColorsOfChangedMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::SetSkeletalMeshAndReleaseResources(Z_Param_skeletalMeshComponent,Z_Param_newMesh,Z_Param_clearVertexColorsOfChangedMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execSetStaticMeshAndReleaseResources)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_staticMeshComponent);
		P_GET_OBJECT(UStaticMesh,Z_Param_newMesh);
		P_GET_UBOOL(Z_Param_clearVertexColorsOfChangedMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::SetStaticMeshAndReleaseResources(Z_Param_staticMeshComponent,Z_Param_newMesh,Z_Param_clearVertexColorsOfChangedMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execDrawPrimitiveComponentBoundsBox)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_component);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lifetime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_thickness);
		P_GET_STRUCT(FLinearColor,Z_Param_colorToDraw);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::DrawPrimitiveComponentBoundsBox(Z_Param_component,Z_Param_lifetime,Z_Param_thickness,Z_Param_colorToDraw);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetAllPhysicsSurfaces)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TEnumAsByte<EPhysicalSurface> >*)Z_Param__Result=UVertexPaintFunctionLibrary::GetAllPhysicsSurfaces();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMaterialInterface,Z_Param_material);
		P_GET_PROPERTY(FByteProperty,Z_Param_physicsSurface);
		P_GET_UBOOL_REF(Z_Param_Out_successfull);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<Enum_SurfaceAtChannel>*)Z_Param__Result=UVertexPaintFunctionLibrary::GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper(Z_Param_WorldContextObject,Z_Param_material,EPhysicalSurface(Z_Param_physicsSurface),Z_Param_Out_successfull);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetTheMostDominantPhysicsSurface_Wrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMaterialInterface,Z_Param_optionalMaterialPhysicsSurfaceWasDetectedOn);
		P_GET_TARRAY(TEnumAsByte<EPhysicalSurface>,Z_Param_physicsSurfaces);
		P_GET_TARRAY(float,Z_Param_physicsSurfaceValues);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_mostDominantPhysicsSurfaceFromArray);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_mostDominantPhysicsSurfaceColorValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVertexPaintFunctionLibrary::GetTheMostDominantPhysicsSurface_Wrapper(Z_Param_WorldContextObject,Z_Param_optionalMaterialPhysicsSurfaceWasDetectedOn,Z_Param_physicsSurfaces,Z_Param_physicsSurfaceValues,(TEnumAsByte<EPhysicalSurface>&)(Z_Param_Out_mostDominantPhysicsSurfaceFromArray),Z_Param_Out_mostDominantPhysicsSurfaceColorValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetColorsToApplyFromPhysicsSurface_Wrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMaterialInterface,Z_Param_materialToApplyColorsTo);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_physicalSurface);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_redAmountToApply);
		P_GET_UBOOL_REF(Z_Param_Out_redAmountSuccessfullyGot);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_greenAmountToApply);
		P_GET_UBOOL_REF(Z_Param_Out_greenAmountSuccessfullyGot);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_blueAmountToApply);
		P_GET_UBOOL_REF(Z_Param_Out_blueAmountSuccessfullyGot);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_alphaAmountToApply);
		P_GET_UBOOL_REF(Z_Param_Out_alphaAmountSuccessfullyGot);
		P_GET_UBOOL_REF(Z_Param_Out_successfullyGotColorsToApplyOnAChannel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amountToReturnOnChannelsWithPhysicsSurface);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amountToReturnOnChannelsWithoutThePhysicsSurface);
		P_GET_UBOOL(Z_Param_applyOnChannelsWithSamePhysicsParents);
		P_GET_UBOOL(Z_Param_applyOnChannelsThatsChildOfPhysicsSurface);
		P_GET_UBOOL(Z_Param_applyOnChannelsThatResultsInBlendableSurfaces);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::GetColorsToApplyFromPhysicsSurface_Wrapper(Z_Param_WorldContextObject,Z_Param_materialToApplyColorsTo,(TEnumAsByte<EPhysicalSurface>&)(Z_Param_Out_physicalSurface),Z_Param_Out_redAmountToApply,Z_Param_Out_redAmountSuccessfullyGot,Z_Param_Out_greenAmountToApply,Z_Param_Out_greenAmountSuccessfullyGot,Z_Param_Out_blueAmountToApply,Z_Param_Out_blueAmountSuccessfullyGot,Z_Param_Out_alphaAmountToApply,Z_Param_Out_alphaAmountSuccessfullyGot,Z_Param_Out_successfullyGotColorsToApplyOnAChannel,Z_Param_amountToReturnOnChannelsWithPhysicsSurface,Z_Param_amountToReturnOnChannelsWithoutThePhysicsSurface,Z_Param_applyOnChannelsWithSamePhysicsParents,Z_Param_applyOnChannelsThatsChildOfPhysicsSurface,Z_Param_applyOnChannelsThatResultsInBlendableSurfaces);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetMeshComponentVertexColorsAtLOD_Wrapper)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_lod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FColor>*)Z_Param__Result=UVertexPaintFunctionLibrary::GetMeshComponentVertexColorsAtLOD_Wrapper(Z_Param_meshComponent,Z_Param_lod);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetMeshComponentAmountOfVerticesOnLOD)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_lod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVertexPaintFunctionLibrary::GetMeshComponentAmountOfVerticesOnLOD(Z_Param_meshComponent,Z_Param_lod);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetMeshComponentVertexColors_Wrapper)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_GET_UBOOL(Z_Param_getColorsForAllLODs);
		P_GET_PROPERTY(FIntProperty,Z_Param_getColorsUpToLOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVertexDetectMeshDataStruct*)Z_Param__Result=UVertexPaintFunctionLibrary::GetMeshComponentVertexColors_Wrapper(Z_Param_meshComponent,Z_Param_Out_success,Z_Param_getColorsForAllLODs,Z_Param_getColorsUpToLOD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetMeshColorSnippetTagInGroup)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FGameplayTag,Z_Param_groupSnippet);
		P_GET_TARRAY(UPrimitiveComponent*,Z_Param_groupSnippetMeshes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=UVertexPaintFunctionLibrary::GetMeshColorSnippetTagInGroup(Z_Param_meshComponent,Z_Param_groupSnippet,Z_Param_groupSnippetMeshes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetAllColorSnippetsUnderGroupSnippetAsString)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupSnippedID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UVertexPaintFunctionLibrary::GetAllColorSnippetsUnderGroupSnippetAsString(Z_Param_WorldContextObject,Z_Param_groupSnippedID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetAllTagsUnderTagCategory)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FGameplayTag,Z_Param_tagCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FGameplayTag>*)Z_Param__Result=UVertexPaintFunctionLibrary::GetAllTagsUnderTagCategory(Z_Param_WorldContextObject,Z_Param_tagCategory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetMeshColorSnippetsTagsInTagCategory_Wrapper)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FGameplayTag,Z_Param_tagCategory);
		P_GET_TMAP_REF(FGameplayTag,TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>,Z_Param_Out_availableColorSnippetTagsAndDataAssetsUnderTagCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::GetMeshColorSnippetsTagsInTagCategory_Wrapper(Z_Param_meshComponent,Z_Param_tagCategory,Z_Param_Out_availableColorSnippetTagsAndDataAssetsUnderTagCategory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FGameplayTag,Z_Param_tagCategory);
		P_GET_TMAP_REF(FGameplayTag,TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>,Z_Param_Out_availableColorSnippetTagsAndDataAssetsUnderTagCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper(Z_Param_meshComponent,Z_Param_tagCategory,Z_Param_Out_availableColorSnippetTagsAndDataAssetsUnderTagCategory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetAllMeshColorSnippetsAsTags_Wrapper)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_TMAP_REF(FGameplayTag,TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>,Z_Param_Out_availableColorSnippetTagsAndDataAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::GetAllMeshColorSnippetsAsTags_Wrapper(Z_Param_meshComponent,Z_Param_Out_availableColorSnippetTagsAndDataAssets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetAllMeshColorSnippetsAsString_Wrapper)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_TMAP_REF(FString,FVertexDetectStoredColorSnippetInfo,Z_Param_Out_availableColorSnippetsAndDataAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::GetAllMeshColorSnippetsAsString_Wrapper(Z_Param_meshComponent,Z_Param_Out_availableColorSnippetsAndDataAssets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetCalculateColorsDetectionTasksAmount_Wrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<UPrimitiveComponent*,int32>*)Z_Param__Result=UVertexPaintFunctionLibrary::GetCalculateColorsDetectionTasksAmount_Wrapper(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetCalculateColorsPaintTasksAmount_Wrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<UPrimitiveComponent*,int32>*)Z_Param__Result=UVertexPaintFunctionLibrary::GetCalculateColorsPaintTasksAmount_Wrapper(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetAmountOfLODsToPaintOn)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComp);
		P_GET_UBOOL(Z_Param_overrideLODToPaintUpOn);
		P_GET_PROPERTY(FIntProperty,Z_Param_overrideUpToLOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVertexPaintFunctionLibrary::GetAmountOfLODsToPaintOn(Z_Param_meshComp,Z_Param_overrideLODToPaintUpOn,Z_Param_overrideUpToLOD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetVertexPaintMaterialDataAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_optionalWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVertexPaintMaterialDataAsset**)Z_Param__Result=UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset(Z_Param_optionalWorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetOptimizationDataAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_optionalWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVertexPaintOptimizationDataAsset**)Z_Param__Result=UVertexPaintFunctionLibrary::GetOptimizationDataAsset(Z_Param_optionalWorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetColorSnippetReferenceDataAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_optionalWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVertexPaintColorSnippetRefs**)Z_Param__Result=UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset(Z_Param_optionalWorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execMultiCapsuleTraceForClosestUniqueMeshes_Wrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_radius);
		P_GET_PROPERTY(FByteProperty,Z_Param_traceChannel);
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_objectTypesToTraceFor);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_actorsToIgnore);
		P_GET_PROPERTY(FByteProperty,Z_Param_drawDebugType);
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_closestHitsWithUniqueMeshes);
		P_GET_PROPERTY(FFloatProperty,Z_Param_debugDrawTime);
		P_GET_UBOOL(Z_Param_ignoreSelf);
		P_GET_UBOOL(Z_Param_traceComplex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::MultiCapsuleTraceForClosestUniqueMeshes_Wrapper(Z_Param_WorldContextObject,Z_Param_location,Z_Param_radius,ETraceTypeQuery(Z_Param_traceChannel),Z_Param_Out_objectTypesToTraceFor,Z_Param_Out_actorsToIgnore,EDrawDebugTrace::Type(Z_Param_drawDebugType),Z_Param_Out_closestHitsWithUniqueMeshes,Z_Param_debugDrawTime,Z_Param_ignoreSelf,Z_Param_traceComplex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execIsWorldValid)
	{
		P_GET_OBJECT(UWorld,Z_Param_world);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVertexPaintFunctionLibrary::IsWorldValid(Z_Param_world);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetPhysicsSurfacesRegisteredToMaterial)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMaterialInterface,Z_Param_material);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TEnumAsByte<EPhysicalSurface> >*)Z_Param__Result=UVertexPaintFunctionLibrary::GetPhysicsSurfacesRegisteredToMaterial(Z_Param_WorldContextObject,Z_Param_material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execSetMeshConstantVertexColorsAndEnablesThem)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_STRUCT(FGeometryScriptColorFlags,Z_Param_Flags);
		P_GET_UBOOL(Z_Param_bClearExisting);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UVertexPaintFunctionLibrary::SetMeshConstantVertexColorsAndEnablesThem(Z_Param_TargetMesh,Z_Param_Color,Z_Param_Flags,Z_Param_bClearExisting,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetAmountOfPaintedColorsForEachChannel)
	{
		P_GET_TARRAY_REF(FColor,Z_Param_Out_vertexColors);
		P_GET_PROPERTY(FFloatProperty,Z_Param_minColorAmountToBeConsidered);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVertexDetectAmountOfPaintedColorsOfEachChannel*)Z_Param__Result=UVertexPaintFunctionLibrary::GetAmountOfPaintedColorsForEachChannel(Z_Param_Out_vertexColors,Z_Param_minColorAmountToBeConsidered);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetAmountOfPaintedColorsForEachChannelAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FColor,Z_Param_Out_vertexColors);
		P_GET_STRUCT_REF(FVertexDetectAmountOfPaintedColorsOfEachChannel,Z_Param_Out_amountOfColorsOfEachChannel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_minColorAmountToBeConsidered);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::GetAmountOfPaintedColorsForEachChannelAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_vertexColors,Z_Param_Out_amountOfColorsOfEachChannel,Z_Param_minColorAmountToBeConsidered);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetColorSnippetVertexColorsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FGameplayTag,Z_Param_colorSnippetTag);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_objectSnippetIsAssociatedWith);
		P_GET_TARRAY_REF(FColor,Z_Param_Out_colorSnippetVertexColors);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::GetColorSnippetVertexColorsAsync(Z_Param_WorldContextObject,Z_Param_colorSnippetTag,Z_Param_LatentInfo,Z_Param_Out_objectSnippetIsAssociatedWith,Z_Param_Out_colorSnippetVertexColors,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execAdjustBoxCollisionToFillAreaBetweenTwoLocations)
	{
		P_GET_OBJECT(UBoxComponent,Z_Param_boxCollision);
		P_GET_STRUCT(FVector,Z_Param_fromLocation);
		P_GET_STRUCT(FVector,Z_Param_toLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_boxThickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::AdjustBoxCollisionToFillAreaBetweenTwoLocations(Z_Param_boxCollision,Z_Param_fromLocation,Z_Param_toLocation,Z_Param_boxThickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execDoesPhysicsSurfaceBelongToPhysicsSurfaceFamily)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FByteProperty,Z_Param_physicsSurface);
		P_GET_PROPERTY(FByteProperty,Z_Param_parentOfPhysicsSurfaceFamily);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVertexPaintFunctionLibrary::DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily(Z_Param_WorldContextObject,EPhysicalSurface(Z_Param_physicsSurface),EPhysicalSurface(Z_Param_parentOfPhysicsSurfaceFamily));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetPhysicsSurfaceFamilies_Wrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<TEnumAsByte<EPhysicalSurface> ,FVertexPaintParentPhysicsSurfaceStruct>*)Z_Param__Result=UVertexPaintFunctionLibrary::GetPhysicsSurfaceFamilies_Wrapper(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetParentsOfPhysicsSurface_Wrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FByteProperty,Z_Param_physicalSurface);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TEnumAsByte<EPhysicalSurface> >*)Z_Param__Result=UVertexPaintFunctionLibrary::GetParentsOfPhysicsSurface_Wrapper(Z_Param_WorldContextObject,EPhysicalSurface(Z_Param_physicalSurface));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execIsMaterialAddedToPaintOnMaterialDataAsset_Wrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UMaterialInterface>,Z_Param_material);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVertexPaintFunctionLibrary::IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper(Z_Param_WorldContextObject,Z_Param_material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetVertexPaintMaterialInterface_Wrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<TSoftObjectPtr<UMaterialInterface> ,FVertexPaintMaterialDataAssetStruct>*)Z_Param__Result=UVertexPaintFunctionLibrary::GetVertexPaintMaterialInterface_Wrapper(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UVertexPaintFunctionLibrary::StaticRegisterNativesUVertexPaintFunctionLibrary()
	{
		UClass* Class = UVertexPaintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustBoxCollisionToFillAreaBetweenTwoLocations", &UVertexPaintFunctionLibrary::execAdjustBoxCollisionToFillAreaBetweenTwoLocations },
			{ "CalcAABBWithoutUniformCheck", &UVertexPaintFunctionLibrary::execCalcAABBWithoutUniformCheck },
			{ "CollisionChannelToObjectType", &UVertexPaintFunctionLibrary::execCollisionChannelToObjectType },
			{ "DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily", &UVertexPaintFunctionLibrary::execDoesPhysicsSurfaceBelongToPhysicsSurfaceFamily },
			{ "DrawPrimitiveComponentBoundsBox", &UVertexPaintFunctionLibrary::execDrawPrimitiveComponentBoundsBox },
			{ "GetAllColorSnippetsUnderGroupSnippetAsString", &UVertexPaintFunctionLibrary::execGetAllColorSnippetsUnderGroupSnippetAsString },
			{ "GetAllMeshColorSnippetsAsString_Wrapper", &UVertexPaintFunctionLibrary::execGetAllMeshColorSnippetsAsString_Wrapper },
			{ "GetAllMeshColorSnippetsAsTags_Wrapper", &UVertexPaintFunctionLibrary::execGetAllMeshColorSnippetsAsTags_Wrapper },
			{ "GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper", &UVertexPaintFunctionLibrary::execGetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper },
			{ "GetAllPhysicsSurfaces", &UVertexPaintFunctionLibrary::execGetAllPhysicsSurfaces },
			{ "GetAllTagsUnderTagCategory", &UVertexPaintFunctionLibrary::execGetAllTagsUnderTagCategory },
			{ "GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper", &UVertexPaintFunctionLibrary::execGetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper },
			{ "GetAmountOfLODsToPaintOn", &UVertexPaintFunctionLibrary::execGetAmountOfLODsToPaintOn },
			{ "GetAmountOfPaintedColorsForEachChannel", &UVertexPaintFunctionLibrary::execGetAmountOfPaintedColorsForEachChannel },
			{ "GetAmountOfPaintedColorsForEachChannelAsync", &UVertexPaintFunctionLibrary::execGetAmountOfPaintedColorsForEachChannelAsync },
			{ "GetCalculateColorsDetectionTasksAmount_Wrapper", &UVertexPaintFunctionLibrary::execGetCalculateColorsDetectionTasksAmount_Wrapper },
			{ "GetCalculateColorsPaintTasksAmount_Wrapper", &UVertexPaintFunctionLibrary::execGetCalculateColorsPaintTasksAmount_Wrapper },
			{ "GetClothAssets", &UVertexPaintFunctionLibrary::execGetClothAssets },
			{ "GetColorSnippetReferenceDataAsset", &UVertexPaintFunctionLibrary::execGetColorSnippetReferenceDataAsset },
			{ "GetColorSnippetVertexColorsAsync", &UVertexPaintFunctionLibrary::execGetColorSnippetVertexColorsAsync },
			{ "GetColorsToApplyFromPhysicsSurface_Wrapper", &UVertexPaintFunctionLibrary::execGetColorsToApplyFromPhysicsSurface_Wrapper },
			{ "GetComponentBoundsBottomWorldZ", &UVertexPaintFunctionLibrary::execGetComponentBoundsBottomWorldZ },
			{ "GetComponentBoundsTopWorldZ", &UVertexPaintFunctionLibrary::execGetComponentBoundsTopWorldZ },
			{ "GetMeshColorSnippetsTagsInTagCategory_Wrapper", &UVertexPaintFunctionLibrary::execGetMeshColorSnippetsTagsInTagCategory_Wrapper },
			{ "GetMeshColorSnippetTagInGroup", &UVertexPaintFunctionLibrary::execGetMeshColorSnippetTagInGroup },
			{ "GetMeshComponentAmountOfVerticesOnLOD", &UVertexPaintFunctionLibrary::execGetMeshComponentAmountOfVerticesOnLOD },
			{ "GetMeshComponentSourceMesh", &UVertexPaintFunctionLibrary::execGetMeshComponentSourceMesh },
			{ "GetMeshComponentVertexColors_Wrapper", &UVertexPaintFunctionLibrary::execGetMeshComponentVertexColors_Wrapper },
			{ "GetMeshComponentVertexColorsAtLOD_Wrapper", &UVertexPaintFunctionLibrary::execGetMeshComponentVertexColorsAtLOD_Wrapper },
			{ "GetOptimizationDataAsset", &UVertexPaintFunctionLibrary::execGetOptimizationDataAsset },
			{ "GetParentsOfPhysicsSurface_Wrapper", &UVertexPaintFunctionLibrary::execGetParentsOfPhysicsSurface_Wrapper },
			{ "GetPhysicalMaterialUsingPhysicsSurface_Wrapper", &UVertexPaintFunctionLibrary::execGetPhysicalMaterialUsingPhysicsSurface_Wrapper },
			{ "GetPhysicsSurfaceFamilies_Wrapper", &UVertexPaintFunctionLibrary::execGetPhysicsSurfaceFamilies_Wrapper },
			{ "GetPhysicsSurfacesRegisteredToMaterial", &UVertexPaintFunctionLibrary::execGetPhysicsSurfacesRegisteredToMaterial },
			{ "GetSubstringAfterLastCharacter", &UVertexPaintFunctionLibrary::execGetSubstringAfterLastCharacter },
			{ "GetTheMostDominantPhysicsSurface_Wrapper", &UVertexPaintFunctionLibrary::execGetTheMostDominantPhysicsSurface_Wrapper },
			{ "GetVertexPaintMaterialDataAsset", &UVertexPaintFunctionLibrary::execGetVertexPaintMaterialDataAsset },
			{ "GetVertexPaintMaterialInterface_Wrapper", &UVertexPaintFunctionLibrary::execGetVertexPaintMaterialInterface_Wrapper },
			{ "IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper", &UVertexPaintFunctionLibrary::execIsMaterialAddedToPaintOnMaterialDataAsset_Wrapper },
			{ "IsPlayInEditor", &UVertexPaintFunctionLibrary::execIsPlayInEditor },
			{ "IsWorldValid", &UVertexPaintFunctionLibrary::execIsWorldValid },
			{ "MultiCapsuleTraceForClosestUniqueMeshes_Wrapper", &UVertexPaintFunctionLibrary::execMultiCapsuleTraceForClosestUniqueMeshes_Wrapper },
			{ "ObjectTypeToCollisionChannel", &UVertexPaintFunctionLibrary::execObjectTypeToCollisionChannel },
			{ "ReliableFColorToFLinearColor", &UVertexPaintFunctionLibrary::execReliableFColorToFLinearColor },
			{ "ReliableFLinearToFColor", &UVertexPaintFunctionLibrary::execReliableFLinearToFColor },
			{ "RemoveComponentFromDetectTaskQueue", &UVertexPaintFunctionLibrary::execRemoveComponentFromDetectTaskQueue },
			{ "RemoveComponentFromPaintTaskQueue", &UVertexPaintFunctionLibrary::execRemoveComponentFromPaintTaskQueue },
			{ "SetChaosClothPhysics", &UVertexPaintFunctionLibrary::execSetChaosClothPhysics },
			{ "SetChaosWheeledVehicleFrictionMultiplier_Wrapper", &UVertexPaintFunctionLibrary::execSetChaosWheeledVehicleFrictionMultiplier_Wrapper },
			{ "SetMeshConstantVertexColorsAndEnablesThem", &UVertexPaintFunctionLibrary::execSetMeshConstantVertexColorsAndEnablesThem },
			{ "SetSkeletalMeshAndReleaseResources", &UVertexPaintFunctionLibrary::execSetSkeletalMeshAndReleaseResources },
			{ "SetStaticMeshAndReleaseResources", &UVertexPaintFunctionLibrary::execSetStaticMeshAndReleaseResources },
			{ "UpdateChaosClothPhysicsWithExistingColors", &UVertexPaintFunctionLibrary::execUpdateChaosClothPhysicsWithExistingColors },
			{ "UpdateChaosClothPhysicsWithExistingColorsAsync", &UVertexPaintFunctionLibrary::execUpdateChaosClothPhysicsWithExistingColorsAsync },
			{ "VertexPaintDetectionPlugin_GetSkeletalMesh", &UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_GetSkeletalMesh },
			{ "VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically", &UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_SortAssetsNamesAlphabetically },
			{ "VertexPaintDetectionPlugin_SortStringArrayAlphabetically", &UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_SortStringArrayAlphabetically },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics
	{
		struct VertexPaintFunctionLibrary_eventAdjustBoxCollisionToFillAreaBetweenTwoLocations_Parms
		{
			UBoxComponent* boxCollision;
			FVector fromLocation;
			FVector toLocation;
			float boxThickness;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boxCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_boxCollision;
		static const UECodeGen_Private::FStructPropertyParams NewProp_fromLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_toLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_boxThickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics::NewProp_boxCollision_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics::NewProp_boxCollision = { "boxCollision", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventAdjustBoxCollisionToFillAreaBetweenTwoLocations_Parms, boxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics::NewProp_boxCollision_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics::NewProp_boxCollision_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics::NewProp_fromLocation = { "fromLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventAdjustBoxCollisionToFillAreaBetweenTwoLocations_Parms, fromLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics::NewProp_toLocation = { "toLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventAdjustBoxCollisionToFillAreaBetweenTwoLocations_Parms, toLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics::NewProp_boxThickness = { "boxThickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventAdjustBoxCollisionToFillAreaBetweenTwoLocations_Parms, boxThickness), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics::NewProp_boxCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics::NewProp_fromLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics::NewProp_toLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics::NewProp_boxThickness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is useful if you're running Paint at Locations with very quick Motions, where the distance between the locations can be greater than the Area of Effect, for example if Painting a Canvas, then you can Fill in the Area between those locations using Paint Within Area and a Box Collision. \nThis Preppes the Box Collision by Moving it in the right location and Adjust the Extent of it to match the Area of Effect/Thickness and the distance between the locations." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "AdjustBoxCollisionToFillAreaBetweenTwoLocations", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics::VertexPaintFunctionLibrary_eventAdjustBoxCollisionToFillAreaBetweenTwoLocations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics::VertexPaintFunctionLibrary_eventAdjustBoxCollisionToFillAreaBetweenTwoLocations_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics
	{
		struct VertexPaintFunctionLibrary_eventCalcAABBWithoutUniformCheck_Parms
		{
			const USkinnedMeshComponent* MeshComponent;
			FTransform LocalToWorld;
			FBox ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalToWorld_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalToWorld;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventCalcAABBWithoutUniformCheck_Parms, MeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::NewProp_MeshComponent_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::NewProp_MeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::NewProp_LocalToWorld_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::NewProp_LocalToWorld = { "LocalToWorld", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventCalcAABBWithoutUniformCheck_Parms, LocalToWorld), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::NewProp_LocalToWorld_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::NewProp_LocalToWorld_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventCalcAABBWithoutUniformCheck_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::NewProp_LocalToWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "DisplayName", "CalcAABBWithoutUniformCheck" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Engines own CalcAABB has a requirement that the scale has to be uniform for some reason, so it doesn't work if for instance the characters scale is 1, 1, 0.5. This is the same logic but without the uniform check, and works as intended with our Paint Within Area checks." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "CalcAABBWithoutUniformCheck", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::VertexPaintFunctionLibrary_eventCalcAABBWithoutUniformCheck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::VertexPaintFunctionLibrary_eventCalcAABBWithoutUniformCheck_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics
	{
		struct VertexPaintFunctionLibrary_eventCollisionChannelToObjectType_Parms
		{
			TEnumAsByte<ECollisionChannel> channel;
			TEnumAsByte<EObjectTypeQuery> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_channel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::NewProp_channel = { "channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventCollisionChannelToObjectType_Parms, channel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 1822723181
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventCollisionChannelToObjectType_Parms, ReturnValue), Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::NewProp_channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "CollisionChannelToObjectType", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::VertexPaintFunctionLibrary_eventCollisionChannelToObjectType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::VertexPaintFunctionLibrary_eventCollisionChannelToObjectType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics
	{
		struct VertexPaintFunctionLibrary_eventDoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Parms
		{
			const UObject* WorldContextObject;
			TEnumAsByte<EPhysicalSurface> physicsSurface;
			TEnumAsByte<EPhysicalSurface> parentOfPhysicsSurfaceFamily;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_physicsSurface;
		static const UECodeGen_Private::FBytePropertyParams NewProp_parentOfPhysicsSurfaceFamily;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventDoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::NewProp_physicsSurface = { "physicsSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventDoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Parms, physicsSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::NewProp_parentOfPhysicsSurfaceFamily = { "parentOfPhysicsSurfaceFamily", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventDoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Parms, parentOfPhysicsSurfaceFamily), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventDoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventDoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::NewProp_physicsSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::NewProp_parentOfPhysicsSurfaceFamily,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if Physics Surface we passes in, has been registered under a physics surface family, or if it is the parent of the family itself." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::VertexPaintFunctionLibrary_eventDoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::VertexPaintFunctionLibrary_eventDoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics
	{
		struct VertexPaintFunctionLibrary_eventDrawPrimitiveComponentBoundsBox_Parms
		{
			UPrimitiveComponent* component;
			float lifetime;
			float thickness;
			FLinearColor colorToDraw;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_component;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lifetime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_thickness;
		static const UECodeGen_Private::FStructPropertyParams NewProp_colorToDraw;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::NewProp_component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::NewProp_component = { "component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventDrawPrimitiveComponentBoundsBox_Parms, component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::NewProp_component_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::NewProp_component_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::NewProp_lifetime = { "lifetime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventDrawPrimitiveComponentBoundsBox_Parms, lifetime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::NewProp_thickness = { "thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventDrawPrimitiveComponentBoundsBox_Parms, thickness), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::NewProp_colorToDraw = { "colorToDraw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventDrawPrimitiveComponentBoundsBox_Parms, colorToDraw), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::NewProp_component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::NewProp_lifetime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::NewProp_thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::NewProp_colorToDraw,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "CPP_Default_colorToDraw", "(R=1.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_lifetime", "5.000000" },
		{ "CPP_Default_thickness", "3.000000" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draws Debug Box of the primitive components Bounds." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "DrawPrimitiveComponentBoundsBox", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::VertexPaintFunctionLibrary_eventDrawPrimitiveComponentBoundsBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::VertexPaintFunctionLibrary_eventDrawPrimitiveComponentBoundsBox_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetAllColorSnippetsUnderGroupSnippetAsString_Parms
		{
			const UObject* WorldContextObject;
			FString groupSnippedID;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_groupSnippedID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllColorSnippetsUnderGroupSnippetAsString_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics::NewProp_groupSnippedID = { "groupSnippedID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllColorSnippetsUnderGroupSnippetAsString_Parms, groupSnippedID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllColorSnippetsUnderGroupSnippetAsString_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics::NewProp_groupSnippedID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Color Snippets" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all Color Snippet under the Tag Group Category. For instance if you have ColorSnippets.Test.TestSnippet1. Then if you run this with Test, then you would get TestSnipped1 and any other under Test.." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetAllColorSnippetsUnderGroupSnippetAsString", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics::VertexPaintFunctionLibrary_eventGetAllColorSnippetsUnderGroupSnippetAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics::VertexPaintFunctionLibrary_eventGetAllColorSnippetsUnderGroupSnippetAsString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsAsString_Wrapper_Parms
		{
			UPrimitiveComponent* meshComponent;
			TMap<FString,FVertexDetectStoredColorSnippetInfo> availableColorSnippetsAndDataAssets;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_availableColorSnippetsAndDataAssets_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_availableColorSnippetsAndDataAssets_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_availableColorSnippetsAndDataAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsAsString_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::NewProp_availableColorSnippetsAndDataAssets_ValueProp = { "availableColorSnippetsAndDataAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVertexDetectStoredColorSnippetInfo, METADATA_PARAMS(0, nullptr) }; // 1190266067
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::NewProp_availableColorSnippetsAndDataAssets_Key_KeyProp = { "availableColorSnippetsAndDataAssets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::NewProp_availableColorSnippetsAndDataAssets = { "availableColorSnippetsAndDataAssets", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsAsString_Wrapper_Parms, availableColorSnippetsAndDataAssets), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1190266067
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::NewProp_availableColorSnippetsAndDataAssets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::NewProp_availableColorSnippetsAndDataAssets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::NewProp_availableColorSnippetsAndDataAssets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Color Snippets" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all the color snippets on a stored mesh and the associated color snippet data asset they are stored on. Can be used if you for example want to get all available snippets of a zombie and randomize which to use when spawning or similar." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetAllMeshColorSnippetsAsString_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsAsString_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsAsString_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsAsTags_Wrapper_Parms
		{
			UPrimitiveComponent* meshComponent;
			TMap<FGameplayTag,TSoftObjectPtr<UVertexPaintColorSnippetDataAsset> > availableColorSnippetTagsAndDataAssets;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_availableColorSnippetTagsAndDataAssets_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_availableColorSnippetTagsAndDataAssets_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_availableColorSnippetTagsAndDataAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsAsTags_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssets_ValueProp = { "availableColorSnippetTagsAndDataAssets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssets_Key_KeyProp = { "availableColorSnippetTagsAndDataAssets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssets = { "availableColorSnippetTagsAndDataAssets", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsAsTags_Wrapper_Parms, availableColorSnippetTagsAndDataAssets), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Color Snippets" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all the color snippets tags on a stored mesh and the associated color snippet data asset they are stored on. Can be used if you for example want to get all available snippets of a zombie and randomize which to use when spawning so you can always spawn a unique one or similar." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetAllMeshColorSnippetsAsTags_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsAsTags_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsAsTags_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Parms
		{
			UPrimitiveComponent* meshComponent;
			FGameplayTag tagCategory;
			TMap<FGameplayTag,TSoftObjectPtr<UVertexPaintColorSnippetDataAsset> > availableColorSnippetTagsAndDataAssetsUnderTagCategory;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_tagCategory;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_tagCategory = { "tagCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Parms, tagCategory), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_ValueProp = { "availableColorSnippetTagsAndDataAssetsUnderTagCategory", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_Key_KeyProp = { "availableColorSnippetTagsAndDataAssetsUnderTagCategory_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory = { "availableColorSnippetTagsAndDataAssetsUnderTagCategory", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Parms, availableColorSnippetTagsAndDataAssetsUnderTagCategory), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_tagCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Color Snippets" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all the color snippets tags on a stored mesh Under a Tag Category, and the associated Color Snippet Data Asset they are stored on. Can be used if you for example want to get All Available Snippets of a Zombie for a Certain Area" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetAllPhysicsSurfaces_Parms
		{
			TArray<TEnumAsByte<EPhysicalSurface> > ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllPhysicsSurfaces_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2508321301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetAllPhysicsSurfaces", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::VertexPaintFunctionLibrary_eventGetAllPhysicsSurfaces_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::VertexPaintFunctionLibrary_eventGetAllPhysicsSurfaces_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetAllTagsUnderTagCategory_Parms
		{
			const UObject* WorldContextObject;
			FGameplayTag tagCategory;
			TArray<FGameplayTag> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_tagCategory;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllTagsUnderTagCategory_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics::NewProp_tagCategory = { "tagCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllTagsUnderTagCategory_Parms, tagCategory), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllTagsUnderTagCategory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics::NewProp_tagCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all Tags under a Tag Category, for instance if you have a Category Zombie.SewerLevel and several tags under SewerLevel, then you will get all of those if you select SewerLevel." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetAllTagsUnderTagCategory", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics::VertexPaintFunctionLibrary_eventGetAllTagsUnderTagCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics::VertexPaintFunctionLibrary_eventGetAllTagsUnderTagCategory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Parms
		{
			const UObject* WorldContextObject;
			UMaterialInterface* material;
			TEnumAsByte<EPhysicalSurface> physicsSurface;
			bool successfull;
			TArray<Enum_SurfaceAtChannel> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_material;
		static const UECodeGen_Private::FBytePropertyParams NewProp_physicsSurface;
		static void NewProp_successfull_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successfull;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Parms, material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_physicsSurface = { "physicsSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Parms, physicsSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_successfull_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventGetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Parms*)Obj)->successfull = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_successfull = { "successfull", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventGetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_successfull_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_SurfaceAtChannel, METADATA_PARAMS(0, nullptr) }; // 226719945
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 226719945
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_physicsSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_successfull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Red, Green, Blue or Alpha Channel that the Physics Surface is registered to in the Editor Widget. Useful if you have a physics surface and you want to know what color channel that you should apply paint on just based on that. It can also return Default if it's set to that (i.e. what is on the material when nothing is on it), but if it can't get the info it will not be successfull." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetAmountOfLODsToPaintOn_Parms
		{
			UPrimitiveComponent* meshComp;
			bool overrideLODToPaintUpOn;
			int32 overrideUpToLOD;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComp;
		static void NewProp_overrideLODToPaintUpOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_overrideLODToPaintUpOn;
		static const UECodeGen_Private::FIntPropertyParams NewProp_overrideUpToLOD;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_meshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_meshComp = { "meshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAmountOfLODsToPaintOn_Parms, meshComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_meshComp_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_meshComp_MetaData) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_overrideLODToPaintUpOn_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventGetAmountOfLODsToPaintOn_Parms*)Obj)->overrideLODToPaintUpOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_overrideLODToPaintUpOn = { "overrideLODToPaintUpOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventGetAmountOfLODsToPaintOn_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_overrideLODToPaintUpOn_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_overrideUpToLOD = { "overrideUpToLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAmountOfLODsToPaintOn_Parms, overrideUpToLOD), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAmountOfLODsToPaintOn_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_meshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_overrideLODToPaintUpOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_overrideUpToLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetAmountOfLODsToPaintOn", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::VertexPaintFunctionLibrary_eventGetAmountOfLODsToPaintOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::VertexPaintFunctionLibrary_eventGetAmountOfLODsToPaintOn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetAmountOfPaintedColorsForEachChannel_Parms
		{
			TArray<FColor> vertexColors;
			float minColorAmountToBeConsidered;
			FVertexDetectAmountOfPaintedColorsOfEachChannel ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vertexColors;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minColorAmountToBeConsidered;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::NewProp_vertexColors_Inner = { "vertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::NewProp_vertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::NewProp_vertexColors = { "vertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAmountOfPaintedColorsForEachChannel_Parms, vertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::NewProp_vertexColors_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::NewProp_vertexColors_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::NewProp_minColorAmountToBeConsidered = { "minColorAmountToBeConsidered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAmountOfPaintedColorsForEachChannel_Parms, minColorAmountToBeConsidered), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAmountOfPaintedColorsForEachChannel_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel, METADATA_PARAMS(0, nullptr) }; // 2121409895
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::NewProp_vertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::NewProp_vertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::NewProp_minColorAmountToBeConsidered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "CPP_Default_minColorAmountToBeConsidered", "0.010000" },
		{ "DisplayName", "Get Amount of Painted Colors for Each Channel" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Amount of vertices with colors above the min amount, gets them in Percent from 0-100, as well as the average color value of the ones above the minimum. Useful if you want to check that you've painted the majority of something. \nNOTE You can get this by running a Paint or Detect Job as well, which is more performant as well since they can run on async thread!" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetAmountOfPaintedColorsForEachChannel", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::VertexPaintFunctionLibrary_eventGetAmountOfPaintedColorsForEachChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::VertexPaintFunctionLibrary_eventGetAmountOfPaintedColorsForEachChannel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetAmountOfPaintedColorsForEachChannelAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FColor> vertexColors;
			FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfColorsOfEachChannel;
			float minColorAmountToBeConsidered;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vertexColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_amountOfColorsOfEachChannel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minColorAmountToBeConsidered;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAmountOfPaintedColorsForEachChannelAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAmountOfPaintedColorsForEachChannelAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::NewProp_vertexColors_Inner = { "vertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::NewProp_vertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::NewProp_vertexColors = { "vertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAmountOfPaintedColorsForEachChannelAsync_Parms, vertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::NewProp_vertexColors_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::NewProp_vertexColors_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::NewProp_amountOfColorsOfEachChannel = { "amountOfColorsOfEachChannel", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAmountOfPaintedColorsForEachChannelAsync_Parms, amountOfColorsOfEachChannel), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel, METADATA_PARAMS(0, nullptr) }; // 2121409895
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::NewProp_minColorAmountToBeConsidered = { "minColorAmountToBeConsidered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAmountOfPaintedColorsForEachChannelAsync_Parms, minColorAmountToBeConsidered), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::NewProp_vertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::NewProp_vertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::NewProp_amountOfColorsOfEachChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::NewProp_minColorAmountToBeConsidered,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "CPP_Default_minColorAmountToBeConsidered", "0.010000" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Recommend Async Version of GetAmountOfPaintedColorsForEachChannelAsync(), which won't affect the FPS if there's alot of vertex colors to Loop Through! Calling it again before it finishes won't do anything. \nGets the Amount of vertices with colors above the min amount, gets them in Percent from 0-100, as well as the average color value of the ones above the minimum. Useful if you want to check that you've painted the majority of something. \nNOTE You can get this by running a Paint or Detect Job as well, but in some cases you may want to just run this, for instance if you've gotten colors of each bone and you want to check the % on just one bone. \nNOTE This does NOT return the amount for each physics surface, since that requires us to loop through the mesh sections etc.. If you want that, then you can simply run GetAllColorsOnly instead where you will get that in it's callback." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetAmountOfPaintedColorsForEachChannelAsync", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::VertexPaintFunctionLibrary_eventGetAmountOfPaintedColorsForEachChannelAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::VertexPaintFunctionLibrary_eventGetAmountOfPaintedColorsForEachChannelAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetCalculateColorsDetectionTasksAmount_Wrapper_Parms
		{
			const UObject* WorldContextObject;
			TMap<UPrimitiveComponent*,int32> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetCalculateColorsDetectionTasksAmount_Wrapper_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetCalculateColorsDetectionTasksAmount_Wrapper_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Amount of Calculate Colors Detection Tasks for Mesh Components in the Queue. Mainly useful to present it on widgets etc." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetCalculateColorsDetectionTasksAmount_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetCalculateColorsDetectionTasksAmount_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetCalculateColorsDetectionTasksAmount_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetCalculateColorsPaintTasksAmount_Wrapper_Parms
		{
			const UObject* WorldContextObject;
			TMap<UPrimitiveComponent*,int32> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetCalculateColorsPaintTasksAmount_Wrapper_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetCalculateColorsPaintTasksAmount_Wrapper_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Amount of Calculate Colors Paint Tasks for Mesh Components in the Queue. Mainly useful to present it on widgets etc." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetCalculateColorsPaintTasksAmount_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetCalculateColorsPaintTasksAmount_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetCalculateColorsPaintTasksAmount_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetClothAssets_Parms
		{
			USkeletalMesh* skeletalMesh;
			TArray<UClothingAssetBase*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::NewProp_skeletalMesh = { "skeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetClothAssets_Parms, skeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClothingAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetClothAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::NewProp_skeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Cloth" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns Skeletal Mesh Cloths if it ha any. Can be used in conjunction with UVertexPaintFunctionLibrary::SetChaosClothPhysics if you want to directly set physics on a cloth. Also useful when implementing interface GetSkeletalMeshClothPhysicsSettings on a BP and has to return physics setting for each Cloth the Mesh has. NOTE Affecting Cloth Physics is a UE5 exclusive feature, and Painting on Skeletal Meshes with Proxy Simulated Cloth is not supported, for example the Wind Walker Echo Character. Only Cloth created the regular way through the editor!" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetClothAssets", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::VertexPaintFunctionLibrary_eventGetClothAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::VertexPaintFunctionLibrary_eventGetClothAssets_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetColorSnippetReferenceDataAsset_Parms
		{
			const UObject* optionalWorldContextObject;
			UVertexPaintColorSnippetRefs* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_optionalWorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_optionalWorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::NewProp_optionalWorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::NewProp_optionalWorldContextObject = { "optionalWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorSnippetReferenceDataAsset_Parms, optionalWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::NewProp_optionalWorldContextObject_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::NewProp_optionalWorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorSnippetReferenceDataAsset_Parms, ReturnValue), Z_Construct_UClass_UVertexPaintColorSnippetRefs_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::NewProp_optionalWorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities|Color Snippets" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If async thread then needs a valid world context object so we can get the cached one from game instance subsystems, otherwise if in game thread it can be null since we can also load it from the settings" },
#endif
		{ "WorldContext", "optionalWorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetColorSnippetReferenceDataAsset", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::VertexPaintFunctionLibrary_eventGetColorSnippetReferenceDataAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::VertexPaintFunctionLibrary_eventGetColorSnippetReferenceDataAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetColorSnippetVertexColorsAsync_Parms
		{
			UObject* WorldContextObject;
			FGameplayTag colorSnippetTag;
			FLatentActionInfo LatentInfo;
			TSoftObjectPtr<UObject> objectSnippetIsAssociatedWith;
			TArray<FColor> colorSnippetVertexColors;
			bool success;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_colorSnippetTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_objectSnippetIsAssociatedWith;
		static const UECodeGen_Private::FStructPropertyParams NewProp_colorSnippetVertexColors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_colorSnippetVertexColors;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorSnippetVertexColorsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::NewProp_colorSnippetTag = { "colorSnippetTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorSnippetVertexColorsAsync_Parms, colorSnippetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorSnippetVertexColorsAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::NewProp_objectSnippetIsAssociatedWith = { "objectSnippetIsAssociatedWith", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorSnippetVertexColorsAsync_Parms, objectSnippetIsAssociatedWith), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::NewProp_colorSnippetVertexColors_Inner = { "colorSnippetVertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::NewProp_colorSnippetVertexColors = { "colorSnippetVertexColors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorSnippetVertexColorsAsync_Parms, colorSnippetVertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::NewProp_success_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventGetColorSnippetVertexColorsAsync_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventGetColorSnippetVertexColorsAsync_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::NewProp_success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::NewProp_colorSnippetTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::NewProp_objectSnippetIsAssociatedWith,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::NewProp_colorSnippetVertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::NewProp_colorSnippetVertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Color Snippets" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter if you just want to get the Vertex Colors of a Color Snippet." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetColorSnippetVertexColorsAsync", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::VertexPaintFunctionLibrary_eventGetColorSnippetVertexColorsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::VertexPaintFunctionLibrary_eventGetColorSnippetVertexColorsAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms
		{
			const UObject* WorldContextObject;
			UMaterialInterface* materialToApplyColorsTo;
			TEnumAsByte<EPhysicalSurface> physicalSurface;
			float redAmountToApply;
			bool redAmountSuccessfullyGot;
			float greenAmountToApply;
			bool greenAmountSuccessfullyGot;
			float blueAmountToApply;
			bool blueAmountSuccessfullyGot;
			float alphaAmountToApply;
			bool alphaAmountSuccessfullyGot;
			bool successfullyGotColorsToApplyOnAChannel;
			float amountToReturnOnChannelsWithPhysicsSurface;
			float amountToReturnOnChannelsWithoutThePhysicsSurface;
			bool applyOnChannelsWithSamePhysicsParents;
			bool applyOnChannelsThatsChildOfPhysicsSurface;
			bool applyOnChannelsThatResultsInBlendableSurfaces;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_materialToApplyColorsTo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_physicalSurface_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_physicalSurface;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_redAmountToApply;
		static void NewProp_redAmountSuccessfullyGot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_redAmountSuccessfullyGot;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_greenAmountToApply;
		static void NewProp_greenAmountSuccessfullyGot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_greenAmountSuccessfullyGot;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_blueAmountToApply;
		static void NewProp_blueAmountSuccessfullyGot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_blueAmountSuccessfullyGot;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_alphaAmountToApply;
		static void NewProp_alphaAmountSuccessfullyGot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_alphaAmountSuccessfullyGot;
		static void NewProp_successfullyGotColorsToApplyOnAChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successfullyGotColorsToApplyOnAChannel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amountToReturnOnChannelsWithPhysicsSurface;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amountToReturnOnChannelsWithoutThePhysicsSurface;
		static void NewProp_applyOnChannelsWithSamePhysicsParents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_applyOnChannelsWithSamePhysicsParents;
		static void NewProp_applyOnChannelsThatsChildOfPhysicsSurface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_applyOnChannelsThatsChildOfPhysicsSurface;
		static void NewProp_applyOnChannelsThatResultsInBlendableSurfaces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_applyOnChannelsThatResultsInBlendableSurfaces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_materialToApplyColorsTo = { "materialToApplyColorsTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms, materialToApplyColorsTo), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_physicalSurface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_physicalSurface = { "physicalSurface", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms, physicalSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_physicalSurface_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_physicalSurface_MetaData) }; // 2508321301
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_redAmountToApply = { "redAmountToApply", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms, redAmountToApply), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_redAmountSuccessfullyGot_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms*)Obj)->redAmountSuccessfullyGot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_redAmountSuccessfullyGot = { "redAmountSuccessfullyGot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_redAmountSuccessfullyGot_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_greenAmountToApply = { "greenAmountToApply", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms, greenAmountToApply), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_greenAmountSuccessfullyGot_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms*)Obj)->greenAmountSuccessfullyGot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_greenAmountSuccessfullyGot = { "greenAmountSuccessfullyGot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_greenAmountSuccessfullyGot_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_blueAmountToApply = { "blueAmountToApply", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms, blueAmountToApply), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_blueAmountSuccessfullyGot_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms*)Obj)->blueAmountSuccessfullyGot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_blueAmountSuccessfullyGot = { "blueAmountSuccessfullyGot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_blueAmountSuccessfullyGot_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_alphaAmountToApply = { "alphaAmountToApply", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms, alphaAmountToApply), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_alphaAmountSuccessfullyGot_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms*)Obj)->alphaAmountSuccessfullyGot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_alphaAmountSuccessfullyGot = { "alphaAmountSuccessfullyGot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_alphaAmountSuccessfullyGot_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_successfullyGotColorsToApplyOnAChannel_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms*)Obj)->successfullyGotColorsToApplyOnAChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_successfullyGotColorsToApplyOnAChannel = { "successfullyGotColorsToApplyOnAChannel", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_successfullyGotColorsToApplyOnAChannel_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_amountToReturnOnChannelsWithPhysicsSurface = { "amountToReturnOnChannelsWithPhysicsSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms, amountToReturnOnChannelsWithPhysicsSurface), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_amountToReturnOnChannelsWithoutThePhysicsSurface = { "amountToReturnOnChannelsWithoutThePhysicsSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms, amountToReturnOnChannelsWithoutThePhysicsSurface), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_applyOnChannelsWithSamePhysicsParents_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms*)Obj)->applyOnChannelsWithSamePhysicsParents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_applyOnChannelsWithSamePhysicsParents = { "applyOnChannelsWithSamePhysicsParents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_applyOnChannelsWithSamePhysicsParents_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_applyOnChannelsThatsChildOfPhysicsSurface_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms*)Obj)->applyOnChannelsThatsChildOfPhysicsSurface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_applyOnChannelsThatsChildOfPhysicsSurface = { "applyOnChannelsThatsChildOfPhysicsSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_applyOnChannelsThatsChildOfPhysicsSurface_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_applyOnChannelsThatResultsInBlendableSurfaces_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms*)Obj)->applyOnChannelsThatResultsInBlendableSurfaces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_applyOnChannelsThatResultsInBlendableSurfaces = { "applyOnChannelsThatResultsInBlendableSurfaces", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_applyOnChannelsThatResultsInBlendableSurfaces_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_materialToApplyColorsTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_physicalSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_redAmountToApply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_redAmountSuccessfullyGot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_greenAmountToApply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_greenAmountSuccessfullyGot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_blueAmountToApply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_blueAmountSuccessfullyGot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_alphaAmountToApply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_alphaAmountSuccessfullyGot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_successfullyGotColorsToApplyOnAChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_amountToReturnOnChannelsWithPhysicsSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_amountToReturnOnChannelsWithoutThePhysicsSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_applyOnChannelsWithSamePhysicsParents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_applyOnChannelsThatsChildOfPhysicsSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::NewProp_applyOnChannelsThatResultsInBlendableSurfaces,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Paint" },
		{ "CPP_Default_amountToReturnOnChannelsWithoutThePhysicsSurface", "0.000000" },
		{ "CPP_Default_amountToReturnOnChannelsWithPhysicsSurface", "0.200000" },
		{ "CPP_Default_applyOnChannelsThatResultsInBlendableSurfaces", "true" },
		{ "CPP_Default_applyOnChannelsThatsChildOfPhysicsSurface", "true" },
		{ "CPP_Default_applyOnChannelsWithSamePhysicsParents", "true" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Vertex Color Amount to Apply on RGBA based off of what Physics Surface is Registered in the Editor Widget for each Channel. It can also checks the Parent Physics Surfaces that's been set in the Editor Widget, so if you for instance use this with Cobble-Sand, which isn't registered, but it's parent Sand is, then it can still accept it and whatever channel it is on. This is useful when you only know a Physical Surface and Material, and want to apply vertex colors to a mesh but are unsure of on which channels. \nIf Failed to get any colors on any channels they will all return 0. If Success on at least one channel, then channels that didn't have the surface registered can return something different." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetColorsToApplyFromPhysicsSurface_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsSurface_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsBottomWorldZ_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetComponentBoundsBottomWorldZ_Parms
		{
			UPrimitiveComponent* component;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_component;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsBottomWorldZ_Statics::NewProp_component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsBottomWorldZ_Statics::NewProp_component = { "component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetComponentBoundsBottomWorldZ_Parms, component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsBottomWorldZ_Statics::NewProp_component_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsBottomWorldZ_Statics::NewProp_component_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsBottomWorldZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetComponentBoundsBottomWorldZ_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsBottomWorldZ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsBottomWorldZ_Statics::NewProp_component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsBottomWorldZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsBottomWorldZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a Box, Sphere, Static or Skeletal Mesh's Component Bounds Bottom World Z." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsBottomWorldZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetComponentBoundsBottomWorldZ", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsBottomWorldZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsBottomWorldZ_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsBottomWorldZ_Statics::VertexPaintFunctionLibrary_eventGetComponentBoundsBottomWorldZ_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsBottomWorldZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsBottomWorldZ_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsBottomWorldZ_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsBottomWorldZ_Statics::VertexPaintFunctionLibrary_eventGetComponentBoundsBottomWorldZ_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsBottomWorldZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsBottomWorldZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsTopWorldZ_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetComponentBoundsTopWorldZ_Parms
		{
			UPrimitiveComponent* component;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_component;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsTopWorldZ_Statics::NewProp_component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsTopWorldZ_Statics::NewProp_component = { "component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetComponentBoundsTopWorldZ_Parms, component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsTopWorldZ_Statics::NewProp_component_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsTopWorldZ_Statics::NewProp_component_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsTopWorldZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetComponentBoundsTopWorldZ_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsTopWorldZ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsTopWorldZ_Statics::NewProp_component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsTopWorldZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsTopWorldZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a Box, Sphere, Static or Skeletal Mesh's Component Bounds Top World Z." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsTopWorldZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetComponentBoundsTopWorldZ", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsTopWorldZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsTopWorldZ_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsTopWorldZ_Statics::VertexPaintFunctionLibrary_eventGetComponentBoundsTopWorldZ_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsTopWorldZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsTopWorldZ_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsTopWorldZ_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsTopWorldZ_Statics::VertexPaintFunctionLibrary_eventGetComponentBoundsTopWorldZ_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsTopWorldZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsTopWorldZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetMeshColorSnippetsTagsInTagCategory_Wrapper_Parms
		{
			UPrimitiveComponent* meshComponent;
			FGameplayTag tagCategory;
			TMap<FGameplayTag,TSoftObjectPtr<UVertexPaintColorSnippetDataAsset> > availableColorSnippetTagsAndDataAssetsUnderTagCategory;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_tagCategory;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshColorSnippetsTagsInTagCategory_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_tagCategory = { "tagCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshColorSnippetsTagsInTagCategory_Wrapper_Parms, tagCategory), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_ValueProp = { "availableColorSnippetTagsAndDataAssetsUnderTagCategory", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_Key_KeyProp = { "availableColorSnippetTagsAndDataAssetsUnderTagCategory_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory = { "availableColorSnippetTagsAndDataAssetsUnderTagCategory", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshColorSnippetsTagsInTagCategory_Wrapper_Parms, availableColorSnippetTagsAndDataAssetsUnderTagCategory), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_tagCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Color Snippets" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all the color snippets tags on a stored mesh In a Tag Category, i.e. the direct children of the category and not tags under those, and the associated Color Snippet Data Asset they are stored on. \nFor instance if you have Enemy tags like ColorSnippet.Zombie, ColorSnippet.Zombie.Bloody, ColorSnippet.Zombie.Sewers.Filthy. If you would then run this with ColorSnippet.Zombie, you would get ColorSnippet.Zombie.Bloody and others directly under ColorSnippet.Zombie., and not .Sewers.Filthy." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetMeshColorSnippetsTagsInTagCategory_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetMeshColorSnippetsTagsInTagCategory_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetMeshColorSnippetsTagsInTagCategory_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetMeshColorSnippetTagInGroup_Parms
		{
			UPrimitiveComponent* meshComponent;
			FGameplayTag groupSnippet;
			TArray<UPrimitiveComponent*> groupSnippetMeshes;
			FGameplayTag ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_groupSnippet;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_groupSnippetMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_groupSnippetMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_groupSnippetMeshes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshColorSnippetTagInGroup_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::NewProp_groupSnippet = { "groupSnippet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshColorSnippetTagInGroup_Parms, groupSnippet), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::NewProp_groupSnippetMeshes_Inner = { "groupSnippetMeshes", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::NewProp_groupSnippetMeshes_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::NewProp_groupSnippetMeshes = { "groupSnippetMeshes", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshColorSnippetTagInGroup_Parms, groupSnippetMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::NewProp_groupSnippetMeshes_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::NewProp_groupSnippetMeshes_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshColorSnippetTagInGroup_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::NewProp_groupSnippet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::NewProp_groupSnippetMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::NewProp_groupSnippetMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Color Snippets" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds the Mesh's Specific Child Tag from the Group Snippet, if the Mesh has correct source mesh, relative location and rotation to the group so we can find it. Requires us to send in all of the Group Snippet Meshes so we can accurately get the Tag for the specific meshComponent." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetMeshColorSnippetTagInGroup", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::VertexPaintFunctionLibrary_eventGetMeshColorSnippetTagInGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::VertexPaintFunctionLibrary_eventGetMeshColorSnippetTagInGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetMeshComponentAmountOfVerticesOnLOD_Parms
		{
			UPrimitiveComponent* meshComponent;
			int32 lod;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_lod;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshComponentAmountOfVerticesOnLOD_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD_Statics::NewProp_lod = { "lod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshComponentAmountOfVerticesOnLOD_Parms, lod), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshComponentAmountOfVerticesOnLOD_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD_Statics::NewProp_lod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "CPP_Default_lod", "0" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Amount of Vertices on LOD0 for the Mesh." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetMeshComponentAmountOfVerticesOnLOD", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD_Statics::VertexPaintFunctionLibrary_eventGetMeshComponentAmountOfVerticesOnLOD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD_Statics::VertexPaintFunctionLibrary_eventGetMeshComponentAmountOfVerticesOnLOD_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetMeshComponentSourceMesh_Parms
		{
			UPrimitiveComponent* meshComponent;
			const UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshComponentSourceMesh_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh_Statics::NewProp_meshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshComponentSourceMesh_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetMeshComponentSourceMesh", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh_Statics::VertexPaintFunctionLibrary_eventGetMeshComponentSourceMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh_Statics::VertexPaintFunctionLibrary_eventGetMeshComponentSourceMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetMeshComponentVertexColors_Wrapper_Parms
		{
			UPrimitiveComponent* meshComponent;
			bool success;
			bool getColorsForAllLODs;
			int32 getColorsUpToLOD;
			FVertexDetectMeshDataStruct ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static void NewProp_getColorsForAllLODs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_getColorsForAllLODs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_getColorsUpToLOD;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshComponentVertexColors_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_meshComponent_MetaData) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_success_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventGetMeshComponentVertexColors_Wrapper_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventGetMeshComponentVertexColors_Wrapper_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_success_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_getColorsForAllLODs_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventGetMeshComponentVertexColors_Wrapper_Parms*)Obj)->getColorsForAllLODs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_getColorsForAllLODs = { "getColorsForAllLODs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventGetMeshComponentVertexColors_Wrapper_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_getColorsForAllLODs_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_getColorsUpToLOD = { "getColorsUpToLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshComponentVertexColors_Wrapper_Parms, getColorsUpToLOD), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshComponentVertexColors_Wrapper_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct, METADATA_PARAMS(0, nullptr) }; // 674529102
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_getColorsForAllLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_getColorsUpToLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "CPP_Default_getColorsUpToLOD", "0" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the colors of the component either for All LODs if that is True, or up to a specified LOD. You can use GetAllVertexColorsOnly if you want to be more specific in what you get, for instance get the colors of each bones etc." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetMeshComponentVertexColors_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetMeshComponentVertexColors_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetMeshComponentVertexColors_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetMeshComponentVertexColorsAtLOD_Wrapper_Parms
		{
			UPrimitiveComponent* meshComponent;
			int32 lod;
			TArray<FColor> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_lod;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshComponentVertexColorsAtLOD_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics::NewProp_lod = { "lod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshComponentVertexColorsAtLOD_Wrapper_Parms, lod), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshComponentVertexColorsAtLOD_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics::NewProp_lod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "CPP_Default_lod", "0" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the colors of the component at Specified LOD, if it exist." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetMeshComponentVertexColorsAtLOD_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetMeshComponentVertexColorsAtLOD_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetMeshComponentVertexColorsAtLOD_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetOptimizationDataAsset_Parms
		{
			const UObject* optionalWorldContextObject;
			UVertexPaintOptimizationDataAsset* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_optionalWorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_optionalWorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::NewProp_optionalWorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::NewProp_optionalWorldContextObject = { "optionalWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetOptimizationDataAsset_Parms, optionalWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::NewProp_optionalWorldContextObject_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::NewProp_optionalWorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetOptimizationDataAsset_Parms, ReturnValue), Z_Construct_UClass_UVertexPaintOptimizationDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::NewProp_optionalWorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If async thread then needs a valid world context object so we can get the cached one from game instance subsystems, otherwise if in game thread it can be null since we can also load it from the settings" },
#endif
		{ "WorldContext", "optionalWorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetOptimizationDataAsset", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::VertexPaintFunctionLibrary_eventGetOptimizationDataAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::VertexPaintFunctionLibrary_eventGetOptimizationDataAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetParentsOfPhysicsSurface_Wrapper_Parms
		{
			const UObject* WorldContextObject;
			TEnumAsByte<EPhysicalSurface> physicalSurface;
			TArray<TEnumAsByte<EPhysicalSurface> > ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_physicalSurface;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetParentsOfPhysicsSurface_Wrapper_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics::NewProp_physicalSurface = { "physicalSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetParentsOfPhysicsSurface_Wrapper_Parms, physicalSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetParentsOfPhysicsSurface_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2508321301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics::NewProp_physicalSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Material" },
		{ "DisplayName", "Get Parents Of Physics Surface" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if physicalSurface is either a Parent itself, or a Child of a Family of Physics Surfaces. physicalSurface to check can't be Default." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetParentsOfPhysicsSurface_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetParentsOfPhysicsSurface_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetParentsOfPhysicsSurface_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetPhysicalMaterialUsingPhysicsSurface_Wrapper_Parms
		{
			const UObject* WorldContextObject;
			TSubclassOf<UPhysicalMaterial>  physicalMaterialClass;
			TEnumAsByte<EPhysicalSurface> physicsSurface;
			UPhysicalMaterial* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_physicalMaterialClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_physicsSurface;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetPhysicalMaterialUsingPhysicsSurface_Wrapper_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::NewProp_physicalMaterialClass = { "physicalMaterialClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetPhysicalMaterialUsingPhysicsSurface_Wrapper_Parms, physicalMaterialClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::NewProp_physicsSurface = { "physicsSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetPhysicalMaterialUsingPhysicsSurface_Wrapper_Parms, physicsSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetPhysicalMaterialUsingPhysicsSurface_Wrapper_Parms, ReturnValue), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::NewProp_physicalMaterialClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::NewProp_physicsSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "DeterminesOutputType", "physicalMaterialClass" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if any of the Cached Physical Materials Assets in the Game Instance Subsystem uses the physics surface we pass through as paramater here, then returns the one it finds. We cache all of them since it's very expensive to run GetAssetsOfClass. \nIf PhysicsMaterialClasses is set to be something other than the Base PhysicsMaterialClass, like a custom class, then we will make a check to make sure it is that class. \nMake sure only one physics material uses a physics surface, otherwise you might get the wrong physics material. \nAlso make sure that you add the folder that has all the physics materials to Additional Directories to be Cooked in the Project Settings, in case there's a risk any of them isn't referenced by anything and won't get cooked, but has a physics surface that is registered in the editor widget." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetPhysicalMaterialUsingPhysicsSurface_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetPhysicalMaterialUsingPhysicsSurface_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetPhysicalMaterialUsingPhysicsSurface_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetPhysicsSurfaceFamilies_Wrapper_Parms
		{
			const UObject* WorldContextObject;
			TMap<TEnumAsByte<EPhysicalSurface> ,FVertexPaintParentPhysicsSurfaceStruct> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetPhysicsSurfaceFamilies_Wrapper_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVertexPaintParentPhysicsSurfaceStruct, METADATA_PARAMS(0, nullptr) }; // 3835105565
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetPhysicsSurfaceFamilies_Wrapper_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2508321301 3835105565
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Material" },
		{ "DisplayName", "Get Physics Surface Families" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Physics Surfaces Family Tree, the Parents and which children that 'inherit' from them." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetPhysicsSurfaceFamilies_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetPhysicsSurfaceFamilies_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetPhysicsSurfaceFamilies_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetPhysicsSurfacesRegisteredToMaterial_Parms
		{
			const UObject* WorldContextObject;
			UMaterialInterface* material;
			TArray<TEnumAsByte<EPhysicalSurface> > ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_material;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetPhysicsSurfacesRegisteredToMaterial_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetPhysicsSurfacesRegisteredToMaterial_Parms, material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetPhysicsSurfacesRegisteredToMaterial_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2508321301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics::NewProp_material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets All Physics Surfaces that are Registered to the Material, or it's Parent Material if it's an instance that isn't registered but the Parent is." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetPhysicsSurfacesRegisteredToMaterial", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics::VertexPaintFunctionLibrary_eventGetPhysicsSurfacesRegisteredToMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics::VertexPaintFunctionLibrary_eventGetPhysicsSurfacesRegisteredToMaterial_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetSubstringAfterLastCharacter_Parms
		{
			FString string;
			FString character;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_string_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_string;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_character_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_character;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::NewProp_string_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::NewProp_string = { "string", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetSubstringAfterLastCharacter_Parms, string), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::NewProp_string_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::NewProp_string_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::NewProp_character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetSubstringAfterLastCharacter_Parms, character), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::NewProp_character_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::NewProp_character_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetSubstringAfterLastCharacter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::NewProp_string,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::NewProp_character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetSubstringAfterLastCharacter", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::VertexPaintFunctionLibrary_eventGetSubstringAfterLastCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::VertexPaintFunctionLibrary_eventGetSubstringAfterLastCharacter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetTheMostDominantPhysicsSurface_Wrapper_Parms
		{
			const UObject* WorldContextObject;
			UMaterialInterface* optionalMaterialPhysicsSurfaceWasDetectedOn;
			TArray<TEnumAsByte<EPhysicalSurface> > physicsSurfaces;
			TArray<float> physicsSurfaceValues;
			TEnumAsByte<EPhysicalSurface> mostDominantPhysicsSurfaceFromArray;
			float mostDominantPhysicsSurfaceColorValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_optionalMaterialPhysicsSurfaceWasDetectedOn;
		static const UECodeGen_Private::FBytePropertyParams NewProp_physicsSurfaces_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_physicsSurfaces;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_physicsSurfaceValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_physicsSurfaceValues;
		static const UECodeGen_Private::FBytePropertyParams NewProp_mostDominantPhysicsSurfaceFromArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mostDominantPhysicsSurfaceColorValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetTheMostDominantPhysicsSurface_Wrapper_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_optionalMaterialPhysicsSurfaceWasDetectedOn = { "optionalMaterialPhysicsSurfaceWasDetectedOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetTheMostDominantPhysicsSurface_Wrapper_Parms, optionalMaterialPhysicsSurfaceWasDetectedOn), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_physicsSurfaces_Inner = { "physicsSurfaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_physicsSurfaces = { "physicsSurfaces", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetTheMostDominantPhysicsSurface_Wrapper_Parms, physicsSurfaces), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2508321301
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_physicsSurfaceValues_Inner = { "physicsSurfaceValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_physicsSurfaceValues = { "physicsSurfaceValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetTheMostDominantPhysicsSurface_Wrapper_Parms, physicsSurfaceValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_mostDominantPhysicsSurfaceFromArray = { "mostDominantPhysicsSurfaceFromArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetTheMostDominantPhysicsSurface_Wrapper_Parms, mostDominantPhysicsSurfaceFromArray), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_mostDominantPhysicsSurfaceColorValue = { "mostDominantPhysicsSurfaceColorValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetTheMostDominantPhysicsSurface_Wrapper_Parms, mostDominantPhysicsSurfaceColorValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventGetTheMostDominantPhysicsSurface_Wrapper_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventGetTheMostDominantPhysicsSurface_Wrapper_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_optionalMaterialPhysicsSurfaceWasDetectedOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_physicsSurfaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_physicsSurfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_physicsSurfaceValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_physicsSurfaceValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_mostDominantPhysicsSurfaceFromArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_mostDominantPhysicsSurfaceColorValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "optionalMaterialPhysicsSurfaceWasDetectedOn is used to check if the surfaces can blend  This will get loop through and get the Most Dominant Surface from the Physics Surface Array, so it and the physics Sruface Color Value array has to be in sync. This combines well with the Physics Result Structs you get from GetClosestVertexData or PaintAtLocation Callback Events. \nIf you provide the Material that the physics surfaces was on, it will also check the Blendable Surfaces that has been Registered in the Editor Widget, and check if any sent in here can Blend and become another Surface, if so, that surface could be the Most dominant one. For example if Red Channel is Sand, Blue Channel is Puddle, they can be set to blend into Mud in the Editor Widget. \n\nThis is very useful when you want to run SFX or VFX based on detected surfaces." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetTheMostDominantPhysicsSurface_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetTheMostDominantPhysicsSurface_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetTheMostDominantPhysicsSurface_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetVertexPaintMaterialDataAsset_Parms
		{
			const UObject* optionalWorldContextObject;
			UVertexPaintMaterialDataAsset* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_optionalWorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_optionalWorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::NewProp_optionalWorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::NewProp_optionalWorldContextObject = { "optionalWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetVertexPaintMaterialDataAsset_Parms, optionalWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::NewProp_optionalWorldContextObject_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::NewProp_optionalWorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetVertexPaintMaterialDataAsset_Parms, ReturnValue), Z_Construct_UClass_UVertexPaintMaterialDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::NewProp_optionalWorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If async thread then needs a valid world context object so we can get the cached one from game instance subsystems, otherwise if in game thread it can be null since we can also load it from the settings" },
#endif
		{ "WorldContext", "optionalWorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetVertexPaintMaterialDataAsset", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::VertexPaintFunctionLibrary_eventGetVertexPaintMaterialDataAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::VertexPaintFunctionLibrary_eventGetVertexPaintMaterialDataAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetVertexPaintMaterialInterface_Wrapper_Parms
		{
			const UObject* WorldContextObject;
			TMap<TSoftObjectPtr<UMaterialInterface> ,FVertexPaintMaterialDataAssetStruct> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetVertexPaintMaterialInterface_Wrapper_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct, METADATA_PARAMS(0, nullptr) }; // 3512115456
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetVertexPaintMaterialInterface_Wrapper_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3512115456
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Material" },
		{ "DisplayName", "Get Vertex Paint Material Interface" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets All Physics Surfaces that are Registered to the Material, or it's Parent Material if it's an instance that isn't registered but the Parent is." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetVertexPaintMaterialInterface_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetVertexPaintMaterialInterface_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetVertexPaintMaterialInterface_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventIsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Parms
		{
			const UObject* WorldContextObject;
			TSoftObjectPtr<UMaterialInterface> material;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_material;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventIsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventIsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Parms, material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventIsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventIsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics::NewProp_material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Material" },
		{ "DisplayName", "Is Material Added To Paint On Material Data Asset" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the Material is added in the paint on material TMap. Soft UMaterialInterface Ptr so it can be used with UMaterialInterface directly gotten from GetSoftPointerObjectsOfClass without resolving and casting, i.e. bringing them into memory." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics::VertexPaintFunctionLibrary_eventIsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics::VertexPaintFunctionLibrary_eventIsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor_Statics
	{
		struct VertexPaintFunctionLibrary_eventIsPlayInEditor_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventIsPlayInEditor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor_Statics::NewProp_WorldContextObject_MetaData) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventIsPlayInEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventIsPlayInEditor_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "IsPlayInEditor", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor_Statics::VertexPaintFunctionLibrary_eventIsPlayInEditor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor_Statics::VertexPaintFunctionLibrary_eventIsPlayInEditor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics
	{
		struct VertexPaintFunctionLibrary_eventIsWorldValid_Parms
		{
			UWorld* world;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_world;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::NewProp_world = { "world", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventIsWorldValid_Parms, world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventIsWorldValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventIsWorldValid_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::NewProp_world,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the world is valid, that it is a game world and is not being teared down." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "IsWorldValid", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::VertexPaintFunctionLibrary_eventIsWorldValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::VertexPaintFunctionLibrary_eventIsWorldValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventMultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Parms
		{
			const UObject* WorldContextObject;
			FVector location;
			float radius;
			TEnumAsByte<ETraceTypeQuery> traceChannel;
			TArray<TEnumAsByte<EObjectTypeQuery> > objectTypesToTraceFor;
			TArray<AActor*> actorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> drawDebugType;
			TArray<FHitResult> closestHitsWithUniqueMeshes;
			float debugDrawTime;
			bool ignoreSelf;
			bool traceComplex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_location;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_traceChannel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_objectTypesToTraceFor_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_objectTypesToTraceFor_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_objectTypesToTraceFor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_actorsToIgnore;
		static const UECodeGen_Private::FBytePropertyParams NewProp_drawDebugType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_closestHitsWithUniqueMeshes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_closestHitsWithUniqueMeshes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_debugDrawTime;
		static void NewProp_ignoreSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ignoreSelf;
		static void NewProp_traceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_traceComplex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventMultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventMultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventMultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Parms, radius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_traceChannel = { "traceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventMultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Parms, traceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(0, nullptr) }; // 2725057287
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_objectTypesToTraceFor_Inner = { "objectTypesToTraceFor", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_objectTypesToTraceFor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_objectTypesToTraceFor = { "objectTypesToTraceFor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventMultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Parms, objectTypesToTraceFor), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_objectTypesToTraceFor_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_objectTypesToTraceFor_MetaData) }; // 3930035403
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_actorsToIgnore_Inner = { "actorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_actorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_actorsToIgnore = { "actorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventMultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Parms, actorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_actorsToIgnore_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_actorsToIgnore_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_drawDebugType = { "drawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventMultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Parms, drawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(0, nullptr) }; // 739760662
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_closestHitsWithUniqueMeshes_Inner = { "closestHitsWithUniqueMeshes", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 1891709922
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_closestHitsWithUniqueMeshes = { "closestHitsWithUniqueMeshes", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventMultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Parms, closestHitsWithUniqueMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1891709922
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_debugDrawTime = { "debugDrawTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventMultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Parms, debugDrawTime), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_ignoreSelf_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventMultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Parms*)Obj)->ignoreSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_ignoreSelf = { "ignoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventMultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_ignoreSelf_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_traceComplex_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventMultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Parms*)Obj)->traceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_traceComplex = { "traceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventMultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_traceComplex_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_traceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_objectTypesToTraceFor_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_objectTypesToTraceFor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_actorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_actorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_drawDebugType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_closestHitsWithUniqueMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_closestHitsWithUniqueMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_debugDrawTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_ignoreSelf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::NewProp_traceComplex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "actorsToIgnore, objectTypesToTraceFor" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Paint" },
		{ "CPP_Default_debugDrawTime", "2.000000" },
		{ "CPP_Default_ignoreSelf", "true" },
		{ "CPP_Default_traceComplex", "false" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function Multi Capsule Traces for Meshes Within the Radius, and make sure we get only get the Closest Hit of each Mesh. So the Hit Array that it returns is essentially ready to be used with Paint at Location on the Meshes using Hit Location. Use the hitResults .hitLocation to get location of the Trace, or .impactPoint to get the hit location on the mesh.  \nIf objectTypesToTraceFor is > 0 then we will trace with that, otherwise use the traceChannel. \nThis is very useful since we can paint on Multiple Meshes, but without any visible Seams between for instance Floors! \n\nNOTE If UE5 and TraceComplex is True then we can get the faceIndex and thus the Material if it's a Static Mesh Component. However, with Trace Complex you may need to set Static Meshes Double Geometry to True if it's something simple like a Floor, otherwise it can fail the mesh is not rotated just right." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "MultiCapsuleTraceForClosestUniqueMeshes_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::VertexPaintFunctionLibrary_eventMultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::VertexPaintFunctionLibrary_eventMultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics
	{
		struct VertexPaintFunctionLibrary_eventObjectTypeToCollisionChannel_Parms
		{
			TEnumAsByte<EObjectTypeQuery> object;
			TEnumAsByte<ECollisionChannel> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_object;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::NewProp_object = { "object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventObjectTypeToCollisionChannel_Parms, object), Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventObjectTypeToCollisionChannel_Parms, ReturnValue), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 1822723181
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::NewProp_object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "ObjectTypeToCollisionChannel", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::VertexPaintFunctionLibrary_eventObjectTypeToCollisionChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::VertexPaintFunctionLibrary_eventObjectTypeToCollisionChannel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFColorToFLinearColor_Statics
	{
		struct VertexPaintFunctionLibrary_eventReliableFColorToFLinearColor_Parms
		{
			FColor color;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_color;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFColorToFLinearColor_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventReliableFColorToFLinearColor_Parms, color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFColorToFLinearColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventReliableFColorToFLinearColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFColorToFLinearColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFColorToFLinearColor_Statics::NewProp_color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFColorToFLinearColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFColorToFLinearColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Engines own ToFColor and ToFLinear functions isn't 100%, i've had issues where it hadn't returned the correct amount, for instance a FColor Red channel that was 191, which should convert to 0.75 but got converted to 0.5 etc. So made own wrappers for Linear to FColor and vice versa." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFColorToFLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "ReliableFColorToFLinearColor", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFColorToFLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFColorToFLinearColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFColorToFLinearColor_Statics::VertexPaintFunctionLibrary_eventReliableFColorToFLinearColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFColorToFLinearColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFColorToFLinearColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFColorToFLinearColor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFColorToFLinearColor_Statics::VertexPaintFunctionLibrary_eventReliableFColorToFLinearColor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFColorToFLinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFColorToFLinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFLinearToFColor_Statics
	{
		struct VertexPaintFunctionLibrary_eventReliableFLinearToFColor_Parms
		{
			FLinearColor linearColor;
			FColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_linearColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFLinearToFColor_Statics::NewProp_linearColor = { "linearColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventReliableFLinearToFColor_Parms, linearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFLinearToFColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventReliableFLinearToFColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFLinearToFColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFLinearToFColor_Statics::NewProp_linearColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFLinearToFColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFLinearToFColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Engines own ToFColor and ToFLinear functions isn't 100%, i've had issues where it hadn't returned the correct amount, for instance a FColor Red channel that was 191, which should convert to 0.75 but got converted to 0.5 etc. So made own wrappers for Linear to FColor and vice versa." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFLinearToFColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "ReliableFLinearToFColor", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFLinearToFColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFLinearToFColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFLinearToFColor_Statics::VertexPaintFunctionLibrary_eventReliableFLinearToFColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFLinearToFColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFLinearToFColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFLinearToFColor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFLinearToFColor_Statics::VertexPaintFunctionLibrary_eventReliableFLinearToFColor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFLinearToFColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFLinearToFColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromDetectTaskQueue_Statics
	{
		struct VertexPaintFunctionLibrary_eventRemoveComponentFromDetectTaskQueue_Parms
		{
			UPrimitiveComponent* component;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_component;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromDetectTaskQueue_Statics::NewProp_component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromDetectTaskQueue_Statics::NewProp_component = { "component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventRemoveComponentFromDetectTaskQueue_Parms, component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromDetectTaskQueue_Statics::NewProp_component_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromDetectTaskQueue_Statics::NewProp_component_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromDetectTaskQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromDetectTaskQueue_Statics::NewProp_component,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromDetectTaskQueue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromDetectTaskQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "RemoveComponentFromDetectTaskQueue", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromDetectTaskQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromDetectTaskQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromDetectTaskQueue_Statics::VertexPaintFunctionLibrary_eventRemoveComponentFromDetectTaskQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromDetectTaskQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromDetectTaskQueue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromDetectTaskQueue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromDetectTaskQueue_Statics::VertexPaintFunctionLibrary_eventRemoveComponentFromDetectTaskQueue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromDetectTaskQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromDetectTaskQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromPaintTaskQueue_Statics
	{
		struct VertexPaintFunctionLibrary_eventRemoveComponentFromPaintTaskQueue_Parms
		{
			UPrimitiveComponent* component;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_component;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromPaintTaskQueue_Statics::NewProp_component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromPaintTaskQueue_Statics::NewProp_component = { "component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventRemoveComponentFromPaintTaskQueue_Parms, component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromPaintTaskQueue_Statics::NewProp_component_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromPaintTaskQueue_Statics::NewProp_component_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromPaintTaskQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromPaintTaskQueue_Statics::NewProp_component,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromPaintTaskQueue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromPaintTaskQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "RemoveComponentFromPaintTaskQueue", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromPaintTaskQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromPaintTaskQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromPaintTaskQueue_Statics::VertexPaintFunctionLibrary_eventRemoveComponentFromPaintTaskQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromPaintTaskQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromPaintTaskQueue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromPaintTaskQueue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromPaintTaskQueue_Statics::VertexPaintFunctionLibrary_eventRemoveComponentFromPaintTaskQueue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromPaintTaskQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromPaintTaskQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics
	{
		struct VertexPaintFunctionLibrary_eventSetChaosClothPhysics_Parms
		{
			USkeletalMeshComponent* skeletalMeshComponent;
			UClothingAssetBase* clothingAsset;
			FVertexDetectChaosClothPhysicsSettings clothPhysicsSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_clothingAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothPhysicsSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothPhysicsSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_skeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_skeletalMeshComponent = { "skeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetChaosClothPhysics_Parms, skeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_skeletalMeshComponent_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_skeletalMeshComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_clothingAsset = { "clothingAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetChaosClothPhysics_Parms, clothingAsset), Z_Construct_UClass_UClothingAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_clothPhysicsSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_clothPhysicsSettings = { "clothPhysicsSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetChaosClothPhysics_Parms, clothPhysicsSettings), Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_clothPhysicsSettings_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_clothPhysicsSettings_MetaData) }; // 3419080287
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_skeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_clothingAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_clothPhysicsSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Cloth" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Cloth Physics on the Cloth sent in for the Skeletal Mesh. Can use UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_GetClothingAssets() to get a Skeletal Meshes Clothing Assets in the order they're set in the Skeletal Mesh, so you have to be aware of which cloth is at which index. \nNOTE Affecting Cloth Physics is a UE5 exclusive feature, and Painting on Skeletal Meshes with Proxy Simulated Cloth might not be supported, for example the Wind Walker Echo Character. Only Cloth created the regular way through the editor is Supported!" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "SetChaosClothPhysics", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::VertexPaintFunctionLibrary_eventSetChaosClothPhysics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::VertexPaintFunctionLibrary_eventSetChaosClothPhysics_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventSetChaosWheeledVehicleFrictionMultiplier_Wrapper_Parms
		{
			UChaosWheeledVehicleMovementComponent* chaosWheeledVehicleMovementComponent;
			int32 wheelIndex;
			float friction;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chaosWheeledVehicleMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_chaosWheeledVehicleMovementComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_wheelIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_friction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::NewProp_chaosWheeledVehicleMovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::NewProp_chaosWheeledVehicleMovementComponent = { "chaosWheeledVehicleMovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetChaosWheeledVehicleFrictionMultiplier_Wrapper_Parms, chaosWheeledVehicleMovementComponent), Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::NewProp_chaosWheeledVehicleMovementComponent_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::NewProp_chaosWheeledVehicleMovementComponent_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::NewProp_wheelIndex = { "wheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetChaosWheeledVehicleFrictionMultiplier_Wrapper_Parms, wheelIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::NewProp_friction = { "friction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetChaosWheeledVehicleFrictionMultiplier_Wrapper_Parms, friction), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::NewProp_chaosWheeledVehicleMovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::NewProp_wheelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::NewProp_friction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Vehicles" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Useful function for affecting the friction of a Chaos Wheeled Vehicle Wheel, used by the BPC_RuntimeVertexPaintAndDetectionComponent_VehicleWheel when it is driving over Meshes to make sure the vehicle gets it's friction affected then as well, just like when it's driving over landscapes. \nSince UE4's Chaos Wheeled Vehicle Component doesn't have the set friction multiplier function, i made a wrapper that runs it if it's UE5." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "SetChaosWheeledVehicleFrictionMultiplier_Wrapper", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::VertexPaintFunctionLibrary_eventSetChaosWheeledVehicleFrictionMultiplier_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::VertexPaintFunctionLibrary_eventSetChaosWheeledVehicleFrictionMultiplier_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics
	{
		struct VertexPaintFunctionLibrary_eventSetMeshConstantVertexColorsAndEnablesThem_Parms
		{
			UDynamicMesh* TargetMesh;
			FLinearColor Color;
			FGeometryScriptColorFlags Flags;
			bool bClearExisting;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Flags;
		static void NewProp_bClearExisting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearExisting;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetMeshConstantVertexColorsAndEnablesThem_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetMeshConstantVertexColorsAndEnablesThem_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetMeshConstantVertexColorsAndEnablesThem_Parms, Flags), Z_Construct_UScriptStruct_FGeometryScriptColorFlags, METADATA_PARAMS(0, nullptr) }; // 1422995932
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::NewProp_bClearExisting_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventSetMeshConstantVertexColorsAndEnablesThem_Parms*)Obj)->bClearExisting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::NewProp_bClearExisting = { "bClearExisting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventSetMeshConstantVertexColorsAndEnablesThem_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::NewProp_bClearExisting_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetMeshConstantVertexColorsAndEnablesThem_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetMeshConstantVertexColorsAndEnablesThem_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::NewProp_bClearExisting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Just running SetMeshConstantVertexColors on Dynamic Mesh won't actually Enable Vertex Colors. This will run the SetMeshConstantVertexColors, but Enable the Vertex Colors as well with what you put in, so if you try to detect or paint afterwards, things will work as intended since we can get the correct result from FDynamicMesh3 Vertex Info." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "SetMeshConstantVertexColorsAndEnablesThem", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::VertexPaintFunctionLibrary_eventSetMeshConstantVertexColorsAndEnablesThem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::VertexPaintFunctionLibrary_eventSetMeshConstantVertexColorsAndEnablesThem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics
	{
		struct VertexPaintFunctionLibrary_eventSetSkeletalMeshAndReleaseResources_Parms
		{
			USkeletalMeshComponent* skeletalMeshComponent;
			USkeletalMesh* newMesh;
			bool clearVertexColorsOfChangedMesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newMesh;
		static void NewProp_clearVertexColorsOfChangedMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_clearVertexColorsOfChangedMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics::NewProp_skeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics::NewProp_skeletalMeshComponent = { "skeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetSkeletalMeshAndReleaseResources_Parms, skeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics::NewProp_skeletalMeshComponent_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics::NewProp_skeletalMeshComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics::NewProp_newMesh = { "newMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetSkeletalMeshAndReleaseResources_Parms, newMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics::NewProp_clearVertexColorsOfChangedMesh_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventSetSkeletalMeshAndReleaseResources_Parms*)Obj)->clearVertexColorsOfChangedMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics::NewProp_clearVertexColorsOfChangedMesh = { "clearVertexColorsOfChangedMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventSetSkeletalMeshAndReleaseResources_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics::NewProp_clearVertexColorsOfChangedMesh_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics::NewProp_skeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics::NewProp_newMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics::NewProp_clearVertexColorsOfChangedMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "CPP_Default_clearVertexColorsOfChangedMesh", "true" },
		{ "DisplayName", "Set Skeletal Mesh And Release Resources" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unlike just running SetSkeletalMesh(), this doesn't cause a crash when switching meshes if applying vertex colors on them since it runs ReleasesResurces first and BeginOverrideVertexColors etc., then calls the SetSkeletalMesh()." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "SetSkeletalMeshAndReleaseResources", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics::VertexPaintFunctionLibrary_eventSetSkeletalMeshAndReleaseResources_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics::VertexPaintFunctionLibrary_eventSetSkeletalMeshAndReleaseResources_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics
	{
		struct VertexPaintFunctionLibrary_eventSetStaticMeshAndReleaseResources_Parms
		{
			UStaticMeshComponent* staticMeshComponent;
			UStaticMesh* newMesh;
			bool clearVertexColorsOfChangedMesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_staticMeshComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newMesh;
		static void NewProp_clearVertexColorsOfChangedMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_clearVertexColorsOfChangedMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics::NewProp_staticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics::NewProp_staticMeshComponent = { "staticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetStaticMeshAndReleaseResources_Parms, staticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics::NewProp_staticMeshComponent_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics::NewProp_staticMeshComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics::NewProp_newMesh = { "newMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetStaticMeshAndReleaseResources_Parms, newMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics::NewProp_clearVertexColorsOfChangedMesh_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventSetStaticMeshAndReleaseResources_Parms*)Obj)->clearVertexColorsOfChangedMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics::NewProp_clearVertexColorsOfChangedMesh = { "clearVertexColorsOfChangedMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventSetStaticMeshAndReleaseResources_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics::NewProp_clearVertexColorsOfChangedMesh_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics::NewProp_staticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics::NewProp_newMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics::NewProp_clearVertexColorsOfChangedMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "CPP_Default_clearVertexColorsOfChangedMesh", "true" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Releases and Blocks Vertex Colors before switching Static Mesh. Can choose to Clear the Vertex Colors of the newly switched mesh." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "SetStaticMeshAndReleaseResources", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics::VertexPaintFunctionLibrary_eventSetStaticMeshAndReleaseResources_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics::VertexPaintFunctionLibrary_eventSetStaticMeshAndReleaseResources_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics
	{
		struct VertexPaintFunctionLibrary_eventUpdateChaosClothPhysicsWithExistingColors_Parms
		{
			USkeletalMeshComponent* skeletalMeshComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::NewProp_skeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::NewProp_skeletalMeshComponent = { "skeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventUpdateChaosClothPhysicsWithExistingColors_Parms, skeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::NewProp_skeletalMeshComponent_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::NewProp_skeletalMeshComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::NewProp_skeletalMeshComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Cloth" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates Cloth Physics with the exisisting Vertex Colors. This is run on the game thread, and if the cloths have a lot of vertice the FPS may get affected. Recommend using the Async Variant to avoid this. \nThis function is useful if Vertex Colors has been changed by something else other than a paint job, or was pre-painetd in the editor and you want them to behave correctly. \nNOTE Affecting Cloth Physics is a UE5 exclusive feature, and Painting on Skeletal Meshes with Proxy Simulated Cloth is not supported, for example the Wind Walker Echo Character. Only Cloth created the regular way through the editor!" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "UpdateChaosClothPhysicsWithExistingColors", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::VertexPaintFunctionLibrary_eventUpdateChaosClothPhysicsWithExistingColors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::VertexPaintFunctionLibrary_eventUpdateChaosClothPhysicsWithExistingColors_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync_Statics
	{
		struct VertexPaintFunctionLibrary_eventUpdateChaosClothPhysicsWithExistingColorsAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			USkeletalMeshComponent* skeletalMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventUpdateChaosClothPhysicsWithExistingColorsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventUpdateChaosClothPhysicsWithExistingColorsAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync_Statics::NewProp_skeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync_Statics::NewProp_skeletalMesh = { "skeletalMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventUpdateChaosClothPhysicsWithExistingColorsAsync_Parms, skeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync_Statics::NewProp_skeletalMesh_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync_Statics::NewProp_skeletalMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync_Statics::NewProp_skeletalMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Cloth" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates Cloth Physics with the exisisting Vertex Colors. This will run on async when it is looping through the vertices of the cloths to get the average color and get the cloth physics settings for them, which is then uses when back at game thread to update the cloth physics. \nThis function is useful if Vertex Colors has been changed by something else other than a paint job, or was pre-painetd in the editor and you want them to behave correctly. \nNOTE Affecting Cloth Physics is a UE5 exclusive feature, and Painting on Skeletal Meshes with Proxy Simulated Cloth is not supported, for example the Wind Walker Echo Character. Only Cloth created the regular way through the editor!" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "UpdateChaosClothPhysicsWithExistingColorsAsync", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync_Statics::VertexPaintFunctionLibrary_eventUpdateChaosClothPhysicsWithExistingColorsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync_Statics::VertexPaintFunctionLibrary_eventUpdateChaosClothPhysicsWithExistingColorsAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics
	{
		struct VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetSkeletalMesh_Parms
		{
			USkeletalMeshComponent* skeletalMeshComp;
			USkeletalMesh* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::NewProp_skeletalMeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::NewProp_skeletalMeshComp = { "skeletalMeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetSkeletalMesh_Parms, skeletalMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::NewProp_skeletalMeshComp_MetaData), Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::NewProp_skeletalMeshComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetSkeletalMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::NewProp_skeletalMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "DisplayName", "GetSkeletalMesh" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility function since 5.1 don't use the same get skeletal mesh in BP as 4.27 and 5.0. By using this we don't have to update the examples or Widget BP" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "VertexPaintDetectionPlugin_GetSkeletalMesh", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetSkeletalMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetSkeletalMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics
	{
		struct VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Parms
		{
			TMap<int32,FString> assetIndexAndName;
			TMap<int32,FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_assetIndexAndName_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_assetIndexAndName_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_assetIndexAndName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_assetIndexAndName_ValueProp = { "assetIndexAndName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_assetIndexAndName_Key_KeyProp = { "assetIndexAndName_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_assetIndexAndName = { "assetIndexAndName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Parms, assetIndexAndName), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_assetIndexAndName_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_assetIndexAndName_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_assetIndexAndName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "DisplayName", "Sort Names Alphabetically" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sorts the TMap Alphabetically while matching the index. So you can send in a TMap of AssetNames and Indexes, and get a TMap back but with them in alphabetical order. Intended to be used with the Asset Registry->GetAssets...() functions, see example in the Vertex Paint Editor Utility Widget" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics
	{
		struct VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SortStringArrayAlphabetically_Parms
		{
			TArray<FString> strings;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_strings_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_strings;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::NewProp_strings_Inner = { "strings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::NewProp_strings = { "strings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SortStringArrayAlphabetically_Parms, strings), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SortStringArrayAlphabetically_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::NewProp_strings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::NewProp_strings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Utilities" },
		{ "DisplayName", "Sort String Array Alphabetically" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sorts an array of strings alphabetically" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "VertexPaintDetectionPlugin_SortStringArrayAlphabetically", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SortStringArrayAlphabetically_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SortStringArrayAlphabetically_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexPaintFunctionLibrary);
	UClass* Z_Construct_UClass_UVertexPaintFunctionLibrary_NoRegister()
	{
		return UVertexPaintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVertexPaintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexPaintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVertexPaintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_AdjustBoxCollisionToFillAreaBetweenTwoLocations, "AdjustBoxCollisionToFillAreaBetweenTwoLocations" }, // 1701162511
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_CalcAABBWithoutUniformCheck, "CalcAABBWithoutUniformCheck" }, // 2736277428
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType, "CollisionChannelToObjectType" }, // 2592680373
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily, "DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily" }, // 2830894486
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox, "DrawPrimitiveComponentBoundsBox" }, // 4252263748
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllColorSnippetsUnderGroupSnippetAsString, "GetAllColorSnippetsUnderGroupSnippetAsString" }, // 3526744669
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper, "GetAllMeshColorSnippetsAsString_Wrapper" }, // 3216081981
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper, "GetAllMeshColorSnippetsAsTags_Wrapper" }, // 1791201821
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper, "GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper" }, // 3595033882
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces, "GetAllPhysicsSurfaces" }, // 1688716120
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllTagsUnderTagCategory, "GetAllTagsUnderTagCategory" }, // 2565016786
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper, "GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper" }, // 3123916120
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn, "GetAmountOfLODsToPaintOn" }, // 1975385508
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel, "GetAmountOfPaintedColorsForEachChannel" }, // 1876251956
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannelAsync, "GetAmountOfPaintedColorsForEachChannelAsync" }, // 3438934952
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper, "GetCalculateColorsDetectionTasksAmount_Wrapper" }, // 3236813845
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper, "GetCalculateColorsPaintTasksAmount_Wrapper" }, // 4108902804
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets, "GetClothAssets" }, // 2063524816
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset, "GetColorSnippetReferenceDataAsset" }, // 2800594269
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetVertexColorsAsync, "GetColorSnippetVertexColorsAsync" }, // 475847418
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsSurface_Wrapper, "GetColorsToApplyFromPhysicsSurface_Wrapper" }, // 3259363320
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsBottomWorldZ, "GetComponentBoundsBottomWorldZ" }, // 3666662127
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetComponentBoundsTopWorldZ, "GetComponentBoundsTopWorldZ" }, // 2557112542
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper, "GetMeshColorSnippetsTagsInTagCategory_Wrapper" }, // 3862186944
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetTagInGroup, "GetMeshColorSnippetTagInGroup" }, // 963456870
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentAmountOfVerticesOnLOD, "GetMeshComponentAmountOfVerticesOnLOD" }, // 165381
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentSourceMesh, "GetMeshComponentSourceMesh" }, // 106369273
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper, "GetMeshComponentVertexColors_Wrapper" }, // 2464782895
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColorsAtLOD_Wrapper, "GetMeshComponentVertexColorsAtLOD_Wrapper" }, // 78467555
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset, "GetOptimizationDataAsset" }, // 3769116183
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetParentsOfPhysicsSurface_Wrapper, "GetParentsOfPhysicsSurface_Wrapper" }, // 3161697290
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper, "GetPhysicalMaterialUsingPhysicsSurface_Wrapper" }, // 1180245841
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfaceFamilies_Wrapper, "GetPhysicsSurfaceFamilies_Wrapper" }, // 124203702
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicsSurfacesRegisteredToMaterial, "GetPhysicsSurfacesRegisteredToMaterial" }, // 601244845
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetSubstringAfterLastCharacter, "GetSubstringAfterLastCharacter" }, // 2417848998
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper, "GetTheMostDominantPhysicsSurface_Wrapper" }, // 3780355835
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset, "GetVertexPaintMaterialDataAsset" }, // 342132402
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialInterface_Wrapper, "GetVertexPaintMaterialInterface_Wrapper" }, // 1833606588
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper, "IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper" }, // 82141366
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsPlayInEditor, "IsPlayInEditor" }, // 1045336290
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid, "IsWorldValid" }, // 272259225
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultiCapsuleTraceForClosestUniqueMeshes_Wrapper, "MultiCapsuleTraceForClosestUniqueMeshes_Wrapper" }, // 2840947387
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel, "ObjectTypeToCollisionChannel" }, // 1211027856
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFColorToFLinearColor, "ReliableFColorToFLinearColor" }, // 3582446645
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_ReliableFLinearToFColor, "ReliableFLinearToFColor" }, // 3801613484
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromDetectTaskQueue, "RemoveComponentFromDetectTaskQueue" }, // 1931029084
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_RemoveComponentFromPaintTaskQueue, "RemoveComponentFromPaintTaskQueue" }, // 1288739496
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics, "SetChaosClothPhysics" }, // 1413181055
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper, "SetChaosWheeledVehicleFrictionMultiplier_Wrapper" }, // 861623448
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshConstantVertexColorsAndEnablesThem, "SetMeshConstantVertexColorsAndEnablesThem" }, // 639109808
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetSkeletalMeshAndReleaseResources, "SetSkeletalMeshAndReleaseResources" }, // 4129443824
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetStaticMeshAndReleaseResources, "SetStaticMeshAndReleaseResources" }, // 2178019038
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors, "UpdateChaosClothPhysicsWithExistingColors" }, // 937524920
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColorsAsync, "UpdateChaosClothPhysicsWithExistingColorsAsync" }, // 2528306883
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh, "VertexPaintDetectionPlugin_GetSkeletalMesh" }, // 2137631725
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically, "VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically" }, // 1259392534
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically, "VertexPaintDetectionPlugin_SortStringArrayAlphabetically" }, // 2266097163
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
		{ "ModuleRelativePath", "FunctionLibs/VertexPaintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexPaintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexPaintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexPaintFunctionLibrary_Statics::ClassParams = {
		&UVertexPaintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVertexPaintFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVertexPaintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UVertexPaintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexPaintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UVertexPaintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexPaintFunctionLibrary.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<UVertexPaintFunctionLibrary>()
	{
		return UVertexPaintFunctionLibrary::StaticClass();
	}
	UVertexPaintFunctionLibrary::UVertexPaintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexPaintFunctionLibrary);
	UVertexPaintFunctionLibrary::~UVertexPaintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexPaintFunctionLibrary, UVertexPaintFunctionLibrary::StaticClass, TEXT("UVertexPaintFunctionLibrary"), &Z_Registration_Info_UClass_UVertexPaintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexPaintFunctionLibrary), 3923689649U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintFunctionLibrary_h_2127247392(TEXT("/Script/VertexPaintDetectionPlugin"),
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_FunctionLibs_VertexPaintFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
