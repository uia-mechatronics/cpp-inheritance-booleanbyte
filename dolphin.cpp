#include <iostream>

#include "dolphin.h"

Dolphin::Dolphin()
{

}

void Dolphin::move() {
    std::cout << "Swiming right" << std::endl;
}

void Dolphin::jump() {
    std::cout << "Jumping out of water" << std::endl;
}
