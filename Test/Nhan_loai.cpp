#include "Nhan_loai.h"
int Nhan_loai::count_Nhanloai = 0;
void Nhan_loai::Nhap() {
	Charater::Nhap();cin >> Job;
	count_Nhanloai++;
}
