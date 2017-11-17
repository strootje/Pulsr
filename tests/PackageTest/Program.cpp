#include <Pulsr/AppStarter.hpp>

class SimpleGame : public Pulsr::App
{
public:
	SimpleGame(std::shared_ptr<Pulsr::Core::Window::Manager> windowManager)
		: Pulsr::App(windowManager)
	{
	}

	void Setup()
	{
		_windowManager->Create("SimpleGame");
	}
};

int main( int argc, char* argv[] )
{
	return Pulsr::AppStarter().Start<SimpleGame>(argc, argv);
}
