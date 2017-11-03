#ifndef __PULSR_APP__H__
#define __PULSR_APP__H__

#include <cstdlib>
#include <Grawlog/Logger.hpp>

namespace Pulsr
{
	class App
	{
	public:
		App( int argc, char* argv[] );
		virtual ~App();
		void Dispose();
		int Start();
	};
}

#endif
