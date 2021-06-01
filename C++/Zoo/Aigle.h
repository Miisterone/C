#ifndef C___AIGLE_H
#define C___AIGLE_H

#include "IAnimal.h"

class Aigle : public IAnimal
{
public:
    virtual void show();
    virtual string type();
};

#endif //C___AIGLE_H
