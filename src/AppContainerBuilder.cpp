#include "./AppContainerBuilder.hpp"
#include <Grawlog/Logger.hpp>
#include <Pulsr.Kernel/ContainerBuilder.hpp>
#include <Pulsr.Drawing/ContainerBuilder.hpp>

namespace Pulsr
{
	AppContainerBuilder::AppContainerBuilder()
	{
		DLOG(DIAG);
		LOG(INFO) << "Building Dependency Container :: Start";

		addRegistrations(Kernel::ContainerBuilder());
		LOG(INFO) << "Building Dependency Container :: (1/2) Kernel";

		addRegistrations(Drawing::ContainerBuilder());
		LOG(INFO) << "Building Dependency Container :: (2/2) Drawing";
	}
		
	AppContainerBuilder::~AppContainerBuilder()
	{
		DLOG(DIAG);
		LOG(INFO) << "Building Dependency Container :: Done";
	}
}
