#pragma once

#ifdef DM_PLATFORM_WINDOWS
    #ifdef DM_BUILD_DLL
        #define DREAM_API __declspec(dllexport)
    #else
        #define DREAM_API __declspec(dllimport)
    #endif
#else
    #error Dream only supports Windows!
#endif

#define BIT(x) (1 << x)