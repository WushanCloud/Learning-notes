#include"main.h"

//标题：第几天
//
//2000年的1月1日，是那一年的第1天。
//那么，2000年的5月4日，是那一年的第几天？
//
//
//注意：需要提交的是一个整数，不要填写任何多余内容。



void Func7()
{
	int N = 5;
	int n = 4;
	int sum = 0;
	switch (N)
	{
	case 12:
		sum += 30;
	case 11:
		sum += 31;
	case 10:
		sum += 30;
	case 9:
		sum += 31;
	case 8:
		sum += 31;
	case 7:
		sum += 30;
	case 6:
		sum += 31;
	case 5:
		sum += 30;
	case 4:
		sum += 31;
	case 3:
		sum += 29;
	case 2:
		sum += 31;
	case 1:
		sum += n;
		break;
	default:
		break;
	}
	printf("%d", sum);
}