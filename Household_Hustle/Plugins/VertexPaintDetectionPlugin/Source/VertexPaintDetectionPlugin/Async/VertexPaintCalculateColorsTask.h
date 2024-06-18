// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "CalculateColorsPrerequisites.h"
#include "CollisionQueryParams.h"
#include "Engine/EngineTypes.h"
#include "Runtime/Launch/Resources/Version.h"

#if ENGINE_MAJOR_VERSION == 5

#include "Components/DynamicMeshComponent.h"

#if ENGINE_MINOR_VERSION >= 1
#include "Engine/HitResult.h"
#endif

#if ENGINE_MINOR_VERSION >= 2
#include "Rendering/SkeletalMeshRenderData.h" // For 5.2 and up the forward decleration wasn't enough. 
#endif

#endif

#include "Async/AsyncWork.h"


class UBoxComponent;
class USphereComponent;
class USplineMeshComponent;

struct FPaintedVertex;
class FPositionVertexBuffer;
class FStaticMeshVertexBuffer;

struct FSkelMeshRenderSection;
class FSkeletalMeshRenderData;
class FSkinWeightVertexBuffer;
class FSkeletalMeshLODRenderData;
class UClothingAssetBase;


DECLARE_DELEGATE_OneParam(FVertexPaintAsyncTaskFinished, const FCalculateColorsInfo&);



//-------------------------------------------------------

// Async Task Debug Messages

struct FAsyncTaskDebugMessages {

	FAsyncTaskDebugMessages(FString message, FColor color) {

		debugMessage = message;
		messageColor = color;
	}

	FString debugMessage = "";

	FColor messageColor = FColor(ForceInitToZero);
};


//-------------------------------------------------------

// Direction From Hit Location To Closest Vertices Info

struct FDirectionFromHitLocationToClosestVerticesInfo {

	int lodVertexIndex = 0;

	FVector directionFromHitDirectionToVertex = FVector(ForceInitToZero);

	FVector vertexWorldPosition = FVector(ForceInitToZero);

	float distanceFromHitLocation = 0;
};



class VERTEXPAINTDETECTIONPLUGIN_API FVertexPaintCalculateColorsTask : public FNonAbandonableTask {

	friend class FAsyncTask<FVertexPaintCalculateColorsTask>;
	friend class FAutoDeleteAsyncTask<FVertexPaintCalculateColorsTask>;


public:

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FVertexPaintCalculateColorsTask, STATGROUP_ThreadPoolAsyncTasks);
	}


	void DoWork();

	void SetCalculateColorsInfo(const FCalculateColorsInfo& calculateColorsInfo);

	FVertexPaintAsyncTaskFinished asyncTaskFinishedDelegate;


private:


	bool CalculateColorToApply();



	//-----------  UTILITIES  ----------- //

	inline bool IsTaskValid();

	inline bool WasTaskSuccessfull(const bool& isTaskFinished, const FCalculateColorsInfo& calculateColorsInfo);

	inline FLinearColor ClampLinearColor(FLinearColor linearColor);

	inline bool IsValidSkeletalMesh(USkeletalMesh* skeletalMesh, USkeletalMeshComponent* skeletalMeshComponent, FSkeletalMeshRenderData* skeletalMeshRenderData, int lod);

	bool ShouldLoopThroughVerticesAndLODs(FVertexDetectEventSettings callbackSettings, UPrimitiveComponent* component, FVertexPaintOverrideColorsToApply overrideColorsToApplySettings);

	bool PaintJobShouldLoopThroughVerticesAndLODS(FVertexPaintColorSettingStruct paintColorSettings, FVertexPaintStruct paintSettings, FVertexPaintPaintColorsDirectlyStruct paintColorsDirectlySettings);

	bool IsSetToOverrideVertexColorsAndImplementsInterface(FVertexPaintStruct vertexPaintSettings);

	void SetAllColorChannelsToHaveBeenChanged();

	void PropogateLOD0VertexColorsToLODs(const TArray<FPaintedVertex>& lod0PaintedVerts, FVertexDetectMeshDataStruct& vertexDetectMeshData, const TArray<FBox>& lodBaseBounds, TArray<FColorVertexBuffer*>& colorVertexBufferToUpdate, UPrimitiveComponent* component);

	bool DoesPaintJobUseVertexColorBuffer(const FCalculateColorsInfo& calculateColorsInfo);


	//-----------  ESSENTIALS BEFORE LOD LOOP  ----------- //

	void GetClosestVertexDataInfo(const FCalculateColorsInfo& calculateColorsInfo, FVertexDetectGetAverageColorStruct& averageColorInAreaSettings, FVector& hitLocationInWorldSpace, FVector& hitNormal);

	void GetPaintAtLocationInfo(const FCalculateColorsInfo& calculateColorsInfo, float& vertexNormalDotToHitNormalMin, FVector& hitLocationInWorldSpace);

	bool GetWithinAreaInfo(const FCalculateColorsInfo& calculateColorsInfo, TArray<FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo>& componentsToCheckIfWithin, FCollisionQueryParams& withinAreaComplexShapeTraceParams);

#if ENGINE_MAJOR_VERSION == 4

	void GetSkeletalMeshClothInfo(const FCalculateColorsInfo& calculateColorsInfo, TMap<UClothingAssetBase*, FVertexDetectClothSettingsStruct>& clothPhysics, TArray<UClothingAssetBase*>& clothingAssets, TMap<int32, TArray<FVector>>& clothvertexPositions, TMap<int32, TArray<FVector>>& clothVertexNormals, TArray<FVector>& clothBoneLocationInComponentSpace, TArray<FQuat>& clothBoneQuaternionsInComponentSpace);

