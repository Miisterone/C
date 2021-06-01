#include <iostream>
#include "Poule.h"
using namespace std;

void Poule::show() {
    cout << "Les poules crient" << endl;
}

string Poule::type() {
    return "Poule";
}