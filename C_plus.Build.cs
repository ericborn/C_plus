// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class C_plus : ModuleRules
{
	public C_plus(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
