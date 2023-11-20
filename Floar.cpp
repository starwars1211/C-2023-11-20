#include "Floar.h"

AFloar::AFloar()
{
	X = 0;
	Y = 0;
	Shape = ' ';
}

AFloar::AFloar(int NewX, int NewY, char NewShape)
{
	Shape = NewShape;
	SetX(NewX);
	SetY(NewY);
}

AFloar::~AFloar()
{
}
