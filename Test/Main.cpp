#include "Guild.h"

int main() {
	int n;
	cin >> n;
	Guild *TanThu[50];
	int Type;
	for (int i = 0;i < n;i++) {
		cin >> Type;
		TanThu[i]->Nhap(Type);
	} TanThu[n]->Nhap(0);

	
	for (int i = 0;i < n;i++) {
		TanThu[i]->Ajust();
	}
	int warn = n;
	do {

		for (int i = 0;i < n;i++) {
			TanThu[i]->ATK(TanThu[n]);
		}
		int temp = 0;
		for (int i = 0;i < n - 1;i++) {
			if (TanThu[i]->HP() > TanThu[i + 1]->HP())
				temp = i + 1;
		}
		
		TanThu[n]->ATK(TanThu[temp]);
		for (int i = 0; i < n;i++) {
			if (TanThu[i]->alive()) continue;
			warn--;
		}
	} while (TanThu[n]->alive() && warn != 0);
	if (TanThu[n]->alive()) TanThu[n]->Xuat();
	else {
		for (int i = 0;i < n;i++)
			if (TanThu[i]->alive()) TanThu[i]->Xuat();
	}
	system("pause");
}