#pragma once

#ifdef GEL_PLATFORM_WINDOWS
	#ifdef GEL_BUILD_DLL
		#define GAMEENGINELEARNING_API __declspec(dllexport)
	#else
		#define GAMEENGINELEARNING_API __declspec(dllimport)
	#endif
#else
	#error  GameEngineLearning only supports Windows!
#endif
