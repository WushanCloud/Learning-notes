#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

/* 冒泡排序（优化版） */
void BubbleSort(int arr[],int len)
{
	int i,j;
	int temp;
	int tip;

	for (i = len- 1; i > 0; i--)
	{
		tip = 0;
		for(j = 0; j < i; j++)
		{
		 
			if (arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				tip = 1;
			}	
		}

		if(tip == 0)
		{
			break;
		}/*
		j--;
		while(arr[j]>=arr[j-1])//如果最后两个数是有序的，则减少一次循环
		{
			i--;
			j--;
			if (j == 0)
			{
				break;
			}
		}
		*/
	}
}



int main ()
{
	int i;
	int len;
	int arr[] = {12,8,4,8,6,4,7,2,6,8,13,55};

	len = sizeof(arr)/sizeof(arr[0]);
	BubbleSort(arr,len);
	for(i = 0;i<len;i++)
		printf("%d ",arr[i]);
	return 0;
}