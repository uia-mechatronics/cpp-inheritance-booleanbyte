#ifndef DOLPHIN_H
#define DOLPHIN_H

#include "ianimal.h"

class Dolphin : public IAnimal
{
public:
    Dolphin();

    void move();
    void jump();
private:

};

#endif // DOLPHIN_H
