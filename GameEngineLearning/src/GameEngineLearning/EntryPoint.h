#pragma once

#ifdef GEL_PLATFORM_WINDOWS

extern GameEngineLearning::Application* GameEngineLearning::CreateApplication();

int main(int argc, char ** argv)
{

	GameEngineLearning::Log::Init();
	GEL_CORE_WARN("Initialized Log!");
	int a = 5;
	GEL_WARN("Hello! Var = {0}", a);

	auto app = GameEngineLearning::CreateApplication();
	app->Run();
	delete app;
}

#endif
