#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*shell�����㷨*/
/*
����˼�룺�ȱȽϾ���Զ��Ԫ�أ���������򵥽��������㷨�����ȱȽ����ڵ�Ԫ�ء�
�������Կ��ټ��ٴ��������������Ӷ��������������
���Ƚϵ�Ԫ��֮������𲽼��٣�֪����Ϊ1����ʱ������������Ԫ�صĻ�����
*/
void shellsort(int v[], int n)
{
	int gap,i,j,temp;

	for (gap = n/2; gap > 0; gap /= 2)
	{
		for (i = gap; i < n; i++)
		{
			for (j = i-gap; j >= 0 && v[j]>v[j+gap]; j-=gap)
			{
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
			}
		}
	}
}
int main()
{
	int v[10] = {4,5,6,8,7,3,2,1,5,8};
	int len;
	int i;

	len = sizeof(v)/sizeof(v[0]);
	shellsort(v,len);
	for ( i = 0; i < len; i++)
	{
		printf("%d ",v[i]);
	}
	return 0;
}