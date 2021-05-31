#ifndef C___ZOO_H
#define C___ZOO_H

class IAnimal
{
    static int count;
public:
    IAnimal();
    virtual ~IAnimal();
    void virtual show() = 0;
    static int getCount();
};

#endif //C___ZOO_H
