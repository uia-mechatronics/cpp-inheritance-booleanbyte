#ifndef BEVER_H
#define BEVER_H

#include "ianimal.h"
#include "ipositionprovider.h"
#include "position.h"

class Bever: public IAnimal, public IPositionProvider
{
public:
    Bever();

    void move();
    void jump();

    Position getPosition();

private:

};

#endif // BEVER_H
