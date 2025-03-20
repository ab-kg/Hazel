#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace Hazel {

	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};


	Application* CreateApplication();

}



// we are making application virtual becuase this class will be parent class for the application class in sandbox .
