// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#if __has_include ("Modules/ModuleManager.h")
#include "Modules/ModuleManager.h"
#else
#include "ModuleManager.h"
#endif

class FBrunesMissionSystemModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};