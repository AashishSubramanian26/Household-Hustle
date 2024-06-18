#include "VertexPaintDetectionLog.h"
#include "Kismet/KismetSystemLibrary.h"


DEFINE_LOG_CATEGORY(RuntimeVertexColorPlugin);


void VertexPaintDetectionLog::PrintVertexPaintDetectionLog(const FVertexPaintDebugSettings& DebugSettings, const FColor& ScreenTextColor, const FString& Text) {

    const UObject* taskWorld = reinterpret_cast<const UObject*>(DebugSettings.worldTaskWasCreatedIn);

    if (DebugSettings.printLogsToScreen && IsInGameThread() && IsValid(taskWorld))
        UKismetSystemLibrary::PrintString(taskWorld, Text, true, false, ScreenTextColor, DebugSettings.printLogsToScreen_Duration);

    if (DebugSettings.printLogsToOutputLog)
        UE_LOG(RuntimeVertexColorPlugin, Log, TEXT("%s"), *Text);
}