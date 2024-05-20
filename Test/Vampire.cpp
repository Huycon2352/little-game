#include "Vampire.h"
void Vampire::Buff() {
	HP = HP + 0.1 * HP * Nhan_loai::count_Nhanloai;
}