// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "FundementalsPrerequisites.h"
#include "GetColorsOnlyPrerequisites.generated.h" 


//-------------------------------------------------------

// Get Colors Only

USTRUCT(BlueprintType)
struct FVertexDetectGetColorsOnlyStruct : public FVertexDetectStruct {

	GENERATED_BODY()

	// NOTE That there is a bug in BP (atleast 5.0) where if you drag out and Make a Struct, then it will still be whatever is set in the parent. This will only take affect if not doing that, or Splitting the Struct in the Node. 
	FVertexDetectGetColorsOnlyStruct() {

		// Since this task literaly is GetColors we automatically set this to true since it may be what the user expects. 
		callbackSettings.includeVertexColorData = true;
	}
};