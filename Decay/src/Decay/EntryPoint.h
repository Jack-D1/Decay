#pragma once

#ifdef DC_PLATFORM_WINDOWS

extern Decay::Application* Decay::CreateApplication();

int main(int argc, char** argv) {
	auto app = Decay::CreateApplication();
	app->Run();
	delete app;
}

#endif