#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/fmt/ostr.h"
namespace GameEngineLearning
{

	class GAMEENGINELEARNING_API Log
	{
		private:
			static std::shared_ptr<spdlog::logger> s_CoreLogger;
			static std::shared_ptr<spdlog::logger> s_ClientLogger;

	
	
		public:

			static void Init();

			static std::shared_ptr<spdlog::logger> GetCoreLogger() { return s_CoreLogger; }
			static std::shared_ptr<spdlog::logger> GetClientLogger() { return s_ClientLogger; }




	};

}


//Core Log macros
#define GEL_CORE_TRACE(...)   ::GameEngineLearning::Log::GetCoreLogger()->trace(__VA_ARGS__)

#define GEL_CORE_INFO(...)    ::GameEngineLearning::Log::GetCoreLogger()->info(__VA_ARGS__)

#define GEL_CORE_WARN(...)    ::GameEngineLearning::Log::GetCoreLogger()->warn(__VA_ARGS__)

#define GEL_CORE_ERROR(...)   ::GameEngineLearning::Log::GetCoreLogger()->error(__VA_ARGS__)

#define GEL_CORE_FATAL(...)   ::GameEngineLearning::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define GEL_TRACE(...)   ::GameEngineLearning::Log::GetClientLogger()->trace(__VA_ARGS__)

#define GEL_INFO(...)    ::GameEngineLearning::Log::GetClientLogger()->info(__VA_ARGS__)

#define GEL_WARN(...)    ::GameEngineLearning::Log::GetClientLogger()->warn(__VA_ARGS__)

#define GEL_ERROR(...)   ::GameEngineLearning::Log::GetClientLogger()->error(__VA_ARGS__)

#define GEL_FATAL(...)   ::GameEngineLearning::Log::GetClientLogger()->fatal(__VA_ARGS__)





