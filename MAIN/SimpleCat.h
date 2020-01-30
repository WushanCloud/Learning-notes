#pragma once
#include <iostream>
using namespace std;

class SimpleCat
{
public:
    SimpleCat();

    ~SimpleCat();
    int GetAge() const { return *itsAge; }
    void SetAge(int age) { *itsAge = age; }


private:int* itsAge;
};
SimpleCat::SimpleCat()
{
    itsAge = new int(2);

}
SimpleCat::~SimpleCat()
{
    delete itsAge;
}
//int main()
//{
//    SimpleCat* Frisky = new SimpleCat;
//    cout << Frisky->GetAge() << endl;
//    Frisky->SetAge(5);
//    cout << Frisky->GetAge() << endl;
//    delete Frisky;
//    return 0;
//}
