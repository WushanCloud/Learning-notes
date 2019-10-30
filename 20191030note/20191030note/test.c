#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<math.h>


void reverse_bit(unsigned int value)
{
	int left = 0;
	int right = 31;
	int a[32];
	for (size_t i = 31; i > 0; i--)
	{
		a[i] = value % 2;
		value = value / 2;
	}
	for (size_t i = 0; i < 32; i++)
	{
		printf("%d", a[i]);

	}
	printf("\n");
	while (left <= right)
	{
		int temp = 0;
		temp = a[right];
		a[right] = a[left];
		a[left] = temp;
		left++;
		right--;
	}
	for (size_t i = 0; i < 32; i++)
	{
		printf("%d", a[i]);

	}printf("\n");
	int b = 0;
	for (int i = 31; i >= 0; i--)
	{
		b += a[i] * (int)pow(2, i);
	}
	printf("%d", b);
}

int main()
{
	reverse_bit(3);
	return 0;
}