// Copyright Epic Games, Inc. All Rights Reserved.

#include "FootIKEdMode.h"
#include "FootIKEdModeToolkit.h"
#include "Toolkits/ToolkitManager.h"
#include "EditorModeManager.h"

const FEditorModeID FFootIKEdMode::EM_FootIKEdModeId = TEXT("EM_FootIKEdMode");

FFootIKEdMode::FFootIKEdMode()
{

}

FFootIKEdMode::~FFootIKEdMode()
{

}

void FFootIKEdMode::Enter()
{
	FEdMode::Enter();

	if (!Toolkit.IsValid() && UsesToolkits())
	{
		Toolkit = MakeShareable(new FFootIKEdModeToolkit);
		Toolkit->Init(Owner->GetToolkitHost());
	}
}

void FFootIKEdMode::Exit()
{
	if (Toolkit.IsValid())
	{
		FToolkitManager::Get().CloseToolkit(Toolkit.ToSharedRef());
		Toolkit.Reset();
	}

	// Call base Exit method to ensure proper cleanup
	FEdMode::Exit();
}

bool FFootIKEdMode::UsesToolkits() const
{
	return true;
}




