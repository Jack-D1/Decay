#pragma once
#include "Core.h"
namespace Decay {

	class DECAY_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};
	Application* CreateApplication();
}