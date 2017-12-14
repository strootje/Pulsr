#include "./App.hpp"
#include <Grawlog/Logger.hpp>
#include <Guardog/Guard.hpp>

namespace Pulsr
{
	App::App( std::shared_ptr<Core::Kernel::WindowManager> windowManager )
		: _windowManager(windowManager)
	{
		DLOG(DIAG);
		THROWIFNULL(windowManager);
	}

	App::~App()
	{
		DLOG(DIAG);
	}

	void App::Setup()
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
