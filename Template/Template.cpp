// Template.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "Template.h"
#include "fwmod.h"
#include "Globals.h"
#include "Utils/Decompressor.h"

#pragma comment(lib, "../../fwmod-core/Debug/fwmod-core.lib")


// plugin

void CTemplate::Initialize()
{
    CoreLogger.Info("CTemplate::Initialize called");
}

PluginFlags CTemplate::Shutdown()
{
    CoreLogger.Info("CTemplate::Shutdown called");
	return PluginFlags::UnloadDll; // Indicates that the DLL should be unloaded
}

const char* CTemplate::GetName() const
{
    return "Template";
}

// CreatePluginFunc is the function that will be called by the fwmod core to create an instance of the plugin

extern "C" __declspec(dllexport) IPlugin* CreatePlugin()
{
    return new CTemplate();
}