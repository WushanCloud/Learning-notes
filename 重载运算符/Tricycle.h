#pragma once

#include <iostream>

using namespace std;
class Tricycle
{
public:
    Tricycle(int initialAge);
    virtual ~Tricycle();
    int getSpeed();
    void setSpeed(int newSpeed);
    void pedal();
    void brake();

private:
    int speed;
};
Tricycle::Tricycle(int initialSpeed)
{
    setSpeed(initialSpeed);
}
Tricycle::~Tricycle()
{

}
int Tricycle::getSpeed()
{
    return speed;
}
void Tricycle::setSpeed(int newSpeed)
{
    if (newSpeed >= 0)
        speed = newSpeed;
}
void Tricycle::pedal()
{
    setSpeed(speed + 1);
    cout << "速度为：" << getSpeed() << endl;
}
void Tricycle::brake()
{
    setSpeed(speed - 1);
    cout << "速度为:" << getSpeed() << endl;
}
