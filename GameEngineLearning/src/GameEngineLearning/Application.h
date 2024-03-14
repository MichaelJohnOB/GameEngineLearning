#pragma once



#include "Core.h"


namespace GameEngineLearning {


	class GAMEENGINELEARNING_API Application
	{

	public:
		Application();


		//destructive virtual
		virtual ~Application();

		void Run();
	};

	//To be defined in client
	Application* CreateApplication();
}

