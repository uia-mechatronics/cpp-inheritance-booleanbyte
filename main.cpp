#include <iostream>
#include "bever.h"
#include "dolphin.h"
#include "ianimal.h"
#include "vehicle.h"
#include "car.h"

using namespace std;

int main()
{
    Bever beveTheBever;
    Dolphin dolphTheDolphine;

    beveTheBever.move();
    beveTheBever.jump();

    IAnimal& ia = dolphTheDolphine;
    ia.move();
    ia.jump();

    Car c(10.0, 0.0);
    c.getPosition().printPosition();
    c.move(-5.0, -3.338);
    c.getPosition().printPosition();
    c.stop();

    return 0;
}