#elif ENGINE_MAJOR_VERSION == 5

	void GetSkeletalMeshClothInfo(const FCalculateColorsInfo& calculateColorsInfo, TMap<UClothingAssetBase*, FVertexDetectClothSettingsStruct>& clothPhysics, TArray<UClothingAssetBase*>& clothingAssets, TMap<int32, TArray<FVector3f>>& clothvertexPositions, TMap<int32, TArray<FVector3f>>& clothVertexNormals, TArray<FVector>& clothBoneLocationInComponentSpace, TArray<FQuat>& clothBoneQuaternionsInComponentSpace);

#endif



	//-----------  LOD LOOP  ----------- //

	void GetStaticMeshLODInfo(const FCalculateColorsInfo& calculateColorsInfo, const int& lod, TArray<int32>& sectionsToLoopThrough, FPositionVertexBuffer*& positionVertexBuffer, FStaticMeshVertexBuffer*& meshVertexBuffer, int& totalAmountOfVerticesAtLOD, FVertexDetectMeshDataStruct& meshVertexData, TArray<FColor>& colorsAtLOD);

	bool GetSkeletalMeshLODInfo(const FCalculateColorsInfo& calculateColorsInfo, FSkeletalMeshRenderData* skeletalMeshRenderData, FSkeletalMeshLODRenderData*& skeletalMeshLODRenderData, const int& lod, FSkinWeightVertexBuffer*& skinWeightBuffer, TArray<int32>& sectionsToLoopThrough, int& totalAmountOfVerticesAtLOD, FVertexDetectMeshDataStruct& meshVertexData, TArray<FColor>& colorsAtLOD, int& vertexIndexToStartAt, TArray<TArray<FColor>>& boneIndexColors);

#if ENGINE_MAJOR_VERSION == 5

	bool GetDynamicMeshLODInfo(const FCalculateColorsInfo& calculateColorsInfo, UE::Geometry::FDynamicMesh3*& dynamicMesh3, const int& lod, TArray<int32>& sectionsToLoopThrough, int& totalAmountOfVerticesAtLOD, TArray<FColor>& colorsAtLOD, TArray<FColor>& defaultColorsFromLOD, TArray<FColor>& dynamicMeshComponentVertexColors);

	void GetGeometryCollectionMeshLODInfo(const FCalculateColorsInfo& calculateColorsInfo, const int& lod, TArray<int32>& sectionsToLoopThrough, int& totalAmountOfVerticesAtLOD, TArray<FColor>& colorsAtLOD, TArray<FColor>& defaultColorsFromLOD, TArray<FLinearColor>& geometryCollectionVertexColorsFromLOD);

#endif

	void GetPaintEntireMeshRandomLODInfo(const FCalculateColorsInfo& calculateColorsInfo, const int& lod, const int& amountOfVerticesAtLOD, FRandomStream& randomSeedToUse, float& amountOfVerticesToRandomize);

	void GetEstimatedColorToHitLocationValues(const int& vertexToLerpToward, const FColor& closestVertexColor, const FVector& closestVertexInWorldSpace, const FVector& hitLocationInWorldSpace, const FColor& vertexToLerpTowardColor, const FVector& vertexToLerpTowardPositionInWorldSpace, FLinearColor& estimatedColorAtHitLocation, FVector& estimatedHitLocation);

	int GetEstimatedColorToHitLocationVertexToLerpColorToward(const TMap<int, FDirectionFromHitLocationToClosestVerticesInfo>& directionFromHitToClosestVertices, TArray<FVector>& closestVerticesToTheHitLocationInWorldLocation, const FVector& directionToClosestVertex, const int& closestVertexBased, const float& dotGraceRange = 0.2f);

	UMaterialInterface* GetMaterialAtSection(const FCalculateColorsInfo& calculateColorsInfo, int section, FSkeletalMeshLODRenderData* skeletalMeshLODRenderData);

	void ResolveWithinAreaResults(const FCalculateColorsInfo& calculateColorsInfo, int lod, int amountOfVerticesWithinArea, const TArray<FColor>& vertexColorsWithinArea_BeforeApplyingColors, const TArray<FColor>& vertexColorsWithinArea_AfterApplyingColors, const TArray<FVector>& vertexPositionsInComponentSpaceWithinArea, const TArray<FVector>& vertexNormalsWithinArea, FVertexDetectAmountOfPaintedColorsOfEachChannel& colorsOfEachChannel_WithinArea_BeforeApplyingColors, FVertexDetectAmountOfPaintedColorsOfEachChannel& colorsOfEachChannel_WithinArea_AfterApplyingColors, FVertexPaintWithinAreaResults& withinAreaResultsBeforeApplyingColors, FVertexPaintWithinAreaResults& withinAreaResultsAfterApplyingColors);

	void ResolveSkeletalMeshBoneColors(const FCalculateColorsInfo& calculateColorsInfo, int lod, const TArray<TArray<FColor>>& boneVertexColors, TMap<FName, FVertexDetectBoneColorsStruct>& nameAndBoneColors, bool& successfullyGoBoneColors);

	void ResolveChaosClothPhysics(const FCalculateColorsInfo& calculateColorsInfo, bool vertexColorsChanged, FSkeletalMeshLODRenderData* skeletalMeshLODRenderData, int lod, const TMap<UClothingAssetBase*, FVertexDetectClothSettingsStruct>& clothPhysicsSettings, const TMap<int16, FLinearColor>& clothAverageColor, TMap<UClothingAssetBase*, FVertexDetectChaosClothPhysicsSettings>& clothPhysicsSettingsBasedOnAverageColor);



	//-----------  SECTION LOOP  ----------- //

	void GetStaticMeshComponentSectionInfo(const FCalculateColorsInfo& calculateColorsInfo, const int& lod, const int& section, int& sectionMaxAmountOfVertices, int& currentLODVertex, UMaterialInterface*& materialSection);

