#include "./App.hpp"
#include <Pulsr.Window/Manager.hpp>

namespace Pulsr
{
	App::App( int argc, char* argv[] )
		: _windowManager(std::make_unique<Window::ManagerImpl>())
	{
		DLOGEVT(INFO, CONSTRUCT);
	}

	App::~App()
	{
		DLOGEVT(INFO, DESTRUCT);
		Dispose();
	}

	void App::Dispose()
	{
		DLOGEVT(INFO, DISPOSE);
	}

	int App::Start()
	{
		_windowManager->Create("MainWindow");
		while(_windowManager->HasWork())
		{
			_windowManager->Update();
		}
		
		return 0;
	}
}
