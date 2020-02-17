#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;


class mystring
{
public:
	mystring();//默认构造
	mystring(const char* str);//带参的默认构造
	mystring(const mystring& str);
	size_t mysize();
	char* mybegin();
	char* end();
	void print();
	
	~mystring();
protected:
private:
	char * _str;
	size_t _size;
	size_t _capital;
};

mystring::mystring() :_str(nullptr), _size(0), _capital(0)
{
}

mystring::mystring(const char* str) :_str(nullptr), _size(0), _capital(0)
{
	if (str == nullptr)
	{
		str = "";
	}
	this->_size = strlen(str);
	this->_capital = _size + 1;
	this->_str = new char[_capital];
	strcpy(_str, str);
}

mystring::mystring(const mystring& str)
{
	this->_size = str._size;
	this->_capital = str._capital;
	this->_str = new char[this->_capital];
	strcpy(this->_str, str._str);
}

size_t mystring::mysize()
{
	return this->_size;
}

char* mystring::mybegin() 
{
	return this->_str;
}

char* mystring::end()
{
	return this->_str + this->_size - 1;
}

void mystring::print()
{
	cout << this->_str << endl;
}

mystring::~mystring()
{
	if (_str)
	{
		delete[] _str;
	}	
	this->_size = 0;
	this->_capital = 0;
}

void test1()
{
	mystring str1();

}

int main()
{
	test1();
	return 0;
}