#if ENGINE_MAJOR_VERSION == 4

	bool GetSkeletalMeshComponentSectionInfo(const FCalculateColorsInfo& calculateColorsInfo, const int& lod, const int& section, FSkeletalMeshRenderData* skelMeshRenderData, FSkeletalMeshLODRenderData* skelMeshLODRenderData, const TMap<int32, TArray<FVector>>& clothVertexPositions, const TMap<int32, TArray<FVector>>& clothVertexNormals, const TMap<UClothingAssetBase*, FVertexDetectClothSettingsStruct>& clothsPhysicsSettings, const TArray<UClothingAssetBase*>& clothingAssets, int& sectionMaxAmountOfVertices, int& currentLODVertex, UMaterialInterface*& materialSection, FSkelMeshRenderSection*& skelMeshRenderSection, bool& shouldAffectClothPhysics, TArray<FVector>& clothSectionVertexPositions, TArray<FVector>& clothSectionVertexNormals);

#elif ENGINE_MAJOR_VERSION == 5

	bool GetSkeletalMeshComponentSectionInfo(const FCalculateColorsInfo& calculateColorsInfo, const int& lod, const int& section, FSkeletalMeshRenderData* skelMeshRenderData, FSkeletalMeshLODRenderData* skelMeshLODRenderData, const TMap<int32, TArray<FVector3f>>& clothVertexPositions, const TMap<int32, TArray<FVector3f>>& clothVertexNormals, const TMap<UClothingAssetBase*, FVertexDetectClothSettingsStruct>& clothsPhysicsSettings, const TArray<UClothingAssetBase*>& clothingAssets, int& sectionMaxAmountOfVertices, int& currentLODVertex, UMaterialInterface*& materialSection, FSkelMeshRenderSection*& skelMeshRenderSection, bool& shouldAffectClothPhysics, TArray<FVector3f>& clothSectionVertexPositions, TArray<FVector3f>& clothSectionVertexNormals);

	void GetDynamicMeshComponentSectionInfo(const FCalculateColorsInfo& calculateColorsInfo, const int& lodAmountOfVertices, const int& section, int& sectionMaxAmountOfVertices, int& currentLODVertex, UMaterialInterface*& materialSection);

	void GetGeometryCollectionMeshComponentSectionInfo(const FCalculateColorsInfo& calculateColorsInfo, const int& section, int& sectionMaxAmountOfVertices, int& currentLODVertex, UMaterialInterface*& materialSection);

#endif

	void GetMaterialToGetSurfacesFrom(const FCalculateColorsInfo& calculateColorsInfo, UMaterialInterface* materialAtSection, UMaterialInterface*& materialToGetSurfacesFrom, TArray<TEnumAsByte<EPhysicalSurface>>& registeredPhysicsSurfacesAtMaterial);

	void GetColorChannelsToPrimarilyApply(const FVertexPaintColorSettingStruct& paintOnMeshColorSettingsForSection, bool& applyColorsPrimarilyOnRedChannel, bool& applyColorsPrimarilyOnGreenChannel, bool& applyColorsPrimarilyOnBlueChannel, bool& applyColorsPrimarilyOnAlphaChannel);

	bool GetPaintOnMeshColorSettingsFromPhysicsSurface(const FCalculateColorsInfo& calculateColorsInfo, const int32& currentSection, UMaterialInterface* materialToGetSurfacesFrom, FVertexPaintColorSettingStruct& paintOnMeshColorSettingsForSection, FVertexPaintingLimitRGBA& paintLimiitsRGB, bool& applyColorsPrimarilyOnRedChannel, bool& applyColorsPrimarilyOnGreenChannel, bool& applyColorsPrimarilyOnBlueChannel, bool& applyColorsPrimarilyOnAlphaChannel);

	void GetChannelsThatContainsPhysicsSurface(const FCalculateColorsInfo& calculateColorsInfo, const TArray<TEnumAsByte<EPhysicalSurface>>& registeredPhysicsSurfacesAtMaterial, bool& containsPhysicsSurfaceOnRedChannel, bool& containsPhysicsSurfaceOnGreenChannel, bool& containsPhysicsSurfaceOnBlueChannel, bool& containsPhysicsSurfaceOnAlphaChannel);

	void GetIfPhysicsSurfacesIsRegisteredToVertexColorChannels(const UWorld* world, const bool& includeVertexColorChannelResultOfEachChannel, const bool& includePhysicsSurfaceResultOfEachChannel, const TArray<TEnumAsByte<EPhysicalSurface>>& includeOnlyIfPhysicsSurfaceIsRegisteredToAnyChannel, const TArray<TEnumAsByte<EPhysicalSurface>>& physicsSurfacesAtMaterial, bool& containsPhysicsSurfaceOnRedChannel, bool& containsPhysicsSurfaceOnGreenChannel, bool& containsPhysicsSurfaceOnBlueChannel, bool& containsPhysicsSurfaceOnAlphaChannel);

	FVertexDetectPaintColorConditionStruct GetPaintConditionAdjustedIfSetToUsePhysicsSurface(FVertexDetectPaintColorConditionStruct channelsPaintCondition, UMaterialInterface* material);

	void GetClothSectionAverageColor(USkeletalMeshComponent* skeletalMeshComponent, FSkelMeshRenderSection* skelMeshRenderSection, bool shouldAffectPhysicsOnClothSection, int sectionMaxAmountOfVertices, float clothTotalRedVertexColorsOnSection, float clothTotalGreenVertexColorsOnSection, float clothTotalBlueVertexColorsOnSection, float clothTotalAlphaVertexColorsOnSection, TMap<int16, FLinearColor>& clothsSectionAvarageColor);

	void ResolveAmountOfColorsOfEachChannelForSection(const FCalculateColorsInfo& calculateColorsInfo, const TArray<TEnumAsByte<EPhysicalSurface>>& registeredPhysicsSurfacesAtMaterial, TArray<FVertexDetectAmountOfPaintedColorsOfEachChannel_Results>& physicsSurfaceResultForSection_BeforeApplyingColors, FVertexDetectAmountOfPaintedColorsOfEachChannel& amountOfPaintedColorsOfEachChannel_BeforeApplyingColors, TArray<FVertexDetectAmountOfPaintedColorsOfEachChannel_Results>& physicsSurfaceResultForSection_AfterApplyingColors, FVertexDetectAmountOfPaintedColorsOfEachChannel& amountOfPaintedColorsOfEachChannel_AfterApplyingColors, TArray<FVertexDetectAmountOfPaintedColorsOfEachChannel_Results>& physicsSurfaceResultForSection_WithinArea_BeforeApplyingColors, FVertexDetectAmountOfPaintedColorsOfEachChannel& amountOfPaintedColorsOfEachChannel_WithinArea_BeforeApplyingColors, TArray<FVertexDetectAmountOfPaintedColorsOfEachChannel_Results>& physicsSurfaceResultForSection_WithinArea_AfterApplyingColors, FVertexDetectAmountOfPaintedColorsOfEachChannel& amountOfPaintedColorsOfEachChannel_WithinArea_AfterApplyingColors);



	//-----------  VERTEX LOOP  ----------- //

	inline bool GetStaticMeshComponentVertexInfo(const FCalculateColorsInfo& calculateColorsInfo, FPositionVertexBuffer* positionVertBuffer, FStaticMeshVertexBuffer* staticMeshVertexBuffer, int lodVertexIndex, FVector& vertexPositionInComponentSpace, FVector& vertexPositionInActorSpace, FVector& vertexNormal, bool& gotVertexNormal);


