#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>

#if 1
//十六进制数是在程序设计时经常要使用到的一种整数的表示方式。
//它有0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F共16个符号
//，分别表示十进制数的0至15。十六进制的计数方法是满16进1，所以十进制数16在十六进制中是10，
//而十进制的17在十六进制中是11，以此类推，十进制的30在十六进制中是1E。
//给出一个非负整数，将它表示成十六进制的形式。

void Fun(int n)
{
	int number[8];
	int i;
	for (i = 7; i >= 0; i--)
	{
		number[i] = n % 16;
		n /= 16;
	}
	for (i = 0; i < 8; i++)
	{
		if (number[i]>9)
		{
			number[i] = 'A' + number - 10;
		}
	}
	for  ( = 0; ( < length; (++)
	{

	}
}
int main()
{
	Fun(30);
	return 0;
}

#endif
