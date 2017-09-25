#ifndef POSITION_H
#define POSITION_H


class Position
{
public:
    Position(double x, double y);
    ~Position();

    double getX();
    double getY();
    void setX(double x);
    void setY(double y);

    void printPosition();

    // Legg til get- og set-funksjoner her.

private:

    double x_;
    double y_;

};

#endif // POSITION_H
