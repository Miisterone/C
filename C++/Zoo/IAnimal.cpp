#include "IAnimal.h"
#include <iostream>

using namespace std;
int IAnimal::count = 0;
string IAnimal::name;


IAnimal::IAnimal() {
    count++;
}

IAnimal::~IAnimal() {
    count--;
}

int IAnimal::getCount() {
    return count;
}

string IAnimal::type() {
    return name;
}
