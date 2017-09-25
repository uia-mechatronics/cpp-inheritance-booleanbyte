#include<iostream>

#include "bever.h"
#include "position.h"

Bever::Bever()
{

}

void Bever::move() {
    std::cout << "Moving left" << std::endl;
}

void Bever::jump() {
    std::cout << "Jumping high" << std::endl;
}

Position Bever::getPosition() {
    Position p(1.0, 0.0);
    return p;
}
