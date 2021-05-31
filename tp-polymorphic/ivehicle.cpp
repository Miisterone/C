#include "ivehicle.h"
#include <iostream>
using namespace  std;
int IVehicle::count=0;
IVehicle::IVehicle()
{
    cout << __FUNCTION__ << endl;
    count++;
}

IVehicle::~IVehicle()
{
    cout << __FUNCTION__ << endl;
    count --;
}

int IVehicle::getCount()
{
    return count;
}
