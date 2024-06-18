// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#include "VertexPaintBaseLatentAction.h"
// #include "ColorsOfEachChannelAsyncTask.h" // Can include this if we need to actually access anything in the async task


struct FColorsOfEachChannelAsyncTask;

class FColorsOfEachChannelLatentAction : public FVertexPaintBaseLatentAction {

public:

    
    FColorsOfEachChannelLatentAction(const FLatentActionInfo& latentInfo, FColorsOfEachChannelAsyncTask* InTask)
        : FVertexPaintBaseLatentAction(latentInfo), colorsOfEachChannelAsyncTask(InTask) {

        // Initialization for this specific latent action child
    }

    virtual void UpdateOperation(FLatentResponse& Response) override {

        FVertexPaintBaseLatentAction::UpdateOperation(Response);

        // Update logic for this specific Latent Action child
    }
    

#if WITH_EDITOR
    virtual FString GetDescription() const override
    {
        return TEXT("Get Amount Of Painted Colors For Each Channel Latent Action");
    }
#endif

private:

    FColorsOfEachChannelAsyncTask* colorsOfEachChannelAsyncTask;
};