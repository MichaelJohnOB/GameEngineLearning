#pragma once



#include "Core.h"
#include "Events/Event.h"
#include "GameEngineLearning/LayerStack.h"
#include "Window.h"
#include "Events/ApplicationEvent.h"

namespace GameEngineLearning {


	class GAMEENGINELEARNING_API Application
	{

	public:
		Application();


		//destructive virtual
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);
	
	private:
		bool OnWindowClose(WindowCloseEvent& e);
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_LayerStack;
	};

	//To be defined in client
	Application* CreateApplication();
}

