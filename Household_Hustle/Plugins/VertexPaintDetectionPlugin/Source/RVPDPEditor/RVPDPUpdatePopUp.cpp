// Copyright 2024 Alexander Floden, Alias Alex River. All Rights Reserved. 

#include "RVPDPUpdatePopUp.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Text/SRichTextBlock.h"
#include "SWebBrowser.h"
#include "Interfaces/IPluginManager.h"
#include "EditorStyleSet.h"
#include "RVPDPUpdateConfig.h"


//--------------------------------------------------------

// On Browser Link Clicked

void RVPDPUpdatePopUp::OnBrowserLinkClicked(const FSlateHyperlinkRun::FMetadata& Metadata) {

	const FString* URL = Metadata.Find(TEXT("href"));

	if (URL)
	{
		FPlatformProcess::LaunchURL(**URL, nullptr, nullptr);
	}
}


//--------------------------------------------------------

// Register

void RVPDPUpdatePopUp::Register() {

	
	URVPDPUpdateConfig* updatePopupConfig = GetMutableDefault<URVPDPUpdateConfig>();

	if (updatePopupConfig) {


		IPluginManager& PluginManager = IPluginManager::Get();
		auto pluginTemp = PluginManager.FindPlugin(TEXT("VertexPaintDetectionPlugin"));


		if (pluginTemp.IsValid()) {

			const FString UpdatedConfigFile = pluginTemp.Get()->GetBaseDir() + "/Config/UpdateConfig.ini";

			if (FPaths::FileExists(UpdatedConfigFile)) {

				updatePopupConfig->LoadConfig(nullptr, *UpdatedConfigFile);
			}

			else {

				updatePopupConfig->SaveConfig(CPF_Config, *UpdatedConfigFile);
			}


			const FPluginDescriptor& Descriptor = pluginTemp.Get()->GetDescriptor();

			if (Descriptor.VersionName != updatePopupConfig->PluginVersionUpdate) {

				updatePopupConfig->PluginVersionUpdate = Descriptor.VersionName;
				updatePopupConfig->SaveConfig(CPF_Config, *UpdatedConfigFile);

				FCoreDelegates::OnPostEngineInit.AddLambda([]() {
					Open();
				});
			}
		}
	}
}


//--------------------------------------------------------

// Open

