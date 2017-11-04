#include <Pulsr/App.hpp>

class SimpleClient : public Pulsr::App
{
public:
	SimpleClient(int argc, char* argv[])
		: Pulsr::App(argc, argv)
	{
	}
};

int main(int argc, char* argv[])
{
	return SimpleClient(argc, argv).Start();
}
