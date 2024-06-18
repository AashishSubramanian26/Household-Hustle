// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once
#include "Framework/Text/SlateHyperlinkRun.h"

class RVPDPUpdatePopUp {

public:

	static void Register();
	static void Open();
	static void OnBrowserLinkClicked(const FSlateHyperlinkRun::FMetadata& Metadata);
};
