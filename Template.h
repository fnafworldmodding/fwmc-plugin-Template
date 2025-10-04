// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the $safeprojectname$_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// $safeprojectname$_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#include "Shared.h"
#ifdef $safeprojectname$_EXPORTS
#define $safeprojectname$_API __declspec(dllexport)
#else
#define $safeprojectname$_API __declspec(dllimport)
#endif

// This class is exported from the dll
class $safeprojectname$_API $safeprojectname$ : public IPlugin {
public:
    virtual ~$safeprojectname$() = default;
    virtual void Initialize();
    virtual PluginFlags Shutdown();
    virtual const char* GetName() const; // Return C-style string
};
