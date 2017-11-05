#include "./App.hpp"
#include <Pulsr.Window/Manager.hpp>

namespace Pulsr
{
	App::App( int argc, char* argv[] )
		: _windowManager(std::make_unique<Window::ManagerImpl>())
	{
		DLOG(DIAG);
	}
	
	App::~App()
	{
		DLOG(DIAG);
		Dispose();
	}
	
	void App::Dispose()
	{
		DLOG(DIAG);
	}
	
	int App::Start()
	{
		DLOG(DIAG);
		
		int x = 10;
		_windowManager->Create("MainWindow");
		while(_windowManager->HasWork() && x > 0)
		{
			_windowManager->Update();
			x--;
		}
		
		return EXIT_SUCCESS;
	}
}
