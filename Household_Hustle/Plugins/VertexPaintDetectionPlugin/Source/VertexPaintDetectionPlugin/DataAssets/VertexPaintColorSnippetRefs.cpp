// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 


#include "VertexPaintColorSnippetRefs.h"

// Engine
#include "VertexPaintFunctionLibrary.h"
#include "Engine/StaticMesh.h"
#include "Engine/SkeletalMesh.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/PrimitiveComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"

// Plugin
#include "VertexPaintColorSnippetDataAsset.h"


//-------------------------------------------------------

// Get Object From Snippet ID

TSoftObjectPtr<UObject> UVertexPaintColorSnippetRefs::GetObjectFromSnippetID(FString snippetID) {

    if (snippetID.Len() <= 0) return TSoftObjectPtr<UObject>();


    for (auto& objectTemp : staticMeshesColorSnippets) {

        TArray<FString> colorSnippetsTemp;

        objectTemp.Value.colorSnippetsStorageInfo.GetKeys(colorSnippetsTemp);

        if (colorSnippetsTemp.Contains(snippetID))
            return objectTemp.Key;
    }

    for (auto& objectTemp : skeletalMeshesColorSnippets) {

        TArray<FString> colorSnippetsTemp;

        objectTemp.Value.colorSnippetsStorageInfo.GetKeys(colorSnippetsTemp);

        if (colorSnippetsTemp.Contains(snippetID))
            return objectTemp.Key;
    }

    return TSoftObjectPtr<UObject>();
}


//-------------------------------------------------------

// Get All Color Snippets And Data Asset For Object

TMap<FString, FVertexDetectStoredColorSnippetInfo> UVertexPaintColorSnippetRefs::GetAllColorSnippetsAndDataAssetForObject(const UObject* object) {

    if (!IsValid(object)) return TMap<FString, FVertexDetectStoredColorSnippetInfo>();


    if (staticMeshesColorSnippets.Contains(object)) {

        return staticMeshesColorSnippets.FindRef(object).colorSnippetsStorageInfo;
    }

    else if (skeletalMeshesColorSnippets.Contains(object)) {

        return skeletalMeshesColorSnippets.FindRef(object).colorSnippetsStorageInfo;
    }

    return TMap<FString, FVertexDetectStoredColorSnippetInfo>();
}


//-------------------------------------------------------

// Get All Color Snippets In Specified Data Asset

TMap<FString, FVertexDetectStoredColorSnippetInfo> UVertexPaintColorSnippetRefs::GetAllColorSnippetsInSpecifiedDataAsset(const UVertexPaintColorSnippetDataAsset* colorSnippetDataAsset, bool includeChildGroupSnippets) {

    if (!colorSnippetDataAsset) return TMap<FString, FVertexDetectStoredColorSnippetInfo>();


    TMap<FString, FVertexDetectStoredColorSnippetInfo> colorSnippetsStoredOnSpecifiedDataAssetTemp;

    TArray<FVertexDetectColorSnippetReferenceDataStruct> colorSnippetReferenceInfoTemp;
    staticMeshesColorSnippets.GenerateValueArray(colorSnippetReferenceInfoTemp);

    TArray<FVertexDetectColorSnippetReferenceDataStruct> skelMeshReferenceInfoTemp;
    skeletalMeshesColorSnippets.GenerateValueArray(skelMeshReferenceInfoTemp);

    colorSnippetReferenceInfoTemp.Append(skelMeshReferenceInfoTemp);


    for (auto snippetReferenceInfoTemp : colorSnippetReferenceInfoTemp) {

        for (auto& dataAssetStoredOnTemp : snippetReferenceInfoTemp.colorSnippetsStorageInfo) {

            if (dataAssetStoredOnTemp.Value.colorSnippetDataAssetStoredOn.LoadSynchronous() == colorSnippetDataAsset) {

                if (includeChildGroupSnippets) {

                    colorSnippetsStoredOnSpecifiedDataAssetTemp.Add(dataAssetStoredOnTemp);
                }
                
                else if (!dataAssetStoredOnTemp.Value.isPartOfAGroupSnippet) {

                    colorSnippetsStoredOnSpecifiedDataAssetTemp.Add(dataAssetStoredOnTemp);
                }
            }
        }
    }


    return colorSnippetsStoredOnSpecifiedDataAssetTemp;
}


//-------------------------------------------------------

// Get All Group Snippets In Specified Data Asset

