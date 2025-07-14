#include <Decay.h>

class Sandbox : public Decay::Application {
public: 
	Sandbox() {

	}

	~Sandbox() {

	}
};

Decay::Application* Decay::CreateApplication() {
	return new Sandbox();
}