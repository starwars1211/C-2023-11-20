#include "Map.h"
#include "Actor.h"

AMap::AMap()
{
	X = 0;
	Y = 0;
	Shape = '*';
}

AMap::AMap(int NewX, int NewY, char NewShape)
{
	Shape = NewShape;
	SetX(NewX);
	SetY(NewY);
}

AMap::~AMap()
{
}
