// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#include "RVPDPRapidJsonFunctionLibrary.h"

// Engine
#include "Engine/World.h"

// Rapid Json
#include "ThirdParty/rapidjson/document.h"
#include "ThirdParty/rapidjson/writer.h"
#include "ThirdParty/rapidjson/stringbuffer.h"

// Plugin
#include "RVPDPRapidJsonSerializer.h"
#include "RVPDPRapidJsonDeserializer.h"
#include "RVPDPRapidJsonLatentActionBase.h"
#include "RVPDPSerializationAsyncTask.h"

// For Custom Structs
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"



//------- SERIALIZATION / DESERIALIZATION ASYNC TASKS --------//


//-----------------------

// Serialize / De-Serialize int32 Array

bool URVPDPRapidJsonFunctionLibrary::isSerializingInt32 = false;
void URVPDPRapidJsonFunctionLibrary::SerializeInt32ArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<int32> arrayToSerialize, FString& serializedString) {

    if (arrayToSerialize.Num() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeInt32ArrayAsync but the Array passed in is 0 in length!"));
        return;
    }

    if (isSerializingInt32) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeInt32ArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::Int32Array;
        serializationInfoTemp.int32Array = arrayToSerialize;

        
        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&serializedString, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isSerializingInt32 = false;
            serializedString = serializationInfoResult.serializedString;

            LatentAction->MarkAsCompleted();

            });

        isSerializingInt32 = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}

bool URVPDPRapidJsonFunctionLibrary::isDeSerializingInt32 = false;
void URVPDPRapidJsonFunctionLibrary::DeSerializeInt32ArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString stringToDeSerialize, TArray<int32>& deSerializedResult) {

    if (stringToDeSerialize.Len() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to De-SerializeInt32ArrayAsync but the serializedString passed in is 0 in length!"));
        return;
    }

    if (isDeSerializingInt32) {

        UE_LOG(LogTemp, Log, TEXT("Trying to De-SerializeInt32ArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::Int32Array;
        serializationInfoTemp.serializedString = stringToDeSerialize;

        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&deSerializedResult, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isDeSerializingInt32 = false;
            deSerializedResult = serializationInfoResult.int32Array;

            LatentAction->MarkAsCompleted();

            });

        isDeSerializingInt32 = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}


//-----------------------

// Serialize / De-Serialize uint8 Array

bool URVPDPRapidJsonFunctionLibrary::isSerializinguInt8 = false;
void URVPDPRapidJsonFunctionLibrary::SerializeUint8ArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<uint8> arrayToSerialize, FString& serializedString) {

    if (arrayToSerialize.Num() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeUint8ArrayAsync but the Array passed in is 0 in length!"));
        return;
    }

    if (isSerializinguInt8) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeUint8ArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::Uint8Array;
        serializationInfoTemp.uint8Array = arrayToSerialize;


        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&serializedString, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isSerializinguInt8 = false;
            serializedString = serializationInfoResult.serializedString;

            LatentAction->MarkAsCompleted();

            });

        isSerializinguInt8 = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}

bool URVPDPRapidJsonFunctionLibrary::isDeSerializinguInt8 = false;
void URVPDPRapidJsonFunctionLibrary::DeSerializeUInt8ArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString stringToDeSerialize, TArray<uint8>& deSerializedResult) {

    if (stringToDeSerialize.Len() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to DeSerializeUInt8ArrayAsync but the serializedString passed in is 0 in length!"));
        return;
    }

    if (isDeSerializinguInt8) {

        UE_LOG(LogTemp, Log, TEXT("Trying to DeSerializeUInt8ArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }

    
    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::Uint8Array;
        serializationInfoTemp.serializedString = stringToDeSerialize;

        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&deSerializedResult, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isDeSerializinguInt8 = false;
            deSerializedResult = serializationInfoResult.uint8Array;

            LatentAction->MarkAsCompleted();

            });

        isDeSerializinguInt8 = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}


//-----------------------

// Serialize / De-Serialize Int64 Array

bool URVPDPRapidJsonFunctionLibrary::isSerializingInt64 = false;
void URVPDPRapidJsonFunctionLibrary::SerializeInt64ArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<int64> arrayToSerialize, FString& serializedString) {

    if (arrayToSerialize.Num() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeInt64ArrayAsync but the Array passed in is 0 in length!"));
        return;
    }

    if (isSerializingInt64) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeInt64ArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::Int64Array;
        serializationInfoTemp.int64Array = arrayToSerialize;


        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&serializedString, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isSerializingInt64 = false;
            serializedString = serializationInfoResult.serializedString;

            LatentAction->MarkAsCompleted();

            });

        isSerializingInt64 = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}

