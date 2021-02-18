#pragma once

#ifdef GE_PLATFORM_WINDOWS
	#ifdef GE_BUILD_DLL
		#define GUERILLAENGINE_API __declspec(dllexport)
	#else
		#define GUERILLAENGINE_API __declspec(dllimport)
	#endif
#else
	#error Guerilla Engine only supports Windows! (yeah I know, not very guerilla)
#endif
