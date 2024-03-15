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


#ifdef GEL_ENABLE_ASSERTS
	#define GEL_ASSERT(x, ...) {if (!(x)) {GEL_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define GEL_CORE_ASSERT(x, ...) {if (!(x)) {GEL_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define GEL_ASSERT(x, ...)
	#define GEL_CORE_ASSERT(x, ...)
#endif


#define BIT(x) (1 << x)