bool URVPDPRapidJsonFunctionLibrary::isDeSerializingInt64 = false;
void URVPDPRapidJsonFunctionLibrary::DeSerializeInt64ArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString stringToDeSerialize, TArray<int64>& deSerializedResult) {

    if (stringToDeSerialize.Len() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to DeSerializeInt64ArrayAsync but the serializedString passed in is 0 in length!"));
        return;
    }

    if (isDeSerializingInt64) {

        UE_LOG(LogTemp, Log, TEXT("Trying to DeSerializeInt64ArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::Int64Array;
        serializationInfoTemp.serializedString = stringToDeSerialize;

        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&deSerializedResult, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isDeSerializingInt64 = false;
            deSerializedResult = serializationInfoResult.int64Array;

            LatentAction->MarkAsCompleted();

            });

        isDeSerializingInt64 = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}


//-----------------------

// Serialize / De-Serialize String Array

bool URVPDPRapidJsonFunctionLibrary::isSerializingString = false;
void URVPDPRapidJsonFunctionLibrary::SerializeStringArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FString> arrayToSerialize, FString& serializedString) {

    if (arrayToSerialize.Num() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeStringArrayAsync but the Array passed in is 0 in length!"));
        return;
    }

    if (isSerializingString) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeStringArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::FStringArray;
        serializationInfoTemp.stringArray = arrayToSerialize;


        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&serializedString, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isSerializingString = false;
            serializedString = serializationInfoResult.serializedString;

            LatentAction->MarkAsCompleted();

            });

        isSerializingString = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}

bool URVPDPRapidJsonFunctionLibrary::isDeSerializingString = false;
void URVPDPRapidJsonFunctionLibrary::DeSerializeStringArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString stringToDeSerialize, TArray<FString>& deSerializedResult) {

    if (stringToDeSerialize.Len() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to DeSerializeStringArrayAsync but the serializedString passed in is 0 in length!"));
        return;
    }

    if (isDeSerializingString) {

        UE_LOG(LogTemp, Log, TEXT("Trying to DeSerializeStringArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::FStringArray;
        serializationInfoTemp.serializedString = stringToDeSerialize;

        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&deSerializedResult, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isDeSerializingString = false;
            deSerializedResult = serializationInfoResult.stringArray;

            LatentAction->MarkAsCompleted();

            });

        isDeSerializingString = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}


//-----------------------

// Serialize / De-Serialize Color Array

bool URVPDPRapidJsonFunctionLibrary::isSerializingColor = false;
void URVPDPRapidJsonFunctionLibrary::SerializeColorArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FColor> arrayToSerialize, FString& serializedString) {

    if (arrayToSerialize.Num() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeColorArrayAsync but the Array passed in is 0 in length!"));
        return;
    }

    if (isSerializingColor) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeColorArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::FColorArray;
        serializationInfoTemp.colorArray = arrayToSerialize;


        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&serializedString, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isSerializingColor = false;
            serializedString = serializationInfoResult.serializedString;

            LatentAction->MarkAsCompleted();

            });

        isSerializingColor = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}

