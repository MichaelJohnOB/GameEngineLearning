workspace "GameEngineLearning"
	architecture "x64"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}


outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "GameEngineLearning"
	location "GameEngineLearning"
	kind "SharedLib"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}
	
	includedirs
	{
		"%{prj.name}/vendor/spdlog/include"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines 
		{
				"GEL_PLATFORM_WINDOWS",
				"GEL_BUILD_DLL"
		}

		
		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
		}

		
	filter "configurations:Debug"
		defines "GEL_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "GEL_Release"
		optimize "On"

	filter "configurations:Dist"
		defines "GEL_Dist"
		optimize "On"


project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}
	
	includedirs
	{
		"GameEngineLearning/vendor/spdlog/include",
		"GameEngineLearning/src"
	}

	links
	{
		"GameEngineLearning"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines 
		{
				"GEL_PLATFORM_WINDOWS"
		}


		
	filter "configurations:Debug"
		defines "GEL_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "GEL_Release"
		optimize "On"

	filter "configurations:Dist"
		defines "GEL_Dist"
		optimize "On"