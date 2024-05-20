#pragma once
#include <iostream>
using namespace std;
class PhanSo
{
private :
	int x, y;
public:
	PhanSo operator +=(const PhanSo&);
	PhanSo& operator ++();
	PhanSo& operator ++(int);
	PhanSo() { x = 0; y = 1; }
	PhanSo(int x, int y);
	PhanSo(const PhanSo&);
	PhanSo& operator=(const PhanSo&);
	friend ostream& operator<<(ostream& out, PhanSo a);

};
PhanSo::PhanSo(int x, int y) {
	this->x = x;
	this->y = y;
}
PhanSo& PhanSo::operator=(const PhanSo& p) {
	x = p.x;
	y = p.y;
	return *this;
}
ostream& operator <<(ostream& out, PhanSo a) {
	out << a.x << '\n' << a.y << "\n";
	return out;
}
PhanSo::PhanSo(const PhanSo& a) {
	x = a.x;
	y = a.y;
}
PhanSo PhanSo:: operator +=(const PhanSo& p) {
	x = x + p.x;
	y = y + p.y;
	return *this;
}
PhanSo& PhanSo::operator++() {
	x += 1;
	y += 1;
	return *this;
}
PhanSo& PhanSo:: operator ++(int) {
	PhanSo temp(*this);
	x += 1;
	y += 1;
	return temp;
}
