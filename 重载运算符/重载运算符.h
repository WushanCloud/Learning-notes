#pragma once

#include <iostream>

using namespace std;

class Integer
{
public :
	const Integer operator+(const Integer& other) const;
private :
	int m_value;
};