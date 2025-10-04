// $safeprojectname$.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "$safeprojectname$.h"
#include "fwmod.h"
#include "Globals.h"
#include "Utils/Decompressor.h"

#ifdef _DEBUG
#pragma comment(lib, "../../fwmod-core/Debug/fwmod-core.lib")
#else
#pragma comment(lib, "../../fwmod-core/Release/fwmod-core.lib")
#endif

// plugin

void $safeprojectname$::Initialize()
{
    CoreLogger.Info("$safeprojectname$::Initialize called");
}

PluginFlags $safeprojectname$::Shutdown()
{
    CoreLogger.Info("$safeprojectname$::Shutdown called");
	return PluginFlags::UnloadDll; // Indicates that the DLL should be unloaded
}

const char* $safeprojectname$::GetName() const
{
    return "$safeprojectname$";
}

// CreatePluginFunc is the function that will be called by the fwmod core to create an instance of the plugin

extern "C" __declspec(dllexport) IPlugin* CreatePlugin()
{
    return new $safeprojectname$();
}