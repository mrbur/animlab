// Copyright Epic Games, Inc. All Rights Reserved.

#include "FootIK.h"
#include "FootIKEdMode.h"

#define LOCTEXT_NAMESPACE "FFootIKModule"

void FFootIKModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FEditorModeRegistry::Get().RegisterMode<FFootIKEdMode>(FFootIKEdMode::EM_FootIKEdModeId, LOCTEXT("FootIKEdModeName", "FootIKEdMode"), FSlateIcon(), true);
}

void FFootIKModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FEditorModeRegistry::Get().UnregisterMode(FFootIKEdMode::EM_FootIKEdModeId);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FFootIKModule, FootIK)