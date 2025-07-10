// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the TEMPLATE_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// TEMPLATE_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#include "Shared.h"
#ifdef TEMPLATE_EXPORTS
#define TEMPLATE_API __declspec(dllexport)
#else
#define TEMPLATE_API __declspec(dllimport)
#endif

// This class is exported from the dll
class TEMPLATE_API CTemplate : public IPlugin {
public:
    virtual ~CTemplate() = default;
    virtual void Initialize();
    virtual PluginFlags Shutdown();
    virtual const char* GetName() const; // Return C-style string
};
