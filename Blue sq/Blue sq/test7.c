#include"main.h"

//���⣺�ڼ���
//
//2000���1��1�գ�����һ��ĵ�1�졣
//��ô��2000���5��4�գ�����һ��ĵڼ��죿
//
//
//ע�⣺��Ҫ�ύ����һ����������Ҫ��д�κζ������ݡ�



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