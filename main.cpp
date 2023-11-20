#include "SimpleEngin.h"
#include "Player.h"
#include "World.h"


using namespace std;

int main()
{
	SimpleEngin* MyEngine = new SimpleEngin();

	MyEngine->Loadlevel("a.smap");
	MyEngine->Run();

	delete MyEngine;

	return 0;
}