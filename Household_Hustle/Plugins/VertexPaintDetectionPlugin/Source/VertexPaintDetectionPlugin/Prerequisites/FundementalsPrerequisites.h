// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "VertexPaintDetectionLog.h"
#include "CompareMeshColorsPrerequisites.h"
#include "FundementalsPrerequisites.generated.h" 


//-------------------------------------------------------

// Multi Thread Settings 

USTRUCT(BlueprintType)
struct FVertexPaintMultiThreadSettingsStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Whether to use Multithreading for Calculations instead of using Game Thread. Is recommended since you get will get better FPS. Each Mesh will have their own Calculation Task queue where each paint job is based off of the result of the previous. Detection Jobs will be set to be first in the queue so they will run the fastest. "))
	bool useMultithreadingForCalculations = true;
};


//-------------------------------------------------------

// Include Amount Of Painted Colors Of Each Channel

USTRUCT(BlueprintType)
struct FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel {

	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we should get the Percent, Average Amount, and How many vertices on each RGBA Vertex Color Channel, so you can for instance check if the Red Channel has is over a certain %. \n This is really useful if you have something like splaboon, where you want to know, how much in Percent of Red and Blue is on this Mesh above this minimum amount. \nNOTE That if True and if we're running a paint/detect job that usually doesn't have to loop through the vertices, like Get All Colors Only, SetMeshComponentColors, or Paint Color Snippet, then this will make it loop through the vertices so we can get the data, meaning with this included those task types may take a tiny bit longer to finish. Not as long as a regular task like Paint at Location since we're not looping through Sections etc. though. "))
		bool includeVertexColorChannelResultOfEachChannel = true;
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If True then we will get the Percent, Amount and Average Amount for every Physics Surface that was registered to each color channel on the Mesh Materials, so you can for instance get that Sand had X %, and X amount of Vertices etc. In the callback results the first in the TMap will be the one with the highest %. \nNOTE that if this is true, then the task may take roughly 25% longer time to finish since it requires a few more loops for every vertex, and paint/detect jobs that usually don't need to loop through sections of the mesh like Get All Colors Only, Paint Color Snippet or Paint Entire Mesh with Set, will have to do so, meaning with this true the task will take just as long as a regular Paint at Location that has this to true for instance. "))
		bool includePhysicsSurfaceResultOfEachChannel = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If Min this Amount of color value on R, G, B or A then they will be included. So if you for instance want to check if something is fully painted on a channel, then you can set this to like 0.999"))
		float includeIfMinColorAmountIs = 0.01;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we should optionally Only include results on channels that has either of these surfaces registered, or is a part of their family. For instance if you have a Physics Surface Family Parent Registered as Wet, and a Cobble-Puddle as child, then you can add Wet here and even if the Material has Cobble-Puddle on it that will be included. \nUseful if you're looking for the results of a specific physics surface and don't care about anything else. "))
		TArray<TEnumAsByte<EPhysicalSurface>> includeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel;
};


//-------------------------------------------------------

// Event Settings

USTRUCT(BlueprintType)
struct FVertexDetectEventSettings {

	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we should run the Paint Components Callback Delegate whether the Task was a Success / Fail. "))
	bool runCallbackDelegate = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we should run the interface on the Object. If objectToRunInterfacesOn is null then default it to run the interface on the Actor we Paint/Detect On. "))
	bool runCallbackInterfacesOnObject = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If Null then will default to run Interfaces on the Actor we Painted/Detected, but you can change if it should run on another object. Useful if you for instance have some sort of manager in the level that you want to callbacks to run on when you paint regular static meshes in the level. "))
	UObject* objectToRunInterfacesOn = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If objectToRunInterfacesOn is an Actor which can have Components, then if we should run the Paint/Detect Interfaces on the Components of that Actor as well. If it's null then it will default to the actor painted/detect on. "))
	bool runCallbackInterfacesOnObjectComponents = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we only return data for LOD0. This can save performance if the mesh is extremely heavy. There was a noticable difference on a mesh that had 980k vertices if only returned LOD0 and not the other LODs. Should only be false if you actually plan on using the data for the other LODs. "))
	bool includeVertexDataOnlyForLOD0 = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If looping through all vertices then will get the colors of each bone at LOD0 as well and include it in the callback settings. \nIf True and it is a Task that by default don't loop through vertices like Paint Color Snippet, Paint Entire Mesh with Set, or Detect with GetColorsOnly, then this will still make it loop through the vertices afterwards so it can get data for this. So those tasks that are usually extremely quick will take a bit longer to calculate if this is true, so only recommend setting to true if you actually need the data. "))
	bool includeColorsOfEachBone = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we set amount of vertices that had color for each channel, and amount of percent each channel has as well. Really useful if you have something like splaboon, where you want to know, how much in Percent of Red and Blue is on this Mesh. \nNote that if we're running a paint job that doesn't have to loop through the vertices, like Detect with Get Colors Only, or Paint Color Snippet, then this will make it loop through the vertices after so it can correctly fill the struct. This means that a task like Paint Color Snippet that is usually extremely quick can take a bit longer to finish, unlike tasks like Paint at Location which won't get their calculation speed affected since they're already looping through the Vertices. "))
	FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel includeAmountOfPaintedColorsOfEachChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "With this you can get the Matching Percent between the Meshes Current Vertex Colors (If paint job then colors after paint was applied) and the ones we send in here. \n\nThis is useful if you for instance have a Drawing Game, or a Tutorial where the player has to fill in a pattern that has been pre-filled, or just Mimick the pattern an AI is painting. "))
	FVertexDetectCompareMeshColorsToColorArrayStruct compareMeshColorsToColorArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we include the color data, if false, we can save some performance if the mesh is extremely heavy. There was a noticable difference on a mesh that had 980k vert, but if it's just 50k or so there's not much difference.  "))
	bool includeVertexColorData = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If true then we will Serialize the Color Array for each LOD and return an array of strings, each representing color data for each LOD that can be De-Serialized to get the Color Data in Array format again. "))
	bool includeSerializedVertexColorData = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we include the position data, if false, we can save some performance if the mesh is extremely heavy. There was a noticable difference on a mesh that had 980k vertices if we didn't include everything. \nIf True and it is a Task that by default don't loop through all vertices, like Paint Color Snippet, Paint Entire Mesh with Set, or Detect with GetColorsOnly, then this will still make it loop through the vertices afterwards so it can get data for this. Only recommend setting to true if you actually need the data. "))
	bool includeVertexPositionData = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If we include the Normal data, if false, we can save some performance if the mesh is extremely heavy. There was a noticable difference on a mesh that had 980k vertices if we didn't include everything. \nIf True and it is a Task that by default don't loop through vertices like Paint Color Snippet, Paint Entire Mesh with Set, or Detect with GetColorsOnly, then this will still make it loop through the vertices afterwards so it can get data for this. Only recommend setting to true if you actually need the data. "))
	bool includeVertexNormalData = false;
};


