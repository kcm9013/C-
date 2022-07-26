#pragma once
#include <string>

using namespace std;

class Character
{
public:
	Character();
	~Character();

protected:
	int HP;
	int X;
	int Y;

	string name;

public:
	virtual void Move();
	void Attack();
};

