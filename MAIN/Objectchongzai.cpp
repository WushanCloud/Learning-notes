#include "Objectchongzai.h"

int Objectchongzai::Getvalue()
{
	return this->_value;
}

Objectchongzai::Objectchongzai()
{
	_value = 0;
}

Objectchongzai::Objectchongzai(int value)
{
	this->_value = value;
}
#if 0
Objectchongzai Objectchongzai::operator+(Objectchongzai object)//��Ա����
{
	Objectchongzai result(this->_value + object._value);
	return result;
}
#endif
Objectchongzai operator+(Objectchongzai object1, Objectchongzai object2)//ȫ�ַ���
{
	Objectchongzai result(object1._value + object2._value);
	return result;
}
ostream& operator<<(ostream& out, Objectchongzai& object)
{
	out << object._value;
	return out;
}

void test_obj()
{
	Objectchongzai obj1(1);
	Objectchongzai obj2(5);
	Objectchongzai obj3;

	obj3 = obj1 + obj2;	// ��Ա��������ͬ��obj3 = obj1.operator+(obj2);
						// ȫ�ַ�������ͬ��	obj3 = operator+(obj1, obj2);
	cout << obj1 << obj2 << obj3 << endl;
	cout << obj3.Getvalue()<<endl;
}