// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../VertexPaintDetectionInterface.h"
#include "../Prerequisites/AdditionalDataPrerequisites.h"
#include "../Prerequisites/ChaosClothPhysicsPrerequisites.h"
#include "../Prerequisites/GetClosestVertexDataPrerequisites.h"
#include "../Prerequisites/GetColorsOnlyPrerequisites.h"
#include "../Prerequisites/GetColorsWithinAreaPrerequisites.h"
#include "../Prerequisites/HitLocationPrerequisites.h"
#include "../Prerequisites/PaintAtLocationPrerequisites.h"
#include "../Prerequisites/PaintEntireMeshPrerequisites.h"
#include "../Prerequisites/PaintFundementalsPrerequisites.h"
#include "../Prerequisites/PaintSnippetsPrerequisites.h"
#include "../Prerequisites/PaintWithinAreaPrerequisites.h"
#include "../Prerequisites/SetColorsWithStringPrerequisites.h"
#include "../Prerequisites/SetMeshColorsPrerequisites.h"
#include "../Prerequisites/TaskResultsPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexPaintDetectionInterface() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintDetectionInterface();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintDetectionInterface_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectGetColorsOnlyStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectInfoStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults();
// End Cross Module References
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execClothEndOverlappingMesh)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClothEndOverlappingMesh_Implementation(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execClothBeginOverlappingMesh)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClothBeginOverlappingMesh_Implementation(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execGetSkeletalMeshClothPhysicsSettings)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMeshComponentTryingToGetClothSettingsFor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<UClothingAssetBase*,FVertexDetectClothSettingsStruct>*)Z_Param__Result=P_THIS->GetSkeletalMeshClothPhysicsSettings_Implementation(Z_Param_skeletalMeshComponentTryingToGetClothSettingsFor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execColorsAppliedOnActor)
	{
		P_GET_STRUCT_REF(FVertexDetectTaskResultInfo,Z_Param_Out_taskResultInfo);
		P_GET_STRUCT_REF(FVertexDetectPaintTaskResultInfo,Z_Param_Out_paintTaskResultInfo);
		P_GET_STRUCT_REF(FVertexPaintStruct,Z_Param_Out_paintedOnActorSettings);
		P_GET_STRUCT_REF(FVertexDetectAdditionalDataToPassThrough,Z_Param_Out_additionalData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ColorsAppliedOnActor_Implementation(Z_Param_Out_taskResultInfo,Z_Param_Out_paintTaskResultInfo,Z_Param_Out_paintedOnActorSettings,Z_Param_Out_additionalData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execPaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString)
	{
		P_GET_STRUCT_REF(FVertexDetectTaskResultInfo,Z_Param_Out_taskResultInfo);
		P_GET_STRUCT_REF(FVertexDetectPaintTaskResultInfo,Z_Param_Out_paintTaskResultInfo);
		P_GET_STRUCT_REF(FVertexPaintSetMeshComponentVertexColorsUsingSerializedString,Z_Param_Out_setMeshComponentVertexColorUsingSerializedStringSettings);
		P_GET_STRUCT_REF(FVertexDetectAdditionalDataToPassThrough,Z_Param_Out_additionalData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Implementation(Z_Param_Out_taskResultInfo,Z_Param_Out_paintTaskResultInfo,Z_Param_Out_setMeshComponentVertexColorUsingSerializedStringSettings,Z_Param_Out_additionalData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execPaintedOnActor_SetMeshComponentVertexColors)
	{
		P_GET_STRUCT_REF(FVertexDetectTaskResultInfo,Z_Param_Out_taskResultInfo);
		P_GET_STRUCT_REF(FVertexDetectPaintTaskResultInfo,Z_Param_Out_paintTaskResultInfo);
		P_GET_STRUCT_REF(FVertexPaintSetMeshComponentVertexColors,Z_Param_Out_setMeshComponentVertexColorSettings);
		P_GET_STRUCT_REF(FVertexDetectAdditionalDataToPassThrough,Z_Param_Out_additionalData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PaintedOnActor_SetMeshComponentVertexColors_Implementation(Z_Param_Out_taskResultInfo,Z_Param_Out_paintTaskResultInfo,Z_Param_Out_setMeshComponentVertexColorSettings,Z_Param_Out_additionalData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execPaintedOnActor_PaintColorSnippet)
	{
		P_GET_STRUCT_REF(FVertexDetectTaskResultInfo,Z_Param_Out_taskResultInfo);
		P_GET_STRUCT_REF(FVertexDetectPaintTaskResultInfo,Z_Param_Out_paintTaskResultInfo);
		P_GET_STRUCT_REF(FVertexPaintColorSnippetStruct,Z_Param_Out_paintedColorSnippetSettings);
		P_GET_STRUCT_REF(FVertexDetectAdditionalDataToPassThrough,Z_Param_Out_additionalData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PaintedOnActor_PaintColorSnippet_Implementation(Z_Param_Out_taskResultInfo,Z_Param_Out_paintTaskResultInfo,Z_Param_Out_paintedColorSnippetSettings,Z_Param_Out_additionalData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execPaintedOnActor_EntireMesh)
	{
		P_GET_STRUCT_REF(FVertexDetectTaskResultInfo,Z_Param_Out_taskResultInfo);
		P_GET_STRUCT_REF(FVertexDetectPaintTaskResultInfo,Z_Param_Out_paintTaskResultInfo);
		P_GET_STRUCT_REF(FVertexPaintOnEntireMeshStruct,Z_Param_Out_paintedEntireMeshSettings);
		P_GET_STRUCT_REF(FVertexDetectAdditionalDataToPassThrough,Z_Param_Out_additionalData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PaintedOnActor_EntireMesh_Implementation(Z_Param_Out_taskResultInfo,Z_Param_Out_paintTaskResultInfo,Z_Param_Out_paintedEntireMeshSettings,Z_Param_Out_additionalData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execPaintedOnActor_WithinArea)
	{
		P_GET_STRUCT_REF(FVertexDetectTaskResultInfo,Z_Param_Out_taskResultInfo);
		P_GET_STRUCT_REF(FVertexDetectPaintTaskResultInfo,Z_Param_Out_paintTaskResultInfo);
		P_GET_STRUCT_REF(FVertexPainthWithinAreaStruct,Z_Param_Out_paintedWithinAreaSettings);
		P_GET_STRUCT_REF(FVertexPaintWithinAreaResults,Z_Param_Out_withinAreaResults);
		P_GET_STRUCT_REF(FVertexDetectAdditionalDataToPassThrough,Z_Param_Out_additionalData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PaintedOnActor_WithinArea_Implementation(Z_Param_Out_taskResultInfo,Z_Param_Out_paintTaskResultInfo,Z_Param_Out_paintedWithinAreaSettings,Z_Param_Out_withinAreaResults,Z_Param_Out_additionalData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execPaintedOnActor_AtLocation)
	{
		P_GET_STRUCT_REF(FVertexDetectTaskResultInfo,Z_Param_Out_taskResultInfo);
		P_GET_STRUCT_REF(FVertexDetectPaintTaskResultInfo,Z_Param_Out_paintTaskResultInfo);
		P_GET_STRUCT_REF(FVertexPaintAtLocationStruct,Z_Param_Out_paintedAtLocationSettings);
		P_GET_STRUCT_REF(FVertexDetectClosestVertexDataResultStruct,Z_Param_Out_closestVertexColorResult);
		P_GET_STRUCT_REF(FVertexDetectEstimatedColorAtHitLocationResultStruct,Z_Param_Out_estimatedColorAtHitLocationResult);
		P_GET_STRUCT_REF(FVertexDetectAvarageColorInAreaInfo,Z_Param_Out_avarageColorInAreaInfo);
		P_GET_STRUCT_REF(FVertexDetectAdditionalDataToPassThrough,Z_Param_Out_additionalData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PaintedOnActor_AtLocation_Implementation(Z_Param_Out_taskResultInfo,Z_Param_Out_paintTaskResultInfo,Z_Param_Out_paintedAtLocationSettings,Z_Param_Out_closestVertexColorResult,Z_Param_Out_estimatedColorAtHitLocationResult,Z_Param_Out_avarageColorInAreaInfo,Z_Param_Out_additionalData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execGetColorsWithinArea)
	{
		P_GET_STRUCT_REF(FVertexDetectTaskResultInfo,Z_Param_Out_taskResultInfo);
		P_GET_STRUCT_REF(FVertexDetectGetColorsWithinAreaStruct,Z_Param_Out_getColorsWithinAreaSettings);
		P_GET_STRUCT_REF(FVertexPaintWithinAreaResults,Z_Param_Out_withinAreaResults);
		P_GET_STRUCT_REF(FVertexDetectAdditionalDataToPassThrough,Z_Param_Out_additionalData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetColorsWithinArea_Implementation(Z_Param_Out_taskResultInfo,Z_Param_Out_getColorsWithinAreaSettings,Z_Param_Out_withinAreaResults,Z_Param_Out_additionalData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execGetAllVertexColorsOnlyOnActor)
	{
		P_GET_STRUCT_REF(FVertexDetectTaskResultInfo,Z_Param_Out_taskResultInfo);
		P_GET_STRUCT_REF(FVertexDetectGetColorsOnlyStruct,Z_Param_Out_gotAllVertexColorsWithSettings);
		P_GET_STRUCT_REF(FVertexDetectAdditionalDataToPassThrough,Z_Param_Out_additionalData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllVertexColorsOnlyOnActor_Implementation(Z_Param_Out_taskResultInfo,Z_Param_Out_gotAllVertexColorsWithSettings,Z_Param_Out_additionalData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execGetClosestVertexDataOnActor)
	{
		P_GET_STRUCT_REF(FVertexDetectTaskResultInfo,Z_Param_Out_taskResultInfo);
		P_GET_STRUCT_REF(FVertexDetectInfoStruct,Z_Param_Out_detectedMeshWithSettings);
		P_GET_STRUCT_REF(FVertexDetectClosestVertexDataResultStruct,Z_Param_Out_closestVertexColorResult);
		P_GET_STRUCT_REF(FVertexDetectEstimatedColorAtHitLocationResultStruct,Z_Param_Out_estimatedColorAtHitLocationResult);
		P_GET_STRUCT_REF(FVertexDetectAvarageColorInAreaInfo,Z_Param_Out_avarageColorInAreaInfo);
		P_GET_STRUCT_REF(FVertexDetectAdditionalDataToPassThrough,Z_Param_Out_additionalData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetClosestVertexDataOnActor_Implementation(Z_Param_Out_taskResultInfo,Z_Param_Out_detectedMeshWithSettings,Z_Param_Out_closestVertexColorResult,Z_Param_Out_estimatedColorAtHitLocationResult,Z_Param_Out_avarageColorInAreaInfo,Z_Param_Out_additionalData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execOverrideVertexColorToApply)
	{
		P_GET_OBJECT(UVertexPaintDetectionComponent,Z_Param_associatedPaintComponent);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshApplyingColorsTo);
		P_GET_PROPERTY(FIntProperty,Z_Param_currentLOD);
		P_GET_PROPERTY(FIntProperty,Z_Param_currentVertexIndex);
		P_GET_OBJECT(UMaterialInterface,Z_Param_materialVertexIsOn);
		P_GET_UBOOL(Z_Param_isVertexOnCloth);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_boneVertexIsOn);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_vertexPositionInWorldSpace);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_vertexNormal);
		P_GET_STRUCT_REF(FColor,Z_Param_Out_currentVertexColor);
		P_GET_PROPERTY(FByteProperty,Z_Param_currentVertexMostDominantPhysicsSurface);
		P_GET_PROPERTY(FFloatProperty,Z_Param_currentVertexMostDominantPhysicsSurfaceValue);
		P_GET_STRUCT_REF(FColor,Z_Param_Out_updatedVertexColorToApply);
		P_GET_UBOOL(Z_Param_wantsToApplyUpdatedVertexColor);
		P_GET_UBOOL_REF(Z_Param_Out_applyUpdatedOrOverridenVertexColors);
		P_GET_UBOOL_REF(Z_Param_Out_overrideVertexColorsToApply);
		P_GET_STRUCT_REF(FColor,Z_Param_Out_vertexColorsToOverrideWith);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverrideVertexColorToApply_Implementation(Z_Param_associatedPaintComponent,Z_Param_meshApplyingColorsTo,Z_Param_currentLOD,Z_Param_currentVertexIndex,Z_Param_materialVertexIsOn,Z_Param_isVertexOnCloth,Z_Param_Out_boneVertexIsOn,Z_Param_Out_vertexPositionInWorldSpace,Z_Param_Out_vertexNormal,Z_Param_Out_currentVertexColor,EPhysicalSurface(Z_Param_currentVertexMostDominantPhysicsSurface),Z_Param_currentVertexMostDominantPhysicsSurfaceValue,Z_Param_Out_updatedVertexColorToApply,Z_Param_wantsToApplyUpdatedVertexColor,Z_Param_Out_applyUpdatedOrOverridenVertexColors,Z_Param_Out_overrideVertexColorsToApply,Z_Param_Out_vertexColorsToOverrideWith);
		P_NATIVE_END;
	}
	struct VertexPaintDetectionInterface_eventClothBeginOverlappingMesh_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 item;
	};
	struct VertexPaintDetectionInterface_eventClothEndOverlappingMesh_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 item;
	};
	struct VertexPaintDetectionInterface_eventColorsAppliedOnActor_Parms
	{
		FVertexDetectTaskResultInfo taskResultInfo;
		FVertexDetectPaintTaskResultInfo paintTaskResultInfo;
		FVertexPaintStruct paintedOnActorSettings;
		FVertexDetectAdditionalDataToPassThrough additionalData;
	};
	struct VertexPaintDetectionInterface_eventGetAllVertexColorsOnlyOnActor_Parms
	{
		FVertexDetectTaskResultInfo taskResultInfo;
		FVertexDetectGetColorsOnlyStruct gotAllVertexColorsWithSettings;
		FVertexDetectAdditionalDataToPassThrough additionalData;
	};
	struct VertexPaintDetectionInterface_eventGetClosestVertexDataOnActor_Parms
	{
		FVertexDetectTaskResultInfo taskResultInfo;
		FVertexDetectInfoStruct detectedMeshWithSettings;
		FVertexDetectClosestVertexDataResultStruct closestVertexColorResult;
		FVertexDetectEstimatedColorAtHitLocationResultStruct estimatedColorAtHitLocationResult;
		FVertexDetectAvarageColorInAreaInfo avarageColorInAreaInfo;
		FVertexDetectAdditionalDataToPassThrough additionalData;
	};
	struct VertexPaintDetectionInterface_eventGetColorsWithinArea_Parms
	{
		FVertexDetectTaskResultInfo taskResultInfo;
		FVertexDetectGetColorsWithinAreaStruct getColorsWithinAreaSettings;
		FVertexPaintWithinAreaResults withinAreaResults;
		FVertexDetectAdditionalDataToPassThrough additionalData;
	};
	struct VertexPaintDetectionInterface_eventGetSkeletalMeshClothPhysicsSettings_Parms
	{
		USkeletalMeshComponent* skeletalMeshComponentTryingToGetClothSettingsFor;
		TMap<UClothingAssetBase*,FVertexDetectClothSettingsStruct> ReturnValue;
	};
	struct VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms
	{
		UVertexPaintDetectionComponent* associatedPaintComponent;
		UPrimitiveComponent* meshApplyingColorsTo;
		int32 currentLOD;
		int32 currentVertexIndex;
		UMaterialInterface* materialVertexIsOn;
		bool isVertexOnCloth;
		FName boneVertexIsOn;
		FVector vertexPositionInWorldSpace;
		FVector vertexNormal;
		FColor currentVertexColor;
		TEnumAsByte<EPhysicalSurface> currentVertexMostDominantPhysicsSurface;
		float currentVertexMostDominantPhysicsSurfaceValue;
		FColor updatedVertexColorToApply;
		bool wantsToApplyUpdatedVertexColor;
		bool applyUpdatedOrOverridenVertexColors;
		bool overrideVertexColorsToApply;
		FColor vertexColorsToOverrideWith;
	};
	struct VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms
	{
		FVertexDetectTaskResultInfo taskResultInfo;
		FVertexDetectPaintTaskResultInfo paintTaskResultInfo;
		FVertexPaintAtLocationStruct paintedAtLocationSettings;
		FVertexDetectClosestVertexDataResultStruct closestVertexColorResult;
		FVertexDetectEstimatedColorAtHitLocationResultStruct estimatedColorAtHitLocationResult;
		FVertexDetectAvarageColorInAreaInfo avarageColorInAreaInfo;
		FVertexDetectAdditionalDataToPassThrough additionalData;
	};
	struct VertexPaintDetectionInterface_eventPaintedOnActor_EntireMesh_Parms
	{
		FVertexDetectTaskResultInfo taskResultInfo;
		FVertexDetectPaintTaskResultInfo paintTaskResultInfo;
		FVertexPaintOnEntireMeshStruct paintedEntireMeshSettings;
		FVertexDetectAdditionalDataToPassThrough additionalData;
	};
	struct VertexPaintDetectionInterface_eventPaintedOnActor_PaintColorSnippet_Parms
	{
		FVertexDetectTaskResultInfo taskResultInfo;
		FVertexDetectPaintTaskResultInfo paintTaskResultInfo;
		FVertexPaintColorSnippetStruct paintedColorSnippetSettings;
		FVertexDetectAdditionalDataToPassThrough additionalData;
	};
	struct VertexPaintDetectionInterface_eventPaintedOnActor_SetMeshComponentVertexColors_Parms
	{
		FVertexDetectTaskResultInfo taskResultInfo;
		FVertexDetectPaintTaskResultInfo paintTaskResultInfo;
		FVertexPaintSetMeshComponentVertexColors setMeshComponentVertexColorSettings;
		FVertexDetectAdditionalDataToPassThrough additionalData;
	};
	struct VertexPaintDetectionInterface_eventPaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Parms
	{
		FVertexDetectTaskResultInfo taskResultInfo;
		FVertexDetectPaintTaskResultInfo paintTaskResultInfo;
		FVertexPaintSetMeshComponentVertexColorsUsingSerializedString setMeshComponentVertexColorUsingSerializedStringSettings;
		FVertexDetectAdditionalDataToPassThrough additionalData;
	};
	struct VertexPaintDetectionInterface_eventPaintedOnActor_WithinArea_Parms
	{
		FVertexDetectTaskResultInfo taskResultInfo;
		FVertexDetectPaintTaskResultInfo paintTaskResultInfo;
		FVertexPainthWithinAreaStruct paintedWithinAreaSettings;
		FVertexPaintWithinAreaResults withinAreaResults;
		FVertexDetectAdditionalDataToPassThrough additionalData;
	};
	void IVertexPaintDetectionInterface::ClothBeginOverlappingMesh(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 item)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClothBeginOverlappingMesh instead.");
	}
	void IVertexPaintDetectionInterface::ClothEndOverlappingMesh(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 item)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClothEndOverlappingMesh instead.");
	}
	void IVertexPaintDetectionInterface::ColorsAppliedOnActor(FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectPaintTaskResultInfo const& paintTaskResultInfo, FVertexPaintStruct const& paintedOnActorSettings, FVertexDetectAdditionalDataToPassThrough const& additionalData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ColorsAppliedOnActor instead.");
	}
	void IVertexPaintDetectionInterface::GetAllVertexColorsOnlyOnActor(FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectGetColorsOnlyStruct const& gotAllVertexColorsWithSettings, FVertexDetectAdditionalDataToPassThrough const& additionalData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAllVertexColorsOnlyOnActor instead.");
	}
	void IVertexPaintDetectionInterface::GetClosestVertexDataOnActor(FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectInfoStruct const& detectedMeshWithSettings, FVertexDetectClosestVertexDataResultStruct const& closestVertexColorResult, FVertexDetectEstimatedColorAtHitLocationResultStruct const& estimatedColorAtHitLocationResult, FVertexDetectAvarageColorInAreaInfo const& avarageColorInAreaInfo, FVertexDetectAdditionalDataToPassThrough const& additionalData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetClosestVertexDataOnActor instead.");
	}
	void IVertexPaintDetectionInterface::GetColorsWithinArea(FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectGetColorsWithinAreaStruct const& getColorsWithinAreaSettings, FVertexPaintWithinAreaResults const& withinAreaResults, FVertexDetectAdditionalDataToPassThrough const& additionalData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetColorsWithinArea instead.");
	}
	TMap<UClothingAssetBase*,FVertexDetectClothSettingsStruct> IVertexPaintDetectionInterface::GetSkeletalMeshClothPhysicsSettings(USkeletalMeshComponent* skeletalMeshComponentTryingToGetClothSettingsFor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSkeletalMeshClothPhysicsSettings instead.");
		VertexPaintDetectionInterface_eventGetSkeletalMeshClothPhysicsSettings_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVertexPaintDetectionInterface::OverrideVertexColorToApply(UVertexPaintDetectionComponent* associatedPaintComponent, UPrimitiveComponent* meshApplyingColorsTo, int32 currentLOD, int32 currentVertexIndex, UMaterialInterface* materialVertexIsOn, bool isVertexOnCloth, FName const& boneVertexIsOn, FVector const& vertexPositionInWorldSpace, FVector const& vertexNormal, FColor const& currentVertexColor, EPhysicalSurface currentVertexMostDominantPhysicsSurface, float currentVertexMostDominantPhysicsSurfaceValue, FColor const& updatedVertexColorToApply, bool wantsToApplyUpdatedVertexColor, bool& applyUpdatedOrOverridenVertexColors, bool& overrideVertexColorsToApply, FColor& vertexColorsToOverrideWith)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OverrideVertexColorToApply instead.");
	}
	void IVertexPaintDetectionInterface::PaintedOnActor_AtLocation(FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectPaintTaskResultInfo const& paintTaskResultInfo, FVertexPaintAtLocationStruct const& paintedAtLocationSettings, FVertexDetectClosestVertexDataResultStruct const& closestVertexColorResult, FVertexDetectEstimatedColorAtHitLocationResultStruct const& estimatedColorAtHitLocationResult, FVertexDetectAvarageColorInAreaInfo const& avarageColorInAreaInfo, FVertexDetectAdditionalDataToPassThrough const& additionalData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PaintedOnActor_AtLocation instead.");
	}
	void IVertexPaintDetectionInterface::PaintedOnActor_EntireMesh(FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectPaintTaskResultInfo const& paintTaskResultInfo, FVertexPaintOnEntireMeshStruct const& paintedEntireMeshSettings, FVertexDetectAdditionalDataToPassThrough const& additionalData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PaintedOnActor_EntireMesh instead.");
	}
	void IVertexPaintDetectionInterface::PaintedOnActor_PaintColorSnippet(FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectPaintTaskResultInfo const& paintTaskResultInfo, FVertexPaintColorSnippetStruct const& paintedColorSnippetSettings, FVertexDetectAdditionalDataToPassThrough const& additionalData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PaintedOnActor_PaintColorSnippet instead.");
	}
	void IVertexPaintDetectionInterface::PaintedOnActor_SetMeshComponentVertexColors(FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectPaintTaskResultInfo const& paintTaskResultInfo, FVertexPaintSetMeshComponentVertexColors const& setMeshComponentVertexColorSettings, FVertexDetectAdditionalDataToPassThrough const& additionalData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PaintedOnActor_SetMeshComponentVertexColors instead.");
	}
	void IVertexPaintDetectionInterface::PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString(FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectPaintTaskResultInfo const& paintTaskResultInfo, FVertexPaintSetMeshComponentVertexColorsUsingSerializedString const& setMeshComponentVertexColorUsingSerializedStringSettings, FVertexDetectAdditionalDataToPassThrough const& additionalData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString instead.");
	}
	void IVertexPaintDetectionInterface::PaintedOnActor_WithinArea(FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectPaintTaskResultInfo const& paintTaskResultInfo, FVertexPainthWithinAreaStruct const& paintedWithinAreaSettings, FVertexPaintWithinAreaResults const& withinAreaResults, FVertexDetectAdditionalDataToPassThrough const& additionalData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PaintedOnActor_WithinArea instead.");
	}
	void UVertexPaintDetectionInterface::StaticRegisterNativesUVertexPaintDetectionInterface()
	{
		UClass* Class = UVertexPaintDetectionInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClothBeginOverlappingMesh", &IVertexPaintDetectionInterface::execClothBeginOverlappingMesh },
			{ "ClothEndOverlappingMesh", &IVertexPaintDetectionInterface::execClothEndOverlappingMesh },
			{ "ColorsAppliedOnActor", &IVertexPaintDetectionInterface::execColorsAppliedOnActor },
			{ "GetAllVertexColorsOnlyOnActor", &IVertexPaintDetectionInterface::execGetAllVertexColorsOnlyOnActor },
			{ "GetClosestVertexDataOnActor", &IVertexPaintDetectionInterface::execGetClosestVertexDataOnActor },
			{ "GetColorsWithinArea", &IVertexPaintDetectionInterface::execGetColorsWithinArea },
			{ "GetSkeletalMeshClothPhysicsSettings", &IVertexPaintDetectionInterface::execGetSkeletalMeshClothPhysicsSettings },
			{ "OverrideVertexColorToApply", &IVertexPaintDetectionInterface::execOverrideVertexColorToApply },
			{ "PaintedOnActor_AtLocation", &IVertexPaintDetectionInterface::execPaintedOnActor_AtLocation },
			{ "PaintedOnActor_EntireMesh", &IVertexPaintDetectionInterface::execPaintedOnActor_EntireMesh },
			{ "PaintedOnActor_PaintColorSnippet", &IVertexPaintDetectionInterface::execPaintedOnActor_PaintColorSnippet },
			{ "PaintedOnActor_SetMeshComponentVertexColors", &IVertexPaintDetectionInterface::execPaintedOnActor_SetMeshComponentVertexColors },
			{ "PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString", &IVertexPaintDetectionInterface::execPaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString },
			{ "PaintedOnActor_WithinArea", &IVertexPaintDetectionInterface::execPaintedOnActor_WithinArea },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventClothBeginOverlappingMesh_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventClothBeginOverlappingMesh_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventClothBeginOverlappingMesh_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventClothBeginOverlappingMesh_Parms, item), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Cloth" },
		{ "ModuleRelativePath", "VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Runs on the Actor that Begin Overlapped Cloth." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "ClothBeginOverlappingMesh", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::PropPointers), sizeof(VertexPaintDetectionInterface_eventClothBeginOverlappingMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(VertexPaintDetectionInterface_eventClothBeginOverlappingMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventClothEndOverlappingMesh_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventClothEndOverlappingMesh_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventClothEndOverlappingMesh_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventClothEndOverlappingMesh_Parms, item), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Cloth" },
		{ "ModuleRelativePath", "VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Runs on the Actor that End Overlapped Cloth." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "ClothEndOverlappingMesh", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::PropPointers), sizeof(VertexPaintDetectionInterface_eventClothEndOverlappingMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(VertexPaintDetectionInterface_eventClothEndOverlappingMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_taskResultInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_taskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintTaskResultInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintTaskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintedOnActorSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintedOnActorSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_additionalData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_taskResultInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_taskResultInfo = { "taskResultInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventColorsAppliedOnActor_Parms, taskResultInfo), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_taskResultInfo_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_taskResultInfo_MetaData) }; // 3152737793
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_paintTaskResultInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_paintTaskResultInfo = { "paintTaskResultInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventColorsAppliedOnActor_Parms, paintTaskResultInfo), Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_paintTaskResultInfo_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_paintTaskResultInfo_MetaData) }; // 3289238885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_paintedOnActorSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_paintedOnActorSettings = { "paintedOnActorSettings", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventColorsAppliedOnActor_Parms, paintedOnActorSettings), Z_Construct_UScriptStruct_FVertexPaintStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_paintedOnActorSettings_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_paintedOnActorSettings_MetaData) }; // 2478779419
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_additionalData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_additionalData = { "additionalData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventColorsAppliedOnActor_Parms, additionalData), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_additionalData_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_additionalData_MetaData) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_taskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_paintTaskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_paintedOnActorSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_additionalData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Painting" },
		{ "ModuleRelativePath", "VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Runs on the Actor that got Colors Applied on it, if the actor in the callback settings is the default null, otherwise it will run for whatever the user has specified." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "ColorsAppliedOnActor", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::PropPointers), sizeof(VertexPaintDetectionInterface_eventColorsAppliedOnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(VertexPaintDetectionInterface_eventColorsAppliedOnActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_taskResultInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_taskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gotAllVertexColorsWithSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_gotAllVertexColorsWithSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_additionalData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_taskResultInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_taskResultInfo = { "taskResultInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetAllVertexColorsOnlyOnActor_Parms, taskResultInfo), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_taskResultInfo_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_taskResultInfo_MetaData) }; // 3152737793
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_gotAllVertexColorsWithSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_gotAllVertexColorsWithSettings = { "gotAllVertexColorsWithSettings", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetAllVertexColorsOnlyOnActor_Parms, gotAllVertexColorsWithSettings), Z_Construct_UScriptStruct_FVertexDetectGetColorsOnlyStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_gotAllVertexColorsWithSettings_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_gotAllVertexColorsWithSettings_MetaData) }; // 1846039242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_additionalData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_additionalData = { "additionalData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetAllVertexColorsOnlyOnActor_Parms, additionalData), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_additionalData_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_additionalData_MetaData) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_taskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_gotAllVertexColorsWithSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_additionalData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Detection" },
		{ "ModuleRelativePath", "VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Runs on the Actor that we ran GetAllColorsOnly on, if the actor in the callback settings is the default null, otherwise it will run for whatever the user has specified." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "GetAllVertexColorsOnlyOnActor", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::PropPointers), sizeof(VertexPaintDetectionInterface_eventGetAllVertexColorsOnlyOnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(VertexPaintDetectionInterface_eventGetAllVertexColorsOnlyOnActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_taskResultInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_taskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_detectedMeshWithSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_detectedMeshWithSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_closestVertexColorResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_closestVertexColorResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_estimatedColorAtHitLocationResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_estimatedColorAtHitLocationResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_avarageColorInAreaInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_avarageColorInAreaInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_additionalData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_taskResultInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_taskResultInfo = { "taskResultInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetClosestVertexDataOnActor_Parms, taskResultInfo), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_taskResultInfo_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_taskResultInfo_MetaData) }; // 3152737793
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_detectedMeshWithSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_detectedMeshWithSettings = { "detectedMeshWithSettings", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetClosestVertexDataOnActor_Parms, detectedMeshWithSettings), Z_Construct_UScriptStruct_FVertexDetectInfoStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_detectedMeshWithSettings_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_detectedMeshWithSettings_MetaData) }; // 148266220
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_closestVertexColorResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_closestVertexColorResult = { "closestVertexColorResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetClosestVertexDataOnActor_Parms, closestVertexColorResult), Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_closestVertexColorResult_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_closestVertexColorResult_MetaData) }; // 3612237734
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_estimatedColorAtHitLocationResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_estimatedColorAtHitLocationResult = { "estimatedColorAtHitLocationResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetClosestVertexDataOnActor_Parms, estimatedColorAtHitLocationResult), Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_estimatedColorAtHitLocationResult_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_estimatedColorAtHitLocationResult_MetaData) }; // 824555151
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_avarageColorInAreaInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_avarageColorInAreaInfo = { "avarageColorInAreaInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetClosestVertexDataOnActor_Parms, avarageColorInAreaInfo), Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_avarageColorInAreaInfo_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_avarageColorInAreaInfo_MetaData) }; // 3537386827
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_additionalData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_additionalData = { "additionalData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetClosestVertexDataOnActor_Parms, additionalData), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_additionalData_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_additionalData_MetaData) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_taskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_detectedMeshWithSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_closestVertexColorResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_estimatedColorAtHitLocationResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_avarageColorInAreaInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_additionalData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Detection" },
		{ "ModuleRelativePath", "VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Runs on the Actor that we ran GetClosestVertexDataOn, on if the actor in the callback settings is the default null, otherwise it will run for whatever the user has specified." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "GetClosestVertexDataOnActor", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::PropPointers), sizeof(VertexPaintDetectionInterface_eventGetClosestVertexDataOnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(VertexPaintDetectionInterface_eventGetClosestVertexDataOnActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_taskResultInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_taskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_getColorsWithinAreaSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_getColorsWithinAreaSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_withinAreaResults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_withinAreaResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_additionalData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::NewProp_taskResultInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::NewProp_taskResultInfo = { "taskResultInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetColorsWithinArea_Parms, taskResultInfo), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::NewProp_taskResultInfo_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::NewProp_taskResultInfo_MetaData) }; // 3152737793
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::NewProp_getColorsWithinAreaSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::NewProp_getColorsWithinAreaSettings = { "getColorsWithinAreaSettings", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetColorsWithinArea_Parms, getColorsWithinAreaSettings), Z_Construct_UScriptStruct_FVertexDetectGetColorsWithinAreaStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::NewProp_getColorsWithinAreaSettings_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::NewProp_getColorsWithinAreaSettings_MetaData) }; // 2501455522
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::NewProp_withinAreaResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::NewProp_withinAreaResults = { "withinAreaResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetColorsWithinArea_Parms, withinAreaResults), Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::NewProp_withinAreaResults_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::NewProp_withinAreaResults_MetaData) }; // 3808799637
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::NewProp_additionalData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::NewProp_additionalData = { "additionalData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetColorsWithinArea_Parms, additionalData), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::NewProp_additionalData_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::NewProp_additionalData_MetaData) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::NewProp_taskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::NewProp_getColorsWithinAreaSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::NewProp_withinAreaResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::NewProp_additionalData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Detection" },
		{ "ModuleRelativePath", "VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Runs on the Actor that we ran Get Colors Within Area on, if the actor in the callback settings is the default null, otherwise it will run for whatever the user has specified." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "GetColorsWithinArea", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::PropPointers), sizeof(VertexPaintDetectionInterface_eventGetColorsWithinArea_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::PropPointers) < 2048);
	static_assert(sizeof(VertexPaintDetectionInterface_eventGetColorsWithinArea_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComponentTryingToGetClothSettingsFor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComponentTryingToGetClothSettingsFor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::NewProp_skeletalMeshComponentTryingToGetClothSettingsFor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::NewProp_skeletalMeshComponentTryingToGetClothSettingsFor = { "skeletalMeshComponentTryingToGetClothSettingsFor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetSkeletalMeshClothPhysicsSettings_Parms, skeletalMeshComponentTryingToGetClothSettingsFor), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::NewProp_skeletalMeshComponentTryingToGetClothSettingsFor_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::NewProp_skeletalMeshComponentTryingToGetClothSettingsFor_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct, METADATA_PARAMS(0, nullptr) }; // 289911299
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClothingAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetSkeletalMeshClothPhysicsSettings_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 289911299
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::NewProp_skeletalMeshComponentTryingToGetClothSettingsFor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Cloth" },
		{ "ModuleRelativePath", "VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Returns Cloths and whatever Physics settings they should have depending on RGBA Vertex Colors. For instance if Blue is painted 1, what the physics settings should be for the cloth then." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "GetSkeletalMeshClothPhysicsSettings", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::PropPointers), sizeof(VertexPaintDetectionInterface_eventGetSkeletalMeshClothPhysicsSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(VertexPaintDetectionInterface_eventGetSkeletalMeshClothPhysicsSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_associatedPaintComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_associatedPaintComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshApplyingColorsTo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshApplyingColorsTo;
		static const UECodeGen_Private::FIntPropertyParams NewProp_currentLOD;
		static const UECodeGen_Private::FIntPropertyParams NewProp_currentVertexIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_materialVertexIsOn;
		static void NewProp_isVertexOnCloth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isVertexOnCloth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boneVertexIsOn_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_boneVertexIsOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPositionInWorldSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexPositionInWorldSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentVertexColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentVertexColor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_currentVertexMostDominantPhysicsSurface;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentVertexMostDominantPhysicsSurfaceValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_updatedVertexColorToApply_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_updatedVertexColorToApply;
		static void NewProp_wantsToApplyUpdatedVertexColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_wantsToApplyUpdatedVertexColor;
		static void NewProp_applyUpdatedOrOverridenVertexColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_applyUpdatedOrOverridenVertexColors;
		static void NewProp_overrideVertexColorsToApply_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_overrideVertexColorsToApply;
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexColorsToOverrideWith;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_associatedPaintComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_associatedPaintComponent = { "associatedPaintComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms, associatedPaintComponent), Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_associatedPaintComponent_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_associatedPaintComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_meshApplyingColorsTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_meshApplyingColorsTo = { "meshApplyingColorsTo", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms, meshApplyingColorsTo), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_meshApplyingColorsTo_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_meshApplyingColorsTo_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_currentLOD = { "currentLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms, currentLOD), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_currentVertexIndex = { "currentVertexIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms, currentVertexIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_materialVertexIsOn = { "materialVertexIsOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms, materialVertexIsOn), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_isVertexOnCloth_SetBit(void* Obj)
	{
		((VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms*)Obj)->isVertexOnCloth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_isVertexOnCloth = { "isVertexOnCloth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms), &Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_isVertexOnCloth_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_boneVertexIsOn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_boneVertexIsOn = { "boneVertexIsOn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms, boneVertexIsOn), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_boneVertexIsOn_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_boneVertexIsOn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_vertexPositionInWorldSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_vertexPositionInWorldSpace = { "vertexPositionInWorldSpace", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms, vertexPositionInWorldSpace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_vertexPositionInWorldSpace_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_vertexPositionInWorldSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_vertexNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_vertexNormal = { "vertexNormal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms, vertexNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_vertexNormal_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_vertexNormal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_currentVertexColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_currentVertexColor = { "currentVertexColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms, currentVertexColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_currentVertexColor_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_currentVertexColor_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_currentVertexMostDominantPhysicsSurface = { "currentVertexMostDominantPhysicsSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms, currentVertexMostDominantPhysicsSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_currentVertexMostDominantPhysicsSurfaceValue = { "currentVertexMostDominantPhysicsSurfaceValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms, currentVertexMostDominantPhysicsSurfaceValue), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_updatedVertexColorToApply_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_updatedVertexColorToApply = { "updatedVertexColorToApply", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms, updatedVertexColorToApply), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_updatedVertexColorToApply_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_updatedVertexColorToApply_MetaData) };
	void Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_wantsToApplyUpdatedVertexColor_SetBit(void* Obj)
	{
		((VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms*)Obj)->wantsToApplyUpdatedVertexColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_wantsToApplyUpdatedVertexColor = { "wantsToApplyUpdatedVertexColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms), &Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_wantsToApplyUpdatedVertexColor_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_applyUpdatedOrOverridenVertexColors_SetBit(void* Obj)
	{
		((VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms*)Obj)->applyUpdatedOrOverridenVertexColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_applyUpdatedOrOverridenVertexColors = { "applyUpdatedOrOverridenVertexColors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms), &Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_applyUpdatedOrOverridenVertexColors_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_overrideVertexColorsToApply_SetBit(void* Obj)
	{
		((VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms*)Obj)->overrideVertexColorsToApply = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_overrideVertexColorsToApply = { "overrideVertexColorsToApply", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms), &Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_overrideVertexColorsToApply_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_vertexColorsToOverrideWith = { "vertexColorsToOverrideWith", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms, vertexColorsToOverrideWith), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_associatedPaintComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_meshApplyingColorsTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_currentLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_currentVertexIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_materialVertexIsOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_isVertexOnCloth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_boneVertexIsOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_vertexPositionInWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_vertexNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_currentVertexColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_currentVertexMostDominantPhysicsSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_currentVertexMostDominantPhysicsSurfaceValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_updatedVertexColorToApply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_wantsToApplyUpdatedVertexColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_applyUpdatedOrOverridenVertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_overrideVertexColorsToApply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::NewProp_vertexColorsToOverrideWith,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Painting" },
		{ "ModuleRelativePath", "VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Runs on the Actor that Owns the Associated Paint Component, i.e. the one that instigated the paint job. NOTE That if the task is started using multithreading, then this will execute on another thread, so recommend avoiding things like debug symbols. \nIf you return shouldApplyUpdatedVertexColor false then we won't use the updatedVertexColorToApply from code, or the vertexColorsToApply we return here. However if it's true then it will update it with updatedVertexColorToApply from code, but if overrideVertexColorsToApply is True, then vertexColorsToOverrideWith will be used instead." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "OverrideVertexColorToApply", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::PropPointers), sizeof(VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::PropPointers) < 2048);
	static_assert(sizeof(VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_taskResultInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_taskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintTaskResultInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintTaskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintedAtLocationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintedAtLocationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_closestVertexColorResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_closestVertexColorResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_estimatedColorAtHitLocationResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_estimatedColorAtHitLocationResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_avarageColorInAreaInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_avarageColorInAreaInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_additionalData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_taskResultInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_taskResultInfo = { "taskResultInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms, taskResultInfo), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_taskResultInfo_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_taskResultInfo_MetaData) }; // 3152737793
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_paintTaskResultInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_paintTaskResultInfo = { "paintTaskResultInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms, paintTaskResultInfo), Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_paintTaskResultInfo_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_paintTaskResultInfo_MetaData) }; // 3289238885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_paintedAtLocationSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_paintedAtLocationSettings = { "paintedAtLocationSettings", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms, paintedAtLocationSettings), Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_paintedAtLocationSettings_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_paintedAtLocationSettings_MetaData) }; // 4077106337
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_closestVertexColorResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_closestVertexColorResult = { "closestVertexColorResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms, closestVertexColorResult), Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_closestVertexColorResult_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_closestVertexColorResult_MetaData) }; // 3612237734
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_estimatedColorAtHitLocationResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_estimatedColorAtHitLocationResult = { "estimatedColorAtHitLocationResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms, estimatedColorAtHitLocationResult), Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_estimatedColorAtHitLocationResult_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_estimatedColorAtHitLocationResult_MetaData) }; // 824555151
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_avarageColorInAreaInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_avarageColorInAreaInfo = { "avarageColorInAreaInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms, avarageColorInAreaInfo), Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_avarageColorInAreaInfo_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_avarageColorInAreaInfo_MetaData) }; // 3537386827
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_additionalData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_additionalData = { "additionalData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms, additionalData), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_additionalData_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_additionalData_MetaData) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_taskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_paintTaskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_paintedAtLocationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_closestVertexColorResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_estimatedColorAtHitLocationResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_avarageColorInAreaInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_additionalData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Painting" },
		{ "ModuleRelativePath", "VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Runs on the Actor that got Painted At Location on, if the actor in the callback settings is the default null, otherwise it will run for whatever the user has specified." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "PaintedOnActor_AtLocation", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::PropPointers), sizeof(VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_taskResultInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_taskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintTaskResultInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintTaskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintedEntireMeshSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintedEntireMeshSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_additionalData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_taskResultInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_taskResultInfo = { "taskResultInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_EntireMesh_Parms, taskResultInfo), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_taskResultInfo_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_taskResultInfo_MetaData) }; // 3152737793
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_paintTaskResultInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_paintTaskResultInfo = { "paintTaskResultInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_EntireMesh_Parms, paintTaskResultInfo), Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_paintTaskResultInfo_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_paintTaskResultInfo_MetaData) }; // 3289238885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_paintedEntireMeshSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_paintedEntireMeshSettings = { "paintedEntireMeshSettings", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_EntireMesh_Parms, paintedEntireMeshSettings), Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_paintedEntireMeshSettings_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_paintedEntireMeshSettings_MetaData) }; // 1206873762
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_additionalData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_additionalData = { "additionalData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_EntireMesh_Parms, additionalData), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_additionalData_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_additionalData_MetaData) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_taskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_paintTaskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_paintedEntireMeshSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_additionalData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Painting" },
		{ "ModuleRelativePath", "VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Runs on the Actor that got Painted Entire Mesh on, if the actor in the callback settings is the default null, otherwise it will run for whatever the user has specified." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "PaintedOnActor_EntireMesh", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::PropPointers), sizeof(VertexPaintDetectionInterface_eventPaintedOnActor_EntireMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(VertexPaintDetectionInterface_eventPaintedOnActor_EntireMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_taskResultInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_taskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintTaskResultInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintTaskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintedColorSnippetSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintedColorSnippetSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_additionalData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_taskResultInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_taskResultInfo = { "taskResultInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_PaintColorSnippet_Parms, taskResultInfo), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_taskResultInfo_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_taskResultInfo_MetaData) }; // 3152737793
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_paintTaskResultInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_paintTaskResultInfo = { "paintTaskResultInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_PaintColorSnippet_Parms, paintTaskResultInfo), Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_paintTaskResultInfo_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_paintTaskResultInfo_MetaData) }; // 3289238885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_paintedColorSnippetSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_paintedColorSnippetSettings = { "paintedColorSnippetSettings", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_PaintColorSnippet_Parms, paintedColorSnippetSettings), Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_paintedColorSnippetSettings_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_paintedColorSnippetSettings_MetaData) }; // 1699173422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_additionalData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_additionalData = { "additionalData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_PaintColorSnippet_Parms, additionalData), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_additionalData_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_additionalData_MetaData) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_taskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_paintTaskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_paintedColorSnippetSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_additionalData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Painting" },
		{ "ModuleRelativePath", "VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Runs on the Actor that got Painted Color Snippet on, if the actor in the callback settings is the default null, otherwise it will run for whatever the user has specified." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "PaintedOnActor_PaintColorSnippet", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::PropPointers), sizeof(VertexPaintDetectionInterface_eventPaintedOnActor_PaintColorSnippet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::PropPointers) < 2048);
	static_assert(sizeof(VertexPaintDetectionInterface_eventPaintedOnActor_PaintColorSnippet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_taskResultInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_taskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintTaskResultInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintTaskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_setMeshComponentVertexColorSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_setMeshComponentVertexColorSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_additionalData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::NewProp_taskResultInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::NewProp_taskResultInfo = { "taskResultInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_SetMeshComponentVertexColors_Parms, taskResultInfo), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::NewProp_taskResultInfo_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::NewProp_taskResultInfo_MetaData) }; // 3152737793
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::NewProp_paintTaskResultInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::NewProp_paintTaskResultInfo = { "paintTaskResultInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_SetMeshComponentVertexColors_Parms, paintTaskResultInfo), Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::NewProp_paintTaskResultInfo_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::NewProp_paintTaskResultInfo_MetaData) }; // 3289238885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::NewProp_setMeshComponentVertexColorSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::NewProp_setMeshComponentVertexColorSettings = { "setMeshComponentVertexColorSettings", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_SetMeshComponentVertexColors_Parms, setMeshComponentVertexColorSettings), Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::NewProp_setMeshComponentVertexColorSettings_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::NewProp_setMeshComponentVertexColorSettings_MetaData) }; // 3521629976
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::NewProp_additionalData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::NewProp_additionalData = { "additionalData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_SetMeshComponentVertexColors_Parms, additionalData), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::NewProp_additionalData_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::NewProp_additionalData_MetaData) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::NewProp_taskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::NewProp_paintTaskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::NewProp_setMeshComponentVertexColorSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::NewProp_additionalData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Painting" },
		{ "ModuleRelativePath", "VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Runs on the Actor that got run with Set Mesh Component Vertex Colors, if the actor in the callback settings is the default null, otherwise it will run for whatever the user has specified." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "PaintedOnActor_SetMeshComponentVertexColors", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::PropPointers), sizeof(VertexPaintDetectionInterface_eventPaintedOnActor_SetMeshComponentVertexColors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::PropPointers) < 2048);
	static_assert(sizeof(VertexPaintDetectionInterface_eventPaintedOnActor_SetMeshComponentVertexColors_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_taskResultInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_taskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintTaskResultInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintTaskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_setMeshComponentVertexColorUsingSerializedStringSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_setMeshComponentVertexColorUsingSerializedStringSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_additionalData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_taskResultInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_taskResultInfo = { "taskResultInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Parms, taskResultInfo), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_taskResultInfo_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_taskResultInfo_MetaData) }; // 3152737793
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_paintTaskResultInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_paintTaskResultInfo = { "paintTaskResultInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Parms, paintTaskResultInfo), Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_paintTaskResultInfo_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_paintTaskResultInfo_MetaData) }; // 3289238885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_setMeshComponentVertexColorUsingSerializedStringSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_setMeshComponentVertexColorUsingSerializedStringSettings = { "setMeshComponentVertexColorUsingSerializedStringSettings", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Parms, setMeshComponentVertexColorUsingSerializedStringSettings), Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_setMeshComponentVertexColorUsingSerializedStringSettings_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_setMeshComponentVertexColorUsingSerializedStringSettings_MetaData) }; // 3911707442
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_additionalData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_additionalData = { "additionalData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Parms, additionalData), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_additionalData_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_additionalData_MetaData) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_taskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_paintTaskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_setMeshComponentVertexColorUsingSerializedStringSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::NewProp_additionalData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Painting" },
		{ "ModuleRelativePath", "VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Runs on the Actor that got run with Set Mesh Component Vertex Colors Using Serialized String, if the actor in the callback settings is the default null, otherwise it will run for whatever the user has specified." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::PropPointers), sizeof(VertexPaintDetectionInterface_eventPaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::PropPointers) < 2048);
	static_assert(sizeof(VertexPaintDetectionInterface_eventPaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_taskResultInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_taskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintTaskResultInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintTaskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintedWithinAreaSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintedWithinAreaSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_withinAreaResults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_withinAreaResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_additionalData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_taskResultInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_taskResultInfo = { "taskResultInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_WithinArea_Parms, taskResultInfo), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_taskResultInfo_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_taskResultInfo_MetaData) }; // 3152737793
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_paintTaskResultInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_paintTaskResultInfo = { "paintTaskResultInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_WithinArea_Parms, paintTaskResultInfo), Z_Construct_UScriptStruct_FVertexDetectPaintTaskResultInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_paintTaskResultInfo_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_paintTaskResultInfo_MetaData) }; // 3289238885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_paintedWithinAreaSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_paintedWithinAreaSettings = { "paintedWithinAreaSettings", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_WithinArea_Parms, paintedWithinAreaSettings), Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_paintedWithinAreaSettings_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_paintedWithinAreaSettings_MetaData) }; // 958617516
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_withinAreaResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_withinAreaResults = { "withinAreaResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_WithinArea_Parms, withinAreaResults), Z_Construct_UScriptStruct_FVertexPaintWithinAreaResults, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_withinAreaResults_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_withinAreaResults_MetaData) }; // 3808799637
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_additionalData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_additionalData = { "additionalData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_WithinArea_Parms, additionalData), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_additionalData_MetaData), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_additionalData_MetaData) }; // 559155732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_taskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_paintTaskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_paintedWithinAreaSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_withinAreaResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_additionalData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Painting" },
		{ "ModuleRelativePath", "VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Runs on the Actor that got Painted Within Area on, if the actor in the callback settings is the default null, otherwise it will run for whatever the user has specified." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "PaintedOnActor_WithinArea", nullptr, nullptr, Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::PropPointers), sizeof(VertexPaintDetectionInterface_eventPaintedOnActor_WithinArea_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::PropPointers) < 2048);
	static_assert(sizeof(VertexPaintDetectionInterface_eventPaintedOnActor_WithinArea_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexPaintDetectionInterface);
	UClass* Z_Construct_UClass_UVertexPaintDetectionInterface_NoRegister()
	{
		return UVertexPaintDetectionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVertexPaintDetectionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexPaintDetectionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVertexPaintDetectionInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh, "ClothBeginOverlappingMesh" }, // 1410047003
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh, "ClothEndOverlappingMesh" }, // 974308930
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor, "ColorsAppliedOnActor" }, // 612013690
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor, "GetAllVertexColorsOnlyOnActor" }, // 3939799308
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor, "GetClosestVertexDataOnActor" }, // 3085653807
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_GetColorsWithinArea, "GetColorsWithinArea" }, // 76168191
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings, "GetSkeletalMeshClothPhysicsSettings" }, // 512837150
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_OverrideVertexColorToApply, "OverrideVertexColorToApply" }, // 1324650375
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation, "PaintedOnActor_AtLocation" }, // 1795493097
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh, "PaintedOnActor_EntireMesh" }, // 627586562
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet, "PaintedOnActor_PaintColorSnippet" }, // 208286920
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors, "PaintedOnActor_SetMeshComponentVertexColors" }, // 301398781
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString, "PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString" }, // 3525459615
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea, "PaintedOnActor_WithinArea" }, // 4246330302
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "VertexPaintDetectionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexPaintDetectionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVertexPaintDetectionInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexPaintDetectionInterface_Statics::ClassParams = {
		&UVertexPaintDetectionInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UVertexPaintDetectionInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVertexPaintDetectionInterface()
	{
		if (!Z_Registration_Info_UClass_UVertexPaintDetectionInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexPaintDetectionInterface.OuterSingleton, Z_Construct_UClass_UVertexPaintDetectionInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexPaintDetectionInterface.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<UVertexPaintDetectionInterface>()
	{
		return UVertexPaintDetectionInterface::StaticClass();
	}
	UVertexPaintDetectionInterface::UVertexPaintDetectionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexPaintDetectionInterface);
	UVertexPaintDetectionInterface::~UVertexPaintDetectionInterface() {}
	static FName NAME_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh = FName(TEXT("ClothBeginOverlappingMesh"));
	void IVertexPaintDetectionInterface::Execute_ClothBeginOverlappingMesh(UObject* O, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 item)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventClothBeginOverlappingMesh_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh);
		if (Func)
		{
			Parms.OverlappedComponent=OverlappedComponent;
			Parms.OtherActor=OtherActor;
			Parms.OtherComp=OtherComp;
			Parms.item=item;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			I->ClothBeginOverlappingMesh_Implementation(OverlappedComponent,OtherActor,OtherComp,item);
		}
	}
	static FName NAME_UVertexPaintDetectionInterface_ClothEndOverlappingMesh = FName(TEXT("ClothEndOverlappingMesh"));
	void IVertexPaintDetectionInterface::Execute_ClothEndOverlappingMesh(UObject* O, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 item)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventClothEndOverlappingMesh_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_ClothEndOverlappingMesh);
		if (Func)
		{
			Parms.OverlappedComponent=OverlappedComponent;
			Parms.OtherActor=OtherActor;
			Parms.OtherComp=OtherComp;
			Parms.item=item;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			I->ClothEndOverlappingMesh_Implementation(OverlappedComponent,OtherActor,OtherComp,item);
		}
	}
	static FName NAME_UVertexPaintDetectionInterface_ColorsAppliedOnActor = FName(TEXT("ColorsAppliedOnActor"));
	void IVertexPaintDetectionInterface::Execute_ColorsAppliedOnActor(UObject* O, FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectPaintTaskResultInfo const& paintTaskResultInfo, FVertexPaintStruct const& paintedOnActorSettings, FVertexDetectAdditionalDataToPassThrough const& additionalData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventColorsAppliedOnActor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_ColorsAppliedOnActor);
		if (Func)
		{
			Parms.taskResultInfo=taskResultInfo;
			Parms.paintTaskResultInfo=paintTaskResultInfo;
			Parms.paintedOnActorSettings=paintedOnActorSettings;
			Parms.additionalData=additionalData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			I->ColorsAppliedOnActor_Implementation(taskResultInfo,paintTaskResultInfo,paintedOnActorSettings,additionalData);
		}
	}
	static FName NAME_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor = FName(TEXT("GetAllVertexColorsOnlyOnActor"));
	void IVertexPaintDetectionInterface::Execute_GetAllVertexColorsOnlyOnActor(UObject* O, FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectGetColorsOnlyStruct const& gotAllVertexColorsWithSettings, FVertexDetectAdditionalDataToPassThrough const& additionalData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventGetAllVertexColorsOnlyOnActor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor);
		if (Func)
		{
			Parms.taskResultInfo=taskResultInfo;
			Parms.gotAllVertexColorsWithSettings=gotAllVertexColorsWithSettings;
			Parms.additionalData=additionalData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			I->GetAllVertexColorsOnlyOnActor_Implementation(taskResultInfo,gotAllVertexColorsWithSettings,additionalData);
		}
	}
	static FName NAME_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor = FName(TEXT("GetClosestVertexDataOnActor"));
	void IVertexPaintDetectionInterface::Execute_GetClosestVertexDataOnActor(UObject* O, FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectInfoStruct const& detectedMeshWithSettings, FVertexDetectClosestVertexDataResultStruct const& closestVertexColorResult, FVertexDetectEstimatedColorAtHitLocationResultStruct const& estimatedColorAtHitLocationResult, FVertexDetectAvarageColorInAreaInfo const& avarageColorInAreaInfo, FVertexDetectAdditionalDataToPassThrough const& additionalData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventGetClosestVertexDataOnActor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor);
		if (Func)
		{
			Parms.taskResultInfo=taskResultInfo;
			Parms.detectedMeshWithSettings=detectedMeshWithSettings;
			Parms.closestVertexColorResult=closestVertexColorResult;
			Parms.estimatedColorAtHitLocationResult=estimatedColorAtHitLocationResult;
			Parms.avarageColorInAreaInfo=avarageColorInAreaInfo;
			Parms.additionalData=additionalData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			I->GetClosestVertexDataOnActor_Implementation(taskResultInfo,detectedMeshWithSettings,closestVertexColorResult,estimatedColorAtHitLocationResult,avarageColorInAreaInfo,additionalData);
		}
	}
	static FName NAME_UVertexPaintDetectionInterface_GetColorsWithinArea = FName(TEXT("GetColorsWithinArea"));
	void IVertexPaintDetectionInterface::Execute_GetColorsWithinArea(UObject* O, FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectGetColorsWithinAreaStruct const& getColorsWithinAreaSettings, FVertexPaintWithinAreaResults const& withinAreaResults, FVertexDetectAdditionalDataToPassThrough const& additionalData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventGetColorsWithinArea_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_GetColorsWithinArea);
		if (Func)
		{
			Parms.taskResultInfo=taskResultInfo;
			Parms.getColorsWithinAreaSettings=getColorsWithinAreaSettings;
			Parms.withinAreaResults=withinAreaResults;
			Parms.additionalData=additionalData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			I->GetColorsWithinArea_Implementation(taskResultInfo,getColorsWithinAreaSettings,withinAreaResults,additionalData);
		}
	}
	static FName NAME_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings = FName(TEXT("GetSkeletalMeshClothPhysicsSettings"));
	TMap<UClothingAssetBase*,FVertexDetectClothSettingsStruct> IVertexPaintDetectionInterface::Execute_GetSkeletalMeshClothPhysicsSettings(UObject* O, USkeletalMeshComponent* skeletalMeshComponentTryingToGetClothSettingsFor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventGetSkeletalMeshClothPhysicsSettings_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings);
		if (Func)
		{
			Parms.skeletalMeshComponentTryingToGetClothSettingsFor=skeletalMeshComponentTryingToGetClothSettingsFor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSkeletalMeshClothPhysicsSettings_Implementation(skeletalMeshComponentTryingToGetClothSettingsFor);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVertexPaintDetectionInterface_OverrideVertexColorToApply = FName(TEXT("OverrideVertexColorToApply"));
	void IVertexPaintDetectionInterface::Execute_OverrideVertexColorToApply(UObject* O, UVertexPaintDetectionComponent* associatedPaintComponent, UPrimitiveComponent* meshApplyingColorsTo, int32 currentLOD, int32 currentVertexIndex, UMaterialInterface* materialVertexIsOn, bool isVertexOnCloth, FName const& boneVertexIsOn, FVector const& vertexPositionInWorldSpace, FVector const& vertexNormal, FColor const& currentVertexColor, EPhysicalSurface currentVertexMostDominantPhysicsSurface, float currentVertexMostDominantPhysicsSurfaceValue, FColor const& updatedVertexColorToApply, bool wantsToApplyUpdatedVertexColor, bool& applyUpdatedOrOverridenVertexColors, bool& overrideVertexColorsToApply, FColor& vertexColorsToOverrideWith)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventOverrideVertexColorToApply_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_OverrideVertexColorToApply);
		if (Func)
		{
			Parms.associatedPaintComponent=associatedPaintComponent;
			Parms.meshApplyingColorsTo=meshApplyingColorsTo;
			Parms.currentLOD=currentLOD;
			Parms.currentVertexIndex=currentVertexIndex;
			Parms.materialVertexIsOn=materialVertexIsOn;
			Parms.isVertexOnCloth=isVertexOnCloth;
			Parms.boneVertexIsOn=boneVertexIsOn;
			Parms.vertexPositionInWorldSpace=vertexPositionInWorldSpace;
			Parms.vertexNormal=vertexNormal;
			Parms.currentVertexColor=currentVertexColor;
			Parms.currentVertexMostDominantPhysicsSurface=currentVertexMostDominantPhysicsSurface;
			Parms.currentVertexMostDominantPhysicsSurfaceValue=currentVertexMostDominantPhysicsSurfaceValue;
			Parms.updatedVertexColorToApply=updatedVertexColorToApply;
			Parms.wantsToApplyUpdatedVertexColor=wantsToApplyUpdatedVertexColor;
			Parms.applyUpdatedOrOverridenVertexColors=applyUpdatedOrOverridenVertexColors;
			Parms.overrideVertexColorsToApply=overrideVertexColorsToApply;
			Parms.vertexColorsToOverrideWith=vertexColorsToOverrideWith;
			O->ProcessEvent(Func, &Parms);
			applyUpdatedOrOverridenVertexColors=Parms.applyUpdatedOrOverridenVertexColors;
			overrideVertexColorsToApply=Parms.overrideVertexColorsToApply;
			vertexColorsToOverrideWith=Parms.vertexColorsToOverrideWith;
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			I->OverrideVertexColorToApply_Implementation(associatedPaintComponent,meshApplyingColorsTo,currentLOD,currentVertexIndex,materialVertexIsOn,isVertexOnCloth,boneVertexIsOn,vertexPositionInWorldSpace,vertexNormal,currentVertexColor,currentVertexMostDominantPhysicsSurface,currentVertexMostDominantPhysicsSurfaceValue,updatedVertexColorToApply,wantsToApplyUpdatedVertexColor,applyUpdatedOrOverridenVertexColors,overrideVertexColorsToApply,vertexColorsToOverrideWith);
		}
	}
	static FName NAME_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation = FName(TEXT("PaintedOnActor_AtLocation"));
	void IVertexPaintDetectionInterface::Execute_PaintedOnActor_AtLocation(UObject* O, FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectPaintTaskResultInfo const& paintTaskResultInfo, FVertexPaintAtLocationStruct const& paintedAtLocationSettings, FVertexDetectClosestVertexDataResultStruct const& closestVertexColorResult, FVertexDetectEstimatedColorAtHitLocationResultStruct const& estimatedColorAtHitLocationResult, FVertexDetectAvarageColorInAreaInfo const& avarageColorInAreaInfo, FVertexDetectAdditionalDataToPassThrough const& additionalData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation);
		if (Func)
		{
			Parms.taskResultInfo=taskResultInfo;
			Parms.paintTaskResultInfo=paintTaskResultInfo;
			Parms.paintedAtLocationSettings=paintedAtLocationSettings;
			Parms.closestVertexColorResult=closestVertexColorResult;
			Parms.estimatedColorAtHitLocationResult=estimatedColorAtHitLocationResult;
			Parms.avarageColorInAreaInfo=avarageColorInAreaInfo;
			Parms.additionalData=additionalData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			I->PaintedOnActor_AtLocation_Implementation(taskResultInfo,paintTaskResultInfo,paintedAtLocationSettings,closestVertexColorResult,estimatedColorAtHitLocationResult,avarageColorInAreaInfo,additionalData);
		}
	}
	static FName NAME_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh = FName(TEXT("PaintedOnActor_EntireMesh"));
	void IVertexPaintDetectionInterface::Execute_PaintedOnActor_EntireMesh(UObject* O, FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectPaintTaskResultInfo const& paintTaskResultInfo, FVertexPaintOnEntireMeshStruct const& paintedEntireMeshSettings, FVertexDetectAdditionalDataToPassThrough const& additionalData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventPaintedOnActor_EntireMesh_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh);
		if (Func)
		{
			Parms.taskResultInfo=taskResultInfo;
			Parms.paintTaskResultInfo=paintTaskResultInfo;
			Parms.paintedEntireMeshSettings=paintedEntireMeshSettings;
			Parms.additionalData=additionalData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			I->PaintedOnActor_EntireMesh_Implementation(taskResultInfo,paintTaskResultInfo,paintedEntireMeshSettings,additionalData);
		}
	}
	static FName NAME_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet = FName(TEXT("PaintedOnActor_PaintColorSnippet"));
	void IVertexPaintDetectionInterface::Execute_PaintedOnActor_PaintColorSnippet(UObject* O, FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectPaintTaskResultInfo const& paintTaskResultInfo, FVertexPaintColorSnippetStruct const& paintedColorSnippetSettings, FVertexDetectAdditionalDataToPassThrough const& additionalData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventPaintedOnActor_PaintColorSnippet_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet);
		if (Func)
		{
			Parms.taskResultInfo=taskResultInfo;
			Parms.paintTaskResultInfo=paintTaskResultInfo;
			Parms.paintedColorSnippetSettings=paintedColorSnippetSettings;
			Parms.additionalData=additionalData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			I->PaintedOnActor_PaintColorSnippet_Implementation(taskResultInfo,paintTaskResultInfo,paintedColorSnippetSettings,additionalData);
		}
	}
	static FName NAME_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors = FName(TEXT("PaintedOnActor_SetMeshComponentVertexColors"));
	void IVertexPaintDetectionInterface::Execute_PaintedOnActor_SetMeshComponentVertexColors(UObject* O, FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectPaintTaskResultInfo const& paintTaskResultInfo, FVertexPaintSetMeshComponentVertexColors const& setMeshComponentVertexColorSettings, FVertexDetectAdditionalDataToPassThrough const& additionalData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventPaintedOnActor_SetMeshComponentVertexColors_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColors);
		if (Func)
		{
			Parms.taskResultInfo=taskResultInfo;
			Parms.paintTaskResultInfo=paintTaskResultInfo;
			Parms.setMeshComponentVertexColorSettings=setMeshComponentVertexColorSettings;
			Parms.additionalData=additionalData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			I->PaintedOnActor_SetMeshComponentVertexColors_Implementation(taskResultInfo,paintTaskResultInfo,setMeshComponentVertexColorSettings,additionalData);
		}
	}
	static FName NAME_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString = FName(TEXT("PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString"));
	void IVertexPaintDetectionInterface::Execute_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString(UObject* O, FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectPaintTaskResultInfo const& paintTaskResultInfo, FVertexPaintSetMeshComponentVertexColorsUsingSerializedString const& setMeshComponentVertexColorUsingSerializedStringSettings, FVertexDetectAdditionalDataToPassThrough const& additionalData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventPaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString);
		if (Func)
		{
			Parms.taskResultInfo=taskResultInfo;
			Parms.paintTaskResultInfo=paintTaskResultInfo;
			Parms.setMeshComponentVertexColorUsingSerializedStringSettings=setMeshComponentVertexColorUsingSerializedStringSettings;
			Parms.additionalData=additionalData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			I->PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString_Implementation(taskResultInfo,paintTaskResultInfo,setMeshComponentVertexColorUsingSerializedStringSettings,additionalData);
		}
	}
	static FName NAME_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea = FName(TEXT("PaintedOnActor_WithinArea"));
	void IVertexPaintDetectionInterface::Execute_PaintedOnActor_WithinArea(UObject* O, FVertexDetectTaskResultInfo const& taskResultInfo, FVertexDetectPaintTaskResultInfo const& paintTaskResultInfo, FVertexPainthWithinAreaStruct const& paintedWithinAreaSettings, FVertexPaintWithinAreaResults const& withinAreaResults, FVertexDetectAdditionalDataToPassThrough const& additionalData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventPaintedOnActor_WithinArea_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea);
		if (Func)
		{
			Parms.taskResultInfo=taskResultInfo;
			Parms.paintTaskResultInfo=paintTaskResultInfo;
			Parms.paintedWithinAreaSettings=paintedWithinAreaSettings;
			Parms.withinAreaResults=withinAreaResults;
			Parms.additionalData=additionalData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			I->PaintedOnActor_WithinArea_Implementation(taskResultInfo,paintTaskResultInfo,paintedWithinAreaSettings,withinAreaResults,additionalData);
		}
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexPaintDetectionInterface, UVertexPaintDetectionInterface::StaticClass, TEXT("UVertexPaintDetectionInterface"), &Z_Registration_Info_UClass_UVertexPaintDetectionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexPaintDetectionInterface), 2447645164U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionInterface_h_3827069144(TEXT("/Script/VertexPaintDetectionPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_VertexPaintDetectionInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
