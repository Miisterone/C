#ifndef CAR_H
#define CAR_H

#include "ivehicle.h"



class Car : public IVehicle
{
public:
    Car();
     virtual void show();
};

#endif // CAR_H
