#ifndef __PULSR_APP__H__
#define __PULSR_APP__H__

#include <cstdlib>
#include <memory>
#include <Grawlog/Logger.hpp>
#include <Pulsr.Core/Window/Manager.hpp>

namespace Pulsr
{
	class App
	{
	private:
		std::unique_ptr<Core::Window::Manager> _windowManager;

	public:
		App( int argc, char* argv[] );
		virtual ~App();
		void Dispose();
		int Start();
	};
}

#endif
