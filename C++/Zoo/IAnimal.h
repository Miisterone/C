#ifndef C___IANIMAL_H
#define C___IANIMAL_H

#include <iostream>
using namespace std;

class IAnimal{
    static int count;
    static string name;
public:
    IAnimal();
    virtual ~IAnimal();
    virtual void show() = 0;
    static int getCount();
    virtual string type();
};
#endif //C___IANIMAL_H
