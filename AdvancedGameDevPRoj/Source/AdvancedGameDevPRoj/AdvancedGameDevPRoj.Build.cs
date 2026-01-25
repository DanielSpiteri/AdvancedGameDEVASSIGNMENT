// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AdvancedGameDevPRoj : ModuleRules
{
	public AdvancedGameDevPRoj(ReadOnlyTargetRules Target) : base(Target)
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
			"Slate",
            "NavigationSystem"
        });

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"AdvancedGameDevPRoj",
			"AdvancedGameDevPRoj/Variant_Horror",
			"AdvancedGameDevPRoj/Variant_Horror/UI",
			"AdvancedGameDevPRoj/Variant_Shooter",
			"AdvancedGameDevPRoj/Variant_Shooter/AI",
			"AdvancedGameDevPRoj/Variant_Shooter/UI",
			"AdvancedGameDevPRoj/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
