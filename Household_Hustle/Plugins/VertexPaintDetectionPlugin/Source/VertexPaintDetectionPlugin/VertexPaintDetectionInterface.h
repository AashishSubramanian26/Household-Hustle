// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Chaos/ChaosEngineInterface.h"

// Prerequisites
#include "AdditionalDataPrerequisites.h"
#include "TaskResultsPrerequisites.h"
#include "ChaosClothPhysicsPrerequisites.h"

// Paint Prerequisites
#include "SetColorsWithStringPrerequisites.h"
#include "SetMeshColorsPrerequisites.h"
#include "PaintSnippetsPrerequisites.h"
#include "PaintAtLocationPrerequisites.h"
#include "PaintEntireMeshPrerequisites.h"
#include "PaintWithinAreaPrerequisites.h"

//  Detect Prerequisites
#include "GetClosestVertexDataPrerequisites.h"
#include "GetColorsOnlyPrerequisites.h"
#include "GetColorsWithinAreaPrerequisites.h"

#include "VertexPaintDetectionInterface.generated.h"



// This class does not need to be modified.
UINTERFACE(Blueprintable, BlueprintType)
class UVertexPaintDetectionInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class VERTEXPAINTDETECTIONPLUGIN_API IVertexPaintDetectionInterface
{
	GENERATED_BODY()

		// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, Category = "Runtime Vertex Paint and Detection Plugin|Painting", meta = (ToolTip = "Runs on the Actor that Owns the Associated Paint Component, i.e. the one that instigated the paint job. NOTE That if the task is started using multithreading, then this will execute on another thread, so recommend avoiding things like debug symbols. \nIf you return shouldApplyUpdatedVertexColor false then we won't use the updatedVertexColorToApply from code, or the vertexColorsToApply we return here. However if it's true then it will update it with updatedVertexColorToApply from code, but if overrideVertexColorsToApply is True, then vertexColorsToOverrideWith will be used instead. "))
		void OverrideVertexColorToApply(UVertexPaintDetectionComponent* associatedPaintComponent, UPrimitiveComponent* meshApplyingColorsTo, int currentLOD, int currentVertexIndex, UMaterialInterface* materialVertexIsOn, bool isVertexOnCloth, const FName& boneVertexIsOn, const FVector& vertexPositionInWorldSpace, const FVector& vertexNormal, const FColor& currentVertexColor, EPhysicalSurface currentVertexMostDominantPhysicsSurface, float currentVertexMostDominantPhysicsSurfaceValue, const FColor& updatedVertexColorToApply, bool wantsToApplyUpdatedVertexColor, bool& applyUpdatedOrOverridenVertexColors, bool& overrideVertexColorsToApply, FColor& vertexColorsToOverrideWith);



	//---------- PAINT / DETECTION ----------//

	UFUNCTION(BlueprintNativeEvent, Category = "Runtime Vertex Paint and Detection Plugin|Detection", meta = (ToolTip = "Runs on the Actor that we ran GetClosestVertexDataOn, on if the actor in the callback settings is the default null, otherwise it will run for whatever the user has specified."))
		void GetClosestVertexDataOnActor(const FVertexDetectTaskResultInfo& taskResultInfo, const FVertexDetectInfoStruct& detectedMeshWithSettings, const FVertexDetectClosestVertexDataResultStruct& closestVertexColorResult, const FVertexDetectEstimatedColorAtHitLocationResultStruct& estimatedColorAtHitLocationResult, const FVertexDetectAvarageColorInAreaInfo& avarageColorInAreaInfo, const FVertexDetectAdditionalDataToPassThrough& additionalData);

	UFUNCTION(BlueprintNativeEvent, Category = "Runtime Vertex Paint and Detection Plugin|Detection", meta = (ToolTip = "Runs on the Actor that we ran GetAllColorsOnly on, if the actor in the callback settings is the default null, otherwise it will run for whatever the user has specified."))
		void GetAllVertexColorsOnlyOnActor(const FVertexDetectTaskResultInfo& taskResultInfo, const FVertexDetectGetColorsOnlyStruct& gotAllVertexColorsWithSettings, const FVertexDetectAdditionalDataToPassThrough& additionalData);

	UFUNCTION(BlueprintNativeEvent, Category = "Runtime Vertex Paint and Detection Plugin|Detection", meta = (ToolTip = "Runs on the Actor that we ran Get Colors Within Area on, if the actor in the callback settings is the default null, otherwise it will run for whatever the user has specified."))
		void GetColorsWithinArea(const FVertexDetectTaskResultInfo& taskResultInfo, const FVertexDetectGetColorsWithinAreaStruct& getColorsWithinAreaSettings, const FVertexPaintWithinAreaResults& withinAreaResults, const FVertexDetectAdditionalDataToPassThrough& additionalData);
		

	UFUNCTION(BlueprintNativeEvent, Category = "Runtime Vertex Paint and Detection Plugin|Painting", meta = (ToolTip = "Runs on the Actor that got Painted At Location on, if the actor in the callback settings is the default null, otherwise it will run for whatever the user has specified."))
		void PaintedOnActor_AtLocation(const FVertexDetectTaskResultInfo& taskResultInfo, const FVertexDetectPaintTaskResultInfo& paintTaskResultInfo, const FVertexPaintAtLocationStruct& paintedAtLocationSettings, const FVertexDetectClosestVertexDataResultStruct& closestVertexColorResult, const FVertexDetectEstimatedColorAtHitLocationResultStruct& estimatedColorAtHitLocationResult, const FVertexDetectAvarageColorInAreaInfo& avarageColorInAreaInfo, const FVertexDetectAdditionalDataToPassThrough& additionalData);