#if ENGINE_MAJOR_VERSION == 4

	inline bool GetSkeletalMeshComponentVertexInfo(const FCalculateColorsInfo& calculateColorsInfo, FSkeletalMeshRenderData* skeletalMeshRenderData, FSkeletalMeshLODRenderData* skeletalMeshLODRenderData, FSkelMeshRenderSection* skeletalMeshRenderSection, FSkinWeightVertexBuffer* skeletalMeshSkinWeightBuffer, const TArray<FVector>& clothSectionVertexPositions, const TArray<FVector>& clothSectionVertexNormals, const TArray<FQuat>& clothBoneQuaternionsInComponentSpace, const TArray<FVector>& clothBoneLocationInComponentSpace, int lod, int section, int sectionVertexIndex, int lodVertexIndex, FVector& vertexPositionInComponentSpace, FVector& vertexPositionInActorSpace, FVector& vertexNormal, bool& gotVertexNormal, bool& isVertexOnCloth, uint32& boneIndex, FName& boneName);

	inline FVector Modified_GetTypedSkinnedVertexPosition(FSkelMeshRenderSection* Section, const FPositionVertexBuffer& PositionVertexBuffer, const FSkinWeightVertexBuffer* SkinWeightVertexBuffer, const int32 VertIndex, const TArray<FMatrix>& RefToLocals, uint32& boneIndex);

#elif ENGINE_MAJOR_VERSION == 5

	inline bool GetSkeletalMeshComponentVertexInfo(const FCalculateColorsInfo& calculateColorsInfo, FSkeletalMeshRenderData* skeletalMeshRenderData, FSkeletalMeshLODRenderData* skeletalMeshLODRenderData, FSkelMeshRenderSection* skeletalMeshRenderSection, FSkinWeightVertexBuffer* skeletalMeshSkinWeightBuffer, const TArray<FVector3f>& clothSectionVertexPositions, const TArray<FVector3f>& clothSectionVertexNormals, const TArray<FQuat>& clothBoneQuaternionsInComponentSpace, const TArray<FVector>& clothBoneLocationInComponentSpace, int lod, int section, int sectionVertexIndex, int lodVertexIndex, FVector& vertexPositionInComponentSpace, FVector& vertexPositionInActorSpace, FVector& vertexNormal, bool& gotVertexNormal, bool& isVertexOnCloth, uint32& boneIndex, FName& boneName);

	inline bool GetDynamicMeshComponentVertexInfo(const FCalculateColorsInfo& calculateColorsInfo, UE::Geometry::FDynamicMesh3* dynamicMesh3, int totalAmountOfVerticesAtLOD, int lodVertexIndex, FColor& vertexColor, FVector& vertexPositionInComponentSpace, FVector& vertexPositionInActorSpace, FVector& vertexNormal, bool& gotVertexNormal, UE::Geometry::FVertexInfo& dynamicMeshVertexInfo, int& dynamicMeshMaxVertexID, int& dynamicMeshVerticesBufferMax, bool& skipDynamicMeshVertex);

	inline FVector Modified_GetTypedSkinnedVertexPosition(FSkelMeshRenderSection* Section, const FPositionVertexBuffer& PositionVertexBuffer, const FSkinWeightVertexBuffer* SkinWeightVertexBuffer, const int32 VertIndex, const TArray<FMatrix44f>& RefToLocals, uint32& boneIndex);

#if ENGINE_MINOR_VERSION >= 3

	inline bool GetGeometryCollectionComponentVertexInfo(const FCalculateColorsInfo& calculateColorsInfo, int lodVertexIndex, FColor& vertexColor, FVector& vertexPositionInComponentSpace, FVector& vertexPositionInActorSpace, FVector& vertexNormal, bool& gotVertexNormal);

