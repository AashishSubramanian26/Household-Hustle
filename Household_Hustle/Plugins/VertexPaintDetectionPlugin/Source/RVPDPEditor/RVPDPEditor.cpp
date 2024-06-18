// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#include "RVPDPEditor.h"
#include "RVPDPUpdatePopUp.h"

#define LOCTEXT_NAMESPACE "FRVPDPEditorModule"

void FRVPDPEditorModule::StartupModule()
{
	UE_LOG(LogTemp, Log, TEXT("Runtime Vertex Paint and Detection Plugin - Editor Module Startup!"));

	RVPDPUpdatePopUp::Register();
}

void FRVPDPEditorModule::ShutdownModule()
{
	UE_LOG(LogTemp, Log, TEXT("Runtime Vertex Paint and Detection Plugin - Editor Module Shutdown!"));
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FRVPDPEditorModule, RVPDPEditorModule)