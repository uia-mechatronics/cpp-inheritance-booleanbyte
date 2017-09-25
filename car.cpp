#include "car.h"

Car::Car()
    :gir_(1)
{

}

Car::Car(double x, double y)
    :gir_(1)
    ,Vehicle(x, y)
{
}

void Car::setGir(int gir) {
    gir_ = gir;
}

void Car::girOpp() {
    gir_++;
}

void Car::girNed()  {
    gir_--;
}

int Car::getGir() {
    return gir_;
}