#endif
#endif


	inline void GetPaintEntireMeshVertexInfo(const FCalculateColorsInfo& calculateColorsInfo, const FVector& vertexPositionInWorldSpace, const FVector& vertexPositionInComponentSpace, int totalAmountOfVerticesAtLOD, int lod, int lodVertexIndex, const TMap<FVector, FColor>& vertexDublettesPaintedAtLOD0, const FRandomStream& randomStream, bool& shouldPaintCurrentVertex, float& amountOfVerticesLeftToRandomize, float& currentProbability);

	inline void IsVertexCloseToEstimatedColorToHitLocation(float& currentLongestDistance, int& currentLongestDistanceIndex, TMap<int, FDirectionFromHitLocationToClosestVerticesInfo>& directionFromHitToClosestVertices, const FVector& hitLocationInWorldSpace, const FVector& vertexInWorldSpace, int vertexLODIndex);

	inline void GetPaintAtLocationVertexInfoAtLODZeroBeforeApplyingColors(const FCalculateColorsInfo& calculateColorsInfo, const FVector& vertexPositionInWorldSpace, const FVector& paintAtLocationHitInWorldSpace, int lod, int lodVertexIndex, int section, int amountOfLODVertices, float distanceFromVertexToHitLocation, float& paintAtLocationsDistanceToClosestVertex, int& closestPaintVertexFound, int& closestPaintSectionFound, FVector& paintAtLocationsEstimatedColorToHitLocationsDirectionToClosestVertex, float& paintAtLocationsEstimatedColorToHitLocation_LongestDistance, int& paintAtLocationsEstimatedColorToHitLocation_LongestDistanceIndex, TMap<int, FDirectionFromHitLocationToClosestVerticesInfo>& paintAtLocationEstimatedColorToHitLocation_DirectionFromHitToClosestVertexInfo);

	inline void GetClosestVertexDataVertexInfoAtLODZeroBeforeApplyingColors(const FCalculateColorsInfo& calculateColorsInfo, const FVertexDetectGetAverageColorStruct& getClosestVertexDataGetAverageColor, const FColor& vertexColor, const FVector& vertexPositionInWorldSpace, const FVector& getClosestVertexDataHitInWorldSpace, int lod, int lodVertexIndex, int section, int amountOfLODVertices, float getClosestVertexDataNormalToHitNormalDot, float distanceFromVertexToHitLocation, float& getClosestVertexDataDistanceToClosestVertex, int& closestGetClosestVertexFound, int& closestGetClosestSectionFound, FVector& getClosestVertexDataEstimatedColorToHitLocationsDirectionToClosestVertex, float& getClosestVertexDataEstimatedColorToHitLocation_LongestDistance, int& getClosestVertexDataEstimatedColorToHitLocation_LongestDistanceIndex, TMap<int, FDirectionFromHitLocationToClosestVerticesInfo>& getClosestVertexDataEstimatedColorToHitLocation_DirectionFromHitToClosestVertexInfo, int& amountOfVerticesWithinArea, float& averageColorWithinArea_Red, float& averageColorWithinArea_Green, float& averageColorWithinArea_Blue, float& averageColorWithinArea_Alpha);

	inline bool GetWithinAreaVertexInfoAtLODZeroBeforeApplyingColors(const FCalculateColorsInfo& calculateColorsInfo, int lod, const FVector& vertexPositionInWorldSpace, bool& vertexIsWithinArea);

	inline void UpdateColorsOfEachChannelAbove0BeforeApplyingColors(const FLinearColor& vertexColorAsLinear, int lod, FVertexDetectAmountOfPaintedColorsOfEachChannel& colorsOfEachChannelAbove0);

	inline void GetWithinAreaVertexInfoAfterApplyingColorsAtLODZero(const FCalculateColorsInfo& calculateColorsInfo, const TArray<TEnumAsByte<EPhysicalSurface>>& registeredPhysicsSurfacesAtMaterial, const FLinearColor& vertexColorAsLinearBeforeApplyingColor, const FLinearColor& vertexColorAsLinearAfterApplyingColor, int lod, bool vertexWasWithinArea, bool containsPhysicsSurfaceOnRedChannel, bool containsPhysicsSurfaceOnGreenChannel, bool containsPhysicsSurfaceOnBlueChannel, bool containsPhysicsSurfaceOnAlphaChannel, FVertexDetectAmountOfPaintedColorsOfEachChannel& amountOfPaintedColorsOfEachChannelWithinArea_BeforeApplyingColors, TArray<FVertexDetectAmountOfPaintedColorsOfEachChannel_Results>& physicsSurfaceResultForSection_BeforeApplyingColors, FVertexDetectAmountOfPaintedColorsOfEachChannel& amountOfPaintedColorsOfEachChannelWithinArea_AfterApplyingColors, TArray<FVertexDetectAmountOfPaintedColorsOfEachChannel_Results>& physicsSurfaceResultForSection_AfterApplyingColors);

	inline void GetPaintAtLocationAverageColorWithinAreaAtLODZero(const FCalculateColorsInfo& calculateColorsInfo, const FColor& vertexColor, float paintAtLocationDistanceToHitLocation, float paintAtLocationVertexNormalToHitNormalDot, float paintAtLocationVertexNormalToHitNormalMinDotRequired, int& paintAtLocation_AmountOfVerticesWithinArea, float& paintAtLocationAverageColorWithinArea_Red, float& paintAtLocationAverageColorWithinArea_Green, float& paintAtLocationAverageColorWithinArea_Blue, float& paintAtLocationAverageColorWithinArea_Alpha, float getClosestVertexDataDistanceToHitLocation, const FVertexDetectGetAverageColorStruct& getClosestVertexData_GetAverageColor, float getClosesVertexNormalToHitNormalDot, float& getClosestVertexDataAverageColorWithinAreaAfterApplyingColors_Red, float& getClosestVertexDataAverageColorWithinAreaAfterApplyingColors_Green, float& getClosestVertexDataAverageColorWithinAreaAfterApplyingColors_Blue, float& getClosestVertexDataAverageColorWithinAreaAfterApplyingColors_Alpha, int& getClosestVertexData_AmountOfVerticesWithinArea);

	inline void GetColorsOfEachChannelForVertex(const FLinearColor& currentVertexColor, const FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel& includeAmountOfPaintedColorsOfEachValueSetting, const bool& hasRequiredPhysSurfaceOnRedChannel, const bool& hasRequiredPhysSurfaceOnGreenChannel, const bool& hasRequiredPhysSurfaceOnBlueChannel, const bool& hasRequiredPhysSurfaceOnAlphaChannel, FVertexDetectAmountOfPaintedColorsOfEachChannel_Results& redChannelResult, FVertexDetectAmountOfPaintedColorsOfEachChannel_Results& greenChannelResult, FVertexDetectAmountOfPaintedColorsOfEachChannel_Results& blueChannelResult, FVertexDetectAmountOfPaintedColorsOfEachChannel_Results& alphaChannelResult);

	inline void GetColorsOfEachPhysicsSurfaceForVertex(const TArray<TEnumAsByte<EPhysicalSurface>>& registeredPhysicsSurfaceAtMaterial, const FLinearColor& currentVertexColor, const FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel& includeAmountOfPaintedColorsOfEachValueSetting, const bool& hasRequiredPhysSurfaceOnRedChannel, const bool& hasRequiredPhysSurfaceOnGreenChannel, const bool& hasRequiredPhysSurfaceOnBlueChannel, const bool& hasRequiredPhysSurfaceOnAlphaChannel, TArray<FVertexDetectAmountOfPaintedColorsOfEachChannel_Results>& physicsSurfaceResultToFill);

	inline bool IsThereAnyPaintConditions(const FVertexDetectRGBAStruct& applyColorSettings);

	inline bool DoesVertexColorsMatch(const FColor& vertexColor, const FColor& compareWithColor, float errorTolerance);

	inline FColor GetColorToApplyOnVertex(UVertexPaintDetectionComponent* associatedPaintComponent, UPrimitiveComponent* meshComponentToApplyColorsTo, int currentLOD, int currentVertexIndex, UMaterialInterface* materialVertexIsOn, const TArray<TEnumAsByte<EPhysicalSurface>>& registeredPhysicsSurfacesAtMaterialVertexIsOn, bool isVertexOnCloth, const FLinearColor& currentLinearVertexColor, const FColor& currentVertexColor, const FVector& currentVertexWorldPosition, const FVector& currentVertexNormal, const FName& currentBoneName, float boneWeight, const FVertexDetectFallOffSettings& fallOffSettings, float fallOffRange, float scaleFallOffFrom, float distanceFromFalloffBaseToVertexLocation, const FVertexPaintColorSettingStruct& paintOnMeshColorSetting, bool& vertexGotColorChanged, bool applyColorOnRedChannel, bool applyColorOnGreenChannel, bool applyColorOnBlueChannel, bool applyColorOnAlphaChannel, const FVertexPaintingLimitRGBA& paintLimitOnRGBA);

	inline void GetVertexColorAfterAnyLimitation(bool limitIfColorWasAlreadyOverLimit, float originalRedVertexColor, float newRedVertexColorToApply, float redVertexColorLimit, float originalGreenVertexColor, float newGreenVertexColorToApply, float greenVertexColorLimit, float originalBlueVertexColor, float newBlueVertexColorToApply, float blueVertexColorLimit, float originalAlphaVertexColor, float newAlphaVertexColorToApply, float alphaVertexColorLimit, float& finalRedVertexColorToApply, float& finalGreenVertexColorToApply, float& finalBlueVertexColorToApply, float& finalAlphaVertexColorToApply);

	inline bool WillAppliedColorMakeChangeOnVertex(const FColor& currentColorOnVertex, const FVector& currentLocationOnVertex, const FVector& currentNormalOnVertex, const FVertexDetectFundementalStruct& fundementalSettings, const FVertexPaintColorSettingStruct& paintColorSettings);

	inline bool IsCurrentVertexWithinPaintColorConditions(const FColor& currentVertexColor, const FVector& currentVertexPosition, const FVector& currentVertexNormal, const FName& currentBoneName, float boneWeight, const FVertexDetectPaintColorConditionStruct& paintConditions, bool& hasToHaveConditionsMetToApplyColors, float& colorStrengthIfConditionsIsNotMet);

	inline FVector GetSplineMeshVertexPositionInMeshSpace(const FVector& vertexPos, USplineMeshComponent* splineMeshComponent);

	inline FVector GetSplineMeshVertexNormalInMeshSpace(const FVector& normal, USplineMeshComponent* splineMeshComponent);

	inline bool IsVertexWithinArea(const FVector& vertexWorldPosition, const FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo& componentToCheckIfIsWithinInfo);

	inline void GetClothSectionTotalColorsAfterApplyingColor(USkeletalMeshComponent* skeletalMeshComponent, bool shouldAffectPhysicsOnClothSection, const FColor& vertexColor, float& clothSectionTotalRedColors, float& clothSectionTotalGreenColors, float& clothSectionTotalBlueColors, float& clothSectionTotalAlphaColors);

	inline void GetSerializedVertexColor(bool includeSerializedVertexColors, bool includeVertexDataOnlyForLOD0, int amountOfLODVertices, const FColor& vertexColor, int lod, int lodVertexIndex, FString& serializedColorData);



	//-----------  GLOBAL PROPERTIES  ----------- //

	// Fundemental
	bool inGameThread_Global = false;
	FCalculateColorsInfo calculateColorsInfo_Global;
	FVertexDetectMeshDataStruct vertexDetectMeshData_Global;
	TArray<FAsyncTaskDebugMessages> calculateColorsResultMessage_Global;
	TArray<FColorVertexBuffer*> newColorVertexBufferPerLOD_Global;
	bool isTaskFinished_Global = false;

	// Colors Changed
	TArray<EVertexColorChannel> appliedToVertexColorChannels_Global;
	bool anyVertexColorsGotChanged_Global = false;
	bool redColorChannelChanged_Global = false;
	bool greenColorChannelChanged_Global = false;
	bool blueColorChannelChanged_Global = false;
	bool alphaColorChannelChanged_Global = false;

	// Closest Vertex Data
	FVector closestVertexPositionToHitLocationAtMinLOD_World_Paint_Global = FVector(ForceInitToZero);
	FVector closestVertexNormalToHitLocationAtMinLOD_World_Paint_Global = FVector(ForceInitToZero);
	FVector closestVertexPositionToHitLocationAtMinLOD_World_Detect_Global = FVector(ForceInitToZero);
	FVector closestVertexNormalToHitLocationAtMinLOD_World_Detect_Global = FVector(ForceInitToZero);
	int closestVertexFound_Paint_Global = -1;
	int closestSectionFound_Paint_Global = -1;
	UMaterialInterface* materialAtClosestPaintVertex_Global = nullptr;
	int closestVertexFound_Detection_Global = -1;
	int closestSectionFound_Detection_Global = -1;
	UMaterialInterface* materialAtClosestDetectVertex_Global = nullptr;
	FColor closestVertexColor_BeforeApplyingColors_Detect_Global = FColor(ForceInitToZero);
	FColor closestVertexColor_AfterApplyingColors_Detect_Global = FColor(ForceInitToZero);
	FColor closestVertexColor_AfterApplyingColors_Paint_Global = FColor(ForceInitToZero);

	// Set Colors Directly (Color Snippet, SetMeshComponentColors, SetMeshComponentColorsUsingSerializedString)
	TArray<FColor> colorSnippetColors;
	TArray<FColor> deserializedVertexColors;

	// Paint Condition
	FHitResult paintConditions_LineOfSightHitResult_Global = FHitResult();
	bool paintConditions_VertexOnBone_HasToHaveConditionMeet_Global = false;
	float paintConditions_VertexOnBone_ColorToApplyIfFailed_Global = 0;

	// FallOff Limits
	float fallOffLimit_MaxAmountAtEdge_Adding_Global = 0;
	float fallOffLimit_MaxAmountAtEdge_Removing_Global = 0;
	float fallOffLimit_TotalColorAmountIfApplying = 0;

	// Within Area Globals - Globals so we hopefully save some performance compared to initializing them for every vertex since we can loop through thousands of them
	FVertexPaintWithinAreaResults withinAreaResults_BeforeApplyingColors_Global;
	FVertexPaintWithinAreaResults withinAreaResults_AfterApplyingColors_Global;
	bool paintWithinArea_VertexWasWithinArea_Global = false;
	int amountOfVerticesWithinArea_Detect = 0;
	int getClosestVertexData_AmountOfVerticesWithinArea_AfterApplyingColors_Global = 0;
	int paintAtLocation_AmountOfVerticesWithinArea_Global = 0;

	TArray<FHitResult> isVertexWithinArea_HitResults_Global;
	FCollisionQueryParams isVertexWithinArea_ComplexShape_TraceParams_Global = FCollisionQueryParams();

	bool isVertexWithinArea_ShouldTrace = false;
	FVector isVertexWithinArea_TraceEndLocation = FVector(ForceInitToZero);

	FVector isVertexWithinArea_Vertex_LocalPos_Global = FVector(ForceInitToZero);

	FVector isVertexWithinArea_Square_BackPosWorld_Global = FVector(ForceInitToZero);
	FVector isVertexWithinArea_Square_BackPosLocal_Global = FVector(ForceInitToZero);

	FVector isVertexWithinArea_Square_ForwardPosWorld_Global = FVector(ForceInitToZero);
	FVector isVertexWithinArea_Square_ForwardPosLocal_Global = FVector(ForceInitToZero);

	FVector isVertexWithinArea_Square_LeftPosWorld_Global = FVector(ForceInitToZero);
	FVector isVertexWithinArea_Square_LeftPosLocal_Global = FVector(ForceInitToZero);

	FVector isVertexWithinArea_Square_RightPosWorld_Global = FVector(ForceInitToZero);
	FVector isVertexWithinArea_Square_RightPosLocal_Global = FVector(ForceInitToZero);

	FVector isVertexWithinArea_Square_DownPosWorld_Global = FVector(ForceInitToZero);
	FVector isVertexWithinArea_Square_DownPosLocal_Global = FVector(ForceInitToZero);

	FVector isVertexWithinArea_Square_UpPosWorld_Global = FVector(ForceInitToZero);
	FVector isVertexWithinArea_Square_UpPosLocal_Global = FVector(ForceInitToZero);

	// Color To Apply
	float getColorToApplyOnVertex_Distance_Global = 0;
	float getColorToApplyOnVertex_StrengthAfterFalloff_Global = 1;
	float getColorToApplyOnVertex_FallOffClamped_Global = 0;
	float getColorToApplyOnVertex_Falloff_Global = 0;
	FColor getColorToApplyOnVertex_ColorToApply_Global = FColor(ForceInitToZero);

	float getColorToApplyOnVertex_ColorRed_Global = 0;
	float getColorToApplyOnVertex_ColorGreen_Global = 0;
	float getColorToApplyOnVertex_ColorBlue_Global = 0;
	float getColorToApplyOnVertex_ColorAlpha_Global = 0;

	float tryingToApplyColor_Red_Global = 0;
	float tryingToApplyColor_Green_Global = 0;
	float tryingToApplyColor_Blue_Global = 0;
	float tryingToApplyColor_Alpha_Global = 0;

	float lerpToTargetValue_Global = 0;

	bool haveRunOverrideInterface_Global = false;
	bool shouldApplyColorOnAnyChannel_Global = false;
	bool paintCondition_HasToHaveConditionMetToApplyAnyColorsAtAll_Global = false;
	float paintCondition_ColorStrengthIfConditionIsNotMet_Global = 0;
	bool paintCondition_AtAnyBone_Global = false;

	float redVertexColorLimit_Global = 0;
	float greenVertexColorLimit_Global = 0;
	float blueVertexColorLimit_Global = 0;
	float alphaVertexColorLimit_Global = 0;

	// Amount of Colors of Each Channel
	FVertexDetectAmountOfPaintedColorsOfEachChannel debugLog_AmountOfPaintedColorsOfEachChannelAbove0BeforeApplyingColors_Global = FVertexDetectAmountOfPaintedColorsOfEachChannel();
	FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor_Global = FVertexDetectAmountOfPaintedColorsOfEachChannel();
	FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor_Global = FVertexDetectAmountOfPaintedColorsOfEachChannel();

	// Estimated Color at Hit Location
	int estimatedColorAtHitLocation_VertexToLerpToward_Paint_Global = -1;
	int estimatedColorAtHitLocation_VertexToLerpToward_Detect_Global = -1;
	TArray<FVector> estimatedColorAtHitLocation_ClosestVerticesToTheHitLocation_Paint_Global;
	TArray<FVector> estimatedColorAtHitLocation_ClosestVerticesToTheHitLocation_Detect_Global;
	FLinearColor estimatedColorAtHitLocation_BeforeApplyingColors_Detect_Global = FLinearColor();
	FLinearColor estimatedColorAtHitLocation_AfterApplyingColors_Detect_Global = FLinearColor();
	FLinearColor estimatedColorAtHitLocation_BeforeApplyingColors_Paint_Global = FLinearColor();
	FLinearColor estimatedColorAtHitLocation_AfterApplyingColors_Paint_Global = FLinearColor();
	FVector estimatedColorAtHitLocation_LocationInWorldSpace_Paint_Global = FVector(ForceInitToZero);
	FVector estimatedColorAtHitLocation_LocationInWorldSpace_Detect_Global = FVector(ForceInitToZero);
	FVector estimatedColorAtHitLocation_VertexToLerpToward_LocationInWorldSpace_Paint_Global = FVector(ForceInitToZero);
	FVector estimatedColorAtHitLocation_VertexToLerpToward_LocationInWorldSpace_Detect_Global = FVector(ForceInitToZero);

	// Average Color within Area
	float avarageColorWithinArea_Global_Detect_Before_Red = 0;
	float avarageColorWithinArea_Global_Detect_Before_Green = 0;
	float avarageColorWithinArea_Global_Detect_Before_Blue = 0;
	float avarageColorWithinArea_Global_Detect_Before_Alpha = 0;

	float getClosestVertexData_AvarageColorWithinArea_AfterApplyingColors_Red_Global = 0;
	float getClosestVertexData_AvarageColorWithinArea_AfterApplyingColors_Green_Global = 0;
	float getClosestVertexData_AvarageColorWithinArea_AfterApplyingColors_Blue_Global = 0;
	float getClosestVertexData_AvarageColorWithinArea_AfterApplyingColors_Alpha_Global = 0;

	float paintAtLocation_AvarageColorWithinArea_Global_Red = 0;
	float paintAtLocation_AvarageColorWithinArea_Global_Green = 0;
	float paintAtLocation_AvarageColorWithinArea_Global_Blue = 0;
	float paintAtLocation_AvarageColorWithinArea_Global_Alpha = 0;

	// Override Vertex Colors
	UObject* overrideVertexColors_ObjectToRunInterfaceOn_Global = nullptr;
	TEnumAsByte<EPhysicalSurface> overrideVertexColors_MostDominantPhysicsSurfaceAtVertexBeforeApplyingColors_Global = EPhysicalSurface::SurfaceType_Default;;
	float overrideVertexColors_MostDominantPhysicsSurfaceValueAtVertexBeforeApplyingColors_Global = 0;
	TArray<float> overrideVertexColors_DefaultVertexColors_Global;
	FColor overrideVertexColors_ColorToApply_Global = FColor(ForceInitToZero);
	bool overrideVertexColorsToApply_Global = false;
	bool overridenVertexColorsMadeChangeToColorsToApply_Global = false;

	// Compare Colors
	FVertexDetectCompareMeshColorsToColorArrayResultStruct compareMeshColorsToColorArrayResult_Global;

	// Skeletal Mesh
	bool successFullyGotColorsForEachBone_Global = false;
	TMap<FName, FVertexDetectBoneColorsStruct> nameAndColorOfEachBone_Global;
	TArray<FName> vertexColorAppliedToBones_Global;
	float vertexTotalBoneWeight_Global = 0;
	FVector getTypedSkinnedVertexPosition_SkinnedPos_Global = FVector(ForceInitToZero);
	int32 getTypedSkinnedVertexPosition_BufferVertIndex_Global = 0;
	int32 getTypedSkinnedVertexPosition_MaxBoneInfluences_Global = 0;
	int32 getTypedSkinnedVertexPosition_MeshBoneIndex_Global = 0;
	float getTypedSkinnedVertexPosition_Weight_Global = 0;
	TMap<UClothingAssetBase*, FVertexDetectChaosClothPhysicsSettings> clothPhysicsSettings_Global;

	// Instanced Mesh
	FTransform instancedMesh_LocalTransform_Global = FTransform();
	FMatrix instancedMesh_RotationMatrix_Global = FMatrix(ForceInitToZero);
	FVector instancedMesh_RotatedVertexPosition_Global = FVector(ForceInitToZero);

	// Dynamic Mesh Component
	TArray<FColor> dynamicMeshComponentVertexColors_Global;

	// Geometry Collection
	TArray<FLinearColor> geometryCollectionVertexColors_Global;
};
