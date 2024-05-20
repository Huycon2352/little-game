#include "Devil.h"
void Devil::Nhap() {
	Charater::Nhap();
	count++;
}
void Devil::Buff() {
	ATK *= 0.1 * ATK * count;
	DEF *= 0.1 * DEF * count;
}