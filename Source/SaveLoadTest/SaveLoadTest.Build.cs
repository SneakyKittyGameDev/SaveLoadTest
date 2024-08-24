// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SaveLoadTest : ModuleRules
{
	public SaveLoadTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"Json",
			"JsonUtilities"
		});
	}
}
