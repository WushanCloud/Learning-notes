#include "boy.h"

boy::boy()
{
	this->shenfen = "�Ϲ�";
	this->name = "������";
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
	cout << "��� " << shenfen << endl;
	cout << "���� " << name << endl;
	cout << "��� " << high << endl;
}

boy::~boy()
{
	cout << "ALL DELECT" << endl;
}
