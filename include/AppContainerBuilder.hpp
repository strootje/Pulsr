#ifndef __PULSR_APPCONTAINERBUILDER__H__
#define __PULSR_APPCONTAINERBUILDER__H__

#include <Hypodermic/Hypodermic.h>

namespace Pulsr
{
	/**
	 * This build sets up the complete dependency graph so hypodermic can resolve it
	 */
	class AppContainerBuilder : public Hypodermic::ContainerBuilder
	{
	public:
		/**
		 * Constructor
		 */
		AppContainerBuilder();

		/**
		 * Destructor
		 */
		virtual ~AppContainerBuilder();
	};
}

#endif
