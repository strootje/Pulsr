#ifndef __PULSR_APPSTARTER__H__
#define __PULSR_APPSTARTER__H__

#include "./App.hpp"
#include <Hypodermic/Hypodermic.h>
#include <memory>

namespace Pulsr
{
	class AppStarter
	{
	private:
		std::shared_ptr<Hypodermic::Container> _container;

	public:
		/**
		 * Constructor
		 */
		AppStarter();

		/**
		 * Destructor
		 */
		~AppStarter();

		/**
		 * Mimical the call to App::Start but this method first resolves the app via the container
		 * \tparam     DerivedApp  The custom class that derives from Pulsr::App
		 * \param[in]  argc        The number of arguments passed via the command line
		 * \param[in]  argv        The arguments passed via the command line
		 * \return                 Exit code for the program
		 */
		template<typename DerivedApp>
		int Start( int argc, char* argv[] );
	};
}

#include "./AppStarter.tpl.hpp"
#endif
