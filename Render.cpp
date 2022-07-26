#include "Render.h"
#include <conio.h>
#include <Windows.h>
#include "Player.h"
#include "Map.h"
#include <iostream>

using namespace std;

void Render()
{
	system("cls");

	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			if (X == MyPlayer->X && Y == MyPlayer->Y)
			{
				cout << 'P' << ' ';
			}
			else
			{
				cout << Map[Y][X] << ' ';
			}
		}
		cout << endl;
	}
}
