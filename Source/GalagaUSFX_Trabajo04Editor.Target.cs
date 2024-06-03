// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class GalagaUSFX_Trabajo04EditorTarget : TargetRules
{
	public GalagaUSFX_Trabajo04EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("GalagaUSFX_Trabajo04");
	}
}
