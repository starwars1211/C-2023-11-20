#pragma once
class Uworld;

class SimpleEngin
{
public:
	SimpleEngin();
	virtual ~SimpleEngin();

	 void Init();

	 void Run();

	 void Stop();

	 void Term();

	 inline Uworld* GetWorld() const{ return World; };

protected:
	 Uworld* World;
	 bool IsRunning;


};

