using UnrealBuildTool;
using System.Collections.Generic;

public class Silkroad2EditorTarget : TargetRules
{
	public Silkroad2EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("Silkroad2");
	}
}
