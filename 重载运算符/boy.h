#pragma once

#include <iostream>

using namespace std;
class boy
{
public:
	boy();
	boy(string shenfen ,string name, int high);
	void showboy();
	~boy();
private:
	string shenfen;
	string name;
	int high;
};

