#pragma once
#include "World.h"
#include <string>

class UWorld;
class AActor;
class Amap;


class SimpleEngin
{
public:
	SimpleEngin();
	virtual ~SimpleEngin();

	 void Init();

	 void Run();

	 void Stop();

	 void Term();

	 void Loadlevel(std::string Filename );

	 inline UWorld* GetWorld() const{ return World; };

protected:
	 UWorld* World;
	 bool IsRunning;

	 int Input();
	 void Tick(int KeyCode);
	 void Render();
};

