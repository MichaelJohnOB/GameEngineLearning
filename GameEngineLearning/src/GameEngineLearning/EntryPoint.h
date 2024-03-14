#pragma once

#ifdef GEL_PLATFORM_WINDOWS

extern GameEngineLearning::Application* GameEngineLearning::CreateApplication();

int main(int argc, char ** argv)
{
	printf("GameEngine!\n");
	auto app = GameEngineLearning::CreateApplication();
	app->Run();
	delete app;

}

#endif
