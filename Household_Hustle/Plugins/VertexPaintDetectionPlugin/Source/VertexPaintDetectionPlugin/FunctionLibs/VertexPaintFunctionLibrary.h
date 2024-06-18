// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Runtime/Launch/Resources/Version.h"
#include "GameplayTagContainer.h"

// Prerequisites
#include "TaskResultsPrerequisites.h"
#include "ChaosClothPhysicsPrerequisites.h"
#include "MaterialDataAssetPrerequisites.h"
#include "ColorSnippetPrerequisites.h"

#if ENGINE_MAJOR_VERSION == 5

#include "GeometryScript/GeometryScriptTypes.h"
#include "GeometryScript/MeshVertexColorFunctions.h"

#endif

#include "VertexPaintFunctionLibrary.generated.h"


class UChaosWheeledVehicleMovementComponent;
class UVertexPaintDetectionTaskQueue;
class UVertexPaintDetectionGISubSystem;
class UDynamicMeshComponent;
class UGeometryCollectionComponent;


UCLASS()
class VERTEXPAINTDETECTIONPLUGIN_API UVertexPaintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


public:

	//---------- MATERIAL DATA ASSET WRAPPERS ----------//

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Material", meta = (WorldContext = "WorldContextObject", DisplayName = "Get Vertex Paint Material Interface", ToolTip = "Gets All Physics Surfaces that are Registered to the Material, or it's Parent Material if it's an instance that isn't registered but the Parent is. "))
	static TMap<TSoftObjectPtr<UMaterialInterface>, FVertexPaintMaterialDataAssetStruct> GetVertexPaintMaterialInterface_Wrapper(const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Material", meta = (WorldContext = "WorldContextObject", DisplayName = "Is Material Added To Paint On Material Data Asset", ToolTip = "If the Material is added in the paint on material TMap. Soft UMaterialInterface Ptr so it can be used with UMaterialInterface directly gotten from GetSoftPointerObjectsOfClass without resolving and casting, i.e. bringing them into memory. "))
	static bool IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper(const UObject* WorldContextObject, TSoftObjectPtr<UMaterialInterface> material);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Material", meta = (WorldContext = "WorldContextObject", DisplayName = "Get Parents Of Physics Surface", ToolTip = "Checks if physicalSurface is either a Parent itself, or a Child of a Family of Physics Surfaces. physicalSurface to check can't be Default. "))
	static TArray<TEnumAsByte<EPhysicalSurface>> GetParentsOfPhysicsSurface_Wrapper(const UObject* WorldContextObject, TEnumAsByte<EPhysicalSurface> physicalSurface);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Material", meta = (WorldContext = "WorldContextObject", DisplayName = "Get Physics Surface Families", ToolTip = "Gets the Physics Surfaces Family Tree, the Parents and which children that 'inherit' from them. "))
	static TMap<TEnumAsByte<EPhysicalSurface>, FVertexPaintParentPhysicsSurfaceStruct> GetPhysicsSurfaceFamilies_Wrapper(const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (WorldContext = "WorldContextObject", ToolTip = "Checks if Physics Surface we passes in, has been registered under a physics surface family, or if it is the parent of the family itself. "))
	static bool DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily(const UObject* WorldContextObject, TEnumAsByte<EPhysicalSurface> physicsSurface, TEnumAsByte<EPhysicalSurface> parentOfPhysicsSurfaceFamily);


	//---------- UTILITIES ----------//

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (ToolTip = "This is useful if you're running Paint at Locations with very quick Motions, where the distance between the locations can be greater than the Area of Effect, for example if Painting a Canvas, then you can Fill in the Area between those locations using Paint Within Area and a Box Collision. \nThis Preppes the Box Collision by Moving it in the right location and Adjust the Extent of it to match the Area of Effect/Thickness and the distance between the locations. "))
	static void AdjustBoxCollisionToFillAreaBetweenTwoLocations(UBoxComponent* boxCollision, FVector fromLocation, FVector toLocation, float boxThickness);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Color Snippets", meta = (Latent, LatentInfo = "LatentInfo", WorldContext = "WorldContextObject", ToolTip = "Getter if you just want to get the Vertex Colors of a Color Snippet. "))
	static void GetColorSnippetVertexColorsAsync(UObject* WorldContextObject, FGameplayTag colorSnippetTag, FLatentActionInfo LatentInfo, TSoftObjectPtr<UObject>& objectSnippetIsAssociatedWith, TArray<FColor>& colorSnippetVertexColors, bool& success);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (Latent, LatentInfo = "LatentInfo", WorldContext = "WorldContextObject", ToolTip = "Recommend Async Version of GetAmountOfPaintedColorsForEachChannelAsync(), which won't affect the FPS if there's alot of vertex colors to Loop Through! Calling it again before it finishes won't do anything. \nGets the Amount of vertices with colors above the min amount, gets them in Percent from 0-100, as well as the average color value of the ones above the minimum. Useful if you want to check that you've painted the majority of something. \nNOTE You can get this by running a Paint or Detect Job as well, but in some cases you may want to just run this, for instance if you've gotten colors of each bone and you want to check the % on just one bone. \nNOTE This does NOT return the amount for each physics surface, since that requires us to loop through the mesh sections etc.. If you want that, then you can simply run GetAllColorsOnly instead where you will get that in it's callback. "))
	static void GetAmountOfPaintedColorsForEachChannelAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const TArray<FColor>& vertexColors, FVertexDetectAmountOfPaintedColorsOfEachChannel& amountOfColorsOfEachChannel, float minColorAmountToBeConsidered = 0.01f);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (DisplayName = "Get Amount of Painted Colors for Each Channel", ToolTip = "Gets the Amount of vertices with colors above the min amount, gets them in Percent from 0-100, as well as the average color value of the ones above the minimum. Useful if you want to check that you've painted the majority of something. \nNOTE You can get this by running a Paint or Detect Job as well, which is more performant as well since they can run on async thread! "))
	static FVertexDetectAmountOfPaintedColorsOfEachChannel GetAmountOfPaintedColorsForEachChannel(const TArray<FColor>& vertexColors, float minColorAmountToBeConsidered = 0.01f);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (ToolTip = "Just running SetMeshConstantVertexColors on Dynamic Mesh won't actually Enable Vertex Colors. This will run the SetMeshConstantVertexColors, but Enable the Vertex Colors as well with what you put in, so if you try to detect or paint afterwards, things will work as intended since we can get the correct result from FDynamicMesh3 Vertex Info. "))
	static UDynamicMesh* SetMeshConstantVertexColorsAndEnablesThem(UDynamicMesh* TargetMesh, FLinearColor Color, FGeometryScriptColorFlags Flags, bool bClearExisting, UGeometryScriptDebug* Debug);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (WorldContext = "WorldContextObject", ToolTip = "Gets All Physics Surfaces that are Registered to the Material, or it's Parent Material if it's an instance that isn't registered but the Parent is. "))
	static TArray<TEnumAsByte<EPhysicalSurface>> GetPhysicsSurfacesRegisteredToMaterial(const UObject* WorldContextObject, UMaterialInterface* material);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (ToolTip = "Checks if the world is valid, that it is a game world and is not being teared down. "))
	static bool IsWorldValid(UWorld* world);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Paint", meta = (WorldContext = "WorldContextObject", AutoCreateRefTerm = "actorsToIgnore, objectTypesToTraceFor", BlueprintInternalUseOnly = "true", ToolTip = "This function Multi Capsule Traces for Meshes Within the Radius, and make sure we get only get the Closest Hit of each Mesh. So the Hit Array that it returns is essentially ready to be used with Paint at Location on the Meshes using Hit Location. Use the hitResults .hitLocation to get location of the Trace, or .impactPoint to get the hit location on the mesh.  \nIf objectTypesToTraceFor is > 0 then we will trace with that, otherwise use the traceChannel. \nThis is very useful since we can paint on Multiple Meshes, but without any visible Seams between for instance Floors! \n\nNOTE If UE5 and TraceComplex is True then we can get the faceIndex and thus the Material if it's a Static Mesh Component. However, with Trace Complex you may need to set Static Meshes Double Geometry to True if it's something simple like a Floor, otherwise it can fail the mesh is not rotated just right. "))
	static void MultiCapsuleTraceForClosestUniqueMeshes_Wrapper(const UObject* WorldContextObject, FVector location, float radius, ETraceTypeQuery traceChannel, const TArray<TEnumAsByte<EObjectTypeQuery>>& objectTypesToTraceFor, const TArray<AActor*>& actorsToIgnore, EDrawDebugTrace::Type drawDebugType, TArray<FHitResult>& closestHitsWithUniqueMeshes, float debugDrawTime = 2.0f, bool ignoreSelf = true, bool traceComplex = false);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Utilities|Color Snippets", meta = (WorldContext = "optionalWorldContextObject", ToolTip = "If async thread then needs a valid world context object so we can get the cached one from game instance subsystems, otherwise if in game thread it can be null since we can also load it from the settings"))
	static UVertexPaintColorSnippetRefs* GetColorSnippetReferenceDataAsset(const UObject* optionalWorldContextObject);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (WorldContext = "optionalWorldContextObject", ToolTip = "If async thread then needs a valid world context object so we can get the cached one from game instance subsystems, otherwise if in game thread it can be null since we can also load it from the settings"))
	static UVertexPaintOptimizationDataAsset* GetOptimizationDataAsset(const UObject* optionalWorldContextObject);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (WorldContext = "optionalWorldContextObject", ToolTip = "If async thread then needs a valid world context object so we can get the cached one from game instance subsystems, otherwise if in game thread it can be null since we can also load it from the settings"))
	static UVertexPaintMaterialDataAsset* GetVertexPaintMaterialDataAsset(const UObject* optionalWorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities")
	static int GetAmountOfLODsToPaintOn(UPrimitiveComponent* meshComp, bool overrideLODToPaintUpOn, int overrideUpToLOD);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", ToolTip = "Gets the Amount of Calculate Colors Paint Tasks for Mesh Components in the Queue. Mainly useful to present it on widgets etc. "))
	static TMap<UPrimitiveComponent*, int> GetCalculateColorsPaintTasksAmount_Wrapper(const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", ToolTip = "Gets the Amount of Calculate Colors Detection Tasks for Mesh Components in the Queue. Mainly useful to present it on widgets etc. "))
	static TMap<UPrimitiveComponent*, int> GetCalculateColorsDetectionTasksAmount_Wrapper(const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Color Snippets", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Gets all the color snippets on a stored mesh and the associated color snippet data asset they are stored on. Can be used if you for example want to get all available snippets of a zombie and randomize which to use when spawning or similar."))
	static void GetAllMeshColorSnippetsAsString_Wrapper(UPrimitiveComponent* meshComponent, TMap<FString, FVertexDetectStoredColorSnippetInfo>& availableColorSnippetsAndDataAssets);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Color Snippets", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Gets all the color snippets tags on a stored mesh and the associated color snippet data asset they are stored on. Can be used if you for example want to get all available snippets of a zombie and randomize which to use when spawning so you can always spawn a unique one or similar."))
	static void GetAllMeshColorSnippetsAsTags_Wrapper(UPrimitiveComponent* meshComponent, TMap<FGameplayTag, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>>& availableColorSnippetTagsAndDataAssets);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Color Snippets", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Gets all the color snippets tags on a stored mesh Under a Tag Category, and the associated Color Snippet Data Asset they are stored on. Can be used if you for example want to get All Available Snippets of a Zombie for a Certain Area"))
	static void GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper(UPrimitiveComponent* meshComponent, FGameplayTag tagCategory, TMap<FGameplayTag, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>>& availableColorSnippetTagsAndDataAssetsUnderTagCategory);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Color Snippets", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Gets all the color snippets tags on a stored mesh In a Tag Category, i.e. the direct children of the category and not tags under those, and the associated Color Snippet Data Asset they are stored on. \nFor instance if you have Enemy tags like ColorSnippet.Zombie, ColorSnippet.Zombie.Bloody, ColorSnippet.Zombie.Sewers.Filthy. If you would then run this with ColorSnippet.Zombie, you would get ColorSnippet.Zombie.Bloody and others directly under ColorSnippet.Zombie., and not .Sewers.Filthy. "))
	static void GetMeshColorSnippetsTagsInTagCategory_Wrapper(UPrimitiveComponent* meshComponent, FGameplayTag tagCategory, TMap<FGameplayTag, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>>& availableColorSnippetTagsAndDataAssetsUnderTagCategory);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (WorldContext = "WorldContextObject", ToolTip = "Gets all Tags under a Tag Category, for instance if you have a Category Zombie.SewerLevel and several tags under SewerLevel, then you will get all of those if you select SewerLevel. "))
	static TArray<FGameplayTag> GetAllTagsUnderTagCategory(const UObject* WorldContextObject, FGameplayTag tagCategory);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Color Snippets", meta = (WorldContext = "WorldContextObject", ToolTip = "Gets all Color Snippet under the Tag Group Category. For instance if you have ColorSnippets.Test.TestSnippet1. Then if you run this with Test, then you would get TestSnipped1 and any other under Test.. "))
	static TArray<FString> GetAllColorSnippetsUnderGroupSnippetAsString(const UObject* WorldContextObject, FString groupSnippedID);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Color Snippets", meta = (ToolTip = "Finds the Mesh's Specific Child Tag from the Group Snippet, if the Mesh has correct source mesh, relative location and rotation to the group so we can find it. Requires us to send in all of the Group Snippet Meshes so we can accurately get the Tag for the specific meshComponent. "))
	static FGameplayTag GetMeshColorSnippetTagInGroup(UPrimitiveComponent* meshComponent, FGameplayTag groupSnippet, TArray<UPrimitiveComponent*> groupSnippetMeshes);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Gets the colors of the component either for All LODs if that is True, or up to a specified LOD. You can use GetAllVertexColorsOnly if you want to be more specific in what you get, for instance get the colors of each bones etc. "))
	static FVertexDetectMeshDataStruct GetMeshComponentVertexColors_Wrapper(UPrimitiveComponent* meshComponent, bool& success, bool getColorsForAllLODs, int getColorsUpToLOD = 0);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (ToolTip = "Gets the Amount of Vertices on LOD0 for the Mesh. "))
	static int GetMeshComponentAmountOfVerticesOnLOD(UPrimitiveComponent* meshComponent, int lod = 0);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Gets the colors of the component at Specified LOD, if it exist. "))
	static TArray<FColor> GetMeshComponentVertexColorsAtLOD_Wrapper(UPrimitiveComponent* meshComponent, int lod = 0);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Paint", meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", ToolTip = "Get Vertex Color Amount to Apply on RGBA based off of what Physics Surface is Registered in the Editor Widget for each Channel. It can also checks the Parent Physics Surfaces that's been set in the Editor Widget, so if you for instance use this with Cobble-Sand, which isn't registered, but it's parent Sand is, then it can still accept it and whatever channel it is on. This is useful when you only know a Physical Surface and Material, and want to apply vertex colors to a mesh but are unsure of on which channels. \nIf Failed to get any colors on any channels they will all return 0. If Success on at least one channel, then channels that didn't have the surface registered can return something different. "))
	static void GetColorsToApplyFromPhysicsSurface_Wrapper(const UObject* WorldContextObject, UMaterialInterface* materialToApplyColorsTo, const TEnumAsByte<EPhysicalSurface>& physicalSurface, float& redAmountToApply, bool& redAmountSuccessfullyGot, float& greenAmountToApply, bool& greenAmountSuccessfullyGot, float& blueAmountToApply, bool& blueAmountSuccessfullyGot, float& alphaAmountToApply, bool& alphaAmountSuccessfullyGot, bool& successfullyGotColorsToApplyOnAChannel, float amountToReturnOnChannelsWithPhysicsSurface = 0.2f, float amountToReturnOnChannelsWithoutThePhysicsSurface = 0.0f, bool applyOnChannelsWithSamePhysicsParents = true, bool applyOnChannelsThatsChildOfPhysicsSurface = true, bool applyOnChannelsThatResultsInBlendableSurfaces = true);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", ToolTip = "optionalMaterialPhysicsSurfaceWasDetectedOn is used to check if the surfaces can blend  This will get loop through and get the Most Dominant Surface from the Physics Surface Array, so it and the physics Sruface Color Value array has to be in sync. This combines well with the Physics Result Structs you get from GetClosestVertexData or PaintAtLocation Callback Events. \nIf you provide the Material that the physics surfaces was on, it will also check the Blendable Surfaces that has been Registered in the Editor Widget, and check if any sent in here can Blend and become another Surface, if so, that surface could be the Most dominant one. For example if Red Channel is Sand, Blue Channel is Puddle, they can be set to blend into Mud in the Editor Widget. \n\nThis is very useful when you want to run SFX or VFX based on detected surfaces. "))
	static bool GetTheMostDominantPhysicsSurface_Wrapper(const UObject* WorldContextObject, UMaterialInterface* optionalMaterialPhysicsSurfaceWasDetectedOn, TArray<TEnumAsByte<EPhysicalSurface>> physicsSurfaces, TArray<float> physicsSurfaceValues, TEnumAsByte<EPhysicalSurface>& mostDominantPhysicsSurfaceFromArray, float& mostDominantPhysicsSurfaceColorValue);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", ToolTip = "Gets the Red, Green, Blue or Alpha Channel that the Physics Surface is registered to in the Editor Widget. Useful if you have a physics surface and you want to know what color channel that you should apply paint on just based on that. It can also return Default if it's set to that (i.e. what is on the material when nothing is on it), but if it can't get the info it will not be successfull. "))
	static TArray<Enum_SurfaceAtChannel> GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper(const UObject* WorldContextObject, UMaterialInterface* material, TEnumAsByte<EPhysicalSurface> physicsSurface, bool& successfull);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Utilities")
	static TArray<TEnumAsByte<EPhysicalSurface>> GetAllPhysicsSurfaces();

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (ToolTip = "Draws Debug Box of the primitive components Bounds. "))
	static void DrawPrimitiveComponentBoundsBox(UPrimitiveComponent* component, float lifetime = 5.0f, float thickness = 3.0f, FLinearColor colorToDraw = FLinearColor::Red);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (ToolTip = "Releases and Blocks Vertex Colors before switching Static Mesh. Can choose to Clear the Vertex Colors of the newly switched mesh.  "))
	static void SetStaticMeshAndReleaseResources(UStaticMeshComponent* staticMeshComponent, UStaticMesh* newMesh, bool clearVertexColorsOfChangedMesh = true);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (DisplayName = "Set Skeletal Mesh And Release Resources", ToolTip = "Unlike just running SetSkeletalMesh(), this doesn't cause a crash when switching meshes if applying vertex colors on them since it runs ReleasesResurces first and BeginOverrideVertexColors etc., then calls the SetSkeletalMesh(). "))
	static void SetSkeletalMeshAndReleaseResources(USkeletalMeshComponent* skeletalMeshComponent, USkeletalMesh* newMesh, bool clearVertexColorsOfChangedMesh = true);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (DisplayName = "Sort String Array Alphabetically", ToolTip = "Sorts an array of strings alphabetically"))
	static TArray<FString> VertexPaintDetectionPlugin_SortStringArrayAlphabetically(TArray<FString> strings);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (DisplayName = "Sort Names Alphabetically", ToolTip = "Sorts the TMap Alphabetically while matching the index. So you can send in a TMap of AssetNames and Indexes, and get a TMap back but with them in alphabetical order. Intended to be used with the Asset Registry->GetAssets...() functions, see example in the Vertex Paint Editor Utility Widget"))
	static TMap<int, FString> VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically(TMap<int, FString> assetIndexAndName);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (DisplayName = "GetSkeletalMesh", ToolTip = "Utility function since 5.1 don't use the same get skeletal mesh in BP as 4.27 and 5.0. By using this we don't have to update the examples or Widget BP"))
	static USkeletalMesh* VertexPaintDetectionPlugin_GetSkeletalMesh(USkeletalMeshComponent* skeletalMeshComp);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Utilities")
	static EObjectTypeQuery CollisionChannelToObjectType(ECollisionChannel channel);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Utilities")
	static ECollisionChannel ObjectTypeToCollisionChannel(EObjectTypeQuery object);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (WorldContext = "WorldContextObject"))
	static bool IsPlayInEditor(const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", ToolTip = "Checks if any of the Cached Physical Materials Assets in the Game Instance Subsystem uses the physics surface we pass through as paramater here, then returns the one it finds. We cache all of them since it's very expensive to run GetAssetsOfClass. \nIf PhysicsMaterialClasses is set to be something other than the Base PhysicsMaterialClass, like a custom class, then we will make a check to make sure it is that class. \nMake sure only one physics material uses a physics surface, otherwise you might get the wrong physics material. \nAlso make sure that you add the folder that has all the physics materials to Additional Directories to be Cooked in the Project Settings, in case there's a risk any of them isn't referenced by anything and won't get cooked, but has a physics surface that is registered in the editor widget. ", DeterminesOutputType = "physicalMaterialClass"))
	static UPhysicalMaterial* GetPhysicalMaterialUsingPhysicsSurface_Wrapper(const UObject* WorldContextObject, TSubclassOf<UPhysicalMaterial> physicalMaterialClass, TEnumAsByte<EPhysicalSurface> physicsSurface);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities")
	static void RemoveComponentFromPaintTaskQueue(UPrimitiveComponent* component);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities")
	static void RemoveComponentFromDetectTaskQueue(UPrimitiveComponent* component);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Utilities")
	static const UObject* GetMeshComponentSourceMesh(UPrimitiveComponent* meshComponent);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (DisplayName = "CalcAABBWithoutUniformCheck", ToolTip = "The Engines own CalcAABB has a requirement that the scale has to be uniform for some reason, so it doesn't work if for instance the characters scale is 1, 1, 0.5. This is the same logic but without the uniform check, and works as intended with our Paint Within Area checks. "))
	static FBox CalcAABBWithoutUniformCheck(const class USkinnedMeshComponent* MeshComponent, const FTransform& LocalToWorld);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Utilities")
	static FString GetSubstringAfterLastCharacter(const FString& string, const FString& character);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (ToolTip = "The Engines own ToFColor and ToFLinear functions isn't 100%, i've had issues where it hadn't returned the correct amount, for instance a FColor Red channel that was 191, which should convert to 0.75 but got converted to 0.5 etc. So made own wrappers for Linear to FColor and vice versa. "))
	static FColor ReliableFLinearToFColor(FLinearColor linearColor);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (ToolTip = "The Engines own ToFColor and ToFLinear functions isn't 100%, i've had issues where it hadn't returned the correct amount, for instance a FColor Red channel that was 191, which should convert to 0.75 but got converted to 0.5 etc. So made own wrappers for Linear to FColor and vice versa. "))
	static FLinearColor ReliableFColorToFLinearColor(FColor color);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (ToolTip = "Returns a Box, Sphere, Static or Skeletal Mesh's Component Bounds Top World Z.  "))
	static float GetComponentBoundsTopWorldZ(UPrimitiveComponent* component);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Utilities", meta = (ToolTip = "Returns a Box, Sphere, Static or Skeletal Mesh's Component Bounds Bottom World Z.  "))
	static float GetComponentBoundsBottomWorldZ(UPrimitiveComponent* component);

	static UVertexPaintDetectionGISubSystem* GetVertexPaintGameInstanceSubsystem(const UObject* WorldContextObject);

	static TArray<FColor> GetSkeletalMeshVertexColorsAtLOD(USkeletalMeshComponent* skeletalMeshComponent, int lod);

	static TArray<FColor> GetStaticMeshVertexColorsAtLOD(UStaticMeshComponent* staticMeshComponent, int lod);

	static UVertexPaintDetectionTaskQueue* GetVertexPaintTaskQueue(const UObject* WorldContextObject);

	static FVertexDetectAmountOfPaintedColorsOfEachChannel ConsolidateColorsOfEachChannel(FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfColorsOfEachChannel, int amountOfVertices);

	static FVertexDetectAmountOfPaintedColorsOfEachChannel ConsolidatePhysicsSurfaceResult(FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfColorsOfEachChannel, int amountOfVertices);

	static bool DoesPaintTaskQueueContainID(const UObject* WorldContextObject, int32 taskID);

	static bool DoesDetectTaskQueueContainID(const UObject* WorldContextObject, int32 taskID);


