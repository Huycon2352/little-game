#pragma once
#include <iostream>
using namespace std;
#include <string>
class Charater
{
protected:
	long double ATK, DEF, HP;
	string Name;
public:
	long double get_HP();
	bool Alive();
	virtual void Nhap();
	virtual void Xuat();
	virtual void Buff() = 0;
	virtual void Attack(Charater&);
};




