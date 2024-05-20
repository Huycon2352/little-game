#include "Guild.h"
void Guild::Nhap(int Type) {
    switch (Type) {
    case 1:
        Nguoi = new Human;
        break;
    case 2:
        Nguoi = new Elf;
        break;
    case 3:
        Nguoi = new Goblin;
        break;
    case 4:
        Nguoi = new Orc;
        break;
    case 5:
        Nguoi = new Vampire;
        break;
    case 6:
        Nguoi = new Devil;
        break;
    default:
        Nguoi = new Boss;
    }
}
void Guild::Ajust() {
    Nguoi->Buff();
}
void Guild::ATK(Charater* Enemy) {
    Nguoi->Attack(Enemy);
}
long double Guild::HP() {
    return Nguoi->get_HP();
}
bool Guild::alive() {
    Nguoi->Alive();
}
void Guild::Xuat() {
    Nguoi->Xuat();
}