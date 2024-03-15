#pragma once

#include "GameEngineLearning/Core.h"

#include "Layer.h"
#include <vector>



namespace GameEngineLearning
{
	typedef std::vector<Layer*>::iterator iterator;


	class GAMEENGINELEARNING_API LayerStack
	{
	public:
		LayerStack();
		~LayerStack();

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* overlay);
		void PopLayer(Layer* layer);
		void PopOverlay(Layer* overlay);

		iterator begin() { return m_Layers.begin(); }
		iterator end() { return m_Layers.end(); }
	private:
		std::vector<Layer*> m_Layers;
		iterator m_LayerInsert;

	
	};
}