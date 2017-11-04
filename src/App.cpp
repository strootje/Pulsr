#include "./App.hpp"

namespace Pulsr
{
	App::App( int argc, char* argv[] )
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

		auto x = 10;
		while(x > 0)
		{
			DLOG(INFO) << " .. tick .. ";
			x--;
		}

		return EXIT_SUCCESS;
	}
}
