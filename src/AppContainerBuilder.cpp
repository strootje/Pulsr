#include "./AppContainerBuilder.hpp"
#include <Grawlog/Logger.hpp>
#include <Pulsr.Kernel/ContainerBuilder.hpp>
#include <Pulsr.Windowing/ContainerBuilder.hpp>

namespace Pulsr
{
	AppContainerBuilder::AppContainerBuilder()
	{
		DLOG(DIAG);
		LOG(INFO) << "Start :: Building Dependency Container";

		updateContainer(*Kernel::ContainerBuilder().build());
		updateContainer(*Windowing::ContainerBuilder().build());
	}
		
	AppContainerBuilder::~AppContainerBuilder()
	{
		DLOG(DIAG);
		LOG(INFO) << "Done  :: Building Dependency Container";
	}
}
