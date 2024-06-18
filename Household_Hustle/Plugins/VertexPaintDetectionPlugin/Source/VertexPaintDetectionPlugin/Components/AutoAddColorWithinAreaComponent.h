// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AutoAddColorComponent.h"
#include "AutoAddColorWithinAreaComponent.generated.h"



UCLASS(Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent), DisplayName = "Auto Add Color Paint Within Area Component", ClassGroup = (Custom))
class VERTEXPAINTDETECTIONPLUGIN_API UAutoAddColorWithinAreaComponent : public UAutoAddColorComponent
{
	GENERATED_BODY()

public:

	UAutoAddColorWithinAreaComponent();

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Auto Paint Component|Within Area", meta = (ToolTip = "Adds a Mesh to be Auto painted with specific settings. If it's already been added then updated the settings with the new one. In AutoAddColorSettings you can set a delay between tasks, which is useful if you for instance is drying a character but it's going to fast, then you add maybe 0.1 or so to make it slower. "))
	void AddAutoPaintWithinArea(UPrimitiveComponent* meshComponent, FVertexPainthWithinAreaStruct paintWithinAreaSettings, FAutoAddColorSettings autoAddColorSettings);


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Auto Paint|Within Area", meta = (ToolTip = "Optimization so you have the option to only start another auto paint within area if any change has occured on the Mesh Location Z. For instance if a character actively walking down into a lake and not just standing in it. The draw back is that this component will have to tick to check if the change has happened. "))
	bool onlyPaintOnMovingMeshZ = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Auto Paint|Within Area", meta = (ToolTip = "Optimization so you have the option to only start another auto paint within area if any change has occured on the Mesh Location XY. For instance if a character is swimming in a lake but is just floating at the surface and not swimming in any direction. The draw back is that this component will have to tick to check if the change has happened."))
	bool onlyPaintOnMovingMeshXY = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Auto Paint|Within Area", meta = (ToolTip = "Optimization so you have the option to only start another auto paint within area if any change has occured on the Mesh Rotation. The draw back is that this component will have to tick to check if the change has happened."))
	bool onlyPaintOnRotatedMesh = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Auto Paint|Within Area", meta = (ToolTip = "Optimization so you have the option to only start another auto paint within area if any change has occured on the Mesh Scale. The draw back is that this component will have to tick to check if the change has happened."))
	bool onlyPaintOnReScaledMesh = true;


	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void StopAllAutoPainting() override;

	virtual void StopAutoPaintingMesh(UPrimitiveComponent* meshComponent) override;


protected:

	void StartAutoPaintTask(UPrimitiveComponent* meshComponent) override;

	bool ShouldStartNewTaskOnComponent(const FVertexDetectTaskResultInfo& taskResultInfo, const bool& anyVertexColorsGotChanged, bool& isFullyPainted, bool& isCompletelyEmpty) override;

	bool GetApplyVertexColorSettings(UPrimitiveComponent* meshComponent, FVertexDetectRGBAStruct& applyVertexColorSettings) override;

	void VerifyAllCachedMeshComponents() override;


private:

	bool HasMeshMovedSinceLastPaintJob(UPrimitiveComponent* meshComponent, FVector lastMeshLocation);

	bool HasMeshRotatedSinceLastPaintJob(UPrimitiveComponent* meshComponent, FRotator lastMeshRotation);

	bool HasMeshReScaledSinceLastPaintJob(UPrimitiveComponent* meshComponent, FVector lastMeshScale);


protected:

	UPROPERTY()
	TMap<UPrimitiveComponent*, FVertexPainthWithinAreaStruct> autoPaintingWithinAreaWithSettings;

	UPROPERTY()
	TMap<UPrimitiveComponent*, FTransform> meshComponentsToCheckIfMoved;
};
