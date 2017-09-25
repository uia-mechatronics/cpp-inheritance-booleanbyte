#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car : public Vehicle
{
public:
    Car();
    Car(double x, double y);

    void girOpp();
    void girNed();
    void setGir(int gir);

    int getGir();

private:

    int gir_;
};

#endif // CAR_H