TMap<FString, FVertexDetectGroupColorSnippetInfo> UVertexPaintColorSnippetRefs::GetAllGroupSnippetsInSpecifiedDataAsset(const UVertexPaintColorSnippetDataAsset* colorSnippetDataAsset) {

    if (!colorSnippetDataAsset) return TMap<FString, FVertexDetectGroupColorSnippetInfo>();


    TMap<FString, FVertexDetectGroupColorSnippetInfo> groupSnippetsInDataAssetTemp;

    for (auto& groupSnippetsTemp : groupSnippetsAndAssociatedMeshes) {

        if (groupSnippetsTemp.Value.colorSnippetDataAssetStoredOn.Get() == colorSnippetDataAsset)
            groupSnippetsInDataAssetTemp.Add(groupSnippetsTemp.Key, groupSnippetsTemp.Value);
    }


    return groupSnippetsInDataAssetTemp;
}


//-------------------------------------------------------

// Get Child Snippets Info Associated Group Snippet ID

TMap<FString, FVertexDetectStoredColorSnippetInfo> UVertexPaintColorSnippetRefs::GetChildSnippetInfosAssociatedWithGroupSnippetID(const UObject* WorldContextObject, FString groupSnippetID) {

    if (groupSnippetID.IsEmpty() || !WorldContextObject) return TMap<FString, FVertexDetectStoredColorSnippetInfo>();
    if (!groupSnippetsAndAssociatedMeshes.Contains(groupSnippetID)) return TMap<FString, FVertexDetectStoredColorSnippetInfo>();


   //  UE_LOG(LogTemp, Warning, TEXT("UVertexPaintFunctionLibrary::GetAllColorSnippetsUnderGroupSnippet(WorldContextObject, groupSnippetID): %i  -  group snippet: %s"), UVertexPaintFunctionLibrary::GetAllColorSnippetsUnderGroupSnippetAsString(WorldContextObject, groupSnippetID).Num(), *groupSnippetID);

    TMap<FString, FVertexDetectStoredColorSnippetInfo> associatedChildGroupSnippetInfosTemp;

    for (auto childColorSnippetsTemp : UVertexPaintFunctionLibrary::GetAllColorSnippetsUnderGroupSnippetAsString(WorldContextObject, groupSnippetID)) {

        auto objectAssociatedWithSnippet = UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset(WorldContextObject)->GetObjectFromSnippetID(childColorSnippetsTemp);

        TMap<TSoftObjectPtr<UObject>, FVertexDetectColorSnippetReferenceDataStruct> colorSnippetTMapToUseTemp;

        if (auto staticMesh = Cast<UStaticMesh>(objectAssociatedWithSnippet.Get()))
            colorSnippetTMapToUseTemp = UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset(WorldContextObject)->staticMeshesColorSnippets;

        else if (auto skeletalMesh = Cast<USkeletalMesh>(objectAssociatedWithSnippet.Get()))
            colorSnippetTMapToUseTemp = UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset(WorldContextObject)->skeletalMeshesColorSnippets;


        if (colorSnippetTMapToUseTemp.Contains(objectAssociatedWithSnippet)) {

            if (colorSnippetTMapToUseTemp.FindRef(objectAssociatedWithSnippet).colorSnippetsStorageInfo.Contains(childColorSnippetsTemp)) {

                if (colorSnippetTMapToUseTemp.FindRef(objectAssociatedWithSnippet).colorSnippetsStorageInfo.FindRef(childColorSnippetsTemp).isPartOfAGroupSnippet)
                    associatedChildGroupSnippetInfosTemp.Add(childColorSnippetsTemp, colorSnippetTMapToUseTemp.FindRef(objectAssociatedWithSnippet).colorSnippetsStorageInfo.FindRef(childColorSnippetsTemp));
            }
        }
    }

    return associatedChildGroupSnippetInfosTemp;
}


//-------------------------------------------------------

// Get If Components Match Group Child Snippets

