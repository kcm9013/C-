#include <iostream>
#include "Render.h"
#include <conio.h>
#include "Player.h"
#include "Map.h"
#include "Process.h"
#include "input.h"
#include <string>

using namespace std;

int main()
{
	MyPlayer = new struct Player();

	if (MyPlayer)
	{
		MyPlayer->X = 1;
		MyPlayer->Y = 1;
	}

	while (true)
	{
		int KeyCode = Input();
		Process(KeyCode);
		Render();
		cout << "이게 왜 되는 걸까요?" << endl;
	}

	delete MyPlayer;

	MyPlayer = nullptr;

	return 0;
}