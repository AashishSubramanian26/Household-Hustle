// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Chaos/ChaosEngineInterface.h"

// Prerequisites
#include "AdditionalDataPrerequisites.h"
#include "TaskResultsPrerequisites.h"
#include "ChaosClothPhysicsPrerequisites.h"
#include "CorePrerequisites.h"

// Paint Job Prerequisites
#include "SetColorsWithStringPrerequisites.h"
#include "SetMeshColorsPrerequisites.h"
#include "PaintSnippetsPrerequisites.h"
#include "PaintAtLocationPrerequisites.h"
#include "PaintEntireMeshPrerequisites.h"
#include "PaintWithinAreaPrerequisites.h"

// Detect Job Prerequisites
#include "GetClosestVertexDataPrerequisites.h"
#include "GetColorsOnlyPrerequisites.h"
#include "GetColorsWithinAreaPrerequisites.h"

#include "CalculateColorsPrerequisites.generated.h" 


class UVertexPaintMaterialDataAsset;
class UClothingAssetBase;
class UMaterialInterface;
class FColorVertexBuffer;
class USplineMeshComponent;
class UInstancedStaticMeshComponent;
class UDynamicMeshComponent;
class UGeometryCollectionComponent;
class UGeometryCollection;
class FGeometryCollection;
class USkeletalMesh;


//-------------------------------------------------------

// Calculate Colors Info

USTRUCT()
struct FCalculateColorsInfo {

	GENERATED_BODY()


	//---------- RESULTS ----------//

	// Fundemental
	FVertexDetectTaskResultInfo taskResult;
	FVertexDetectPaintTaskResultInfo paintTaskResult;


	// Materials
	UPROPERTY()
	UMaterialInterface* materialAtClosestPaintVertex = nullptr;
	UPROPERTY()
	UMaterialInterface* materialAtClosestDetectVertex = nullptr;
	TArray<FColorVertexBuffer*> newColorVertexBufferPerLOD;

	// Closest Vertex/Section
	int closestVertexFound_Paint = -1;
	int closestSectionFound_Paint = -1;
	int closestVertexFound_Detection = -1;
	int closestSectionFound_Detect = -1;

	// Closest Vertex Color/Position/Normal
	FColor closestVertexColor_BeforeApplyingColors_Detect = FColor(ForceInitToZero);
	FColor closestVertexColor_AfterApplyingColors_Detect = FColor(ForceInitToZero);
	FColor closestVertexColor_AfterApplyingColors_Paint = FColor(ForceInitToZero);
	FVector closestVertexPositionToHitLocationAtMinLOD_World_Paint = FVector(ForceInitToZero);
	FVector closestVertexNormalToHitLocationAtMinLOD_World_Paint = FVector(ForceInitToZero);
	FVector closestVertexPositionToHitLocationAtMinLOD_World_Detect = FVector(ForceInitToZero);
	FVector closestVertexNormalToHitLocationAtMinLOD_World_Detect = FVector(ForceInitToZero);

	// Amount of Colors of Each Channel
	FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor;
	FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannelAtMinAmount_AfterApplyingColor;
	FVertexDetectAmountOfPaintedColorsOfEachChannel debugLog_AmountOfPaintedColorsOfEachChannelAboveZeroBeforeApplyingColor; // Only used for debugging to print results if you're trying to apply to an already full channel etc. 

	// Estimated Color at Hit Location
	FLinearColor estimatedColorAtHitLocation_BeforeApplyingColors_Detect = FLinearColor();
	FLinearColor estimatedColorAtHitLocation_AfterApplyingColors_Detect = FLinearColor();
	FLinearColor estimatedColorAtHitLocation_AfterApplyingColors_Paint = FLinearColor();
	FVector estimatedColorAtHitLocation_LocationInWorldSpace_Paint = FVector(ForceInitToZero);
	FVector estimatedColorAtHitLocation_LocationInWorldSpace_Detect = FVector(ForceInitToZero);
	FVector estimatedColorAtHitLocation_VertexToLerpToward_LocationInWorldSpace_Paint = FVector(ForceInitToZero);
	FVector estimatedColorAtHitLocation_VertexToLerpToward_LocationInWorldSpace_Detect = FVector(ForceInitToZero);
	int estimatedColorAtHitLocation_VertexToLerpToward_Paint = -1;
	int estimatedColorAtHitLocation_VertexToLerpToward_Detect = -1;
	TArray<FVector> estimatedColorAtHitLocation_ClosestVertexWorldLocationsToTheHitLocation_Paint;
	TArray<FVector> estimatedColorAtHitLocation_ClosestVertexWorldLocationsToTheHitLocation_Detect;