bool UVertexPaintColorSnippetRefs::CheckAndGetTheComponentsThatMatchGroupChildSnippets(const UObject* WorldContextObject, FString groupSnippetID, TArray<UPrimitiveComponent*> meshComponents, TMap<FString, UPrimitiveComponent*>& childSnippetsAndMatchingMeshes) {

    childSnippetsAndMatchingMeshes.Empty();

    if (groupSnippetID.IsEmpty() || !WorldContextObject || meshComponents.Num() <= 0) return false;


    FVector meshesCenterPointTemp = FVector(ForceInitToZero);
    FVector totalForwardVectors = FVector(ForceInitToZero);

    // NOTE That the way we calculate this has to match the way when we store the relative location, where we set a transform and then inverse transform the location etc. 
    for (auto groupSnippetMeshTemp : meshComponents) {

        if (IsValid(groupSnippetMeshTemp)) {

            meshesCenterPointTemp += groupSnippetMeshTemp->GetComponentLocation();
            totalForwardVectors += groupSnippetMeshTemp->GetForwardVector();
        }
    }

    meshesCenterPointTemp /= meshComponents.Num();
    totalForwardVectors /= meshComponents.Num();

    FTransform groupWorldTransformToCheckRelativeSpace;
    groupWorldTransformToCheckRelativeSpace.SetLocation(meshesCenterPointTemp);
    groupWorldTransformToCheckRelativeSpace.SetRotation(totalForwardVectors.ToOrientationRotator().Quaternion());

    auto childSnippetsAssociatedWithGroupTemp = GetChildSnippetInfosAssociatedWithGroupSnippetID(WorldContextObject, groupSnippetID);


    for (auto& childSnippetInfoTemp : childSnippetsAssociatedWithGroupTemp) {

        for (auto groupSnippetMeshTemp : meshComponents) {

            if (!groupSnippetMeshTemp) continue;

            if (auto staticMeshComponent = Cast<UStaticMeshComponent>(groupSnippetMeshTemp)) {

                if (childSnippetInfoTemp.Value.objectColorSnippetBelongsTo != staticMeshComponent->GetStaticMesh())
                    continue;
            }

            else if (auto skeletalMeshComponent = Cast<USkeletalMeshComponent>(groupSnippetMeshTemp)) {

#if ENGINE_MAJOR_VERSION == 4

                if (childSnippetInfoTemp.Value.objectColorSnippetBelongsTo != skeletalMeshComponent->SkeletalMesh)
                    continue;

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

                if (childSnippetInfoTemp.Value.objectColorSnippetBelongsTo != skeletalMeshComponent->SkeletalMesh)
                    continue;

#else

                if (childSnippetInfoTemp.Value.objectColorSnippetBelongsTo != skeletalMeshComponent->GetSkeletalMeshAsset())
                    continue;
#endif
#endif
            }

           // UE_LOG(LogTemp, Warning, TEXT("groupWorldTransformToCheckRelativeSpace: %s  -  groupSnippetMeshTemp->GetComponentLocation(): %s"), *groupWorldTransformToCheckRelativeSpace.ToString(), *groupSnippetMeshTemp->GetComponentLocation().ToString());

            FVector currentRelativeLocationToGroupTransform = UKismetMathLibrary::InverseTransformLocation(groupWorldTransformToCheckRelativeSpace, groupSnippetMeshTemp->GetComponentLocation());

            // If the same Relative Location to the Groups Center Point as it was when stored, used to asssociate a tag to a certain mesh and that the Group Snippet should look as intended for this mesh. This is so in case one of the groups meshes is rotated wrong, or in a completely different location then we won't be able to associate tag and the group snippet won't get painted since it won't look as intended. 
            if (UKismetMathLibrary::EqualEqual_VectorVector(currentRelativeLocationToGroupTransform, childSnippetInfoTemp.Value.relativeLocationToGroupCenterPoint, .01f)) {

                // If essentially the same dot product to the center point as when snippet was created, i.e. same relative rotation. 
                if (UKismetMathLibrary::NearlyEqual_FloatFloat((float)FVector::DotProduct(UKismetMathLibrary::GetDirectionUnitVector(meshesCenterPointTemp, groupSnippetMeshTemp->GetComponentLocation()), groupSnippetMeshTemp->GetForwardVector()), childSnippetInfoTemp.Value.dotProductToGroupCenterPoint, 0.001f)) {

                    childSnippetsAndMatchingMeshes.Add(childSnippetInfoTemp.Key, groupSnippetMeshTemp);
                    break;
                }

                else {

                    // UE_LOG(LogTemp, Warning, TEXT("Dot Product: Fail: storedDotProductToGroupCenterPoint: %f"), childSnippetInfoTemp.Value.dotProductToGroupCenterPoint);
                }
            }
            
            else {

                // UE_LOG(LogTemp, Warning, TEXT("Location Fail: currentRelativeLocationToGroupTransform: %s  -  storedRelativeLocationToGroupCenterPoint: %s"), *currentRelativeLocationToGroupTransform.ToString(), *childSnippetInfoTemp.Value.relativeLocationToGroupCenterPoint.ToString());
            }
        }
    }

    // If we got the right amount of matching meshes with the correct location etc. 
    if (childSnippetsAssociatedWithGroupTemp.Num() > 0 && childSnippetsAndMatchingMeshes.Num() > 0)
        return (childSnippetsAssociatedWithGroupTemp.Num() == childSnippetsAndMatchingMeshes.Num());
    else
        return false;
}