bool URVPDPRapidJsonFunctionLibrary::isDeSerializingColor = false;
void URVPDPRapidJsonFunctionLibrary::DeSerializeColorArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString stringToDeSerialize, TArray<FColor>& deSerializedResult) {

    if (stringToDeSerialize.Len() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to DeSerializeColorArrayAsync but the serializedString passed in is 0 in length!"));
        return;
    }

    if (isDeSerializingColor) {

        UE_LOG(LogTemp, Log, TEXT("Trying to DeSerializeColorArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::FColorArray;
        serializationInfoTemp.serializedString = stringToDeSerialize;

        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&deSerializedResult, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isDeSerializingColor = false;
            deSerializedResult = serializationInfoResult.colorArray;

            LatentAction->MarkAsCompleted();

            });

        isDeSerializingColor = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}


//-----------------------

// Serialize / De-Serialize Bool Array

bool URVPDPRapidJsonFunctionLibrary::isSerializingBool = false;
void URVPDPRapidJsonFunctionLibrary::SerializeBoolArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<bool> arrayToSerialize, FString& serializedString) {

    if (arrayToSerialize.Num() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeBoolArrayAsync but the Array passed in is 0 in length!"));
        return;
    }

    if (isSerializingBool) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeBoolArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::BoolArray;
        serializationInfoTemp.boolArray = arrayToSerialize;


        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&serializedString, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isSerializingBool = false;
            serializedString = serializationInfoResult.serializedString;

            LatentAction->MarkAsCompleted();

            });

        isSerializingBool = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}

bool URVPDPRapidJsonFunctionLibrary::isDeSerializingBool = false;
void URVPDPRapidJsonFunctionLibrary::DeSerializeBoolArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString stringToDeSerialize, TArray<bool>& deSerializedResult) {

    if (stringToDeSerialize.Len() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to DeSerializeBoolArrayAsync but the serializedString passed in is 0 in length!"));
        return;
    }

    if (isDeSerializingBool) {

        UE_LOG(LogTemp, Log, TEXT("Trying to DeSerializeBoolArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::BoolArray;
        serializationInfoTemp.serializedString = stringToDeSerialize;

        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&deSerializedResult, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isDeSerializingBool = false;
            deSerializedResult = serializationInfoResult.boolArray;

            LatentAction->MarkAsCompleted();

            });

        isDeSerializingBool = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}


//-----------------------

// Serialize / De-Serialize Name Array

bool URVPDPRapidJsonFunctionLibrary::isSerializingName = false;
void URVPDPRapidJsonFunctionLibrary::SerializeNameArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FName> arrayToSerialize, FString& serializedString) {

    if (arrayToSerialize.Num() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeNameArrayAsync but the Array passed in is 0 in length!"));
        return;
    }

    if (isSerializingName) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeNameArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::FNameArray;
        serializationInfoTemp.nameArray = arrayToSerialize;


        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&serializedString, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isSerializingName = false;
            serializedString = serializationInfoResult.serializedString;

            LatentAction->MarkAsCompleted();

            });

        isSerializingName = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}

bool URVPDPRapidJsonFunctionLibrary::isDeSerializingName = false;
void URVPDPRapidJsonFunctionLibrary::DeSerializeNameArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString stringToDeSerialize, TArray<FName>& deSerializedResult) {

    if (stringToDeSerialize.Len() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to DeSerializeNameArrayAsync but the serializedString passed in is 0 in length!"));
        return;
    }

    if (isDeSerializingName) {

        UE_LOG(LogTemp, Log, TEXT("Trying to DeSerializeNameArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::FNameArray;
        serializationInfoTemp.serializedString = stringToDeSerialize;

        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&deSerializedResult, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isDeSerializingName = false;
            deSerializedResult = serializationInfoResult.nameArray;

            LatentAction->MarkAsCompleted();

            });

        isDeSerializingName = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}


//-----------------------

// Serialize / De-Serialize Text Array

bool URVPDPRapidJsonFunctionLibrary::isSerializingText = false;
void URVPDPRapidJsonFunctionLibrary::SerializeTextArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FText> arrayToSerialize, FString& serializedString) {

    if (arrayToSerialize.Num() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeTextArrayAsync but the Array passed in is 0 in length!"));
        return;
    }

    if (isSerializingText) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeTextArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::FTextArray;
        serializationInfoTemp.textArray = arrayToSerialize;


        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&serializedString, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isSerializingText = false;
            serializedString = serializationInfoResult.serializedString;

            LatentAction->MarkAsCompleted();

            });

        isSerializingText = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}

