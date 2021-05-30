#ifndef C___IANIMAL_H
#define C___IANIMAL_H

class IAnimal{
    static int count;
public:
    IAnimal();
    virtual ~IAnimal();
    void virtual show() = 0;
    static int getCount();
};
#endif //C___IANIMAL_H
