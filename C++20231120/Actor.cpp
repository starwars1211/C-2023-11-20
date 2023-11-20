#include "Actor.h"
#include <windows.h>
#include <iostream>

AActor::AActor() :
	X(0), Y(0), Shape(' '), SortOrder(0), bCollide(false)
{

	//X = 0;
	//Y = 0;
}

AActor::AActor(int NewX, int NewY)
{
	SetX(NewX);
	SetY(NewY);
	Shape = ' ';
	SortOrder = 0;
	bCollide = false;
}

AActor::~AActor()
{
}

void AActor::BeginPlay()
{
}

void AActor::Tick(int KeyCode)
{
}

void AActor::Render()
{
	//���� ���� ��ġ�� ��� ���
	COORD Cur;
	Cur.X = X;
	Cur.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

	std::cout << Shape;
}