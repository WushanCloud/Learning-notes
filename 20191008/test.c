#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*shell排序算法*/
/*
基本思想：先比较距离远的元素，而不是像简单交换排序算法那样先比较相邻的元素。
这样可以快速减少大量无序的情况，从而减轻后续工作。
被比较的元素之间距离逐步减少，知道减为1，这时排序变成了相邻元素的互换。
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