#ifndef C___POULE_H
#define C___POULE_H

#include "IAnimal.h"

class Poule : public IAnimal
{
public:
    virtual void show();
    virtual string type();
};

#endif //C___POULE_H
