// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#include "VertexPaintBaseLatentAction.h"



class FGetColorSnippetColorsLatentAction : public FVertexPaintBaseLatentAction {

public:

    
    FGetColorSnippetColorsLatentAction(const FLatentActionInfo& latentInfo)
        : FVertexPaintBaseLatentAction(latentInfo) {

        // Initialization for this specific latent action child
    }

    virtual void UpdateOperation(FLatentResponse& Response) override {

        FVertexPaintBaseLatentAction::UpdateOperation(Response);

        // Update logic for this specific Latent Action child
    }
    

#if WITH_EDITOR
    virtual FString GetDescription() const override
    {
        return TEXT("Get Color Snippet Vertex Colors Latent Action");
    }
#endif
};