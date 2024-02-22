#include "Soraks/Applcation.h"
#include "Soraks/GameInstance.h"

#include <raylib/raylib.h>

using Soarks::Applcation;
using Soarks::GameInstance;

class TestGame : public GameInstance
{
public:
	void Render() override
	{
		DrawCircle(100, 100, 50, RED);
	}
};

int main()
{
	Applcation* app = new Applcation();
	app->Run(new TestGame());

	delete app;
	return 0;
}