void RVPDPUpdatePopUp::Open() {

	if (!FSlateApplication::Get().CanDisplayWindows())
	{
		return;
	}

	TSharedRef<SBorder> WindowContent = SNew(SBorder)
		.BorderImage(FCoreStyle::Get().GetBrush("ToolPanel.GroupBorder"))
		.Padding(FMargin(8.0f, 8.0f));

	TSharedPtr<SWindow> Window = SNew(SWindow)
		.AutoCenter(EAutoCenter::PreferredWorkArea)
		.SupportsMaximize(false)
		.SupportsMinimize(false)
		.SizingRule(ESizingRule::FixedSize)
		.ClientSize(FVector2D(700, 600))
		.Title(FText::FromString("Runtime Vertex Paint & Detection Plugin"))
		.IsTopmostWindow(true)
		[
			WindowContent
		];

	const FSlateFontInfo HeadingFont = FCoreStyle::GetDefaultFontStyle("Regular", 24);
	const FSlateFontInfo ContentFont = FCoreStyle::GetDefaultFontStyle("Regular", 12);

	TSharedRef<SVerticalBox> InnerContent = SNew(SVerticalBox)
		// Default settings example
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(10)
		[
			SNew(STextBlock)
			.Font(HeadingFont)
		.Text(FText::FromString("Runtime Vertex Paint & Detection Plugin"))
		]
	+ SVerticalBox::Slot()
		.FillHeight(1.0)
		.Padding(10)
		[
			SNew(SBorder)
			.Padding(10)

#if ENGINE_MAJOR_VERSION == 4

		.BorderImage(FEditorStyle::GetBrush("ToolPanel.DarkGroupBorder"))

#elif ENGINE_MAJOR_VERSION == 5

	#if ENGINE_MINOR_VERSION == 0

		.BorderImage(FEditorStyle::GetBrush("ToolPanel.DarkGroupBorder"))

	#else

		.BorderImage(FAppStyle::GetBrush("ToolPanel.DarkGroupBorder"))

	#endif
#endif

		[
			SNew(SScrollBox)
			+ SScrollBox::Slot()
		[
			SNew(SRichTextBlock)
			.Text(FText::FromString(R"(
<LargeText>Thank you for using Runtime Vertex Paint & Detection Plugin!</>

If you are new to the Plugin then check out the <a id="browser" href="https://youtu.be/UHX0zzDwP9M">Video Tutorial</> which can help you get started more quickly! The <a id="browser" href="https://docs.google.com/document/d/1bIarYezV921XkSbbZ8Pknla_4qEqKlY_NHvVwIYHGks/edit?usp=sharing">Documentation </> can also give you a better understanding of the plugin works. You can also join the <a id="browser" href="https://discord.gg/YkxMsxb4eP">Discord </> if you need any help or just want to share your work!

If you enjoy the plugin then please consider leaving a <a id="browser" href="https://www.unrealengine.com/marketplace/en-US/product/runtime-vertex-color-paint-detection-plugin">Review on the Marketplace Page</>, as it really helps the plugin alot! <3  



<LargeText>Version 1.23.2</>

<RichTextBlock.Bold>Stability and Clean Up</>

-Removed old BPC_RuntimeVertexPaintPaintComponent as it was deprecated a while back, as well as the Vehicle Wheel variant from the plugin since it has been moved to the Example Project. 

-Re-Structed so Editor Utility folder is cleaner with better names.


<RichTextBlock.Bold>Bug Fixes</>

-Fixed bug where if GetClosestVertexData on skeletal meshes, and not set to loop through all vertices, i.e. include posiion, normal etc. was false. Then we didn't loop through All of the sections of the hit bone, but just the first one. Meaning you didn't necessarily get the correct material etc. 

-Fixed issue with Paint & Get Colors Within Area regarding logic that converted the componente to check if within from local then back to world coordinates when the task actually starts where depending on how long it took to start.

-Increased the delay until we delete old vertex buffers after releasing the, to 1 second instead of 0.5 since one user reported he got a "A FRenderResource was deleted without being released first!" crash that could be related to that. 


<RichTextBlock.Bold>Auto Paint Component</>

Many small bug fixes and optimizations that was discovered as i'm making a proper Wet and Drying showcase with many physics objects. Also added more options in it to give further control of its behaviour. 

-Added option in within area auto component to check if rotation and scale  was changed as well. 

-Added to old onlyStartNewRoundOfTasksIfAllHasBeenFinished, useful for stuff like Centralized Drying, like if you have a bunch of Meshes in a lake, with different vertices and durations where their task finishes. With it, then they can all dry equally fast since we only start a new dry paint job if all is finished. 

-Added option in auto paint settings if it should stop auto painting if fully painted or empty, which can be useful if you have centralized handling drying, that want to clear up any fully dried meshes from the list that's not relevant anymore. 

-Added so auto paint component can Pause and Resume Auto Painting a Mesh. Useful if you want to control more of when it should be run.

-Removed Initial Delay thing since we can now pause the task so didn't see the purpose of using the initial delay anymore.

-Added much more logs. 


<RichTextBlock.Bold>Bug Fixes</>

-Updated Drying in Example Project to be handled at a centralized location in the Game State, which means we can sync so everything that is wet can dry at the same speed since the auto paint entire mesh component is set to only start a new round of tasks when all is done. It will also clear up any completely dry meshes so it only has relevant ones. 
This should be a more future proof solution if you want several things in the world, both heavy and light to get wet and dry and be in sync. 

-Updated the Paint Within Area Vertex Light Example to make use of auto paint within area component for more cleaner logic. 



<LargeText>Version 1.23</>

<RichTextBlock.Bold>Feature</>

-Added so in Apply Vertex Color Struct the 4 color channels uses a struct where we've moved the amount to apply and paint condition in, and moved so for each channel you can set if it should Add or Set. 

-Added so for every vertex channel and physics surface you can in the struct mentioned above set if you should Lerp to a Target value, and how fast we should lerp to it. Then no matter what color value the vertex has, it will lerp toward that. 

-Added so in the vertex channel struct and apply physics surface struct, you can set a color value to lerp to, and with a strength.



<RichTextBlock.Bold>Bug Fixes</>

-Pretty big fix by having event delegates from paint components and game instance also be const refs. Can't believe i've missed that one all this time :S
So all C++ users who have made bindings will have to make sure to refresh those with const &
And blueprint users will also have refresh events if they're not hardwired to a component, i.e. you're binding with a Bind Event Node and Create Event. 
But you can just select the old event you had and open the parameters and check Pass-by-Reference. 
Set the interfaces to also be const refs. 

-Fixed bug where if paint entire mesh and there's nothing that should make the taks loop through all of the vertices, it still did it, making the task not finish as fast as it should. 

-Fixed bug with Task Queue where if ran a paint job that should clear the queue for the mesh since previosu tasks isn't relevant anymore, such as color snippet or set mesh component colors, then they didn't do it properly. This caused an issue where the paint component kept the task cached as well. 

-Fixed issue if it was a paint & detect combo, we added the task to the detec task queue instead of the intended paint task queue. 

-Fixed issue with latent actions GetAmountOfPaintedColorsForEachChannelAsync and UpdateChaosClothPhysicsWithExistingColorsAsync where the lambda was triggered on the async thread and not the game thread. With the update chaos cloth one, this could cause crash. 

-Fixed compile issue for Linux

-Fixed issue in 5.4 if you had source build where one user said it complainted about a missing .Get() in CalcAABBWithoutUniformCheck. 

+ many other small stuff here and there. 



<RichTextBlock.Bold>Optimization, Stability and Clean Up</>

-Optimized by making sure the amountOfPaintedColorsOfEachChannelAbove0_BeforeApplyingColor only gets filled if actually debugging, since it's only used for logging and nothing else. 

-Cleanup in the Calculate Colors Async Task where more stuff is broken down into functions and properties are better structured, also so functions run for every vertex are inlined just in case. Also removed so some floats, ints and bool isn't const refs since it was actually heavier for them. 

-Split up Structs and Enums into seperate prerequisite files of each feature so it's much much cleaner

-Cleaned up some structs such as FVertexDetectPhysicsSurfaceDataStruct_AtBlue Red Alpha etc. which can just be one struct. 

+ many other small stuff here and there. 



<RichTextBlock.Bold>Misc</>

-Did a big improvement pass to the Auto Paint Component. Removed auto paint component onlyStartNewTaskIfCompletelyFinished since it actually doesn't make sense that all tasks of the paint component has to be finished for it to queue up another task, as long as it only queues up 1 for each mesh it should be fine for the task queue to not get out of hand. Some optimizations, fixed various bugs, fixed so it only ticks when it needs to etc. 
Added option to have an initial delay, where if the mesh isn't actively painted then there can be a initial delay before it starts getting auto painted. Useful if for instance diving into water where you don't want the drying auto painting to start immediately. 

-Finally made a proper debug macro for the plugin that can print to the log and the screen and with specific color, so exchanged All of the debug functions for this and made a Log class that handles the logging and defining of the macro. 

-Removed Paint Physics Surface setting paintConditionsOnChannelsWithoutThePhysicsSurface, since it was just un-user friendly to user and confusing. It's enough with just one list of conditions, and in it you can set if we should meet conditions to apply any colors, the strength if the condition is not meet etc. 

-Made properties in paint component and auto paint component be protected instead of private.



<RichTextBlock.Bold>Example Project</>

-Added Lerp to Color Value Example Puddle in the level. 

-Moved the VehicleWheel paint component back to the Example Project so the plugin is much cleaner from "bonus" or to specific things. If anyone wants to use that example component they can just get it from the example project. Marked the old one as deprecated and it will be deleted in a later patch. 

-Re-did so instead of having a VFX Config Data Asset where we register the instigator and physics surfaces and VFX for each one, we instead do it in the custom Physical material Class for each different one, making it easier to config up since if you want to make changes for a physical material you just go into it. Then using a function library SpawnFX function we can much more cleanly call FX for footsteps or vehicles when its driving over surfaces. 
Just make sure you include all the physical materials when cooking, you can add additional folders to cook which i did for example project. 

-Did a pass at replication and fixed some places here and there since it's been a while and some bugs had creeped up. 


<LargeText>Version 1.21.3</>

<RichTextBlock.Bold>New Features</>

-5.4 Support!

-Added Paint Condition Only Affect Vertices Within Direction From Actor Or Location, which means you can essentially paint with Cone Shape if you just set a location to base it on, and a direction, then the dot from -1 to 1 where 1 would make vertices at the Exact center be affected, 0.5 a bit wider, 0 all those from the side of the direction and forward etc. What is great about conditions is that if the condition is a success you can paint one color, if not you can paint another color, meaning anyting outside of the cone can be painted with something else. 

-Moved Only Affect Vertices With Direction to Actor or Location Paint Condition to be a Paint Condition as well. The difference between this and the one on top is that this checks the Vertex Direction, and if It is toward a location. 

-Made the option for the user to use the Max amount of cores possible for Multithreading in the Plugins category in the Project Settings, which may be benificial for a game focusing entirely on it and doesn't have any other heavy things going on, like a Tatoo game or something. 


<LargeText>Version 1.21</>

<RichTextBlock.Bold>New Features</>

-Added so we can run GetColorsWithinArea combo when running Paint Within Area, so we can get the colors Before applying them with paint within area. Useful if you want to see the actual difference that was made with the Paint Within Area paint job. 

-Added so you can limit the falloff to a certain amount, where we lerp the max amount of paint the paint job can make up until that point, to always have nice falloffs at the top of a paint within area for example. Very useful for stuff like Lakes, where you can now always has a nice falloff on the top side. See the WaterBody in the Example Project for example. 


<LargeText>Version 1.20</>

<RichTextBlock.Bold>New Features</>

-Added so Paint Within Area Returns Within Area Results, such as the colors, position, normals, % etc. of the vertices that was within the area, if the user has set to do so in the witin area settings when running the paint job. There has been some restructuring so please review all Paint Within Area Tasks. 

-Added Get Colors Within Area Feature so you can now get the colors, positions, normals of the vertices within the area, as well as the amount, average and % etc. 

-Added so you can compare a mesh vertex colors to a stored color snippet when painting or detecting, may make the compare feature even more useful since you can actually make color snippets of a pattern, or a tatoo or something similar, then compare it to that when the player makes their paint jobs and see how close they are. The Example Project has some example of this in the corner where the paintable surfaces are. 

-Added support so you can Create Group Snippets for several selected Meshes. This is so you can for instance select several skeletal mesh comps, and paint and store your snippet comfortable for all of them, where they will be marked as group snippet. Then when we paint, we can paint a group snippet, where it will make sure to paint the correct snippet on the correct mesh of the ones we send in, if they have the correct relative location and rotation to one another.
  Useful for modular characters that's made up of several skeletal meshes, or for static meshes where you may just want more detail like paintings. Check out the example project in the color snippet corner. 
If you are using snippets please open and then close the Editor Widget to allow for old snippets to get re-saved with the refactored back-end. 


<LargeText>Version 1.19.1</>

<RichTextBlock.Bold>New Features</>

-Added new Paint Condition IfAboveOrBelowWorldZ, which the Third Person Character uses with the Auto Add Color component, that dries the character but only Above 0, so you walk down into the water which is at 0 it doesn't bother trying under that. This means that the dry tasks will can go quicker as it doesn't have to bother doing line of sight condition on vertices that doesn't even reach the Z height condition. This in combination with that waterbody only starts tasks when moving down into the water makes the getting wet and dry functionality much more performant with much less tasks running at the same time, and should make it better if you have a bunch of things in the water at the same time. 

-Added so you can Paint on Multiple Physics Surfaces instead of just once. This is very useful if you for instance have a Grenade go off that should remove several surfaces at the location, or perhaps Fire that should melt Snow and dry Water at the same time. 
 Unfortunately this means you have to jump around and update if you're painting using physics surface. 


<LargeText>Version 1.19</>

<RichTextBlock.Bold>New Features</>

-Added Instanced Mesh Support so you can Paint on Foliages etc. However, since foliages of the same type share the same vertex buffer, they all will be affected, but may still be useful if it's for instance raining or something similar where you want all of them to get affected. If you add some random rotation to the mesh it will be even less obvious that they're getting painted identically. 
Maybe also if you have snow and want all snow to melt equally fast. 

)"))


#if ENGINE_MAJOR_VERSION == 4

.TextStyle(FEditorStyle::Get(), "NormalText")
.DecoratorStyleSet(&FEditorStyle::Get())

#elif ENGINE_MAJOR_VERSION == 5

	#if ENGINE_MINOR_VERSION == 0

.TextStyle(FEditorStyle::Get(), "NormalText")
.DecoratorStyleSet(&FEditorStyle::Get())

	#endif

.TextStyle(FAppStyle::Get(), "NormalText")
.DecoratorStyleSet(&FAppStyle::Get())

#endif


.AutoWrapText(true)
+ SRichTextBlock::HyperlinkDecorator(TEXT("browser"), FSlateHyperlinkRun::FOnClick::CreateStatic(&OnBrowserLinkClicked))
		]
		]
		]
	+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(10)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot().FillWidth(1.0f)
		[
			SNew(SButton)
			.Text(FText::FromString("Leave a Review"))
		.HAlign(HAlign_Center)
		.OnClicked_Lambda([]()
			{
				const FString URL = "https://www.unrealengine.com/marketplace/en-US/product/runtime-vertex-color-paint-detection-plugin";
				FPlatformProcess::LaunchURL(*URL, nullptr, nullptr);

				return FReply::Handled();
			})
		]
	+ SHorizontalBox::Slot().AutoWidth()
		[
			SNew(SSpacer)
			.Size(FVector2D(20, 10))
		]
	+ SHorizontalBox::Slot().FillWidth(1.0f)
		[
			SNew(SButton)
			.Text(FText::FromString("Close Window"))
		.HAlign(HAlign_Center)
		.OnClicked_Lambda([Window]()
			{
				Window->RequestDestroyWindow();

				return FReply::Handled();
			})
		]
		];

	WindowContent->SetContent(InnerContent);
	Window = FSlateApplication::Get().AddWindow(Window.ToSharedRef());
}
