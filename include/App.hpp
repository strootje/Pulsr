#ifndef __PULSR_APP__H__
#define __PULSR_APP__H__

#include <Pulsr.Core/Kernel/WindowManager.hpp>
#include <memory>

namespace Pulsr
{
	/**
	 * This is the base class that ties everything from pulsr together in a single package
	 */
	class App
	{
	protected:
		std::shared_ptr<Core::Kernel::WindowManager> _windowManager;

	public:
		/**
		 * Constructor
		 * \param[in]  windowManager  A WindowManager to rule them all
		 */
		App( std::shared_ptr<Core::Kernel::WindowManager> windowManager );

		/**
		 * Destructor
		 */
		virtual ~App();

		/**
		 * This method is called at the begin of the App::Start method
		 * This allowed the users to init any stuff that needs initing.
		 */
		virtual void Setup();

		/**
		 * Triggers the gameloop to start pulsing
		 * \param[in]  argc  The number of arguments passed via the command line
		 * \param[in]  argv  The arguments passed via the command line
		 * \return           Exit code for the program
		 */
		int Start( int argc, char* argv[] );
	};
}

#endif
