#include <iostream>

#include "vehicle.h"

Vehicle::Vehicle()
    :position_(0.0, 0.0)
{
}

Vehicle::Vehicle(double x, double y)
    :position_(x, y)
{
}

Position Vehicle::getPosition() {
    return position_;
}

void Vehicle::stop() {
    std::cout << "Stopping vehicle" << std::endl;
}

void Vehicle::move(double x, double y) {
    position_.setX(position_.getX() + x);
    position_.setY(position_.getY() + y);
}
