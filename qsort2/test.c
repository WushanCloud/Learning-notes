#include<stdio.h>
#include<stdlib.h>

//void qsort(void* base, size_t num, size_t width, int(__cdecl* compare)(const void* elem1, const void* elem2));
int compare(const void* elem1, const void* elem2)
{
	return *(int*)elem1 - *(int*)elem2;
}

void _swap(void* p1, void* p2, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}
void my_qsort(void* base, size_t num, size_t width, int(__cdecl* compare)(const void* elem1, const void* elem2))
{
	for (size_t i = num-1; i > 0; i--)
	{
		for (size_t j = 0; j < i; j++)
		{
			if (compare((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				_swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void sortprint(int* elem, size_t len)
{
	for (size_t i = 0; i < len; i++)
	{
		printf("%d ", elem[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 2,4,6,8,1,3,5,7,0 };
	size_t len = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, len, sizeof(int), compare);
	sortprint(arr, len);
	return 0;
}