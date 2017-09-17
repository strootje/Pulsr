#ifndef __PULSR_APP__H__
#define __PULSR_APP__H__

#include <Grawlog/Logger.hpp>
#include <memory>
#include <Pulsr.Core/Window/Manager.hpp>

namespace Pulsr
{
	class App
	{
	public:
		App( int argc, char* argv[] );
		virtual ~App();
		void Dispose();
		int Start();

	private:
		std::unique_ptr<Core::Window::Manager> _windowManager;
	};
}

#endif
