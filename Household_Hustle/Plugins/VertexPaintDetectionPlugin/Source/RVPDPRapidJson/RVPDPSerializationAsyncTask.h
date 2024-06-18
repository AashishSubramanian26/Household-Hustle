// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "RVPDPRapidJsonFunctionLibrary.h"
#include "Async/AsyncWork.h"


struct FRVPDPSerializationAsyncTask {


	DECLARE_DELEGATE_OneParam(FOnTaskComplete, const FAsyncSerializationInfo&);
	FOnTaskComplete OnTaskComplete;


	TStatId GetStatId() const {

		RETURN_QUICK_DECLARE_CYCLE_STAT(FRVPDPSerializationAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
	}

	bool CanAbandon() {

		return true;
	}

	void Abandon() {

		// Cleanup or finalize any remaining logic if the task is abandoned
	}

	FAsyncSerializationInfo serializationInfoToFill;

	FRVPDPSerializationAsyncTask(FAsyncSerializationInfo serializationInfo) {

		serializationInfoToFill = serializationInfo;
	}

	void DoWork() {


		switch (serializationInfoToFill.arrayType) {

			case ESerializationArrayTypes::Null:
				break;

			case ESerializationArrayTypes::Int32Array:

				// If array have been set previous to this, we should serialize, instead of de-serialize. 
				if (serializationInfoToFill.int32Array.Num() > 0)
					serializationInfoToFill.serializedString = URVPDPRapidJsonFunctionLibrary::SerializeTArrayInt_Wrapper(serializationInfoToFill.int32Array);
				else if (serializationInfoToFill.serializedString.Len() > 0)
					serializationInfoToFill.int32Array = URVPDPRapidJsonFunctionLibrary::DeserializeTArrayInt_Wrapper(serializationInfoToFill.serializedString);

				break;

			case ESerializationArrayTypes::Uint8Array:

				if (serializationInfoToFill.uint8Array.Num() > 0)
					serializationInfoToFill.serializedString = URVPDPRapidJsonFunctionLibrary::SerializeTArrayUInt8_Wrapper(serializationInfoToFill.uint8Array);
				else if (serializationInfoToFill.serializedString.Len() > 0)
					serializationInfoToFill.uint8Array = URVPDPRapidJsonFunctionLibrary::DeserializeTArrayUInt8_Wrapper(serializationInfoToFill.serializedString);

				break;

			case ESerializationArrayTypes::Int64Array:

				if (serializationInfoToFill.int64Array.Num() > 0)
					serializationInfoToFill.serializedString = URVPDPRapidJsonFunctionLibrary::SerializeTArrayInt64_Wrapper(serializationInfoToFill.int64Array);
				else if (serializationInfoToFill.serializedString.Len() > 0)
					serializationInfoToFill.int64Array = URVPDPRapidJsonFunctionLibrary::DeserializeTArrayInt64_Wrapper(serializationInfoToFill.serializedString);

				break;

			case ESerializationArrayTypes::FStringArray:

				if (serializationInfoToFill.stringArray.Num() > 0)
					serializationInfoToFill.serializedString = URVPDPRapidJsonFunctionLibrary::SerializeTArrayFString_Wrapper(serializationInfoToFill.stringArray);
				else if (serializationInfoToFill.serializedString.Len() > 0)
					serializationInfoToFill.stringArray = URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFString_Wrapper(serializationInfoToFill.serializedString);

				break;

			case ESerializationArrayTypes::FColorArray:

				if (serializationInfoToFill.colorArray.Num() > 0)
					serializationInfoToFill.serializedString = URVPDPRapidJsonFunctionLibrary::SerializeTArrayFColor_Wrapper(serializationInfoToFill.colorArray);
				else if (serializationInfoToFill.serializedString.Len() > 0)
					serializationInfoToFill.colorArray = URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFColor_Wrapper(serializationInfoToFill.serializedString);

				break;

			case ESerializationArrayTypes::BoolArray:

				if (serializationInfoToFill.boolArray.Num() > 0)
					serializationInfoToFill.serializedString = URVPDPRapidJsonFunctionLibrary::SerializeTArrayBool_Wrapper(serializationInfoToFill.boolArray);
				else if (serializationInfoToFill.serializedString.Len() > 0)
					serializationInfoToFill.boolArray = URVPDPRapidJsonFunctionLibrary::DeserializeTArrayBool_Wrapper(serializationInfoToFill.serializedString);

				break;

			case ESerializationArrayTypes::FNameArray:

				if (serializationInfoToFill.nameArray.Num() > 0)
					serializationInfoToFill.serializedString = URVPDPRapidJsonFunctionLibrary::SerializeTArrayFName_Wrapper(serializationInfoToFill.nameArray);
				else if (serializationInfoToFill.serializedString.Len() > 0)
					serializationInfoToFill.nameArray = URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFName_Wrapper(serializationInfoToFill.serializedString);

				break;

			case ESerializationArrayTypes::FTextArray:

				if (serializationInfoToFill.textArray.Num() > 0)
					serializationInfoToFill.serializedString = URVPDPRapidJsonFunctionLibrary::SerializeTArrayFText_Wrapper(serializationInfoToFill.textArray);
				else if (serializationInfoToFill.serializedString.Len() > 0)
					serializationInfoToFill.textArray = URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFText_Wrapper(serializationInfoToFill.serializedString);

				break;

			case ESerializationArrayTypes::FloatArray:

				if (serializationInfoToFill.floatArray.Num() > 0)
					serializationInfoToFill.serializedString = URVPDPRapidJsonFunctionLibrary::SerializeTArrayFloat_Wrapper(serializationInfoToFill.floatArray);
				else if (serializationInfoToFill.serializedString.Len() > 0)
					serializationInfoToFill.floatArray = URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFloat_Wrapper(serializationInfoToFill.serializedString);

				break;

			case ESerializationArrayTypes::FVectorArray:

				if (serializationInfoToFill.vectorArray.Num() > 0)
					serializationInfoToFill.serializedString = URVPDPRapidJsonFunctionLibrary::SerializeTArrayFVector_Wrapper(serializationInfoToFill.vectorArray);
				else if (serializationInfoToFill.serializedString.Len() > 0)
					serializationInfoToFill.vectorArray = URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFVector_Wrapper(serializationInfoToFill.serializedString);

				break;

			case ESerializationArrayTypes::FRotatorArray:
				
				if (serializationInfoToFill.rotatorArray.Num() > 0)
					serializationInfoToFill.serializedString = URVPDPRapidJsonFunctionLibrary::SerializeTArrayFRotator_Wrapper(serializationInfoToFill.rotatorArray);
				else if (serializationInfoToFill.serializedString.Len() > 0)
					serializationInfoToFill.rotatorArray = URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFRotator_Wrapper(serializationInfoToFill.serializedString);

				break;

			case ESerializationArrayTypes::FTransformArray:

				if (serializationInfoToFill.transformArray.Num() > 0)
					serializationInfoToFill.serializedString = URVPDPRapidJsonFunctionLibrary::SerializeTArrayFTransform_Wrapper(serializationInfoToFill.transformArray);
				else if (serializationInfoToFill.serializedString.Len() > 0)
					serializationInfoToFill.transformArray = URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFTransform_Wrapper(serializationInfoToFill.serializedString);

				break;

			default:
				break;
		}

		OnTaskComplete.ExecuteIfBound(serializationInfoToFill);
	}
};