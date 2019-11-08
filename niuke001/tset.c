#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

int Fun(int  *arr,int * end)//int *end
{
	int num = 0;
	if (*arr>=*(arr+1))
	{
		while (*arr >= *(arr + 1))
		{
			arr++;
			num++;
			if ((arr + 1) == end)
				return num;
		}
		return ++num;
	}
	else if(*arr <= *(arr + 1))
	{
		while (*arr <= *(arr + 1))
		{
			arr++;
			num++;
			if ((arr + 1) == end)
				return num;
		}
		return ++num;
	}
}
void pr(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int n;
	scanf_s("%d", &n);
	int arr[4000];
	int num = 0;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < n;)
	{
		int tmp = Fun(&arr[i],&arr[n-1]);
		num++;
		pr(&arr[i], tmp);
		i += tmp;
	}
	printf("%d", num);
	return 0;
}