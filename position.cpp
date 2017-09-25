#include <iostream>

#include "position.h"

Position::Position(double x, double y)
    : x_(x)
    , y_(y)
{

}


Position::~Position()
{

}

double Position::getX() {
    return x_;
}

double Position::getY() {
    return y_;
}

void Position::setX(double x) {
    x_ = x;
}

void Position::setY(double y) {
    y_ = y;
}

void Position::printPosition() {
    std::cout << "x = " << x_ << " , y = " << y_ << std::endl;
}
