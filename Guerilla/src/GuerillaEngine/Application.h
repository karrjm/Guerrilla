#pragma once

#include "Core.h"

namespace GuerillaEngine {

	class GUERILLAENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// To be define in client
	Application* CreateApplication();
}