	// Average Color Within Area when Paint at Location / Get Closest Vertex Data
	FColor avarageColorWithinArea_Detect_BeforeApplyingColor = FColor(ForceInitToZero);
	FColor avarageColorWithinArea_Detect_AfterApplyingColor = FColor(ForceInitToZero);
	FColor avarageColorWithinArea_Paint = FColor(ForceInitToZero);

	// Paint / Detect Within Area
	bool paintWithinArea_VertexWasWithinArea = false;
	FVertexPaintWithinAreaResults withinAreaResults_BeforeApplyingColors;
	FVertexPaintWithinAreaResults withinAreaResults;
	FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannelAtMinAmount_WithinArea;

	// Misc
	TArray<FColor> dynamicMeshComponentVertexColors; // Doesn't use color buffers per LOD so fills a simple color array
	TArray<FLinearColor> geometryCollectionComponentVertexColors; // Doesn't use color buffers per LOD, but Geometry collection TManagedArray<FLinearColor> uses FLinearColor, so to avoid having to loop through all the vertices on the game thread when finished for geo collection comps, they have their own array that gets filled and used. 
	bool overridenVertexColorsMadeChangeToColorsToApply = false;


	//---------- SETTINGS ----------//

	// General
	int32 taskID = -1;
	float taskStartedTimeStamp = 0;
	int lodsToLoopThrough = 1;
	bool propogateLOD0ToAllLODs = false;
	FVertexDetectMeshDataStruct initialMeshVertexData;
	EVertexPaintDetectionType paintDetectionType;
	FVertexDetectFundementalStruct fundementalStruct;

	// Skeletal Mesh
	TArray<FName> skeletalMeshBonesNames;

#if ENGINE_MAJOR_VERSION == 4
	TArray<FMatrix> skeletalMeshRefToLocals;
#elif ENGINE_MAJOR_VERSION == 5
	TArray<FMatrix44f> skeletalMeshRefToLocals;
#endif

	// Detections
	FVertexDetectStruct vertexDetectSettings;
	FVertexDetectInfoStruct getClosestVertexDataSettings;
	FVertexDetectGetColorsOnlyStruct getAllVertexColorsSettings;
	FVertexDetectGetColorsWithinAreaStruct getColorsWithinAreaSettings;

	// Paints
	FVertexPaintStruct vertexPaintSettings;
	FVertexPaintColorSettingStruct paintOnMeshColorSettings;
	FVertexPaintAtLocationStruct paintOnMeshAtLocationSettings;
	FVertexPaintDetectWithinAreaSettings withinAreaSettings;
	FVertexPainthWithinAreaStruct paintOnMeshWithinAreaSettings;
	FVertexPaintOnEntireMeshStruct paintOnEntireMeshSettings;
	FVertexPaintColorSnippetStruct paintOnColorSnippetSettings;
	FVertexPaintPaintColorsDirectlyStruct paintColorsDirectlySettings;
	FVertexPaintSetMeshComponentVertexColors setMeshComponentVertexColorsSettings;
	FVertexPaintSetMeshComponentVertexColorsUsingSerializedString setMeshComponentVertexColorsUsingSerializedStringSettings;

	// Other
	FVertexDetectEstimatedColorAtHitLocationStruct estimatedColorAtHitLocationSettings;
	FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough;

	// Ptrs

	UPROPERTY()
	TMap<UClothingAssetBase*, FVertexDetectChaosClothPhysicsSettings> clothPhysicsSettings;

	UPROPERTY()
	AActor* vertexPaintActor = nullptr;

	UPROPERTY()
	UPrimitiveComponent* vertexPaintComponent = nullptr;

	UPROPERTY()
	UStaticMeshComponent* vertexPaintStaticMeshComponent = nullptr;

	UPROPERTY()
	UInstancedStaticMeshComponent* vertexPaintInstancedStaticMeshComponent = nullptr;

	UPROPERTY()
	USplineMeshComponent* vertexPaintSplineMeshComponent = nullptr;

	UPROPERTY()
	USkeletalMeshComponent* vertexPaintSkelComponent = nullptr;

	UPROPERTY()
	USkeletalMesh* vertexPaintSkelComponentsSkeletalMesh = nullptr;

	UPROPERTY()
	USkinnedMeshComponent* vertexPaintSkelComponentsMasterSkinnedComp = nullptr;

	UPROPERTY()
	const UObject* vertexPaintSourceMesh = nullptr;

	UPROPERTY()
	UVertexPaintMaterialDataAsset* vertexPaintMaterialDataAsset = nullptr;

	UPROPERTY()
	UDynamicMeshComponent* vertexPaintDynamicMeshComponent = nullptr;

	UPROPERTY()
	UGeometryCollectionComponent* vertexPaintGeometryCollectionComponent = nullptr;

	UPROPERTY()
	UGeometryCollection* vertexPaintGeometryCollection = nullptr;

	// UPROPERTY() // Not a UStruct
	FGeometryCollection* vertexPaintGeometryCollectionData = nullptr;

};
