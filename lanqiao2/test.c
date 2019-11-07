#include<stdio.h>

//123321是一个非常特殊的数，它从左边读和从右边读是一样的。
//输入一个正整数n， 编程求所有这样的五位和六位十进制数，满足各位数字之和等于n 。
#if 0

int Sum(int num)
{
	int sum = 0;
	while (num)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum;
}
int Joint(int n, int num)//n大于10说明是六位数
{
	int a, b, c;//百十个
	a = b = c = 0;
	c = num % 10;
	
	b = num / 10 % 10;
	a = num / 100;
	if (n < 10)
	{
		return (c * 10000 + b * 1000 + n * 100 + b * 10 + c);
	}
	else
	{
		return (c * 100000 + b * 10000 + a * 1000 + a * 100 + b * 10 + c);
	}
}
void Fun(int n)
{
	int i = 0;
	int half = 0;

	if (n <= 45)//找五位数
	{
		int maddle = 0;
		for (maddle = 0; maddle < 10; maddle++)
		{
			if ((n - maddle) % 2 == 0)
			{
				half = (n - maddle) / 2;
				for (i = 0; i < 100; i++)
				{
					if (i % 10 != 0 && half == Sum(i))
					{
						printf("%d\n", Joint(maddle, i));
					}
				}
			}
		}
	}
	if (n % 2 == 0)//找六位数
	{
		half = n / 2;

		for (i = 0; i < 1000; i++)
		{
			if (i % 10 != 0 && half == Sum(i))
			{
				printf("%d\n", Joint(10, i));
			}
		}
	}
}
int main()
{
	while (1)
	{
	int n;
	scanf_s("%d", &n);
	Fun(n);
	}

	return 0;
}

#endif

#if 0

void Sum(int n)
{

	int arr1[5] = { 0 };
	int count = 0;
	int number = 0;
	for (int i = 1; i <= 9; ++i)
	{
		arr1[0] = arr1[4] = i;
		for (int j = 0; j <= 9; ++j)
		{
			arr1[1] = arr1[3] = j;
			count = n - (arr1[0] + arr1[4] + arr1[1] + arr1[3]);
			if (count >= 0 && count <= 9)
			{
				arr1[2] = count;
				number = arr1[0] * 10000 + arr1[1] * 1000 + arr1[2] * 100 + arr1[3] * 10 + arr1[4];

				printf("%d\n", number);
			}
		}
	}
	if (n % 2 == 0)
	{
		int arr2[6] = { 0 };
		int count = 0;
		int number = 0;
		for (int i = 1; i <= 9; ++i)
		{
			arr2[0] = arr2[5] = i;
			for (int j = 0; j <= 9; ++j)
			{
				arr2[1] = arr2[4] = j;
				count = n - (arr2[0] + arr2[1] + arr2[4] + arr2[5]);
				if (count >= 0 && count <= 18 && count % 2 == 0)
				{
					arr2[2] = arr2[3] = count / 2;
					number = arr2[0] * 100000 + arr2[1] * 10000 + arr2[2] * 1000 + arr2[3] * 100 + arr2[4] * 10 + arr2[5];

					printf("%d\n", number);
				}
			}
		}
	}
}
int main()
{
	while (1)
	{
		int n;
		scanf("%d", &n);
		Sum(n);
	}
	return 0;
}


#endif

#if 1


int main() 
{
	unsigned int n;
	scanf_s("%d", &n);
	printf("%o", n);
	return 0;
}

#endif