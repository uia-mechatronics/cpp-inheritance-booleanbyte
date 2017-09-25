#ifndef DOLPHIN_H
#define DOLPHIN_H

#include "ianimal.h"
#include "ipositionprovider.h"
#include "position.h"

class Dolphin : public IAnimal, public IPositionProvider
{
public:
    Dolphin();

    void move();
    void jump();

    Position getPosition();

private:

};

#endif // DOLPHIN_H