//-------------------------------------------------------

// Get Average Color

USTRUCT(BlueprintType)
struct FVertexDetectGetAverageColorStruct {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Range we will get the average colors from. Has to be above 0 to get the average color. "))
	float areaRangeToGetAvarageColorFrom = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If the Vertex Normal and Hit Normal Dot is Min this then takes that vertex colors into account. -1 will take all vertices in the area into account, 1 only the vertices that has the same normal as the Hit Normal. So if you for instance want to get the average of one side of a wall, then you could have it to be 1, otherwise if it's -1 then it will take the vertices on the other side of the wall as well. "))
	float VertexNormalToHitNormal_MinimumDotProductToBeAccountedFor = -1;
};


//-------------------------------------------------------

// Fundemental Struct

USTRUCT(BlueprintType)
struct FVertexDetectFundementalStruct {

	GENERATED_BODY()


	void SetPaintDetectionFundementals(FVertexDetectFundementalStruct fundementals) {

		actor = fundementals.actor;
		meshComponent = fundementals.meshComponent;
		multiThreadSettings = fundementals.multiThreadSettings;
		callbackSettings = fundementals.callbackSettings;
		debugSettings = fundementals.debugSettings;
		taskWorld = fundementals.taskWorld;
		componentItem = fundementals.componentItem;
	}


	UPROPERTY()
	UWorld* taskWorld = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Actor to Paint / Detect"))
	AActor* actor = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Skeletal or Static Mesh Component to Paint / Detect"))
	UPrimitiveComponent* meshComponent = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "This is used if it was an Instanced Mesh, for example Foliage, so we can get the specific instance and check the correct location from it. You can get this from Trace Hit or Overlap Events. \nIf you're not using Instanced Meshes then you don't have to bother with this at all. "))
	int componentItem = -1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "You can set what you can to return. If you're Painting / Detecting on extremely large meshes like 1 million vertices big, then it can make a bit difference if you don't return any colors, position and normals. "))
	FVertexDetectEventSettings callbackSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "Recommend running with Multithreading True so the game thread doesn't get affected by the Paint/Detect Job, meaning your FPS won't get affected as much. Remember to be aware of the Paint Task Queue, if you for instance paint every single frame on a very heavy mesh, then it won't have time to finish one task before another is being added to the queue, which means it will grow very large and you won't see the difference of your paint input until we get to that task, which may take a few seconds if the queue has grown very large. \nDepending on what you're doing you can have a small delay if painting every frame, so you paint every other frame, or you can add the next task when the current task is finished since you get a callback event. "))
	FVertexPaintMultiThreadSettingsStruct multiThreadSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "If True, we ignore the task queue limit that's set in the Project Settings. It's not recommended to change this, as we don't want the task queue to grow to large as it will affect performance and quality if it becomes to big, if it grows extremely large than you should review the implementation where you paint/detect colors. \n\nThis is mostly for things like Save/Load Systems, where if you want to Load a Saved Game and have saved vertex colors on a bunch of Meshes, and need to queue up possibly several hundreds of paint tasks but just once. "))
	bool ignoreTaskQueueLimit = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Vertex Paint and Detection Plugin", meta = (ToolTip = "The Debug Settings for the Task, you can hover over each one to read more about it! \nNOTE Some may require you to turn off multithreading for the task job, since we can't draw debug symbols on an async thread.  "))
	FVertexPaintDebugSettings debugSettings;
};


//-------------------------------------------------------

// Vertex Detect Info

USTRUCT(BlueprintType)
struct FVertexDetectStruct : public FVertexDetectFundementalStruct {

	GENERATED_BODY()

	// Add anything all Detect Tasks shares here
};