bool URVPDPRapidJsonFunctionLibrary::isDeSerializingText = false;
void URVPDPRapidJsonFunctionLibrary::DeSerializeTextArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString stringToDeSerialize, TArray<FText>& deSerializedResult) {

    if (stringToDeSerialize.Len() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to DeSerializeTextArrayAsync but the serializedString passed in is 0 in length!"));
        return;
    }

    if (isDeSerializingText) {

        UE_LOG(LogTemp, Log, TEXT("Trying to DeSerializeTextArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::FTextArray;
        serializationInfoTemp.serializedString = stringToDeSerialize;

        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&deSerializedResult, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isDeSerializingText = false;
            deSerializedResult = serializationInfoResult.textArray;

            LatentAction->MarkAsCompleted();

            });

        isDeSerializingText = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}


//-----------------------

// Serialize / De-Serialize Float Array

bool URVPDPRapidJsonFunctionLibrary::isSerializingFloat = false;
void URVPDPRapidJsonFunctionLibrary::SerializeFloatArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<float> arrayToSerialize, FString& serializedString) {

    if (arrayToSerialize.Num() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeFloatArrayAsync but the Array passed in is 0 in length!"));
        return;
    }

    if (isSerializingFloat) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeFloatArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::FloatArray;
        serializationInfoTemp.floatArray = arrayToSerialize;


        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&serializedString, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isSerializingFloat = false;
            serializedString = serializationInfoResult.serializedString;

            LatentAction->MarkAsCompleted();

            });

        isSerializingFloat = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}

bool URVPDPRapidJsonFunctionLibrary::isDeSerializingFloat = false;
void URVPDPRapidJsonFunctionLibrary::DeSerializeFloatArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString stringToDeSerialize, TArray<float>& deSerializedResult) {

    if (stringToDeSerialize.Len() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to DeSerializeFloatArrayAsync but the serializedString passed in is 0 in length!"));
        return;
    }

    if (isDeSerializingFloat) {

        UE_LOG(LogTemp, Log, TEXT("Trying to DeSerializeFloatArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::FloatArray;
        serializationInfoTemp.serializedString = stringToDeSerialize;

        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&deSerializedResult, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isDeSerializingFloat = false;
            deSerializedResult = serializationInfoResult.floatArray;

            LatentAction->MarkAsCompleted();

            });

        isDeSerializingFloat = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}


//-----------------------

// Serialize / De-Serialize Vector Array

bool URVPDPRapidJsonFunctionLibrary::isSerializingVector = false;
void URVPDPRapidJsonFunctionLibrary::SerializeVectorArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FVector> arrayToSerialize, FString& serializedString) {

    if (arrayToSerialize.Num() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeVectorArrayAsync but the Array passed in is 0 in length!"));
        return;
    }

    if (isSerializingVector) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeVectorArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::FVectorArray;
        serializationInfoTemp.vectorArray = arrayToSerialize;


        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&serializedString, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isSerializingVector = false;
            serializedString = serializationInfoResult.serializedString;

            LatentAction->MarkAsCompleted();

            });

        isSerializingVector = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}

bool URVPDPRapidJsonFunctionLibrary::isDeSerializingVector = false;
void URVPDPRapidJsonFunctionLibrary::DeSerializeVectorArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString stringToDeSerialize, TArray<FVector>& deSerializedResult) {

    if (stringToDeSerialize.Len() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to DeSerializeVectorArrayAsync but the serializedString passed in is 0 in length!"));
        return;
    }

    if (isDeSerializingVector) {

        UE_LOG(LogTemp, Log, TEXT("Trying to DeSerializeVectorArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::FVectorArray;
        serializationInfoTemp.serializedString = stringToDeSerialize;

        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&deSerializedResult, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isDeSerializingVector = false;
            deSerializedResult = serializationInfoResult.vectorArray;

            LatentAction->MarkAsCompleted();

            });

        isDeSerializingVector = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}


//-----------------------

// Serialize / De-Serialize Rotator Array

bool URVPDPRapidJsonFunctionLibrary::isSerializingRotator = false;
void URVPDPRapidJsonFunctionLibrary::SerializeRotatorArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FRotator> arrayToSerialize, FString& serializedString) {

    if (arrayToSerialize.Num() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeRotatorArrayAsync but the Array passed in is 0 in length!"));
        return;
    }

    if (isSerializingRotator) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeRotatorArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::FRotatorArray;
        serializationInfoTemp.rotatorArray = arrayToSerialize;


        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&serializedString, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isSerializingRotator = false;
            serializedString = serializationInfoResult.serializedString;

            LatentAction->MarkAsCompleted();

            });

        isSerializingRotator = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}

