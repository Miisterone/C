#include "IAnimal.h"
#include <iostream>

using namespace std;
int IAnimal::count = 0;


IAnimal::IAnimal() {
    count++;
}

IAnimal::~IAnimal() {
    count--;
}

int IAnimal::getCount() {
    return count;
}
