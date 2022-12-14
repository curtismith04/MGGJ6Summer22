/*******************************************************************************
The content of the files in this repository include portions of the
AUDIOKINETIC Wwise Technology released in source code form as part of the SDK
package.

Commercial License Usage

Licensees holding valid commercial licenses to the AUDIOKINETIC Wwise Technology
may use these files in accordance with the end user license agreement provided
with the software or, alternatively, in accordance with the terms contained in a
written agreement between you and Audiokinetic Inc.

Copyright (c) 2021 Audiokinetic Inc.
*******************************************************************************/


/*=============================================================================
	IAudiokineticTools.h:
=============================================================================*/
#pragma once

#include "Modules/ModuleInterface.h"
#include "Stats/Stats.h"

AUDIOKINETICTOOLS_API DECLARE_LOG_CATEGORY_EXTERN(LogAudiokineticTools, Log, All);

/**
 * The public interface of the AudiokineticTools module
 */
class IAudiokineticTools : public IModuleInterface
{
public:
	virtual void RefreshWwiseProject() {}
};
