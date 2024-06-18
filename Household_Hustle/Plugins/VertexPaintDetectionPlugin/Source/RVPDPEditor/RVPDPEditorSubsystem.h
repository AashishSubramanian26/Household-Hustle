// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "EditorSubsystem.h"
#include "ColorSnippetPrerequisites.h"
#include "RVPDPEditorSubsystem.generated.h"


class UVertexPaintColorSnippetDataAsset;
class UVertexPaintColorSnippetRefs;
class UVertexPaintOptimizationDataAsset;
class UVertexPaintMaterialDataAsset;
class UButton;
class UComboBoxString;


UCLASS()
class RVPDPEDITOR_API URVPDPEditorSubsystem : public UEditorSubsystem {

	GENERATED_BODY()

private:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual void Deinitialize() override;

public:

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Adds a Editor Notification in the Bottom Right Corner"))
		void AddEditorNotification(FString notification);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Can set Button Settings depending on Engine Version"))
		void SetEngineSpecificButtonSettings(TArray<UButton*> buttons, TArray<UComboBoxString*> comboBoxes);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Auto Saves this package so the user doesn't have to manually press save after doing changes"))
		bool SavePackageWrapper(UObject* packageToSave);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		void AddSkeletalMeshAmountOfLODsToPaintByDefault(USkeletalMesh* skeletalMesh, int maxAmountOfLODsToPaint, bool& success);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		void RemoveSkeletalMeshAmountOfLODsToPaintByDefault(USkeletalMesh* skeletalMesh, bool& success);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		void AddStaticMeshAndAmountOfLODsToPaintByDefault(UStaticMesh* staticMesh, int maxAmountOfLODsToPaint, bool& success);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		void RemoveStaticMeshAndAmountOfLODsToPaintByDefault(UStaticMesh* staticMesh, bool& success);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		void AddMeshColorSnippet(UPrimitiveComponent* meshComponent, FString colorSnippetID, bool isPartOfAGroupSnippet, FString groupSnippedID, FVector relativeLocationToGroupCenterPoint, float dotProductToGroupCenterPoint, UVertexPaintColorSnippetDataAsset* colorSnippetDataAsset, bool& success);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		void AddGroupColorSnippet(FVertexDetectGroupColorSnippetInfo groupSnippetInfo, bool& success);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		void RemoveGroupColorSnippet(FString groupSnippetID, bool& success);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		void MoveMeshColorSnippet(FString colorSnippetID, UVertexPaintColorSnippetDataAsset* colorSnippetDataAssetToMoveFrom, UVertexPaintColorSnippetDataAsset* colorSnippetDataAssetToMoveTo, bool& success);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		void MoveGroupColorSnippet(FString colorSnippetID, UVertexPaintColorSnippetDataAsset* colorSnippetDataAssetToMoveTo);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		void UpdateMeshColorSnippetID(FString prevColorSnippetID, FString newColorSnippetID, bool isPartOfGroupSnippet, FString groupSnippedID, UVertexPaintColorSnippetDataAsset* colorSnippetDataAsset, bool& success);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		void UpdateGroupColorSnippetID(FString prevGroupColorSnippetID, FString newGroupColorSnippetID);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		void RemoveMeshColorSnippet(FString colorSnippetID, UVertexPaintColorSnippetDataAsset* colorSnippetDataAsset);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		bool ApplyVertexColorToMeshAtLOD0(UPrimitiveComponent* meshComponent, TArray<FColor> vertexColorsAtLOD0);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin")
		int GetStaticMeshVerticesAmount_Wrapper(UStaticMesh* mesh, int lod);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin")
		int GetSkeletalMeshVerticesAmount_Wrapper(USkeletalMesh* mesh, int lod);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin")
		int GetStaticMeshLODCount_Wrapper(UStaticMesh* mesh);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin")
		int GetSkeletalMeshLODCount_Wrapper(USkeletalMesh* skeletalMesh);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin")
		int GetSkeletalMeshComponentVertexCount_Wrapper(USkeletalMeshComponent* skeletalMeshComponent, int lod);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin")
		int GetStaticMeshComponentVertexCount_Wrapper(UStaticMeshComponent* staticMeshComponent, int lod);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin", meta = (WorldContext = "WorldContextObject"))
		UWorld* GetPersistentLevelsWorld_Wrapper(const UObject* worldContext);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Sets which Optimization Data Asset on the custom settings. Also tells the subsystem to update it's references"))
		void SetCustomSettingsOptimizationsDataAssetToUse(UObject* dataAsset);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Sets which vertex paint material to use that stores all materials we've added with vertexcolors. "))
		void SetCustomSettingsVertexPaintMaterialToUse(UObject* dataAsset);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Sets which color snippet reference data asset to use that stores references to Color snippet Data Asset. "))
		void SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse(UObject* dataAsset);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		void LoadEssentialDataAssets();

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		bool AddColorSnippetTag(FString tag);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin")
		bool DoesColorSnippetTagExist(FString tag);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		TArray<FString> GetAllColorSnippetTagsDirectlyFromIni();

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		bool RemoveColorSnippetTag(FString tag);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		void ClearAllAvailableColorSnippetCacheTagContainer();

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		void RenameColorSnippetTag(FString oldTag, FString newTag);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		void RefreshAllAvailableCachedColorSnippetTagContainer();


	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Editor Utilities", meta = (ToolTip = "Gets all the objects of a specific class from the project. Note that it doesn't work with BP assets. More performant if you only get objects from content folder and not Engine, Plugins folders etc. since otherwise we have to load the asset. \nIf Editor Only!"))
		TArray<UObject*> GetObjectsOfClass(TSubclassOf<UObject> objectsToGet, bool onlyGetObjectsFromContentFolder);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Editor Utilities", meta = (ToolTip = "Blueprint callable function to get the object path from soft ptr ref so we can avoid resolving them and bringing them into memory in order to display path names etc. \nIf Editor Only!"))
		FSoftObjectPath GetSoftObjectPathFromSoftObjectPtr(TSoftObjectPtr<UObject> object);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Editor Utilities", meta = (ToolTip = "Blueprint callable function to get the object name from soft ptr ref so we can avoid resolving them and bringing them into memory in order to display names etc. \nIf Editor Only!"))
		FString GetObjectNameFromSoftObjectPtr(TSoftObjectPtr<UObject> object);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Editor Utilities", meta = (ToolTip = "Gets all the objects of a specific class from the project but in soft pointer form. Note that it doesn't work with BP assets. More performant if you only get objects from content folder and not Engine, Plugins folders etc. since otherwise we have to load the asset. \nNOTE Loading all things may be very heavy (and not necessary) if getting things like Materials or Static Meshes! \nIf Editor Only!", DeterminesOutputType = "objectsToGet"))
		TArray<TSoftObjectPtr<UObject>> GetObjectsOfClassAsSoftPtrs(TSubclassOf<UObject> objectsToGet, bool loadObjects);


private:

	// NOTE We still have the old name of the plugin here when creating and getting color snippets, otherwise we would have issues getting old color snippets. 
	FString colorSnippetDevComments = "Runtime Vertex Color Paint & Detection Plugin";
};
