#ifndef VEHICLE_H
#define VEHICLE_H

#include "ipositionprovider.h"
#include "position.h"

class Vehicle : public IPositionProvider
{
public:
    Vehicle();
    Vehicle(double x, double y);

    Position getPosition();

    void move(double x, double y);

    virtual void stop();

private:
    Position position_;
};

#endif // VEHICLE_H