bool URVPDPRapidJsonFunctionLibrary::isDeSerializingRotator = false;
void URVPDPRapidJsonFunctionLibrary::DeSerializeRotatorArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString stringToDeSerialize, TArray<FRotator>& deSerializedResult) {

    if (stringToDeSerialize.Len() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to DeSerializeRotatorArrayAsync but the serializedString passed in is 0 in length!"));
        return;
    }

    if (isDeSerializingRotator) {

        UE_LOG(LogTemp, Log, TEXT("Trying to DeSerializeRotatorArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::FRotatorArray;
        serializationInfoTemp.serializedString = stringToDeSerialize;

        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&deSerializedResult, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isDeSerializingRotator = false;
            deSerializedResult = serializationInfoResult.rotatorArray;

            LatentAction->MarkAsCompleted();

            });

        isDeSerializingRotator = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}


//-----------------------

// Serialize / De-Serialize Transform Array

bool URVPDPRapidJsonFunctionLibrary::isSerializingTransform = false;
void URVPDPRapidJsonFunctionLibrary::SerializeTransformArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FTransform> arrayToSerialize, FString& serializedString) {

    if (arrayToSerialize.Num() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeTransformArrayAsync but the Array passed in is 0 in length!"));
        return;
    }

    if (isSerializingTransform) {

        UE_LOG(LogTemp, Log, TEXT("Trying to Start SerializeTransformArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::FTransformArray;
        serializationInfoTemp.transformArray = arrayToSerialize;


        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&serializedString, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isSerializingTransform = false;
            serializedString = serializationInfoResult.serializedString;

            LatentAction->MarkAsCompleted();

            });

        isSerializingTransform = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}

bool URVPDPRapidJsonFunctionLibrary::isDeSerializingTransform = false;
void URVPDPRapidJsonFunctionLibrary::DeSerializeTransformArrayAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString stringToDeSerialize, TArray<FTransform>& deSerializedResult) {

    if (stringToDeSerialize.Len() <= 0) {

        UE_LOG(LogTemp, Log, TEXT("Trying to DeSerializeTransformArrayAsync but the serializedString passed in is 0 in length!"));
        return;
    }

    if (isDeSerializingTransform) {

        UE_LOG(LogTemp, Log, TEXT("Trying to DeSerializeTransformArrayAsync but it already has a Task awaiting to be Finished!"));
        return;
    }


    if (UWorld* World = WorldContextObject->GetWorld()) {

        FAsyncSerializationInfo serializationInfoTemp;
        serializationInfoTemp.arrayType = ESerializationArrayTypes::FTransformArray;
        serializationInfoTemp.serializedString = stringToDeSerialize;

        // Instantiate the AsyncTask
        FRVPDPSerializationAsyncTask* serializationAsyncTask = new FRVPDPSerializationAsyncTask(serializationInfoTemp);

        // Create our custom latent action and add to manager
        FRVPDPRapidJsonLatentActionBase* LatentAction = new FRVPDPRapidJsonLatentActionBase(LatentInfo, serializationAsyncTask);
        World->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);

        // Bind the delegate and sets the result
        serializationAsyncTask->OnTaskComplete.BindLambda([&deSerializedResult, LatentAction](const FAsyncSerializationInfo& serializationInfoResult) {

            isDeSerializingTransform = false;
            deSerializedResult = serializationInfoResult.transformArray;

            LatentAction->MarkAsCompleted();

            });

        isDeSerializingTransform = true;

        (new FAutoDeleteAsyncTask<FRVPDPSerializationAsyncTask>(*serializationAsyncTask))->StartBackgroundTask();
    }
}



//------- CUSTOM STRUCTS --------//

bool URVPDPRapidJsonFunctionLibrary::SerializeCustomStruct(const FRVPDPRapidJsonCustomStructSerialization& CustomStruct, FString& OutJsonString)
{
    TSharedPtr<FJsonObject> JsonObject = CustomStruct.ToJson();
    if (!JsonObject.IsValid())
    {
        return false;
    }

    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutJsonString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

    return true;
}

