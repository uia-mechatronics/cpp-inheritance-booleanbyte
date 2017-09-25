#ifndef IANIMAL_H
#define IANIMAL_H


class IAnimal
{
public:

    virtual ~IAnimal() {}

    virtual void move() = 0;
    virtual void jump() = 0;

};

#endif // IANIMAL_H
