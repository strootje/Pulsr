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
		
		while(true)
		{
			DLOG(INFO) << " .. tick .. ";
		}
	}
}
