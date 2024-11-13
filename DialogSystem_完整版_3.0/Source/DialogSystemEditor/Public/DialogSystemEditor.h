// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FDialogSystemEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	TSharedPtr<struct FCustomPinFactroy> _PinFactory = nullptr;
	TSharedPtr<struct FGraphPanelNodeFactory> _NodeFactory = nullptr;
	TSharedPtr<FSlateStyleSet> _styleSet = nullptr;
};
