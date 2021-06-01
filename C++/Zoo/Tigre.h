#ifndef C___TIGRE_H
#define C___TIGRE_H
#include "IAnimal.h"

class Tigre : public IAnimal
{
public:
    virtual void show();
    virtual string type();
};
#endif //C___TIGRE_H
