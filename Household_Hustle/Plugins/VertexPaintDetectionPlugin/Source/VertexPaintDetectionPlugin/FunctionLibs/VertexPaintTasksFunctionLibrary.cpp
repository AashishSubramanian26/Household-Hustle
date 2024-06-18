// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved.


#include "VertexPaintTasksFunctionLibrary.h"

// Plugin
#include "VertexPaintDetectionComponent.h"
#include "VertexPaintDetectionLog.h"


//--------------------------------------------------------

// Get Closest Vertex Data On Mesh Wrapper

void UVertexPaintTasksFunctionLibrary::GetClosestVertexDataOnMesh_Wrapper(UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent, UPrimitiveComponent* meshComponent, FVertexDetectInfoStruct getClosestVertexDataStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (IsValid(runtimeVertexPaintAndDetectionComponent)) {

		getClosestVertexDataStruct.meshComponent = meshComponent;

		// Note nothing more should be set here, because if a C++ Class calls the Paint/Detection Function Right Away it shouldn't lose out on anything being set

		runtimeVertexPaintAndDetectionComponent->GetClosestVertexDataOnMesh(getClosestVertexDataStruct, additionalDataToPassThrough);
	}

	else {
		
		RVPDP_LOG(getClosestVertexDataStruct.debugSettings, FColor::Red, "Get Closest Vertex Data on Mesh Failed because the Paint Component sent in isn't valid! Perhaps the Actor or Component is being destroyed.");
	}
}


//--------------------------------------------------------

// Get All Vertex Colors Only Wrapper

void UVertexPaintTasksFunctionLibrary::GetAllVertexColorsOnly_Wrapper(UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent, UPrimitiveComponent* meshComponent, FVertexDetectGetColorsOnlyStruct getAllVertexColorsStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (IsValid(runtimeVertexPaintAndDetectionComponent)) {

		getAllVertexColorsStruct.meshComponent = meshComponent;

		// Note nothing more should be set here, because if a C++ Class calls the Paint/Detection Function Right Away it shouldn't lose out on anything being set

		runtimeVertexPaintAndDetectionComponent->GetAllVertexColorsOnly(getAllVertexColorsStruct, additionalDataToPassThrough);
	}

	else {

		RVPDP_LOG(getAllVertexColorsStruct.debugSettings, FColor::Red, "Get All Vertex Colors Failed because the Paint Component sent in isn't valid! Perhaps the Actor or Component is being destroyed.");
	}
}


//--------------------------------------------------------

// Get Colors Within Area Wrapper

void UVertexPaintTasksFunctionLibrary::GetColorsWithinArea_Wrapper(UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent, UPrimitiveComponent* meshComponent, FVertexDetectGetColorsWithinAreaStruct getColorsWithinAreaStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (IsValid(runtimeVertexPaintAndDetectionComponent)) {

		getColorsWithinAreaStruct.meshComponent = meshComponent;

		// Note nothing more should be set here, because if a C++ Class calls the Paint/Detection Function Right Away it shouldn't lose out on anything being set

		runtimeVertexPaintAndDetectionComponent->GetColorsWithinArea(getColorsWithinAreaStruct, additionalDataToPassThrough);
	}

	else {

		RVPDP_LOG(getColorsWithinAreaStruct.debugSettings, FColor::Red, "Get Colors Within Area Failed because the Paint Component sent in isn't valid! Perhaps the Actor or Component is being destroyed.");
	}
}


//--------------------------------------------------------

// Paint on Mesh at Location Wrapper

void UVertexPaintTasksFunctionLibrary::PaintOnMeshAtLocation_Wrapper(UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent, UPrimitiveComponent* meshComponent, FVertexPaintAtLocationStruct paintAtLocationStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (IsValid(runtimeVertexPaintAndDetectionComponent)) {

		paintAtLocationStruct.meshComponent = meshComponent;

		// Note nothing more should be set here, because if a C++ Class calls the Paint/Detection Function Right Away it shouldn't lose out on anything being set

		runtimeVertexPaintAndDetectionComponent->PaintOnMeshAtLocation(paintAtLocationStruct, additionalDataToPassThrough);
	}

	else {

		RVPDP_LOG(paintAtLocationStruct.debugSettings, FColor::Red, "Paint at Location Failed because the Paint Component sent in isn't valid! Perhaps the Actor or Component is being destroyed.");
	}
}


//--------------------------------------------------------

// Paint Within Area Wrapper

void UVertexPaintTasksFunctionLibrary::PaintOnMeshWithinArea_Wrapper(UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent, UPrimitiveComponent* meshComponent, FVertexPainthWithinAreaStruct paintWithinAreaStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (IsValid(runtimeVertexPaintAndDetectionComponent)) {

		paintWithinAreaStruct.meshComponent = meshComponent;
		// Note nothing more should be set here, because if a C++ Class calls the Paint/Detection Function Right Away it shouldn't lose out on anything being set

		runtimeVertexPaintAndDetectionComponent->PaintOnMeshWithinArea(paintWithinAreaStruct, additionalDataToPassThrough);
	}

	else {

		RVPDP_LOG(paintWithinAreaStruct.debugSettings, FColor::Red, "Paint on Mesh Within Area Failed because the Paint Component sent in isn't valid! Perhaps the Actor or Component is being destroyed.");
	}
}


//--------------------------------------------------------

// Paint on Entire Mesh Wrapper

void UVertexPaintTasksFunctionLibrary::PaintOnEntireMesh_Wrapper(UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent, UPrimitiveComponent* meshComponent, FVertexPaintOnEntireMeshStruct paintOnEntireMeshStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (IsValid(runtimeVertexPaintAndDetectionComponent)) {

		paintOnEntireMeshStruct.meshComponent = meshComponent;

		// Note nothing more should be set here, because if a C++ Class calls the Paint/Detection Function Right Away it shouldn't lose out on anything being set

		runtimeVertexPaintAndDetectionComponent->PaintOnEntireMesh(paintOnEntireMeshStruct, additionalDataToPassThrough);
	}

	else {

		RVPDP_LOG(paintOnEntireMeshStruct.debugSettings, FColor::Red, "Paint on Entire Mesh Failed because the Paint Component sent in isn't valid! Perhaps the Actor or Component is being destroyed.");
	}
}


//--------------------------------------------------------

// Paint Color Snippet On Mesh

void UVertexPaintTasksFunctionLibrary::PaintColorSnippetOnMesh_Wrappers(UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent, UPrimitiveComponent* meshComponent, FVertexPaintColorSnippetStruct paintColorSnippetStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (IsValid(runtimeVertexPaintAndDetectionComponent)) {

		paintColorSnippetStruct.meshComponent = meshComponent;

		// Note nothing more should be set here, because if a C++ Class calls the Paint/Detection Function Right Away it shouldn't lose out on anything being set

		runtimeVertexPaintAndDetectionComponent->PaintColorSnippetOnMesh(paintColorSnippetStruct, additionalDataToPassThrough);
	}

	else {

		RVPDP_LOG(paintColorSnippetStruct.debugSettings, FColor::Red, "Paint Color Snippet on Mesh Failed because the Vertex Paint Component sent in isn't valid! Perhaps the Actor or Component is being destroyed, or it hasn't been properly initialized.");
	}
}


//--------------------------------------------------------

// Paint Group Snippet On Mesh

void UVertexPaintTasksFunctionLibrary::PaintGroupSnippetOnMesh_Wrapper(UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent, TArray<UPrimitiveComponent*> groupSnippetMeshes, FVertexPaintGroupSnippetStruct paintGroupSnippetStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (IsValid(runtimeVertexPaintAndDetectionComponent)) {

		if (paintGroupSnippetStruct.paintColorSnippetSetting != EVertexPaintPaintColorSnippetSetting::PaintGroupSnippet) {

			UE_LOG(RuntimeVertexColorPlugin, Warning, TEXT("Paint Group Snippet on Mesh Failed the Paint Color Snippet Setting is not set to Paint Group Snippet. "));

			return;
		}

		if (groupSnippetMeshes.Num() > 0) {

			paintGroupSnippetStruct.meshComponent = groupSnippetMeshes[0];
			paintGroupSnippetStruct.paintGroupSnippetMeshes = groupSnippetMeshes;

			// Note nothing more should be set here, because if a C++ Class calls the Paint/Detection Function Right Away it shouldn't lose out on anything being set

			runtimeVertexPaintAndDetectionComponent->PaintColorSnippetOnMesh(paintGroupSnippetStruct, additionalDataToPassThrough);
		}

		else {

			RVPDP_LOG(paintGroupSnippetStruct.debugSettings, FColor::Red, "Paint Group Snippet on Mesh Failed Because no Group Snippet Meshes was Connected.");

			return;
		}
	}

	else {

		RVPDP_LOG(paintGroupSnippetStruct.debugSettings, FColor::Red, "Paint Group Snippet on Mesh Failed because the Vertex Paint Component sent in isn't valid! Perhaps the Actor or Component is being destroyed, or it hasn't been properly initialized.");

		return;
	}
}


//--------------------------------------------------------

// Set Mesh Component Vertex Colors

void UVertexPaintTasksFunctionLibrary::SetMeshComponentVertexColors_Wrapper(UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent, UPrimitiveComponent* meshComponent, FVertexPaintSetMeshComponentVertexColors setMeshComponentVertexColorsSettings, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (IsValid(runtimeVertexPaintAndDetectionComponent)) {

		setMeshComponentVertexColorsSettings.meshComponent = meshComponent;

		// Note nothing more should be set here, because if a C++ Class calls the Paint/Detection Function Right Away it shouldn't lose out on anything being set

		runtimeVertexPaintAndDetectionComponent->SetMeshComponentVertexColors(setMeshComponentVertexColorsSettings, additionalDataToPassThrough);
	}

	else {

		RVPDP_LOG(setMeshComponentVertexColorsSettings.debugSettings, FColor::Red, "Paint Set Mesh Component Colors Failed because the Vertex Paint Component sent in isn't valid! Perhaps the Actor or Component is being destroyed, or it hasn't been properly initialized.");
	}
}


//--------------------------------------------------------

// Set Mesh Component Vertex Colors Using Serialized String

void UVertexPaintTasksFunctionLibrary::SetMeshComponentVertexColorsUsingSerializedString_Wrapper(UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent, UPrimitiveComponent* meshComponent, FVertexPaintSetMeshComponentVertexColorsUsingSerializedString setMeshComponentVertexColorsUsingSerializedStringSettings, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (IsValid(runtimeVertexPaintAndDetectionComponent)) {

		setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent = meshComponent;

		// Note nothing more should be set here, because if a C++ Class calls the Paint/Detection Function Right Away it shouldn't lose out on anything being set

		runtimeVertexPaintAndDetectionComponent->SetMeshComponentVertexColorsUsingSerializedString(setMeshComponentVertexColorsUsingSerializedStringSettings, additionalDataToPassThrough);
	}

	else {

		RVPDP_LOG(setMeshComponentVertexColorsUsingSerializedStringSettings.debugSettings, FColor::Red, "Set Mesh Component Vertex Colors Using Serialized String Failed because the Vertex Paint Component sent in isn't valid! Perhaps the Actor or Component is being destroyed, or it hasn't been properly initialized.");
	}
}
