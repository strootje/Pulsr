#include "./App.hpp"
#include <Grawlog/Logger.hpp>

namespace Pulsr
{
	App::App( std::shared_ptr<Core::Window::Manager> windowManager )
		: _windowManager(windowManager)
	{
		DLOG(DIAG);
	}

	App::~App()
	{
		DLOG(DIAG);
	}

	int App::Start( int argc, char* argv[] )
	{
		DLOG(DIAG);
		Setup();

		while(_windowManager->HasWork())
		{
			_windowManager->Update();
		}

		return EXIT_SUCCESS;
	}
}
