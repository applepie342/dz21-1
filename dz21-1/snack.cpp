#include "snack.h"
using namespace std;

Snack::Snack(string name, int cost) : _name(name), _cost(cost) {}
Snack::Snack(string name) : Snack(name, 50) {}

Snack::~Snack() {}

void Snack::display() {
    setlocale(LC_ALL, "");
    cout << "��������: " << _name << endl
        << "���������: " << _cost << endl
        << "_______________________________" << endl;
}