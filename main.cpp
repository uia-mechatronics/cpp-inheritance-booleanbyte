#include <iostream>
#include "bever.h"
#include "dolphin.h"
#include "ianimal.h"

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

    return 0;
}
