// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CameraControll : ModuleRules
{
	public CameraControll(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
