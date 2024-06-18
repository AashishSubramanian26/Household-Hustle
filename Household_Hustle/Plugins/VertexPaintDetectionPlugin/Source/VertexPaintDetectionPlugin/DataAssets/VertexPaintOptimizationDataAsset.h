// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VertexPaintOptimizationDataAsset.generated.h"


class UStaticMesh;
class USkeletalMesh;

//-------------------------------------------------------

// Paint On LOD Settings Struct

USTRUCT(BlueprintType)
struct FPaintOnLODSettingsStruct {

	GENERATED_BODY()

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin")
		int maxAmountOfLODsToPaint = 0;
};


//-------------------------------------------------------

UCLASS(Blueprintable, BlueprintType)
class VERTEXPAINTDETECTIONPLUGIN_API UVertexPaintOptimizationDataAsset : public UDataAsset {

	GENERATED_BODY()


public:

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Optimization|Paint on LODs", meta = (ToolTip = "How many LODs to Paint on Static Meshes that are Added here, given that it has that many LODs. Also if the amount set is the max amount that should be stored. Meshes that aren't added here will be painted on all their LODs. "))
	TMap<UStaticMesh*, FPaintOnLODSettingsStruct> GetStaticMeshNumOfLODsToPaint() { return staticMeshNumOfLODsToPaint; }

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Optimization|Paint on LODs", meta = (ToolTip = "How many LODs to Paint on Static Meshes that are Added here, given that it has that many LODs. Also if the amount set is the max amount that should be stored. Meshes that aren't added here will be painted on all their LODs. "))
	TMap<USkeletalMesh*, FPaintOnLODSettingsStruct> GetSkeletalMeshNumOfLODsToPaint() { return skeletalMeshNumOfLODsToPaint; }


#if WITH_EDITOR


	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Optimization|Paint on LODs")
	void AddToStaticMeshNumOfLODsToPaint(UStaticMesh* staticMesh, FPaintOnLODSettingsStruct paintOnLODSettings) { staticMeshNumOfLODsToPaint.Add(staticMesh, paintOnLODSettings); }

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Optimization|Paint on LODs")
	void AddToSkeletalMeshNumOfLODsToPaint(USkeletalMesh* skeletalMesh, FPaintOnLODSettingsStruct paintOnLODSettings) { skeletalMeshNumOfLODsToPaint.Add(skeletalMesh, paintOnLODSettings); }

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Optimization|Paint on LODs")
	void RemoveFromStaticMeshNumOfLODsToPaint(UStaticMesh* staticMesh) { if (staticMeshNumOfLODsToPaint.Contains(staticMesh)) staticMeshNumOfLODsToPaint.Remove(staticMesh); }

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Optimization|Paint on LODs")
	void RemoveFromSkeletalMeshNumOfLODsToPaint(USkeletalMesh* skeletalMesh) { if (skeletalMeshNumOfLODsToPaint.Contains(skeletalMesh)) skeletalMeshNumOfLODsToPaint.Remove(skeletalMesh); }

#endif


private:

	UPROPERTY(VisibleAnywhere, Category = "Runtime Vertex Paint and Detection Plugin|Optimization|Paint on LODs", meta = (ToolTip = "How many LODs to Paint on Static Meshes that are Added here, given that it has that many LODs. Also if the amount set is the max amount that should be stored. Meshes that aren't added here will be painted on all their LODs. "))
		TMap<UStaticMesh*, FPaintOnLODSettingsStruct> staticMeshNumOfLODsToPaint;

	UPROPERTY(VisibleAnywhere, Category = "Runtime Vertex Paint and Detection Plugin|Optimization|Paint on LODs", meta = (ToolTip = "How many LODs to Paint on Static Meshes that are Added here, given that it has that many LODs. Also if the amount set is the max amount that should be stored. Meshes that aren't added here will be painted on all their LODs. "))
		TMap<USkeletalMesh*, FPaintOnLODSettingsStruct> skeletalMeshNumOfLODsToPaint;
};