	UFUNCTION(BlueprintNativeEvent, Category = "Runtime Vertex Paint and Detection Plugin|Painting", meta = (ToolTip = "Runs on the Actor that got Painted Within Area on, if the actor in the callback settings is the default null, otherwise it will run for whatever the user has specified."))
		void PaintedOnActor_WithinArea(const FVertexDetectTaskResultInfo& taskResultInfo, const FVertexDetectPaintTaskResultInfo& paintTaskResultInfo, const FVertexPainthWithinAreaStruct& paintedWithinAreaSettings, const FVertexPaintWithinAreaResults& withinAreaResults, const FVertexDetectAdditionalDataToPassThrough& additionalData);

	UFUNCTION(BlueprintNativeEvent, Category = "Runtime Vertex Paint and Detection Plugin|Painting", meta = (ToolTip = "Runs on the Actor that got Painted Entire Mesh on, if the actor in the callback settings is the default null, otherwise it will run for whatever the user has specified."))
		void PaintedOnActor_EntireMesh(const FVertexDetectTaskResultInfo& taskResultInfo, const FVertexDetectPaintTaskResultInfo& paintTaskResultInfo, const FVertexPaintOnEntireMeshStruct& paintedEntireMeshSettings, const FVertexDetectAdditionalDataToPassThrough& additionalData);

	UFUNCTION(BlueprintNativeEvent, Category = "Runtime Vertex Paint and Detection Plugin|Painting", meta = (ToolTip = "Runs on the Actor that got Painted Color Snippet on, if the actor in the callback settings is the default null, otherwise it will run for whatever the user has specified."))
		void PaintedOnActor_PaintColorSnippet(const FVertexDetectTaskResultInfo& taskResultInfo, const FVertexDetectPaintTaskResultInfo& paintTaskResultInfo, const FVertexPaintColorSnippetStruct& paintedColorSnippetSettings, const FVertexDetectAdditionalDataToPassThrough& additionalData);

	UFUNCTION(BlueprintNativeEvent, Category = "Runtime Vertex Paint and Detection Plugin|Painting", meta = (ToolTip = "Runs on the Actor that got run with Set Mesh Component Vertex Colors, if the actor in the callback settings is the default null, otherwise it will run for whatever the user has specified."))
		void PaintedOnActor_SetMeshComponentVertexColors(const FVertexDetectTaskResultInfo& taskResultInfo, const FVertexDetectPaintTaskResultInfo& paintTaskResultInfo, const FVertexPaintSetMeshComponentVertexColors& setMeshComponentVertexColorSettings, const FVertexDetectAdditionalDataToPassThrough& additionalData);

	UFUNCTION(BlueprintNativeEvent, Category = "Runtime Vertex Paint and Detection Plugin|Painting", meta = (ToolTip = "Runs on the Actor that got run with Set Mesh Component Vertex Colors Using Serialized String, if the actor in the callback settings is the default null, otherwise it will run for whatever the user has specified."))
		void PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString(const FVertexDetectTaskResultInfo& taskResultInfo, const FVertexDetectPaintTaskResultInfo& paintTaskResultInfo, const FVertexPaintSetMeshComponentVertexColorsUsingSerializedString& setMeshComponentVertexColorUsingSerializedStringSettings, const FVertexDetectAdditionalDataToPassThrough& additionalData);

	UFUNCTION(BlueprintNativeEvent, Category = "Runtime Vertex Paint and Detection Plugin|Painting", meta = (ToolTip = "Runs on the Actor that got Colors Applied on it, if the actor in the callback settings is the default null, otherwise it will run for whatever the user has specified."))
		void ColorsAppliedOnActor(const FVertexDetectTaskResultInfo& taskResultInfo, const FVertexDetectPaintTaskResultInfo& paintTaskResultInfo, const FVertexPaintStruct& paintedOnActorSettings, const FVertexDetectAdditionalDataToPassThrough& additionalData);



		//---------- CLOTH ----------//

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Runtime Vertex Paint and Detection Plugin|Cloth", meta = (ToolTip = "Returns Cloths and whatever Physics settings they should have depending on RGBA Vertex Colors. For instance if Blue is painted 1, what the physics settings should be for the cloth then. "))
		TMap<UClothingAssetBase*, FVertexDetectClothSettingsStruct> GetSkeletalMeshClothPhysicsSettings(USkeletalMeshComponent* skeletalMeshComponentTryingToGetClothSettingsFor);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Runtime Vertex Paint and Detection Plugin|Cloth", meta = (ToolTip = "Runs on the Actor that Begin Overlapped Cloth. "))
		void ClothBeginOverlappingMesh(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 item);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Runtime Vertex Paint and Detection Plugin|Cloth", meta = (ToolTip = "Runs on the Actor that End Overlapped Cloth."))
		void ClothEndOverlappingMesh(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 item);
};
