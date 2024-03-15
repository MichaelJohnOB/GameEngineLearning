
#include <GameEngineLearning.h>




class ExampleLayer : public GameEngineLearning::Layer
{
public:
	ExampleLayer() : Layer("Example")
	{

	}

	void OnUpdate() override
	{
		GEL_INFO("ExampleLayer::Update");
	}

	void OnEvent(GameEngineLearning::Event& event) override
	{
		GEL_TRACE("{0}", event);
	}
};

class Sandbox : public GameEngineLearning::Application
{
public:

	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox()
	{

	}

};


GameEngineLearning::Application* GameEngineLearning::CreateApplication()
{
	return new Sandbox();
}