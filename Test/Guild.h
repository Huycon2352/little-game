#pragma once
#include "Human.h"
#include "Elf.h"
#include "Orc.h"
#include "Goblin.h"
#include "Vampire.h"
#include "Devil.h"
#include "Boss.h"

class Guild
{
private:
	Charater *Nguoi;
public:
	void Nhap(int Type);
	void Ajust();
	void ATK(Charater*);
	long double HP();
	bool alive();
	void Xuat();
};







