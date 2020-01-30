#pragma once

#include <iostream>

using namespace std;


class Rectangle
{
public:
    Rectangle();
    virtual ~Rectangle();
    void SetLength(int length) { this->itsLength = length; }
    int GetLength()const { return this->itsLength; }
    void SetWidth(int width) { itsWidth = width; }
    int GetWidth()const { return itsWidth; }

private:
    int itsLength;
    int itsWidth;

};

Rectangle::Rectangle()
{
    itsLength = 10;
    itsWidth = 5;
}

Rectangle::~Rectangle()
{
    //dtor
}

//int main()
//{
//    Rectangle theRect;
//    cout << "Length  :" << theRect.GetLength() << endl;
//    cout << "Width  :" << theRect.GetWidth() << endl;
//    theRect.SetLength(20);
//    theRect.SetWidth(10);
//
//    cout << "new Length  :" << theRect.GetLength() << endl;
//    cout << "new Width  :" << theRect.GetWidth() << endl;
//
//    Rectangle theRect2;
//    cout << "Length  :" << theRect2.GetLength() << endl;
//    cout << "Width  :" << theRect2.GetWidth() << endl;
//
//
//    return 0;
//}