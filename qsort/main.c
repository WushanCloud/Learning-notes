#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//qsort 
//void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
/* 从小到大排 */
int compare1(const void* elem1, const void* elem2)
{
	return *(int*)elem1 - *(int*)elem2;
}
/* 从大到小排 */
int compare2(const void* elem1, const void* elem2)
{
	return  *(int*)elem2 - *(int*)elem1;
}
void sortprint(int* elem, size_t len)
{
	for (size_t i = 0; i < len; i++)
	{
		printf("%d ", elem[i]);
	}
	printf("\n");
}
void test1()
{
	int arr[] = { 2,4,6,8,1,3,5,7,0 };
	size_t len = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, len, sizeof(int), compare1);
	sortprint(arr, len);
	qsort(arr, len, sizeof(int), compare2);
	sortprint(arr, len);
}

int Comp(const void* p1, const void* p2)
{
	return strcmp((char*)p1, (char*)p2);
}
void sortprint2(char (*elem)[5], size_t len)
{
	for (size_t i = 0; i < len; i++)
	{
		printf("%s ", elem[i] );
	}
	printf("\n");
}
void test2()
{
	char arr[3][5] = {"ytrw","dqdq","aaaa"};
	size_t len = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, len, sizeof(arr[0]), Comp);
	sortprint2(arr[0], len);
}
int main()
{
	test2();
	return 0;
}