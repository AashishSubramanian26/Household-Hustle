// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RVPDPUpdateConfig.generated.h"


UCLASS(config = EditorPerProjectUserSettings)
class RVPDPEDITOR_API URVPDPUpdateConfig : public UDeveloperSettings {

	GENERATED_BODY()

public:

	UPROPERTY(config)
		FString PluginVersionUpdate = "";
};
