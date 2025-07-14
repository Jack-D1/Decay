#pragma once

#ifdef DC_PLATFORM_WINDOWS
	#ifdef DECAY_BUILD_DLL
		#define DECAY_API __declspec(dllexport)
	#else
		#define DECAY_API __declspec(dllimport)
	#endif // 
#else
	#error Decay only supports windows
#endif // 
