#if 0
#include<stdio.h>
#include<stdlib.h>
int compare(const void* a, const void* b)
{
	return (*(int*)a) - (*(int*)b);
}
int main()
{
	int i = 0, j = 0; int n = 0; int m = 0;
	int** arr;
	//scanf_s("%d %d", &m, &n);
	m = 2; n = 4;
	arr = (int**)malloc(sizeof(int*) * m);//先开辟m行空间
	for (i = 0; i < m; i++)
	{
		arr[i] = (int*)malloc(n * sizeof(int));//在m行的每一行开辟n个空间

	}
	int count = 100;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		qsort(arr[i], n, sizeof(arr[0][0]), compare);
	}

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
#endif

#if 1
#include<stdio.h>
#include<stdlib.h>
int compare(const void* a, const void* b)
{
	return (*(int*)a) - (*(int*)b);
}

int main()
{
	int i = 0, j = 0;

	int arr[3][3] = { { 5, 6, 7 }, { 66, 77, 12 }, { 2, 5, 0 } };


	qsort(arr, 9, sizeof(arr[0][0]), compare);


	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
#endif