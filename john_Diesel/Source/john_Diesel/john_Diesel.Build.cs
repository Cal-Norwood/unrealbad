// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class john_Diesel : ModuleRules
{
	public john_Diesel(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
