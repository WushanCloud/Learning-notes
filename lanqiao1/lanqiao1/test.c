#include<stdio.h>
#include<math.h>
#include<malloc.h>
//
//int F(int n)
//{
//	if (n == 1||n==2)
//	{
//		return 1;
//	}
//	else
//	{
//		return F(n - 1) + F(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	printf("%d", (F(n - 1) + F(n - 2)) % 10007);
//	return 0;
//}
//#include<stdio.h>
//int F(int n)//非递归，循环写
//{
//	int f1 = 1;
//	int f2 = 1;
//	int f3 = 0;
//	int i = 1;
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else
//		for (i = 3; i <= n; i++)
//		{
//			f3 = f1 + f2;
//			f1 = f2;
//			f2 = f3;
//		}
//	return f3;
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	printf("%d", F(n) % 10007);
//	return 0;
//}

//#define PAI 4*atan(1)
//int main()
//{
//	int c;
//	double S;
//	scanf_s("%d", &c);
//	S = PAI * c * c;
//	printf("%.7lf", S);
//	return 0;
//}
//int main()
//{
//	long c;
//	scanf_s("%d", &c);
//	long long num = 0;
//	for (; c > 0; c--)
//	{
//		num += c;
//	}
//	printf("%lld", num);
//	return 0;
//}
//int main()
//{
//	int year;
//	scanf_s("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[5];
//	int num = 0;
//	while (num < 32)
//	{
//		int temp = num;
//		for (int i = 4; i >= 0; i--)
//		{
//			arr[i] = num % 2;
//			num /= 2;
//		}
//		for (size_t i = 0; i < 5; i++)
//		{
//			printf("%d", arr[i]);
//		}
//		printf("\n");
//		num = temp;
//		num++;
//	}
//	
//	return 0;
//}
//int main()
//{
//	int n, m;
//	int i, j;
//	char c = 'A';
//	char arr[100][26];
//	scanf_s("%d%d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		if (c - 'A' > 0)
//		{
//			for (j = 0; j < i; j++)
//			{
//				arr[i][j] = c;
//				c -= 1;
//			}
//		}
//		for (j = i; j < m; j++)
//		{
//			arr[i][j] = c + j-i;
//		}
//		c += i+1;
//	}
//	for (i = 0; i < n; i++)
//	{
//
//		for (j = 0; j < m; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include<assert.h>
char* my_strncat(char* str1, const char* str2, int num)
{
	assert(str1 && str2);
	char* str = str1;
	while (*str1)
	{
		str1++;
	}
	while (num--)
	{
		*str1++ = *str2++;
	}
	return str;
}


char* my_strcpy(char* dest, const char* src) {
	char* ret = dest;  assert(dest != NULL);// 比特科技
		assert(src != NULL);    while ((*dest++ = *src++)) { ; }  return ret;
}
int main()
{
	char* p1 = "abcabac";
	char p2[50];// \0   == 0 
	char p3[] = "qwqeqqewwsdaf";
	my_strncat(p2, p1, 5);
	printf("%s\n", p2);

	my_strcpy(p2, p3);   
	printf("%s\n", p2);

	return 0;
}