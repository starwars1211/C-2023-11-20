#include "SimpleEngin.h"

int main()
{
	SimpleEngin* MyEngine = new SimpleEngin();

	MyEngine->Loadlevel("a.smap");
	MyEngine->Run();

	delete MyEngine;

	return 0;
}