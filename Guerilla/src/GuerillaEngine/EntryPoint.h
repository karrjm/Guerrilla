#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern GuerillaEngine::Application* GuerillaEngine::CreateApplication();

int main(int argc, char** argv) {

	auto app = GuerillaEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif

