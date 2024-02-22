// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ue_learning_cpp : ModuleRules
{
	public ue_learning_cpp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
