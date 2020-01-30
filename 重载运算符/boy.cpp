#include "boy.h"

boy::boy()
{
	this->shenfen = "老公";
	this->name = "李振中";
	this->high = 183;
}

boy::boy( string shenfen,string name, int high)
{
	this->shenfen = shenfen;
	this->name = name;
	this->high = high;
}

void boy::showboy()
{
	cout << "身份 " << shenfen << endl;
	cout << "姓名 " << name << endl;
	cout << "身高 " << high << endl;
}

boy::~boy()
{
	cout << "ALL DELECT" << endl;
}
