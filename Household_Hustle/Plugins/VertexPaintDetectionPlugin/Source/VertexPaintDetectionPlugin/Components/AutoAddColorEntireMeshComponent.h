// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AutoAddColorComponent.h"
#include "AutoAddColorEntireMeshComponent.generated.h"


UCLASS(Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent), DisplayName = "Auto Add Color Paint Entire Mesh Component", ClassGroup = (Custom))
class VERTEXPAINTDETECTIONPLUGIN_API UAutoAddColorEntireMeshComponent : public UAutoAddColorComponent
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Auto Paint Component|Entire Mesh", meta = (ToolTip = "Adds a Mesh to be Auto painted with specific settings. If it's already been added then updated the settings with the new one. In AutoAddColorSettings you can set a delay between tasks, which is useful if you for instance is drying a character but it's going to fast, then you add maybe 0.1 or so to make it slower. "))
	void AddAutoPaintEntireMesh(UPrimitiveComponent* meshComponent, FVertexPaintOnEntireMeshStruct paintEntireMeshSettings, FAutoAddColorSettings autoAddColorSettings);

	virtual void BeginPlay() override;

	void StopAllAutoPainting() override;

	virtual void StopAutoPaintingMesh(UPrimitiveComponent* meshComponent) override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Auto Paint|Auto Paint Root Mesh at Begin Play", meta = (ToolTip = "The Paint Entire Mesh Settings to paint the root mesh with at begin play. "))
	FVertexPaintOnEntireMeshStruct autoPaintRootMeshAtBeginPlay_PaintEntireMeshSettings;


protected:

	void StartAutoPaintTask(UPrimitiveComponent* meshComponent) override;

	bool GetApplyVertexColorSettings(UPrimitiveComponent* meshComponent, FVertexDetectRGBAStruct& applyVertexColorSettings) override;

	void VerifyAllCachedMeshComponents() override;

	UPROPERTY()
	TMap<UPrimitiveComponent*, FVertexPaintOnEntireMeshStruct> autoPaintingEntireMeshesWithSettings;
};
