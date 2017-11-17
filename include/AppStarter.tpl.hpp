#ifndef __PULSR_APPSTARTERTPL__H__
#define __PULSR_APPSTARTERTPL__H__

#include <Grawlog/Logger.hpp>

namespace Pulsr
{
	template<typename DerivedApp>
	int AppStarter::Start( int argc, char* argv[] )
	{
		DLOG(DIAG);

		Hypodermic::ContainerBuilder builder;
		builder.registerType<DerivedApp>().as<App>();
		builder.updateContainer(*_container);

		return _container->resolve<App>()->Start(argc, argv);
	}
}

#endif