//-------------------------------------------------------

// Remove Snippet Object

void UVertexPaintColorSnippetRefs::RemoveSnippetObject(UObject* object) {

    if (staticMeshesColorSnippets.Contains(object)) {

        staticMeshesColorSnippets.Remove(object);
    }

    if (skeletalMeshesColorSnippets.Contains(object)) {

        skeletalMeshesColorSnippets.Remove(object);
    }
}


//-------------------------------------------------------

// Remove Color Snippet

void UVertexPaintColorSnippetRefs::RemoveColorSnippet(FString snippetID) {

    if (snippetID.Len() <= 0) return;


    auto mesh = GetObjectFromSnippetID(snippetID);

    if (Cast<USkeletalMesh>(mesh.Get())) {

        if (skeletalMeshesColorSnippets.Contains(mesh.Get())) {

            // If there are more then only removes the specifc snippet reference
            if (skeletalMeshesColorSnippets.FindRef(mesh.Get()).colorSnippetsStorageInfo.Num() > 1) {

                auto snippetWithDataAssetsTemp = skeletalMeshesColorSnippets.FindRef(mesh.Get());

                snippetWithDataAssetsTemp.colorSnippetsStorageInfo.Remove(snippetID);

                skeletalMeshesColorSnippets.Add(mesh.Get(), snippetWithDataAssetsTemp);
            }
            else {

                // If this is the last one then removes the entire TMap for this object. 
                skeletalMeshesColorSnippets.Remove(mesh.Get());
            }
        }
    }

    else if (Cast<UStaticMesh>(mesh.Get())) {

        if (staticMeshesColorSnippets.Contains(mesh.Get())) {

            // If there are more then only removes the specifc snippet reference
            if (staticMeshesColorSnippets.FindRef(mesh.Get()).colorSnippetsStorageInfo.Num() > 1) {

                auto snippetWithDataAssetsTemp = staticMeshesColorSnippets.FindRef(mesh.Get());

                snippetWithDataAssetsTemp.colorSnippetsStorageInfo.Remove(snippetID);

                staticMeshesColorSnippets.Add(mesh.Get(), snippetWithDataAssetsTemp);
            }
            else {

                // If this is the last one then removes the entire TMap for this object. 
                staticMeshesColorSnippets.Remove(mesh.Get());
            }
        }
    }
}


//-------------------------------------------------------

// Contains Color Snippet

bool UVertexPaintColorSnippetRefs::ContainsColorSnippet(FString snippetID, bool optionalHasToBeStoredInDataAsset, UVertexPaintColorSnippetDataAsset* dataAsset) {

    if (snippetID.Len() <= 0) return false;


    auto mesh = GetObjectFromSnippetID(snippetID);

    if (Cast<USkeletalMesh>(mesh.Get())) {

        if (skeletalMeshesColorSnippets.Contains(mesh.Get())) {

            if (optionalHasToBeStoredInDataAsset)
                return (skeletalMeshesColorSnippets.FindRef(mesh.Get()).colorSnippetsStorageInfo.FindRef(snippetID).colorSnippetDataAssetStoredOn.Get() == dataAsset);

            else
                return true;
        }
    }

    else if (Cast<UStaticMesh>(mesh.Get())) {

        if (staticMeshesColorSnippets.Contains(mesh.Get())) {

            if (optionalHasToBeStoredInDataAsset)
                return (staticMeshesColorSnippets.FindRef(mesh.Get()).colorSnippetsStorageInfo.FindRef(snippetID).colorSnippetDataAssetStoredOn.Get() == dataAsset);
            else
                return true;
        }
    }

    else if (groupSnippetsAndAssociatedMeshes.Contains(snippetID)) {

        if (optionalHasToBeStoredInDataAsset)
            return (groupSnippetsAndAssociatedMeshes.FindRef(snippetID).colorSnippetDataAssetStoredOn.Get() == dataAsset);
        else
            return true;
    }

    return false;
}
