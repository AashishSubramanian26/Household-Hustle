// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "LatentActions.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
// #include "SerializationAsyncTask.h" // Include if we need to acually call something in it.


struct FRVPDPSerializationAsyncTask;


class FRVPDPRapidJsonLatentActionBase : public FPendingLatentAction {

protected:
    FWeakObjectPtr CallbackTarget;
    FLatentActionInfo LatentInfo;
    bool bIsCompleted;

public:

    FRVPDPRapidJsonLatentActionBase(const FLatentActionInfo& latentInfo, FRVPDPSerializationAsyncTask* serializationAsyncTask)
        : CallbackTarget(latentInfo.CallbackTarget), LatentInfo(latentInfo), bIsCompleted(false)
    {}

    void MarkAsCompleted() {

        bIsCompleted = true;
    }

    virtual void UpdateOperation(FLatentResponse& Response) override {

        Response.FinishAndTriggerIf(bIsCompleted, LatentInfo.ExecutionFunction, LatentInfo.Linkage, CallbackTarget);
    }

#if WITH_EDITOR
    virtual FString GetDescription() const override {

        return TEXT("Rapid Json Latent Action");
    }
#endif
};