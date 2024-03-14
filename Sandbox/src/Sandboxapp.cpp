

#include <GameEngineLearning.h>

class Sandbox : public GameEngineLearning::Application
{
public:

	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};


GameEngineLearning::Application* GameEngineLearning::CreateApplication()
{
	return new Sandbox();
}