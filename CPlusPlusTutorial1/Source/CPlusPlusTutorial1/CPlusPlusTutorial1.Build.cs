// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPlusPlusTutorial1 : ModuleRules
{
	public CPlusPlusTutorial1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"CPlusPlusTutorial1",
			"CPlusPlusTutorial1/Variant_Platforming",
			"CPlusPlusTutorial1/Variant_Platforming/Animation",
			"CPlusPlusTutorial1/Variant_Combat",
			"CPlusPlusTutorial1/Variant_Combat/AI",
			"CPlusPlusTutorial1/Variant_Combat/Animation",
			"CPlusPlusTutorial1/Variant_Combat/Gameplay",
			"CPlusPlusTutorial1/Variant_Combat/Interfaces",
			"CPlusPlusTutorial1/Variant_Combat/UI",
			"CPlusPlusTutorial1/Variant_SideScrolling",
			"CPlusPlusTutorial1/Variant_SideScrolling/AI",
			"CPlusPlusTutorial1/Variant_SideScrolling/Gameplay",
			"CPlusPlusTutorial1/Variant_SideScrolling/Interfaces",
			"CPlusPlusTutorial1/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
