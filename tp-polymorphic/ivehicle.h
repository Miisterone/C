#ifndef IVEHICLE_H
#define IVEHICLE_H


class IVehicle
{
    static int count;
public:
    IVehicle();
    virtual ~IVehicle();
    void virtual show() = 0;
    static int getCount();
};

#endif // IVEHICLE_H
