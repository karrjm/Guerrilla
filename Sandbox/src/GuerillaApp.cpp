#include <GuerillaEngine.h>

class GuerillaCore : public GuerillaEngine :: Application {
public:
	GuerillaCore() {

	}

	~GuerillaCore() {

	}
};

GuerillaEngine::Application* GuerillaEngine::CreateApplication() {
	return new GuerillaCore();
}