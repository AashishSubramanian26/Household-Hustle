// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 


#include "MultiCapsuleTraceForUniqueMeshes.h"


#define LOCTEXT_NAMESPACE "RuntimeVertexPaintAndDetection"

//-------------------------------------------------------

// Construct - Should be overriden by children

UMultiCapsuleTraceForUniqueMeshes::UMultiCapsuleTraceForUniqueMeshes() {

	FunctionReference.SetFromField<UFunction>(UVertexPaintFunctionLibrary::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UVertexPaintFunctionLibrary, MultiCapsuleTraceForClosestUniqueMeshes_Wrapper)), true);
}


//-------------------------------------------------------

// Get Menu Category

FText UMultiCapsuleTraceForUniqueMeshes::GetMenuCategory() const {

	return FText::FromString("Runtime Vertex Paint and Detection Plugin|Paint");
}


//-------------------------------------------------------

// Get Node Title - Should be overriden by children so they can set different title

FText UMultiCapsuleTraceForUniqueMeshes::GetNodeTitle(ENodeTitleType::Type TitleType) const {

	return LOCTEXT("Multi Capsule Trace For Closest Unique Meshes", "Multi Capsule Trace For Closest Unique Meshes");
}

#undef LOCTEXT_NAMESPACE