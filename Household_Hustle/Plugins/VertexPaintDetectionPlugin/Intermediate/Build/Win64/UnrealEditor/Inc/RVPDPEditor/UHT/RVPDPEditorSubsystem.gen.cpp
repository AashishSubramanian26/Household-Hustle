// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RVPDPEditorSubsystem.h"
#include "../Prerequisites/ColorSnippetPrerequisites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRVPDPEditorSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	RVPDPEDITOR_API UClass* Z_Construct_UClass_URVPDPEditorSubsystem();
	RVPDPEDITOR_API UClass* Z_Construct_UClass_URVPDPEditorSubsystem_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RVPDPEditor();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo();
// End Cross Module References
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execGetObjectsOfClassAsSoftPtrs)
	{
		P_GET_OBJECT(UClass,Z_Param_objectsToGet);
		P_GET_UBOOL(Z_Param_loadObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TSoftObjectPtr<UObject> >*)Z_Param__Result=P_THIS->GetObjectsOfClassAsSoftPtrs(Z_Param_objectsToGet,Z_Param_loadObjects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execGetObjectNameFromSoftObjectPtr)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UObject>,Z_Param_object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetObjectNameFromSoftObjectPtr(Z_Param_object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execGetSoftObjectPathFromSoftObjectPtr)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UObject>,Z_Param_object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSoftObjectPath*)Z_Param__Result=P_THIS->GetSoftObjectPathFromSoftObjectPtr(Z_Param_object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execGetObjectsOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_objectsToGet);
		P_GET_UBOOL(Z_Param_onlyGetObjectsFromContentFolder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetObjectsOfClass(Z_Param_objectsToGet,Z_Param_onlyGetObjectsFromContentFolder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execRefreshAllAvailableCachedColorSnippetTagContainer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshAllAvailableCachedColorSnippetTagContainer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execRenameColorSnippetTag)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_oldTag);
		P_GET_PROPERTY(FStrProperty,Z_Param_newTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RenameColorSnippetTag(Z_Param_oldTag,Z_Param_newTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execClearAllAvailableColorSnippetCacheTagContainer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllAvailableColorSnippetCacheTagContainer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execRemoveColorSnippetTag)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveColorSnippetTag(Z_Param_tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execGetAllColorSnippetTagsDirectlyFromIni)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetAllColorSnippetTagsDirectlyFromIni();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execDoesColorSnippetTagExist)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesColorSnippetTagExist(Z_Param_tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execAddColorSnippetTag)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddColorSnippetTag(Z_Param_tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execLoadEssentialDataAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadEssentialDataAssets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execSetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse)
	{
		P_GET_OBJECT(UObject,Z_Param_dataAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse(Z_Param_dataAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execSetCustomSettingsVertexPaintMaterialToUse)
	{
		P_GET_OBJECT(UObject,Z_Param_dataAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomSettingsVertexPaintMaterialToUse(Z_Param_dataAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execSetCustomSettingsOptimizationsDataAssetToUse)
	{
		P_GET_OBJECT(UObject,Z_Param_dataAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomSettingsOptimizationsDataAssetToUse(Z_Param_dataAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execGetPersistentLevelsWorld_Wrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=P_THIS->GetPersistentLevelsWorld_Wrapper(Z_Param_worldContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execGetStaticMeshComponentVertexCount_Wrapper)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_staticMeshComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_lod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStaticMeshComponentVertexCount_Wrapper(Z_Param_staticMeshComponent,Z_Param_lod);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execGetSkeletalMeshComponentVertexCount_Wrapper)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMeshComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_lod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSkeletalMeshComponentVertexCount_Wrapper(Z_Param_skeletalMeshComponent,Z_Param_lod);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execGetSkeletalMeshLODCount_Wrapper)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_skeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSkeletalMeshLODCount_Wrapper(Z_Param_skeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execGetStaticMeshLODCount_Wrapper)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStaticMeshLODCount_Wrapper(Z_Param_mesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execGetSkeletalMeshVerticesAmount_Wrapper)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_lod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSkeletalMeshVerticesAmount_Wrapper(Z_Param_mesh,Z_Param_lod);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execGetStaticMeshVerticesAmount_Wrapper)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_lod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStaticMeshVerticesAmount_Wrapper(Z_Param_mesh,Z_Param_lod);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execApplyVertexColorToMeshAtLOD0)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_TARRAY(FColor,Z_Param_vertexColorsAtLOD0);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ApplyVertexColorToMeshAtLOD0(Z_Param_meshComponent,Z_Param_vertexColorsAtLOD0);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execRemoveMeshColorSnippet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_colorSnippetID);
		P_GET_OBJECT(UVertexPaintColorSnippetDataAsset,Z_Param_colorSnippetDataAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMeshColorSnippet(Z_Param_colorSnippetID,Z_Param_colorSnippetDataAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execUpdateGroupColorSnippetID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_prevGroupColorSnippetID);
		P_GET_PROPERTY(FStrProperty,Z_Param_newGroupColorSnippetID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGroupColorSnippetID(Z_Param_prevGroupColorSnippetID,Z_Param_newGroupColorSnippetID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execUpdateMeshColorSnippetID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_prevColorSnippetID);
		P_GET_PROPERTY(FStrProperty,Z_Param_newColorSnippetID);
		P_GET_UBOOL(Z_Param_isPartOfGroupSnippet);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupSnippedID);
		P_GET_OBJECT(UVertexPaintColorSnippetDataAsset,Z_Param_colorSnippetDataAsset);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMeshColorSnippetID(Z_Param_prevColorSnippetID,Z_Param_newColorSnippetID,Z_Param_isPartOfGroupSnippet,Z_Param_groupSnippedID,Z_Param_colorSnippetDataAsset,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execMoveGroupColorSnippet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_colorSnippetID);
		P_GET_OBJECT(UVertexPaintColorSnippetDataAsset,Z_Param_colorSnippetDataAssetToMoveTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveGroupColorSnippet(Z_Param_colorSnippetID,Z_Param_colorSnippetDataAssetToMoveTo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execMoveMeshColorSnippet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_colorSnippetID);
		P_GET_OBJECT(UVertexPaintColorSnippetDataAsset,Z_Param_colorSnippetDataAssetToMoveFrom);
		P_GET_OBJECT(UVertexPaintColorSnippetDataAsset,Z_Param_colorSnippetDataAssetToMoveTo);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveMeshColorSnippet(Z_Param_colorSnippetID,Z_Param_colorSnippetDataAssetToMoveFrom,Z_Param_colorSnippetDataAssetToMoveTo,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execRemoveGroupColorSnippet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_groupSnippetID);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGroupColorSnippet(Z_Param_groupSnippetID,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execAddGroupColorSnippet)
	{
		P_GET_STRUCT(FVertexDetectGroupColorSnippetInfo,Z_Param_groupSnippetInfo);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGroupColorSnippet(Z_Param_groupSnippetInfo,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execAddMeshColorSnippet)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_PROPERTY(FStrProperty,Z_Param_colorSnippetID);
		P_GET_UBOOL(Z_Param_isPartOfAGroupSnippet);
		P_GET_PROPERTY(FStrProperty,Z_Param_groupSnippedID);
		P_GET_STRUCT(FVector,Z_Param_relativeLocationToGroupCenterPoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_dotProductToGroupCenterPoint);
		P_GET_OBJECT(UVertexPaintColorSnippetDataAsset,Z_Param_colorSnippetDataAsset);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMeshColorSnippet(Z_Param_meshComponent,Z_Param_colorSnippetID,Z_Param_isPartOfAGroupSnippet,Z_Param_groupSnippedID,Z_Param_relativeLocationToGroupCenterPoint,Z_Param_dotProductToGroupCenterPoint,Z_Param_colorSnippetDataAsset,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execRemoveStaticMeshAndAmountOfLODsToPaintByDefault)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_staticMesh);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveStaticMeshAndAmountOfLODsToPaintByDefault(Z_Param_staticMesh,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execAddStaticMeshAndAmountOfLODsToPaintByDefault)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_staticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxAmountOfLODsToPaint);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStaticMeshAndAmountOfLODsToPaintByDefault(Z_Param_staticMesh,Z_Param_maxAmountOfLODsToPaint,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execRemoveSkeletalMeshAmountOfLODsToPaintByDefault)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_skeletalMesh);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSkeletalMeshAmountOfLODsToPaintByDefault(Z_Param_skeletalMesh,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execAddSkeletalMeshAmountOfLODsToPaintByDefault)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_skeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxAmountOfLODsToPaint);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSkeletalMeshAmountOfLODsToPaintByDefault(Z_Param_skeletalMesh,Z_Param_maxAmountOfLODsToPaint,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execSavePackageWrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_packageToSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SavePackageWrapper(Z_Param_packageToSave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execSetEngineSpecificButtonSettings)
	{
		P_GET_TARRAY(UButton*,Z_Param_buttons);
		P_GET_TARRAY(UComboBoxString*,Z_Param_comboBoxes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEngineSpecificButtonSettings(Z_Param_buttons,Z_Param_comboBoxes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPEditorSubsystem::execAddEditorNotification)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_notification);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddEditorNotification(Z_Param_notification);
		P_NATIVE_END;
	}
	void URVPDPEditorSubsystem::StaticRegisterNativesURVPDPEditorSubsystem()
	{
		UClass* Class = URVPDPEditorSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddColorSnippetTag", &URVPDPEditorSubsystem::execAddColorSnippetTag },
			{ "AddEditorNotification", &URVPDPEditorSubsystem::execAddEditorNotification },
			{ "AddGroupColorSnippet", &URVPDPEditorSubsystem::execAddGroupColorSnippet },
			{ "AddMeshColorSnippet", &URVPDPEditorSubsystem::execAddMeshColorSnippet },
			{ "AddSkeletalMeshAmountOfLODsToPaintByDefault", &URVPDPEditorSubsystem::execAddSkeletalMeshAmountOfLODsToPaintByDefault },
			{ "AddStaticMeshAndAmountOfLODsToPaintByDefault", &URVPDPEditorSubsystem::execAddStaticMeshAndAmountOfLODsToPaintByDefault },
			{ "ApplyVertexColorToMeshAtLOD0", &URVPDPEditorSubsystem::execApplyVertexColorToMeshAtLOD0 },
			{ "ClearAllAvailableColorSnippetCacheTagContainer", &URVPDPEditorSubsystem::execClearAllAvailableColorSnippetCacheTagContainer },
			{ "DoesColorSnippetTagExist", &URVPDPEditorSubsystem::execDoesColorSnippetTagExist },
			{ "GetAllColorSnippetTagsDirectlyFromIni", &URVPDPEditorSubsystem::execGetAllColorSnippetTagsDirectlyFromIni },
			{ "GetObjectNameFromSoftObjectPtr", &URVPDPEditorSubsystem::execGetObjectNameFromSoftObjectPtr },
			{ "GetObjectsOfClass", &URVPDPEditorSubsystem::execGetObjectsOfClass },
			{ "GetObjectsOfClassAsSoftPtrs", &URVPDPEditorSubsystem::execGetObjectsOfClassAsSoftPtrs },
			{ "GetPersistentLevelsWorld_Wrapper", &URVPDPEditorSubsystem::execGetPersistentLevelsWorld_Wrapper },
			{ "GetSkeletalMeshComponentVertexCount_Wrapper", &URVPDPEditorSubsystem::execGetSkeletalMeshComponentVertexCount_Wrapper },
			{ "GetSkeletalMeshLODCount_Wrapper", &URVPDPEditorSubsystem::execGetSkeletalMeshLODCount_Wrapper },
			{ "GetSkeletalMeshVerticesAmount_Wrapper", &URVPDPEditorSubsystem::execGetSkeletalMeshVerticesAmount_Wrapper },
			{ "GetSoftObjectPathFromSoftObjectPtr", &URVPDPEditorSubsystem::execGetSoftObjectPathFromSoftObjectPtr },
			{ "GetStaticMeshComponentVertexCount_Wrapper", &URVPDPEditorSubsystem::execGetStaticMeshComponentVertexCount_Wrapper },
			{ "GetStaticMeshLODCount_Wrapper", &URVPDPEditorSubsystem::execGetStaticMeshLODCount_Wrapper },
			{ "GetStaticMeshVerticesAmount_Wrapper", &URVPDPEditorSubsystem::execGetStaticMeshVerticesAmount_Wrapper },
			{ "LoadEssentialDataAssets", &URVPDPEditorSubsystem::execLoadEssentialDataAssets },
			{ "MoveGroupColorSnippet", &URVPDPEditorSubsystem::execMoveGroupColorSnippet },
			{ "MoveMeshColorSnippet", &URVPDPEditorSubsystem::execMoveMeshColorSnippet },
			{ "RefreshAllAvailableCachedColorSnippetTagContainer", &URVPDPEditorSubsystem::execRefreshAllAvailableCachedColorSnippetTagContainer },
			{ "RemoveColorSnippetTag", &URVPDPEditorSubsystem::execRemoveColorSnippetTag },
			{ "RemoveGroupColorSnippet", &URVPDPEditorSubsystem::execRemoveGroupColorSnippet },
			{ "RemoveMeshColorSnippet", &URVPDPEditorSubsystem::execRemoveMeshColorSnippet },
			{ "RemoveSkeletalMeshAmountOfLODsToPaintByDefault", &URVPDPEditorSubsystem::execRemoveSkeletalMeshAmountOfLODsToPaintByDefault },
			{ "RemoveStaticMeshAndAmountOfLODsToPaintByDefault", &URVPDPEditorSubsystem::execRemoveStaticMeshAndAmountOfLODsToPaintByDefault },
			{ "RenameColorSnippetTag", &URVPDPEditorSubsystem::execRenameColorSnippetTag },
			{ "SavePackageWrapper", &URVPDPEditorSubsystem::execSavePackageWrapper },
			{ "SetCustomSettingsOptimizationsDataAssetToUse", &URVPDPEditorSubsystem::execSetCustomSettingsOptimizationsDataAssetToUse },
			{ "SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse", &URVPDPEditorSubsystem::execSetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse },
			{ "SetCustomSettingsVertexPaintMaterialToUse", &URVPDPEditorSubsystem::execSetCustomSettingsVertexPaintMaterialToUse },
			{ "SetEngineSpecificButtonSettings", &URVPDPEditorSubsystem::execSetEngineSpecificButtonSettings },
			{ "UpdateGroupColorSnippetID", &URVPDPEditorSubsystem::execUpdateGroupColorSnippetID },
			{ "UpdateMeshColorSnippetID", &URVPDPEditorSubsystem::execUpdateMeshColorSnippetID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_AddColorSnippetTag_Statics
	{
		struct RVPDPEditorSubsystem_eventAddColorSnippetTag_Parms
		{
			FString tag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddColorSnippetTag_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventAddColorSnippetTag_Parms, tag), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URVPDPEditorSubsystem_AddColorSnippetTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RVPDPEditorSubsystem_eventAddColorSnippetTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddColorSnippetTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RVPDPEditorSubsystem_eventAddColorSnippetTag_Parms), &Z_Construct_UFunction_URVPDPEditorSubsystem_AddColorSnippetTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_AddColorSnippetTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_AddColorSnippetTag_Statics::NewProp_tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_AddColorSnippetTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_AddColorSnippetTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddColorSnippetTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "AddColorSnippetTag", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_AddColorSnippetTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_AddColorSnippetTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_AddColorSnippetTag_Statics::RVPDPEditorSubsystem_eventAddColorSnippetTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_AddColorSnippetTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_AddColorSnippetTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_AddColorSnippetTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_AddColorSnippetTag_Statics::RVPDPEditorSubsystem_eventAddColorSnippetTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_AddColorSnippetTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_AddColorSnippetTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_AddEditorNotification_Statics
	{
		struct RVPDPEditorSubsystem_eventAddEditorNotification_Parms
		{
			FString notification;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_notification;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddEditorNotification_Statics::NewProp_notification = { "notification", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventAddEditorNotification_Parms, notification), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_AddEditorNotification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_AddEditorNotification_Statics::NewProp_notification,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_AddEditorNotification_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a Editor Notification in the Bottom Right Corner" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddEditorNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "AddEditorNotification", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_AddEditorNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_AddEditorNotification_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_AddEditorNotification_Statics::RVPDPEditorSubsystem_eventAddEditorNotification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_AddEditorNotification_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_AddEditorNotification_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_AddEditorNotification_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_AddEditorNotification_Statics::RVPDPEditorSubsystem_eventAddEditorNotification_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_AddEditorNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_AddEditorNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_AddGroupColorSnippet_Statics
	{
		struct RVPDPEditorSubsystem_eventAddGroupColorSnippet_Parms
		{
			FVertexDetectGroupColorSnippetInfo groupSnippetInfo;
			bool success;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_groupSnippetInfo;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddGroupColorSnippet_Statics::NewProp_groupSnippetInfo = { "groupSnippetInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventAddGroupColorSnippet_Parms, groupSnippetInfo), Z_Construct_UScriptStruct_FVertexDetectGroupColorSnippetInfo, METADATA_PARAMS(0, nullptr) }; // 4034582278
	void Z_Construct_UFunction_URVPDPEditorSubsystem_AddGroupColorSnippet_Statics::NewProp_success_SetBit(void* Obj)
	{
		((RVPDPEditorSubsystem_eventAddGroupColorSnippet_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddGroupColorSnippet_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RVPDPEditorSubsystem_eventAddGroupColorSnippet_Parms), &Z_Construct_UFunction_URVPDPEditorSubsystem_AddGroupColorSnippet_Statics::NewProp_success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_AddGroupColorSnippet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_AddGroupColorSnippet_Statics::NewProp_groupSnippetInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_AddGroupColorSnippet_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_AddGroupColorSnippet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddGroupColorSnippet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "AddGroupColorSnippet", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_AddGroupColorSnippet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_AddGroupColorSnippet_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_AddGroupColorSnippet_Statics::RVPDPEditorSubsystem_eventAddGroupColorSnippet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_AddGroupColorSnippet_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_AddGroupColorSnippet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_AddGroupColorSnippet_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_AddGroupColorSnippet_Statics::RVPDPEditorSubsystem_eventAddGroupColorSnippet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_AddGroupColorSnippet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_AddGroupColorSnippet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics
	{
		struct RVPDPEditorSubsystem_eventAddMeshColorSnippet_Parms
		{
			UPrimitiveComponent* meshComponent;
			FString colorSnippetID;
			bool isPartOfAGroupSnippet;
			FString groupSnippedID;
			FVector relativeLocationToGroupCenterPoint;
			float dotProductToGroupCenterPoint;
			UVertexPaintColorSnippetDataAsset* colorSnippetDataAsset;
			bool success;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStrPropertyParams NewProp_colorSnippetID;
		static void NewProp_isPartOfAGroupSnippet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isPartOfAGroupSnippet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_groupSnippedID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_relativeLocationToGroupCenterPoint;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dotProductToGroupCenterPoint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_colorSnippetDataAsset;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventAddMeshColorSnippet_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_colorSnippetID = { "colorSnippetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventAddMeshColorSnippet_Parms, colorSnippetID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_isPartOfAGroupSnippet_SetBit(void* Obj)
	{
		((RVPDPEditorSubsystem_eventAddMeshColorSnippet_Parms*)Obj)->isPartOfAGroupSnippet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_isPartOfAGroupSnippet = { "isPartOfAGroupSnippet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RVPDPEditorSubsystem_eventAddMeshColorSnippet_Parms), &Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_isPartOfAGroupSnippet_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_groupSnippedID = { "groupSnippedID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventAddMeshColorSnippet_Parms, groupSnippedID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_relativeLocationToGroupCenterPoint = { "relativeLocationToGroupCenterPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventAddMeshColorSnippet_Parms, relativeLocationToGroupCenterPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_dotProductToGroupCenterPoint = { "dotProductToGroupCenterPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventAddMeshColorSnippet_Parms, dotProductToGroupCenterPoint), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_colorSnippetDataAsset = { "colorSnippetDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventAddMeshColorSnippet_Parms, colorSnippetDataAsset), Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_success_SetBit(void* Obj)
	{
		((RVPDPEditorSubsystem_eventAddMeshColorSnippet_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RVPDPEditorSubsystem_eventAddMeshColorSnippet_Parms), &Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_colorSnippetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_isPartOfAGroupSnippet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_groupSnippedID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_relativeLocationToGroupCenterPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_dotProductToGroupCenterPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_colorSnippetDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "AddMeshColorSnippet", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::RVPDPEditorSubsystem_eventAddMeshColorSnippet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::RVPDPEditorSubsystem_eventAddMeshColorSnippet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics
	{
		struct RVPDPEditorSubsystem_eventAddSkeletalMeshAmountOfLODsToPaintByDefault_Parms
		{
			USkeletalMesh* skeletalMesh;
			int32 maxAmountOfLODsToPaint;
			bool success;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_maxAmountOfLODsToPaint;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_skeletalMesh = { "skeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventAddSkeletalMeshAmountOfLODsToPaintByDefault_Parms, skeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_maxAmountOfLODsToPaint = { "maxAmountOfLODsToPaint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventAddSkeletalMeshAmountOfLODsToPaintByDefault_Parms, maxAmountOfLODsToPaint), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URVPDPEditorSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_success_SetBit(void* Obj)
	{
		((RVPDPEditorSubsystem_eventAddSkeletalMeshAmountOfLODsToPaintByDefault_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RVPDPEditorSubsystem_eventAddSkeletalMeshAmountOfLODsToPaintByDefault_Parms), &Z_Construct_UFunction_URVPDPEditorSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_skeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_maxAmountOfLODsToPaint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "AddSkeletalMeshAmountOfLODsToPaintByDefault", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::RVPDPEditorSubsystem_eventAddSkeletalMeshAmountOfLODsToPaintByDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::RVPDPEditorSubsystem_eventAddSkeletalMeshAmountOfLODsToPaintByDefault_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics
	{
		struct RVPDPEditorSubsystem_eventAddStaticMeshAndAmountOfLODsToPaintByDefault_Parms
		{
			UStaticMesh* staticMesh;
			int32 maxAmountOfLODsToPaint;
			bool success;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_staticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_maxAmountOfLODsToPaint;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_staticMesh = { "staticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventAddStaticMeshAndAmountOfLODsToPaintByDefault_Parms, staticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_maxAmountOfLODsToPaint = { "maxAmountOfLODsToPaint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventAddStaticMeshAndAmountOfLODsToPaintByDefault_Parms, maxAmountOfLODsToPaint), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URVPDPEditorSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_success_SetBit(void* Obj)
	{
		((RVPDPEditorSubsystem_eventAddStaticMeshAndAmountOfLODsToPaintByDefault_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RVPDPEditorSubsystem_eventAddStaticMeshAndAmountOfLODsToPaintByDefault_Parms), &Z_Construct_UFunction_URVPDPEditorSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_staticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_maxAmountOfLODsToPaint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "AddStaticMeshAndAmountOfLODsToPaintByDefault", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::RVPDPEditorSubsystem_eventAddStaticMeshAndAmountOfLODsToPaintByDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::RVPDPEditorSubsystem_eventAddStaticMeshAndAmountOfLODsToPaintByDefault_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics
	{
		struct RVPDPEditorSubsystem_eventApplyVertexColorToMeshAtLOD0_Parms
		{
			UPrimitiveComponent* meshComponent;
			TArray<FColor> vertexColorsAtLOD0;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexColorsAtLOD0_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vertexColorsAtLOD0;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventApplyVertexColorToMeshAtLOD0_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_meshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_vertexColorsAtLOD0_Inner = { "vertexColorsAtLOD0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_vertexColorsAtLOD0 = { "vertexColorsAtLOD0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventApplyVertexColorToMeshAtLOD0_Parms, vertexColorsAtLOD0), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RVPDPEditorSubsystem_eventApplyVertexColorToMeshAtLOD0_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RVPDPEditorSubsystem_eventApplyVertexColorToMeshAtLOD0_Parms), &Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_vertexColorsAtLOD0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_vertexColorsAtLOD0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "ApplyVertexColorToMeshAtLOD0", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::RVPDPEditorSubsystem_eventApplyVertexColorToMeshAtLOD0_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::RVPDPEditorSubsystem_eventApplyVertexColorToMeshAtLOD0_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_ClearAllAvailableColorSnippetCacheTagContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_ClearAllAvailableColorSnippetCacheTagContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_ClearAllAvailableColorSnippetCacheTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "ClearAllAvailableColorSnippetCacheTagContainer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_ClearAllAvailableColorSnippetCacheTagContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_ClearAllAvailableColorSnippetCacheTagContainer_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_ClearAllAvailableColorSnippetCacheTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_ClearAllAvailableColorSnippetCacheTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_DoesColorSnippetTagExist_Statics
	{
		struct RVPDPEditorSubsystem_eventDoesColorSnippetTagExist_Parms
		{
			FString tag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_DoesColorSnippetTagExist_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventDoesColorSnippetTagExist_Parms, tag), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URVPDPEditorSubsystem_DoesColorSnippetTagExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RVPDPEditorSubsystem_eventDoesColorSnippetTagExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_DoesColorSnippetTagExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RVPDPEditorSubsystem_eventDoesColorSnippetTagExist_Parms), &Z_Construct_UFunction_URVPDPEditorSubsystem_DoesColorSnippetTagExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_DoesColorSnippetTagExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_DoesColorSnippetTagExist_Statics::NewProp_tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_DoesColorSnippetTagExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_DoesColorSnippetTagExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_DoesColorSnippetTagExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "DoesColorSnippetTagExist", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_DoesColorSnippetTagExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_DoesColorSnippetTagExist_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_DoesColorSnippetTagExist_Statics::RVPDPEditorSubsystem_eventDoesColorSnippetTagExist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_DoesColorSnippetTagExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_DoesColorSnippetTagExist_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_DoesColorSnippetTagExist_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_DoesColorSnippetTagExist_Statics::RVPDPEditorSubsystem_eventDoesColorSnippetTagExist_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_DoesColorSnippetTagExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_DoesColorSnippetTagExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics
	{
		struct RVPDPEditorSubsystem_eventGetAllColorSnippetTagsDirectlyFromIni_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetAllColorSnippetTagsDirectlyFromIni_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "GetAllColorSnippetTagsDirectlyFromIni", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::RVPDPEditorSubsystem_eventGetAllColorSnippetTagsDirectlyFromIni_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::RVPDPEditorSubsystem_eventGetAllColorSnippetTagsDirectlyFromIni_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_GetAllColorSnippetTagsDirectlyFromIni()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectNameFromSoftObjectPtr_Statics
	{
		struct RVPDPEditorSubsystem_eventGetObjectNameFromSoftObjectPtr_Parms
		{
			TSoftObjectPtr<UObject> object;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_object;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectNameFromSoftObjectPtr_Statics::NewProp_object = { "object", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetObjectNameFromSoftObjectPtr_Parms, object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectNameFromSoftObjectPtr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetObjectNameFromSoftObjectPtr_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectNameFromSoftObjectPtr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectNameFromSoftObjectPtr_Statics::NewProp_object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectNameFromSoftObjectPtr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectNameFromSoftObjectPtr_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Editor Utilities" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint callable function to get the object name from soft ptr ref so we can avoid resolving them and bringing them into memory in order to display names etc. \nIf Editor Only!" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectNameFromSoftObjectPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "GetObjectNameFromSoftObjectPtr", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectNameFromSoftObjectPtr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectNameFromSoftObjectPtr_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectNameFromSoftObjectPtr_Statics::RVPDPEditorSubsystem_eventGetObjectNameFromSoftObjectPtr_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectNameFromSoftObjectPtr_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectNameFromSoftObjectPtr_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectNameFromSoftObjectPtr_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectNameFromSoftObjectPtr_Statics::RVPDPEditorSubsystem_eventGetObjectNameFromSoftObjectPtr_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectNameFromSoftObjectPtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectNameFromSoftObjectPtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass_Statics
	{
		struct RVPDPEditorSubsystem_eventGetObjectsOfClass_Parms
		{
			TSubclassOf<UObject>  objectsToGet;
			bool onlyGetObjectsFromContentFolder;
			TArray<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_objectsToGet;
		static void NewProp_onlyGetObjectsFromContentFolder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_onlyGetObjectsFromContentFolder;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass_Statics::NewProp_objectsToGet = { "objectsToGet", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetObjectsOfClass_Parms, objectsToGet), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass_Statics::NewProp_onlyGetObjectsFromContentFolder_SetBit(void* Obj)
	{
		((RVPDPEditorSubsystem_eventGetObjectsOfClass_Parms*)Obj)->onlyGetObjectsFromContentFolder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass_Statics::NewProp_onlyGetObjectsFromContentFolder = { "onlyGetObjectsFromContentFolder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RVPDPEditorSubsystem_eventGetObjectsOfClass_Parms), &Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass_Statics::NewProp_onlyGetObjectsFromContentFolder_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetObjectsOfClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass_Statics::NewProp_objectsToGet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass_Statics::NewProp_onlyGetObjectsFromContentFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Editor Utilities" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all the objects of a specific class from the project. Note that it doesn't work with BP assets. More performant if you only get objects from content folder and not Engine, Plugins folders etc. since otherwise we have to load the asset. \nIf Editor Only!" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "GetObjectsOfClass", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass_Statics::RVPDPEditorSubsystem_eventGetObjectsOfClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass_Statics::RVPDPEditorSubsystem_eventGetObjectsOfClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs_Statics
	{
		struct RVPDPEditorSubsystem_eventGetObjectsOfClassAsSoftPtrs_Parms
		{
			TSubclassOf<UObject>  objectsToGet;
			bool loadObjects;
			TArray<TSoftObjectPtr<UObject> > ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_objectsToGet;
		static void NewProp_loadObjects_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_loadObjects;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs_Statics::NewProp_objectsToGet = { "objectsToGet", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetObjectsOfClassAsSoftPtrs_Parms, objectsToGet), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs_Statics::NewProp_loadObjects_SetBit(void* Obj)
	{
		((RVPDPEditorSubsystem_eventGetObjectsOfClassAsSoftPtrs_Parms*)Obj)->loadObjects = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs_Statics::NewProp_loadObjects = { "loadObjects", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RVPDPEditorSubsystem_eventGetObjectsOfClassAsSoftPtrs_Parms), &Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs_Statics::NewProp_loadObjects_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetObjectsOfClassAsSoftPtrs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs_Statics::NewProp_objectsToGet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs_Statics::NewProp_loadObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Editor Utilities" },
		{ "DeterminesOutputType", "objectsToGet" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all the objects of a specific class from the project but in soft pointer form. Note that it doesn't work with BP assets. More performant if you only get objects from content folder and not Engine, Plugins folders etc. since otherwise we have to load the asset. \nNOTE Loading all things may be very heavy (and not necessary) if getting things like Materials or Static Meshes! \nIf Editor Only!" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "GetObjectsOfClassAsSoftPtrs", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs_Statics::RVPDPEditorSubsystem_eventGetObjectsOfClassAsSoftPtrs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs_Statics::RVPDPEditorSubsystem_eventGetObjectsOfClassAsSoftPtrs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_GetPersistentLevelsWorld_Wrapper_Statics
	{
		struct RVPDPEditorSubsystem_eventGetPersistentLevelsWorld_Wrapper_Parms
		{
			const UObject* worldContext;
			UWorld* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_worldContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::NewProp_worldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::NewProp_worldContext = { "worldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetPersistentLevelsWorld_Wrapper_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::NewProp_worldContext_MetaData), Z_Construct_UFunction_URVPDPEditorSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::NewProp_worldContext_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetPersistentLevelsWorld_Wrapper_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::NewProp_worldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "GetPersistentLevelsWorld_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::RVPDPEditorSubsystem_eventGetPersistentLevelsWorld_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::RVPDPEditorSubsystem_eventGetPersistentLevelsWorld_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_GetPersistentLevelsWorld_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics
	{
		struct RVPDPEditorSubsystem_eventGetSkeletalMeshComponentVertexCount_Wrapper_Parms
		{
			USkeletalMeshComponent* skeletalMeshComponent;
			int32 lod;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_lod;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::NewProp_skeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::NewProp_skeletalMeshComponent = { "skeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetSkeletalMeshComponentVertexCount_Wrapper_Parms, skeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::NewProp_skeletalMeshComponent_MetaData), Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::NewProp_skeletalMeshComponent_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::NewProp_lod = { "lod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetSkeletalMeshComponentVertexCount_Wrapper_Parms, lod), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetSkeletalMeshComponentVertexCount_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::NewProp_skeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::NewProp_lod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "GetSkeletalMeshComponentVertexCount_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::RVPDPEditorSubsystem_eventGetSkeletalMeshComponentVertexCount_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::RVPDPEditorSubsystem_eventGetSkeletalMeshComponentVertexCount_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics
	{
		struct RVPDPEditorSubsystem_eventGetSkeletalMeshLODCount_Wrapper_Parms
		{
			USkeletalMesh* skeletalMesh;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::NewProp_skeletalMesh = { "skeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetSkeletalMeshLODCount_Wrapper_Parms, skeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetSkeletalMeshLODCount_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::NewProp_skeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "GetSkeletalMeshLODCount_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::RVPDPEditorSubsystem_eventGetSkeletalMeshLODCount_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::RVPDPEditorSubsystem_eventGetSkeletalMeshLODCount_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshLODCount_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics
	{
		struct RVPDPEditorSubsystem_eventGetSkeletalMeshVerticesAmount_Wrapper_Parms
		{
			USkeletalMesh* mesh;
			int32 lod;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_lod;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetSkeletalMeshVerticesAmount_Wrapper_Parms, mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::NewProp_lod = { "lod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetSkeletalMeshVerticesAmount_Wrapper_Parms, lod), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetSkeletalMeshVerticesAmount_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::NewProp_mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::NewProp_lod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "GetSkeletalMeshVerticesAmount_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::RVPDPEditorSubsystem_eventGetSkeletalMeshVerticesAmount_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::RVPDPEditorSubsystem_eventGetSkeletalMeshVerticesAmount_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshVerticesAmount_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_GetSoftObjectPathFromSoftObjectPtr_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct RVPDPEditorSubsystem_eventGetSoftObjectPathFromSoftObjectPtr_Parms
		{
			TSoftObjectPtr<UObject> object;
			FSoftObjectPath ReturnValue;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_object;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetSoftObjectPathFromSoftObjectPtr_Statics::NewProp_object = { "object", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetSoftObjectPathFromSoftObjectPtr_Parms, object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetSoftObjectPathFromSoftObjectPtr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetSoftObjectPathFromSoftObjectPtr_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_GetSoftObjectPathFromSoftObjectPtr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetSoftObjectPathFromSoftObjectPtr_Statics::NewProp_object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetSoftObjectPathFromSoftObjectPtr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_GetSoftObjectPathFromSoftObjectPtr_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin|Editor Utilities" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint callable function to get the object path from soft ptr ref so we can avoid resolving them and bringing them into memory in order to display path names etc. \nIf Editor Only!" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetSoftObjectPathFromSoftObjectPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "GetSoftObjectPathFromSoftObjectPtr", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_GetSoftObjectPathFromSoftObjectPtr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetSoftObjectPathFromSoftObjectPtr_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetSoftObjectPathFromSoftObjectPtr_Statics::RVPDPEditorSubsystem_eventGetSoftObjectPathFromSoftObjectPtr_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetSoftObjectPathFromSoftObjectPtr_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_GetSoftObjectPathFromSoftObjectPtr_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetSoftObjectPathFromSoftObjectPtr_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetSoftObjectPathFromSoftObjectPtr_Statics::RVPDPEditorSubsystem_eventGetSoftObjectPathFromSoftObjectPtr_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_GetSoftObjectPathFromSoftObjectPtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_GetSoftObjectPathFromSoftObjectPtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics
	{
		struct RVPDPEditorSubsystem_eventGetStaticMeshComponentVertexCount_Wrapper_Parms
		{
			UStaticMeshComponent* staticMeshComponent;
			int32 lod;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_staticMeshComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_lod;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::NewProp_staticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::NewProp_staticMeshComponent = { "staticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetStaticMeshComponentVertexCount_Wrapper_Parms, staticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::NewProp_staticMeshComponent_MetaData), Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::NewProp_staticMeshComponent_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::NewProp_lod = { "lod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetStaticMeshComponentVertexCount_Wrapper_Parms, lod), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetStaticMeshComponentVertexCount_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::NewProp_staticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::NewProp_lod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "GetStaticMeshComponentVertexCount_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::RVPDPEditorSubsystem_eventGetStaticMeshComponentVertexCount_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::RVPDPEditorSubsystem_eventGetStaticMeshComponentVertexCount_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshLODCount_Wrapper_Statics
	{
		struct RVPDPEditorSubsystem_eventGetStaticMeshLODCount_Wrapper_Parms
		{
			UStaticMesh* mesh;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshLODCount_Wrapper_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetStaticMeshLODCount_Wrapper_Parms, mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshLODCount_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetStaticMeshLODCount_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshLODCount_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshLODCount_Wrapper_Statics::NewProp_mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshLODCount_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshLODCount_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshLODCount_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "GetStaticMeshLODCount_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshLODCount_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshLODCount_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshLODCount_Wrapper_Statics::RVPDPEditorSubsystem_eventGetStaticMeshLODCount_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshLODCount_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshLODCount_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshLODCount_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshLODCount_Wrapper_Statics::RVPDPEditorSubsystem_eventGetStaticMeshLODCount_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshLODCount_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshLODCount_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics
	{
		struct RVPDPEditorSubsystem_eventGetStaticMeshVerticesAmount_Wrapper_Parms
		{
			UStaticMesh* mesh;
			int32 lod;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_lod;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetStaticMeshVerticesAmount_Wrapper_Parms, mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::NewProp_lod = { "lod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetStaticMeshVerticesAmount_Wrapper_Parms, lod), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventGetStaticMeshVerticesAmount_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::NewProp_mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::NewProp_lod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "GetStaticMeshVerticesAmount_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::RVPDPEditorSubsystem_eventGetStaticMeshVerticesAmount_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::RVPDPEditorSubsystem_eventGetStaticMeshVerticesAmount_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshVerticesAmount_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_LoadEssentialDataAssets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_LoadEssentialDataAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_LoadEssentialDataAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "LoadEssentialDataAssets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_LoadEssentialDataAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_LoadEssentialDataAssets_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_LoadEssentialDataAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_LoadEssentialDataAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_MoveGroupColorSnippet_Statics
	{
		struct RVPDPEditorSubsystem_eventMoveGroupColorSnippet_Parms
		{
			FString colorSnippetID;
			UVertexPaintColorSnippetDataAsset* colorSnippetDataAssetToMoveTo;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_colorSnippetID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_colorSnippetDataAssetToMoveTo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_MoveGroupColorSnippet_Statics::NewProp_colorSnippetID = { "colorSnippetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventMoveGroupColorSnippet_Parms, colorSnippetID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_MoveGroupColorSnippet_Statics::NewProp_colorSnippetDataAssetToMoveTo = { "colorSnippetDataAssetToMoveTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventMoveGroupColorSnippet_Parms, colorSnippetDataAssetToMoveTo), Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_MoveGroupColorSnippet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_MoveGroupColorSnippet_Statics::NewProp_colorSnippetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_MoveGroupColorSnippet_Statics::NewProp_colorSnippetDataAssetToMoveTo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_MoveGroupColorSnippet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_MoveGroupColorSnippet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "MoveGroupColorSnippet", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_MoveGroupColorSnippet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_MoveGroupColorSnippet_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_MoveGroupColorSnippet_Statics::RVPDPEditorSubsystem_eventMoveGroupColorSnippet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_MoveGroupColorSnippet_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_MoveGroupColorSnippet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_MoveGroupColorSnippet_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_MoveGroupColorSnippet_Statics::RVPDPEditorSubsystem_eventMoveGroupColorSnippet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_MoveGroupColorSnippet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_MoveGroupColorSnippet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet_Statics
	{
		struct RVPDPEditorSubsystem_eventMoveMeshColorSnippet_Parms
		{
			FString colorSnippetID;
			UVertexPaintColorSnippetDataAsset* colorSnippetDataAssetToMoveFrom;
			UVertexPaintColorSnippetDataAsset* colorSnippetDataAssetToMoveTo;
			bool success;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_colorSnippetID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_colorSnippetDataAssetToMoveFrom;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_colorSnippetDataAssetToMoveTo;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet_Statics::NewProp_colorSnippetID = { "colorSnippetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventMoveMeshColorSnippet_Parms, colorSnippetID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet_Statics::NewProp_colorSnippetDataAssetToMoveFrom = { "colorSnippetDataAssetToMoveFrom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventMoveMeshColorSnippet_Parms, colorSnippetDataAssetToMoveFrom), Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet_Statics::NewProp_colorSnippetDataAssetToMoveTo = { "colorSnippetDataAssetToMoveTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventMoveMeshColorSnippet_Parms, colorSnippetDataAssetToMoveTo), Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet_Statics::NewProp_success_SetBit(void* Obj)
	{
		((RVPDPEditorSubsystem_eventMoveMeshColorSnippet_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RVPDPEditorSubsystem_eventMoveMeshColorSnippet_Parms), &Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet_Statics::NewProp_success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet_Statics::NewProp_colorSnippetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet_Statics::NewProp_colorSnippetDataAssetToMoveFrom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet_Statics::NewProp_colorSnippetDataAssetToMoveTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "MoveMeshColorSnippet", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet_Statics::RVPDPEditorSubsystem_eventMoveMeshColorSnippet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet_Statics::RVPDPEditorSubsystem_eventMoveMeshColorSnippet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_RefreshAllAvailableCachedColorSnippetTagContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_RefreshAllAvailableCachedColorSnippetTagContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_RefreshAllAvailableCachedColorSnippetTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "RefreshAllAvailableCachedColorSnippetTagContainer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_RefreshAllAvailableCachedColorSnippetTagContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_RefreshAllAvailableCachedColorSnippetTagContainer_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_RefreshAllAvailableCachedColorSnippetTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_RefreshAllAvailableCachedColorSnippetTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveColorSnippetTag_Statics
	{
		struct RVPDPEditorSubsystem_eventRemoveColorSnippetTag_Parms
		{
			FString tag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveColorSnippetTag_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventRemoveColorSnippetTag_Parms, tag), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveColorSnippetTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RVPDPEditorSubsystem_eventRemoveColorSnippetTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveColorSnippetTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RVPDPEditorSubsystem_eventRemoveColorSnippetTag_Parms), &Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveColorSnippetTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveColorSnippetTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveColorSnippetTag_Statics::NewProp_tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveColorSnippetTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveColorSnippetTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveColorSnippetTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "RemoveColorSnippetTag", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveColorSnippetTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveColorSnippetTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveColorSnippetTag_Statics::RVPDPEditorSubsystem_eventRemoveColorSnippetTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveColorSnippetTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveColorSnippetTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveColorSnippetTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveColorSnippetTag_Statics::RVPDPEditorSubsystem_eventRemoveColorSnippetTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveColorSnippetTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveColorSnippetTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveGroupColorSnippet_Statics
	{
		struct RVPDPEditorSubsystem_eventRemoveGroupColorSnippet_Parms
		{
			FString groupSnippetID;
			bool success;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_groupSnippetID;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveGroupColorSnippet_Statics::NewProp_groupSnippetID = { "groupSnippetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventRemoveGroupColorSnippet_Parms, groupSnippetID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveGroupColorSnippet_Statics::NewProp_success_SetBit(void* Obj)
	{
		((RVPDPEditorSubsystem_eventRemoveGroupColorSnippet_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveGroupColorSnippet_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RVPDPEditorSubsystem_eventRemoveGroupColorSnippet_Parms), &Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveGroupColorSnippet_Statics::NewProp_success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveGroupColorSnippet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveGroupColorSnippet_Statics::NewProp_groupSnippetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveGroupColorSnippet_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveGroupColorSnippet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveGroupColorSnippet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "RemoveGroupColorSnippet", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveGroupColorSnippet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveGroupColorSnippet_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveGroupColorSnippet_Statics::RVPDPEditorSubsystem_eventRemoveGroupColorSnippet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveGroupColorSnippet_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveGroupColorSnippet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveGroupColorSnippet_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveGroupColorSnippet_Statics::RVPDPEditorSubsystem_eventRemoveGroupColorSnippet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveGroupColorSnippet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveGroupColorSnippet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveMeshColorSnippet_Statics
	{
		struct RVPDPEditorSubsystem_eventRemoveMeshColorSnippet_Parms
		{
			FString colorSnippetID;
			UVertexPaintColorSnippetDataAsset* colorSnippetDataAsset;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_colorSnippetID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_colorSnippetDataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveMeshColorSnippet_Statics::NewProp_colorSnippetID = { "colorSnippetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventRemoveMeshColorSnippet_Parms, colorSnippetID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveMeshColorSnippet_Statics::NewProp_colorSnippetDataAsset = { "colorSnippetDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventRemoveMeshColorSnippet_Parms, colorSnippetDataAsset), Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveMeshColorSnippet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveMeshColorSnippet_Statics::NewProp_colorSnippetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveMeshColorSnippet_Statics::NewProp_colorSnippetDataAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveMeshColorSnippet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveMeshColorSnippet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "RemoveMeshColorSnippet", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveMeshColorSnippet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveMeshColorSnippet_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveMeshColorSnippet_Statics::RVPDPEditorSubsystem_eventRemoveMeshColorSnippet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveMeshColorSnippet_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveMeshColorSnippet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveMeshColorSnippet_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveMeshColorSnippet_Statics::RVPDPEditorSubsystem_eventRemoveMeshColorSnippet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveMeshColorSnippet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveMeshColorSnippet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics
	{
		struct RVPDPEditorSubsystem_eventRemoveSkeletalMeshAmountOfLODsToPaintByDefault_Parms
		{
			USkeletalMesh* skeletalMesh;
			bool success;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMesh;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_skeletalMesh = { "skeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventRemoveSkeletalMeshAmountOfLODsToPaintByDefault_Parms, skeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_success_SetBit(void* Obj)
	{
		((RVPDPEditorSubsystem_eventRemoveSkeletalMeshAmountOfLODsToPaintByDefault_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RVPDPEditorSubsystem_eventRemoveSkeletalMeshAmountOfLODsToPaintByDefault_Parms), &Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_skeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "RemoveSkeletalMeshAmountOfLODsToPaintByDefault", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::RVPDPEditorSubsystem_eventRemoveSkeletalMeshAmountOfLODsToPaintByDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::RVPDPEditorSubsystem_eventRemoveSkeletalMeshAmountOfLODsToPaintByDefault_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics
	{
		struct RVPDPEditorSubsystem_eventRemoveStaticMeshAndAmountOfLODsToPaintByDefault_Parms
		{
			UStaticMesh* staticMesh;
			bool success;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_staticMesh;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_staticMesh = { "staticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventRemoveStaticMeshAndAmountOfLODsToPaintByDefault_Parms, staticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_success_SetBit(void* Obj)
	{
		((RVPDPEditorSubsystem_eventRemoveStaticMeshAndAmountOfLODsToPaintByDefault_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RVPDPEditorSubsystem_eventRemoveStaticMeshAndAmountOfLODsToPaintByDefault_Parms), &Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_staticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "RemoveStaticMeshAndAmountOfLODsToPaintByDefault", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::RVPDPEditorSubsystem_eventRemoveStaticMeshAndAmountOfLODsToPaintByDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::RVPDPEditorSubsystem_eventRemoveStaticMeshAndAmountOfLODsToPaintByDefault_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_RenameColorSnippetTag_Statics
	{
		struct RVPDPEditorSubsystem_eventRenameColorSnippetTag_Parms
		{
			FString oldTag;
			FString newTag;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_oldTag;
		static const UECodeGen_Private::FStrPropertyParams NewProp_newTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_RenameColorSnippetTag_Statics::NewProp_oldTag = { "oldTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventRenameColorSnippetTag_Parms, oldTag), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_RenameColorSnippetTag_Statics::NewProp_newTag = { "newTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventRenameColorSnippetTag_Parms, newTag), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_RenameColorSnippetTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_RenameColorSnippetTag_Statics::NewProp_oldTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_RenameColorSnippetTag_Statics::NewProp_newTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_RenameColorSnippetTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_RenameColorSnippetTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "RenameColorSnippetTag", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_RenameColorSnippetTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_RenameColorSnippetTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_RenameColorSnippetTag_Statics::RVPDPEditorSubsystem_eventRenameColorSnippetTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_RenameColorSnippetTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_RenameColorSnippetTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_RenameColorSnippetTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_RenameColorSnippetTag_Statics::RVPDPEditorSubsystem_eventRenameColorSnippetTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_RenameColorSnippetTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_RenameColorSnippetTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_SavePackageWrapper_Statics
	{
		struct RVPDPEditorSubsystem_eventSavePackageWrapper_Parms
		{
			UObject* packageToSave;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_packageToSave;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_SavePackageWrapper_Statics::NewProp_packageToSave = { "packageToSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventSavePackageWrapper_Parms, packageToSave), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URVPDPEditorSubsystem_SavePackageWrapper_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RVPDPEditorSubsystem_eventSavePackageWrapper_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_SavePackageWrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RVPDPEditorSubsystem_eventSavePackageWrapper_Parms), &Z_Construct_UFunction_URVPDPEditorSubsystem_SavePackageWrapper_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_SavePackageWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_SavePackageWrapper_Statics::NewProp_packageToSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_SavePackageWrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_SavePackageWrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto Saves this package so the user doesn't have to manually press save after doing changes" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_SavePackageWrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "SavePackageWrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_SavePackageWrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_SavePackageWrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_SavePackageWrapper_Statics::RVPDPEditorSubsystem_eventSavePackageWrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_SavePackageWrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_SavePackageWrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_SavePackageWrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_SavePackageWrapper_Statics::RVPDPEditorSubsystem_eventSavePackageWrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_SavePackageWrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_SavePackageWrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics
	{
		struct RVPDPEditorSubsystem_eventSetCustomSettingsOptimizationsDataAssetToUse_Parms
		{
			UObject* dataAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::NewProp_dataAsset = { "dataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventSetCustomSettingsOptimizationsDataAssetToUse_Parms, dataAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::NewProp_dataAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets which Optimization Data Asset on the custom settings. Also tells the subsystem to update it's references" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "SetCustomSettingsOptimizationsDataAssetToUse", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::RVPDPEditorSubsystem_eventSetCustomSettingsOptimizationsDataAssetToUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::RVPDPEditorSubsystem_eventSetCustomSettingsOptimizationsDataAssetToUse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsOptimizationsDataAssetToUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics
	{
		struct RVPDPEditorSubsystem_eventSetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Parms
		{
			UObject* dataAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::NewProp_dataAsset = { "dataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventSetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Parms, dataAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::NewProp_dataAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets which color snippet reference data asset to use that stores references to Color snippet Data Asset." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::RVPDPEditorSubsystem_eventSetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::RVPDPEditorSubsystem_eventSetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics
	{
		struct RVPDPEditorSubsystem_eventSetCustomSettingsVertexPaintMaterialToUse_Parms
		{
			UObject* dataAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::NewProp_dataAsset = { "dataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventSetCustomSettingsVertexPaintMaterialToUse_Parms, dataAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::NewProp_dataAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets which vertex paint material to use that stores all materials we've added with vertexcolors." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "SetCustomSettingsVertexPaintMaterialToUse", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::RVPDPEditorSubsystem_eventSetCustomSettingsVertexPaintMaterialToUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::RVPDPEditorSubsystem_eventSetCustomSettingsVertexPaintMaterialToUse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintMaterialToUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics
	{
		struct RVPDPEditorSubsystem_eventSetEngineSpecificButtonSettings_Parms
		{
			TArray<UButton*> buttons;
			TArray<UComboBoxString*> comboBoxes;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_buttons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buttons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_buttons;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_comboBoxes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_comboBoxes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_comboBoxes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_buttons_Inner = { "buttons", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_buttons_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_buttons = { "buttons", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventSetEngineSpecificButtonSettings_Parms, buttons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_buttons_MetaData), Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_buttons_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_comboBoxes_Inner = { "comboBoxes", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_comboBoxes_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_comboBoxes = { "comboBoxes", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventSetEngineSpecificButtonSettings_Parms, comboBoxes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_comboBoxes_MetaData), Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_comboBoxes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_buttons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_buttons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_comboBoxes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_comboBoxes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can set Button Settings depending on Engine Version" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "SetEngineSpecificButtonSettings", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::RVPDPEditorSubsystem_eventSetEngineSpecificButtonSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::RVPDPEditorSubsystem_eventSetEngineSpecificButtonSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateGroupColorSnippetID_Statics
	{
		struct RVPDPEditorSubsystem_eventUpdateGroupColorSnippetID_Parms
		{
			FString prevGroupColorSnippetID;
			FString newGroupColorSnippetID;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_prevGroupColorSnippetID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_newGroupColorSnippetID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateGroupColorSnippetID_Statics::NewProp_prevGroupColorSnippetID = { "prevGroupColorSnippetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventUpdateGroupColorSnippetID_Parms, prevGroupColorSnippetID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateGroupColorSnippetID_Statics::NewProp_newGroupColorSnippetID = { "newGroupColorSnippetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventUpdateGroupColorSnippetID_Parms, newGroupColorSnippetID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateGroupColorSnippetID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateGroupColorSnippetID_Statics::NewProp_prevGroupColorSnippetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateGroupColorSnippetID_Statics::NewProp_newGroupColorSnippetID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateGroupColorSnippetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateGroupColorSnippetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "UpdateGroupColorSnippetID", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateGroupColorSnippetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateGroupColorSnippetID_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateGroupColorSnippetID_Statics::RVPDPEditorSubsystem_eventUpdateGroupColorSnippetID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateGroupColorSnippetID_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateGroupColorSnippetID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateGroupColorSnippetID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateGroupColorSnippetID_Statics::RVPDPEditorSubsystem_eventUpdateGroupColorSnippetID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateGroupColorSnippetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateGroupColorSnippetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics
	{
		struct RVPDPEditorSubsystem_eventUpdateMeshColorSnippetID_Parms
		{
			FString prevColorSnippetID;
			FString newColorSnippetID;
			bool isPartOfGroupSnippet;
			FString groupSnippedID;
			UVertexPaintColorSnippetDataAsset* colorSnippetDataAsset;
			bool success;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_prevColorSnippetID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_newColorSnippetID;
		static void NewProp_isPartOfGroupSnippet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isPartOfGroupSnippet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_groupSnippedID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_colorSnippetDataAsset;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_prevColorSnippetID = { "prevColorSnippetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventUpdateMeshColorSnippetID_Parms, prevColorSnippetID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_newColorSnippetID = { "newColorSnippetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventUpdateMeshColorSnippetID_Parms, newColorSnippetID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_isPartOfGroupSnippet_SetBit(void* Obj)
	{
		((RVPDPEditorSubsystem_eventUpdateMeshColorSnippetID_Parms*)Obj)->isPartOfGroupSnippet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_isPartOfGroupSnippet = { "isPartOfGroupSnippet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RVPDPEditorSubsystem_eventUpdateMeshColorSnippetID_Parms), &Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_isPartOfGroupSnippet_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_groupSnippedID = { "groupSnippedID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventUpdateMeshColorSnippetID_Parms, groupSnippedID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_colorSnippetDataAsset = { "colorSnippetDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPEditorSubsystem_eventUpdateMeshColorSnippetID_Parms, colorSnippetDataAsset), Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_success_SetBit(void* Obj)
	{
		((RVPDPEditorSubsystem_eventUpdateMeshColorSnippetID_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RVPDPEditorSubsystem_eventUpdateMeshColorSnippetID_Parms), &Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_prevColorSnippetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_newColorSnippetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_isPartOfGroupSnippet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_groupSnippedID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_colorSnippetDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Paint and Detection Plugin" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPEditorSubsystem, nullptr, "UpdateMeshColorSnippetID", nullptr, nullptr, Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::RVPDPEditorSubsystem_eventUpdateMeshColorSnippetID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::RVPDPEditorSubsystem_eventUpdateMeshColorSnippetID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URVPDPEditorSubsystem);
	UClass* Z_Construct_UClass_URVPDPEditorSubsystem_NoRegister()
	{
		return URVPDPEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_URVPDPEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URVPDPEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_RVPDPEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URVPDPEditorSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URVPDPEditorSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_AddColorSnippetTag, "AddColorSnippetTag" }, // 2889372042
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_AddEditorNotification, "AddEditorNotification" }, // 3735822447
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_AddGroupColorSnippet, "AddGroupColorSnippet" }, // 399357092
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_AddMeshColorSnippet, "AddMeshColorSnippet" }, // 2570853819
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault, "AddSkeletalMeshAmountOfLODsToPaintByDefault" }, // 515823667
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault, "AddStaticMeshAndAmountOfLODsToPaintByDefault" }, // 2665202269
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_ApplyVertexColorToMeshAtLOD0, "ApplyVertexColorToMeshAtLOD0" }, // 2791390236
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_ClearAllAvailableColorSnippetCacheTagContainer, "ClearAllAvailableColorSnippetCacheTagContainer" }, // 3108667499
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_DoesColorSnippetTagExist, "DoesColorSnippetTagExist" }, // 3816513282
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_GetAllColorSnippetTagsDirectlyFromIni, "GetAllColorSnippetTagsDirectlyFromIni" }, // 4255715188
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectNameFromSoftObjectPtr, "GetObjectNameFromSoftObjectPtr" }, // 2549022079
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClass, "GetObjectsOfClass" }, // 2058344430
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_GetObjectsOfClassAsSoftPtrs, "GetObjectsOfClassAsSoftPtrs" }, // 1819748739
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_GetPersistentLevelsWorld_Wrapper, "GetPersistentLevelsWorld_Wrapper" }, // 3635483074
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper, "GetSkeletalMeshComponentVertexCount_Wrapper" }, // 2631580302
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshLODCount_Wrapper, "GetSkeletalMeshLODCount_Wrapper" }, // 1824154157
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_GetSkeletalMeshVerticesAmount_Wrapper, "GetSkeletalMeshVerticesAmount_Wrapper" }, // 2367644682
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_GetSoftObjectPathFromSoftObjectPtr, "GetSoftObjectPathFromSoftObjectPtr" }, // 1390209848
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshComponentVertexCount_Wrapper, "GetStaticMeshComponentVertexCount_Wrapper" }, // 4215503614
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshLODCount_Wrapper, "GetStaticMeshLODCount_Wrapper" }, // 303171336
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_GetStaticMeshVerticesAmount_Wrapper, "GetStaticMeshVerticesAmount_Wrapper" }, // 1715232607
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_LoadEssentialDataAssets, "LoadEssentialDataAssets" }, // 303320667
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_MoveGroupColorSnippet, "MoveGroupColorSnippet" }, // 1470313470
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_MoveMeshColorSnippet, "MoveMeshColorSnippet" }, // 1784421856
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_RefreshAllAvailableCachedColorSnippetTagContainer, "RefreshAllAvailableCachedColorSnippetTagContainer" }, // 2785032513
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveColorSnippetTag, "RemoveColorSnippetTag" }, // 3657279043
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveGroupColorSnippet, "RemoveGroupColorSnippet" }, // 154904625
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveMeshColorSnippet, "RemoveMeshColorSnippet" }, // 2987146513
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault, "RemoveSkeletalMeshAmountOfLODsToPaintByDefault" }, // 2218275569
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault, "RemoveStaticMeshAndAmountOfLODsToPaintByDefault" }, // 2228534056
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_RenameColorSnippetTag, "RenameColorSnippetTag" }, // 2412026593
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_SavePackageWrapper, "SavePackageWrapper" }, // 1946631883
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsOptimizationsDataAssetToUse, "SetCustomSettingsOptimizationsDataAssetToUse" }, // 3246233679
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse, "SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse" }, // 4054724640
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_SetCustomSettingsVertexPaintMaterialToUse, "SetCustomSettingsVertexPaintMaterialToUse" }, // 3408301692
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_SetEngineSpecificButtonSettings, "SetEngineSpecificButtonSettings" }, // 3965212006
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateGroupColorSnippetID, "UpdateGroupColorSnippetID" }, // 2606126526
		{ &Z_Construct_UFunction_URVPDPEditorSubsystem_UpdateMeshColorSnippetID, "UpdateMeshColorSnippetID" }, // 1471622600
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URVPDPEditorSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URVPDPEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RVPDPEditorSubsystem.h" },
		{ "ModuleRelativePath", "RVPDPEditorSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URVPDPEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URVPDPEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URVPDPEditorSubsystem_Statics::ClassParams = {
		&URVPDPEditorSubsystem::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URVPDPEditorSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_URVPDPEditorSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URVPDPEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_URVPDPEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URVPDPEditorSubsystem.OuterSingleton, Z_Construct_UClass_URVPDPEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URVPDPEditorSubsystem.OuterSingleton;
	}
	template<> RVPDPEDITOR_API UClass* StaticClass<URVPDPEditorSubsystem>()
	{
		return URVPDPEditorSubsystem::StaticClass();
	}
	URVPDPEditorSubsystem::URVPDPEditorSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URVPDPEditorSubsystem);
	URVPDPEditorSubsystem::~URVPDPEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPEditorSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URVPDPEditorSubsystem, URVPDPEditorSubsystem::StaticClass, TEXT("URVPDPEditorSubsystem"), &Z_Registration_Info_UClass_URVPDPEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URVPDPEditorSubsystem), 1446917343U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPEditorSubsystem_h_2402905566(TEXT("/Script/RVPDPEditor"),
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_RVPDPEditor_RVPDPEditorSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
