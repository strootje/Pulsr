#include <Pulsr/App.hpp>

class TestApp : public Pulsr::App
{
public:
	TestApp(int argc, char* argv[])
		: Pulsr::App(argc, argv)
	{
	}
};

int main(int argc, char* argv[])
{
	TestApp app(argc, argv);
	return app.Start();
}
