// Copyright 2023 Alexander Floden, Alias Alex River. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AutoAddColorComponent.h"
#include "AutoAddColorPaintAtLocComponent.generated.h"


UCLASS(Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent), DisplayName = "Auto Add Color Paint At Location Component", ClassGroup = (Custom))
class VERTEXPAINTDETECTIONPLUGIN_API UAutoAddColorPaintAtLocComponent : public UAutoAddColorComponent
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Auto Paint Component|Paint At Location", meta = (ToolTip = "Adds a Mesh to be Auto painted with specific settings. If it's already been added then updated the settings with the new one. In AutoAddColorSettings you can set a delay between tasks, which is useful if you for instance is drying a character but it's going to fast, then you add maybe 0.1 or so to make it slower. "))
	void AddAutoPaintAtLocation(UPrimitiveComponent* meshComponent, FVertexPaintAtLocationStruct paintAtLocationSettings, FAutoAddColorSettings autoAddColorSettings);


	UAutoAddColorPaintAtLocComponent();

	void StopAllAutoPainting() override;

	virtual void StopAutoPaintingMesh(UPrimitiveComponent* meshComponent) override;


protected:

	void StartAutoPaintTask(UPrimitiveComponent* meshComponent) override;

	bool GetApplyVertexColorSettings(UPrimitiveComponent* meshComponent, FVertexDetectRGBAStruct& applyVertexColorSettings) override;

	void VerifyAllCachedMeshComponents() override;


private:

	UPROPERTY()
	TMap<UPrimitiveComponent*, FVertexPaintAtLocationStruct> autoPaintingAtLocationWithSettings;
};
