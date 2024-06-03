// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GalagaUSFX_Trabajo04 : ModuleRules
{
	public GalagaUSFX_Trabajo04(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
