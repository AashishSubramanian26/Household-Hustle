// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "VertexPaintDetectionLog.generated.h"


class UWorld;


//-------------------------------------------------------

// Task Specific Debug Symbols Settings

USTRUCT(BlueprintType)
struct FVertexPaintTaskSpecificDebugSymbolsSettings {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin|Debug Settings|Paint Within Area Symbols", meta = (ToolTip = "This will Draw any Debug Symbols Related to the Task being done, for example the Bounds that we use if it's a Paint Within Area Task. "))
	bool drawTaskDebugSymbols = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin|Debug Settings|Paint Within Area Symbols")
	float drawTaskDebugSymbolsDuration = 0.15f;
};


//-------------------------------------------------------

// Game Thread Specific Debug Settings

USTRUCT(BlueprintType)
struct FVertexPaintGameThreadSpecificDebugSettings {

	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin|Debug Settings|Vertex Symbols", meta = (ToolTip = "Draws a Debug Point for Each Vertex of the Mesh. \nNOTE! Only possible if running the Paint Job with Multithreading set to False, and can be quite expensive if the Mesh has a lot of Vertices. "))
	bool drawVertexPositionDebugPoint = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin|Debug Settings|Vertex Symbols", meta = (ToolTip = "Draws a Debug Point for the Vertex of the Mesh that got paint applied. \nNOTE! Only possible if running the Paint Job with Multithreading set to False, and can be quite expensive if the Mesh has a lot of Vertices. "))
	bool drawVertexPositionDebugPointIfGotPaintApplied = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin|Debug Settings|Vertex Symbols", meta = (ToolTip = "Draws a Debug Point for Each Vertex of Cloths of the Mesh we're looping through. \nNOTE! Only possible if running the Paint Job with Multithreading set to False, and can be quite expensive if the Cloth has a lot of Vertices. "))
	bool drawClothVertexPositionDebugPoint = false;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin|Debug Settings|Vertex Symbols", meta = (ToolTip = "Draws a Debug Arrow for each Vertex Normal. \nNOTE! Only possible if running the Paint Job with Multithreading set to False, and can be quite expensive if the Mesh has a lot of Vertices. "))
	bool drawVertexNormalDebugArrow = false;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin|Debug Settings|Paint Condition Symbols", meta = (ToolTip = "This will draw any debug symbols for paint conditions used, if the paint condition has any. For instance Line of Sight Condition will draw a Line to indicate if it has line of sight or if blocked etc. \nNOTE! Only possible if running the Paint Job with Multithreading set to False, and can be quite expensive if the Mesh has a lot of Vertices. "))
	bool drawPaintConditionsDebugSymbols = false;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin|Debug Settings|Vertex Symbols", meta = (ToolTip = "Duration of the Drawn Vertex Points. Can be very low if you're painting every frame. "))
	float drawGameThreadSpecificDebugSymbolsDuration = 0.15;
};


//-------------------------------------------------------

// Debug Settings

USTRUCT(BlueprintType)
struct FVertexPaintDebugSettings {

	GENERATED_BODY()

	
	FVertexPaintDebugSettings()
		: worldTaskWasCreatedIn(nullptr),
		printLogsToScreen(false),
		printLogsToScreen_Duration(5),
		printLogsToOutputLog(false) {}

	FVertexPaintDebugSettings(bool printToScreen, float printToScreenDuration, bool printToOutputLog)
		: worldTaskWasCreatedIn(nullptr),
		printLogsToScreen(printToScreen),
		printLogsToScreen_Duration(printToScreenDuration),
		printLogsToOutputLog(printToOutputLog) {}


	UPROPERTY()
	UWorld* worldTaskWasCreatedIn = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin|Debug Settings|Logs", meta = (ToolTip = "If should print logs to screen."))
	bool printLogsToScreen = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin|Debug Settings|Logs", meta = (ToolTip = "Duration of the Print Strings on the Screen"))
	float printLogsToScreen_Duration = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin|Debug Settings|Logs", meta = (ToolTip = "If should print logs to output log."))
	bool printLogsToOutputLog = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin|Debug Settings|Vertex Symbols", meta = (ToolTip = "Has options for drawing debug symbols for each vertex and paint conditions. Will only be visible if the task is run on the Game Thread, i.e. Multithreading set to false. "))
	FVertexPaintGameThreadSpecificDebugSettings gameThreadSpecificDebugSymbols;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin|Debug Settings|Paint Within Area Symbols", meta = (ToolTip = "This will Draw any Debug Symbols Related to the Task being done, for example the Bounds that we use if it's a Paint Within Area Task. "))
	FVertexPaintTaskSpecificDebugSymbolsSettings taskSpecificDebugSymbols;
};



DECLARE_LOG_CATEGORY_EXTERN(RuntimeVertexColorPlugin, Log, All);


#define RVPDP_LOG(DebugSettings, ScreenTextColor, Format, ...) \
    VertexPaintDetectionLog::PrintVertexPaintDetectionLog(DebugSettings, ScreenTextColor, FString::Printf(TEXT(Format), ##__VA_ARGS__))



class VertexPaintDetectionLog {

public:

	static void PrintVertexPaintDetectionLog(const FVertexPaintDebugSettings& DebugSettings, const FColor& ScreenTextColor, const FString& Text);

};