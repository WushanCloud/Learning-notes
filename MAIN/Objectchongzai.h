#pragma once

#include <iostream>
using namespace std;

class Objectchongzai
{
public:
	Objectchongzai();
	Objectchongzai(int value);

	//Objectchongzai operator+(Objectchongzai object);//成员方法
	friend Objectchongzai operator+(Objectchongzai object1, Objectchongzai object2);//全局方法
	friend ostream& operator<<(ostream& out, Objectchongzai &object);
	int Getvalue();
private:
	int _value;
};

void test_obj();



//
//#include <iostream>
//
//using namespace std;
//
//class integral
//{
//public:
//    integral();
//    integral(int value) :_value(value) {}
//    integral operator+(integral other);
//    int intval() { return _value; }
//    virtual ~integral();
//
//private:
//    int _value;
//};
//
//integral::integral() :_value(0)
//{
//
//}
//
//integral integral::operator+(integral other)
//{
//    integral result(this->_value + other._value);
//    return result;
//}
//
//integral::~integral()
//{
//
//}
//
//void test()
//{
//    integral num1(1), num2(2), num3;
//    num3 = num1 + num2;
//    cout << num3.intval() << endl;
//}
//
//int main()
//{
//    test();
//    return 0;
//}