bool URVPDPRapidJsonFunctionLibrary::DeserializeCustomStruct(const FString& InJsonString, FRVPDPRapidJsonCustomStructSerialization& OutCustomStruct)
{
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(InJsonString);

    TSharedPtr<FJsonObject> JsonObject;
    if (!FJsonSerializer::Deserialize(Reader, JsonObject) || !JsonObject.IsValid())
    {
        return false;
    }

    return OutCustomStruct.FromJson(JsonObject);
}


//------- SERIALIZATION --------//

FString URVPDPRapidJsonFunctionLibrary::SerializeInt_Wrapper(int32 IntValue)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root;
    SerializeInt(root, IntValue, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}

FString URVPDPRapidJsonFunctionLibrary::SerializeUInt8_Wrapper(uint8 UInt8Value)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root;
    SerializeUInt8(root, UInt8Value, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}

FString URVPDPRapidJsonFunctionLibrary::SerializeInt64_Wrapper(int64 Int64Value)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root;
    SerializeInt64(root, Int64Value, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}

FString URVPDPRapidJsonFunctionLibrary::SerializeFString_Wrapper(FString StringValue)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root;
    SerializeFString(root, StringValue, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}

FString URVPDPRapidJsonFunctionLibrary::SerializeFColor_Wrapper(FColor ColorValue)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root;
    SerializeFColor(root, ColorValue, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}

FString URVPDPRapidJsonFunctionLibrary::SerializeBool_Wrapper(bool BoolValue)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root;
    SerializeBool(root, BoolValue, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}

FString URVPDPRapidJsonFunctionLibrary::SerializeFName_Wrapper(FName NameValue)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root;
    SerializeFName(root, NameValue, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}

FString URVPDPRapidJsonFunctionLibrary::SerializeFText_Wrapper(FText TextValue)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root;
    SerializeFText(root, TextValue, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}

FString URVPDPRapidJsonFunctionLibrary::SerializeFloat_Wrapper(float FloatValue)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root;
    SerializeFloat(root, FloatValue, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}

FString URVPDPRapidJsonFunctionLibrary::SerializeFVector_Wrapper(FVector VectorValue)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root;
    SerializeFVector(root, VectorValue, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}

FString URVPDPRapidJsonFunctionLibrary::SerializeFRotator_Wrapper(FRotator RotatorValue)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root;
    SerializeFRotator(root, RotatorValue, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}

FString URVPDPRapidJsonFunctionLibrary::SerializeFTransform_Wrapper(FTransform TransformValue)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root;
    SerializeFTransform(root, TransformValue, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}


//------- SERIALIZATION ARRAYS --------//

FString URVPDPRapidJsonFunctionLibrary::SerializeTArrayFColor_Wrapper(const TArray<FColor>& Colors)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root(rapidjson::kArrayType);
    SerializeTArrayFColor(root, Colors, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}

FString URVPDPRapidJsonFunctionLibrary::SerializeTArrayInt_Wrapper(const TArray<int32>& InInts)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root(rapidjson::kArrayType);
    SerializeTArrayInt(root, InInts, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}

FString URVPDPRapidJsonFunctionLibrary::SerializeTArrayUInt8_Wrapper(const TArray<uint8>& InUInt8s)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root(rapidjson::kArrayType);
    SerializeTArrayUInt8(root, InUInt8s, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}

FString URVPDPRapidJsonFunctionLibrary::SerializeTArrayInt64_Wrapper(const TArray<int64>& InInt64s)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root(rapidjson::kArrayType);
    SerializeTArrayInt64(root, InInt64s, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}

FString URVPDPRapidJsonFunctionLibrary::SerializeTArrayFString_Wrapper(const TArray<FString>& InStrings)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root(rapidjson::kArrayType);
    SerializeTArrayFString(root, InStrings, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}

FString URVPDPRapidJsonFunctionLibrary::SerializeTArrayBool_Wrapper(const TArray<bool>& InBools)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root(rapidjson::kArrayType);
    SerializeTArrayBool(root, InBools, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}

FString URVPDPRapidJsonFunctionLibrary::SerializeTArrayFName_Wrapper(const TArray<FName>& InNames)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root(rapidjson::kArrayType);
    SerializeTArrayFName(root, InNames, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}

FString URVPDPRapidJsonFunctionLibrary::SerializeTArrayFText_Wrapper(const TArray<FText>& InTexts)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root(rapidjson::kArrayType);
    SerializeTArrayFText(root, InTexts, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}

