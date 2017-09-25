#ifndef BEVER_H
#define BEVER_H

#include "ianimal.h"

class Bever: public IAnimal
{
public:
    Bever();

    void move();
    void jump();

private:

};

#endif // BEVER_H