#if ENGINE_MAJOR_VERSION == 5

	static TArray<FColor> GetDynamicMeshVertexColors(UDynamicMeshComponent* dynamicMeshComponent);

	static TArray<FColor> GetGeometryCollectionVertexColors(UGeometryCollectionComponent* geometryCollectionComponent);

#endif

public:

	//---------- CHAOS CLOTH & VEHICLES ----------//

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Vehicles", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Useful function for affecting the friction of a Chaos Wheeled Vehicle Wheel, used by the BPC_RuntimeVertexPaintAndDetectionComponent_VehicleWheel when it is driving over Meshes to make sure the vehicle gets it's friction affected then as well, just like when it's driving over landscapes. \nSince UE4's Chaos Wheeled Vehicle Component doesn't have the set friction multiplier function, i made a wrapper that runs it if it's UE5. "))
	static void SetChaosWheeledVehicleFrictionMultiplier_Wrapper(UChaosWheeledVehicleMovementComponent* chaosWheeledVehicleMovementComponent, int wheelIndex, float friction);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Runtime Vertex Paint and Detection Plugin|Cloth", meta = (ToolTip = "Returns Skeletal Mesh Cloths if it ha any. Can be used in conjunction with UVertexPaintFunctionLibrary::SetChaosClothPhysics if you want to directly set physics on a cloth. Also useful when implementing interface GetSkeletalMeshClothPhysicsSettings on a BP and has to return physics setting for each Cloth the Mesh has. \NOTE Affecting Cloth Physics is a UE5 exclusive feature, and Painting on Skeletal Meshes with Proxy Simulated Cloth is not supported, for example the Wind Walker Echo Character. Only Cloth created the regular way through the editor! "))
	static TArray<UClothingAssetBase*> GetClothAssets(USkeletalMesh* skeletalMesh);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Cloth", meta = (ToolTip = "Set Cloth Physics on the Cloth sent in for the Skeletal Mesh. Can use UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_GetClothingAssets() to get a Skeletal Meshes Clothing Assets in the order they're set in the Skeletal Mesh, so you have to be aware of which cloth is at which index. \n\NOTE Affecting Cloth Physics is a UE5 exclusive feature, and Painting on Skeletal Meshes with Proxy Simulated Cloth might not be supported, for example the Wind Walker Echo Character. Only Cloth created the regular way through the editor is Supported! "))
	static void SetChaosClothPhysics(USkeletalMeshComponent* skeletalMeshComponent, UClothingAssetBase* clothingAsset, const FVertexDetectChaosClothPhysicsSettings& clothPhysicsSettings);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Cloth", meta = (ToolTip = "Updates Cloth Physics with the exisisting Vertex Colors. This is run on the game thread, and if the cloths have a lot of vertice the FPS may get affected. Recommend using the Async Variant to avoid this. \nThis function is useful if Vertex Colors has been changed by something else other than a paint job, or was pre-painetd in the editor and you want them to behave correctly. \n\NOTE Affecting Cloth Physics is a UE5 exclusive feature, and Painting on Skeletal Meshes with Proxy Simulated Cloth is not supported, for example the Wind Walker Echo Character. Only Cloth created the regular way through the editor! "))
	static void UpdateChaosClothPhysicsWithExistingColors(USkeletalMeshComponent* skeletalMeshComponent);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Paint and Detection Plugin|Cloth", meta = (Latent, LatentInfo = "LatentInfo", WorldContext = "WorldContextObject", ToolTip = "Updates Cloth Physics with the exisisting Vertex Colors. This will run on async when it is looping through the vertices of the cloths to get the average color and get the cloth physics settings for them, which is then uses when back at game thread to update the cloth physics. \nThis function is useful if Vertex Colors has been changed by something else other than a paint job, or was pre-painetd in the editor and you want them to behave correctly. \n\NOTE Affecting Cloth Physics is a UE5 exclusive feature, and Painting on Skeletal Meshes with Proxy Simulated Cloth is not supported, for example the Wind Walker Echo Character. Only Cloth created the regular way through the editor!"))
	static void UpdateChaosClothPhysicsWithExistingColorsAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, USkeletalMeshComponent* skeletalMesh);

#if ENGINE_MAJOR_VERSION == 5

	static TMap<UClothingAssetBase*, FVertexDetectChaosClothPhysicsSettings> GetChaosClothPhysicsSettingsBasedOnExistingColors(USkeletalMeshComponent* skeletalMeshComponent);

	static FVertexDetectChaosClothPhysicsSettings GetChaosClothPhysicsSettingsBasedOnAverageVertexColor(USkeletalMeshComponent* skeletalMeshComponent, UClothingAssetBase* clothingAsset, FLinearColor avarageColorOnClothingAsset, FVertexDetectClothSettingsStruct clothPhysicsSettings);

#endif

private:

	static TArray<Enum_SurfaceAtChannel> GetVertexColorChannelsPhysicsSurfaceIsRegisteredTo(const UObject* WorldContextObject, UMaterialInterface* material, TEnumAsByte<EPhysicalSurface> physicsSurface, bool& successfull);
};
