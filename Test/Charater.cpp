#include "Charater.h"
long double Charater::get_HP() {
	return HP;
}
bool Charater::Alive() {
	
	return get_HP() > 0;
}
void Charater::Xuat() {
	if (Alive()) cout <<Name<<" "<< get_HP() <<endl;
}
void Charater::Nhap() {
	cin >>Name >> ATK >> DEF >> HP;
}
void Charater::Attack(Charater& Enemy) {
	if (ATK > Enemy.DEF)
		Enemy.HP = ATK - Enemy.DEF;
}