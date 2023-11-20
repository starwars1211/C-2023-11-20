#pragma once
#include <windows.h>
#include <iostream>
class AActor
{
public:
	AActor();
	AActor(int NewX, int NewY);
	virtual ~AActor();

	virtual void BeginPlay();
	virtual void Tick(int KeyCode);
	virtual void Render();

	//Accessor
	inline int GetX() const {return X; }
	inline int GetY() const {return Y; }

	inline void SetX(int NewX) { X = NewX; }
	inline void SetY(int NewY) { Y = NewY; }
	
protected:
	int X;
	int Y;

	char Shape;
};

