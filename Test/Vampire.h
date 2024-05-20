#pragma once
#include "Nhan_loai.h"
#include "Weirdo.h"
class Vampire:public Weirdo
{
public:
	friend class Nhan_loai;
	void Buff();
};


