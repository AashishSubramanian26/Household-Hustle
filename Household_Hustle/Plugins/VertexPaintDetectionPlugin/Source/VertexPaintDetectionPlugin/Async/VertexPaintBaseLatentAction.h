// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "LatentActions.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"


class FVertexPaintBaseLatentAction : public FPendingLatentAction {

protected:
    FWeakObjectPtr CallbackTarget;
    FLatentActionInfo LatentInfo;
    bool bIsCompleted;

public:

    FVertexPaintBaseLatentAction(const FLatentActionInfo& latentInfo)
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

        return TEXT("Runtime Vertex Paint & Detection Plugin Latent Action");
    }
#endif

};