FString URVPDPRapidJsonFunctionLibrary::SerializeTArrayFloat_Wrapper(const TArray<float>& inFloats)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root(rapidjson::kArrayType);
    SerializeTArrayFloat(root, inFloats, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}

FString URVPDPRapidJsonFunctionLibrary::SerializeTArrayFVector_Wrapper(const TArray<FVector>& inFVector)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root(rapidjson::kArrayType);
    SerializeTArrayFVector(root, inFVector, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}

FString URVPDPRapidJsonFunctionLibrary::SerializeTArrayFRotator_Wrapper(const TArray<FRotator>& inRotator)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root(rapidjson::kArrayType);
    SerializeTArrayFRotator(root, inRotator, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}

FString URVPDPRapidJsonFunctionLibrary::SerializeTArrayFTransform_Wrapper(const TArray<FTransform>& inTransform)
{
    rapidjson::Document document;
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();
    rapidjson::Value root(rapidjson::kArrayType);
    SerializeTArrayFTransform(root, inTransform, allocator);
    document.Swap(root);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    return FString(buffer.GetString());
}


//------- DE-SERIALIZATION --------//

int32 URVPDPRapidJsonFunctionLibrary::DeserializeInt_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeInt(deserializedDocument);
}

uint8 URVPDPRapidJsonFunctionLibrary::DeserializeUInt8_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeUInt8(deserializedDocument);
}

int64 URVPDPRapidJsonFunctionLibrary::DeserializeInt64_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeInt64(deserializedDocument);
}

FString URVPDPRapidJsonFunctionLibrary::DeserializeFString_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeFString(deserializedDocument);
}

FColor URVPDPRapidJsonFunctionLibrary::DeserializeFColor_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeFColor(deserializedDocument);
}

bool URVPDPRapidJsonFunctionLibrary::DeserializeBool_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeBool(deserializedDocument);
}

FName URVPDPRapidJsonFunctionLibrary::DeserializeFName_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeFName(deserializedDocument);
}

FText URVPDPRapidJsonFunctionLibrary::DeserializeFText_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeFText(deserializedDocument);
}

float URVPDPRapidJsonFunctionLibrary::DeserializeFloat_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeFloat(deserializedDocument);
}

FVector URVPDPRapidJsonFunctionLibrary::DeserializeFVector_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeFVector(deserializedDocument);
}

FRotator URVPDPRapidJsonFunctionLibrary::DeserializeFRotator_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeFRotator(deserializedDocument);
}

FTransform URVPDPRapidJsonFunctionLibrary::DeserializeFTransform_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeFTransform(deserializedDocument);
}


//------- DE-SERIALIZATION ARRAYS --------//

TArray<FColor> URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFColor_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeTArrayFColor(deserializedDocument);
}

TArray<int32> URVPDPRapidJsonFunctionLibrary::DeserializeTArrayInt_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeTArrayInt(deserializedDocument);
}

TArray<uint8> URVPDPRapidJsonFunctionLibrary::DeserializeTArrayUInt8_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeTArrayUInt8(deserializedDocument);
}

TArray<int64> URVPDPRapidJsonFunctionLibrary::DeserializeTArrayInt64_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeTArrayInt64(deserializedDocument);
}

TArray<FString> URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFString_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeTArrayFString(deserializedDocument);
}

TArray<bool> URVPDPRapidJsonFunctionLibrary::DeserializeTArrayBool_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeTArrayBool(deserializedDocument);
}

TArray<FName> URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFName_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeTArrayFName(deserializedDocument);
}

TArray<FText> URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFText_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeTArrayFText(deserializedDocument);
}

TArray<float> URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFloat_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeTArrayFloat(deserializedDocument);
}

TArray<FVector> URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFVector_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeTArrayFVector(deserializedDocument);
}

TArray<FRotator> URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFRotator_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeTArrayFRotator(deserializedDocument);
}

TArray<FTransform> URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFTransform_Wrapper(const FString& JsonString)
{
    rapidjson::Document deserializedDocument;
    deserializedDocument.Parse(TCHAR_TO_UTF8(*JsonString));
    return DeserializeTArrayFTransform(deserializedDocument);
}
