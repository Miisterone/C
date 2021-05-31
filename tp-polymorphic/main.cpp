#include "car.h"
#include "ivehicle.h"
#include "moto.h"

#include <iostream>
#include <vector>
using namespace std;

typedef vector<IVehicle*> VehicleList;
typedef VehicleList::iterator VehicleIterator;


void testVehicles()
{

    VehicleList v;
    for (size_t i=0;i<10;i++) {
        v.push_back(new Car);
        v.push_back(new Moto);
    }

    cout << __FUNCTION__ << " : " << "NB Vehicles: " <<IVehicle::getCount() << endl;
    VehicleIterator it = v.begin();
    while(it != v.end()){
        //cout << *it << ":" <<(*it)->show() << endl;
        (*it)->show();
        delete (*it);
        it++;
    }
}


int main(){
    cout << __FUNCTION__ << ":" <<  __LINE__ << " : " << "NB Vehicles: " <<IVehicle::getCount() << endl;
    testVehicles();
    cout << __FUNCTION__ << ":" << __LINE__ << " : " << "NB Vehicles: " <<IVehicle::getCount() << endl;
    cout << "Bye!" << endl;
    return 0;
}
