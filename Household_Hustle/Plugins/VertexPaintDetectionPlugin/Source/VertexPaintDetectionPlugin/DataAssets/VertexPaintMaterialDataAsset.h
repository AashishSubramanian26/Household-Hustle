// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MaterialDataAssetPrerequisites.h"
#include "VertexPaintMaterialDataAsset.generated.h"


/**
 *
 */
UCLASS(Blueprintable, BlueprintType)
class VERTEXPAINTDETECTIONPLUGIN_API UVertexPaintMaterialDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:


	//---------- MATERIALS ----------//

	bool IsMaterialAddedToPaintOnMaterialDataAsset(TSoftObjectPtr<UMaterialInterface> material);

	TMap<TSoftObjectPtr<UMaterialInterface>, FVertexPaintMaterialDataAssetStruct> GetVertexPaintMaterialInterface() { return vertexPaintMaterialInterfaces; }

	UMaterialInterface* GetRegisteredMaterialInstanceOrParentMaterial(UMaterialInterface* material);



	//---------- PARENT & CHILD PHYSICS SURFACES ----------//

	TMap<TEnumAsByte<EPhysicalSurface>, FVertexPaintParentPhysicsSurfaceStruct> GetPhysicsSurfaceFamilies() { return physicsSurfaceFamilies; }

	TArray<TEnumAsByte<EPhysicalSurface>> GetParentsOfPhysicsSurface(TEnumAsByte<EPhysicalSurface> physicalSurface);


#if WITH_EDITOR

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
	void AddToVertexPaintMaterialInterface(TSoftObjectPtr<UMaterialInterface> material, FVertexPaintMaterialDataAssetStruct materialDataAssetStruct) { vertexPaintMaterialInterfaces.Add(material, materialDataAssetStruct); }

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
	void RemoveFromVertexPaintMaterialInterface(TSoftObjectPtr<UMaterialInterface> material) { vertexPaintMaterialInterfaces.Remove(material); } // NOTE Doesn't have a .Contains check here because then we can't remove it if the material was Forced deleted and the TMap had null

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		void AddPhysicsSurfaceFamily(TEnumAsByte<EPhysicalSurface> parentPhysicsSurface, FVertexPaintParentPhysicsSurfaceStruct parentPhysicsSurfaceStruct) { physicsSurfaceFamilies.Add(parentPhysicsSurface, parentPhysicsSurfaceStruct); }

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		void RemovePhysicsSurfaceFamily(TEnumAsByte<EPhysicalSurface> parentPhysicsSurface);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		void AddChildToPhysicsSurfaceFamily(TEnumAsByte<EPhysicalSurface> parentPhysicsSurface, TEnumAsByte<EPhysicalSurface> childPhysicsSurface);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		void RemoveChildFromPhysicsSurfaceFamily(TEnumAsByte<EPhysicalSurface> parentPhysicsSurface, TEnumAsByte<EPhysicalSurface> childPhysicsSurface);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin")
		void ClearAllPhysicsSurfaceFamilies() { physicsSurfaceFamilies.Empty(); }

#endif
	

private:

	// TMap of All Materials that uses Vertex Colors
	UPROPERTY(VisibleAnywhere, Category = "Runtime Vertex Paint and Detection Plugin")
		TMap<TSoftObjectPtr<UMaterialInterface>, FVertexPaintMaterialDataAssetStruct> vertexPaintMaterialInterfaces;


	UPROPERTY(VisibleAnywhere, Category = "Runtime Vertex Paint and Detection Plugin")
		TMap<TEnumAsByte<EPhysicalSurface>, FVertexPaintParentPhysicsSurfaceStruct> physicsSurfaceFamilies;
};
