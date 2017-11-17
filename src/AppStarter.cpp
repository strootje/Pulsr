#include "./AppStarter.hpp"
#include "./AppContainerBuilder.hpp"
#include <Grawlog/Logger.hpp>

namespace Pulsr
{
	AppStarter::AppStarter()
		: _container(AppContainerBuilder().build())
	{
		DLOG(DIAG);
	}
	
	AppStarter::~AppStarter()
	{
		DLOG(DIAG);
	}
}
