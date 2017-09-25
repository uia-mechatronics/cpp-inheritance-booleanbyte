#include <iostream>
#include "bever.h"
#include "dolphin.h"
#include "ianimal.h"
#include "vehicle.h"

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

    beveTheBever.getPosition().printPosition();
    dolphTheDolphine.getPosition().printPosition();

    Vehicle v(10.0, 12.0);
    v.getPosition().printPosition();
    v.move(-5.0, -3.338);
    v.getPosition().printPosition();
    v.stop();

    return 0;
}
