#pragma once

#include <iostream>

using namespace std;

class SimpleCat2
{
public:
    SimpleCat2() { itsAge = 2; }

    ~SimpleCat2() {}
    int GetAge() const { return itsAge; }
    void SetAge(int age) { itsAge = age; }
    friend ostream& operator<<(ostream& out, SimpleCat2 cat);

private:
    int itsAge;
};

ostream& operator<<(ostream& out, SimpleCat2 cat)
{
    out << cat.itsAge;
    return out;
}

void test_Sim1()
{
    SimpleCat2 Frisky;
    /*cout << Frisky.GetAge() << endl;
    Frisky.SetAge(5);
    cout << Frisky.GetAge() << endl;*/
    cout << Frisky<<endl;

}