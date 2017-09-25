#include <iostream>

#include "dolphin.h"
#include "position.h"

Dolphin::Dolphin()
{

}

void Dolphin::move() {
    std::cout << "Swiming right" << std::endl;
}

void Dolphin::jump() {
    std::cout << "Jumping out of water" << std::endl;
}

Position Dolphin::getPosition() {
    Position p(0.0, 1.0);
    return p;
}
