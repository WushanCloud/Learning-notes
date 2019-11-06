#include<stdio.h>
#include<math.h>
#include<malloc.h>
#include<assert.h>
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
//#include<assert.h>
//char* my_strncat(char* str1, const char* str2, int num)
//{
//	assert(str1 && str2);
//	char* str = str1;
//	while (*str1)
//	{
//		str1++;
//	}
//	while (num--)
//	{
//		*str1++ = *str2++;
//	}
//	return str;
//}
//
//
//char* my_strcpy(char* dest, const char* src) {
//	char* ret = dest;  assert(dest != NULL);// 比特科技
//		assert(src != NULL);    while ((*dest++ = *src++)) { ; }  return ret;
//}
//int main()
//{
//	char* p1 = "abcabac";
//	char p2[50];// \0   == 0 
//	char p3[] = "qwqeqqewwsdaf";
//	my_strncat(p2, p1, 5);
//	printf("%s\n", p2);
//
//	my_strcpy(p2, p3);   
//	printf("%s\n", p2);
//
//	return 0;
//}
//int main()
//{
//	int n;
//	int arr[10000];
//	scanf_s("%d", &n);
//	int i = 0;
//	for (i; i < n; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//
//	int max, min,sum;
//	sum = max = min = arr[0];
//	for (i=1; i < n; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//		if (min > arr[i])
//			min = arr[i];
//		sum += arr[i];
//	}
//	printf("%d\n%d\n%d", max, min,sum);
//
//	return 0;
//}
//int main()
//{
//	int n;
//	int arr[1000];
//	scanf_s("%d", &n);
//	int i = 0;
//	for (i; i < n; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	int find;
//	scanf_s("%d", &find);
//
//	for (i = 0; i < n; i++)
//	{
//		if (find == arr[i])
//		{
//			printf("%d", i + 1);
//			break;
//		}
//	}
//	if (i == n)
//	{
//		printf("-1");
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int arr[34][34];
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		j = 0;
//		arr[i][j] = 1;
//		j = i;
//		arr[i][j] = 1;
//	}
//	if (n > 2)
//	for (i = 2; i < n; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 100;
//	int a, b, c;
//	for (i; i < 1000; i++)
//	{
//		c = i % 10;
//		b = i / 10 % 10;
//		a = i/100;
//		if ((a * a * a + b * b * b + c * c * c) == i)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//int Fun(int n)
//{
//	int a, b;
//	b = n % 10;
//	a = n / 10;
//	return (b * 10 + a);
//}
//int main()
//{
//	int i = 1111;
//	for (i; i < 10000; i++)
//	{
//		if (i / 100 == Fun(i % 100))
//			printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int n;//人数
//	scanf_s("%d", &n);
//	int arr[100][3];
//	int i,j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf_s("%d", &arr[i][j]);
//		}
//	}
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		int max = 0;
//		for (j = 0; j < 2; j++)
//		{
//			if (arr[i][j] > arr[i][j+1])
//			{
//				max = j;
//			}
//			else
//			{
//				max = j + 1;
//			}
//		}
//		if (max != 0)
//		{
//			int temp = arr[i][0];
//			arr[i][0] = arr[i][max];
//			arr[i][max] = temp;
//		}
//		if (arr[i][1] >= arr[i][2])
//		{
//			sum += arr[i][1];
//		}
//		else
//		{
//			sum += arr[i][2];
//		}  
//	}
//	printf("%d", sum);
//	return 0;
//}
//void msort(int* arr,int len)
//{
//	int i, j;
//	int temp;
//	int tip;
//
//	for (i = len - 1; i > 0; i--)
//	{
//		tip = 0;
//		for (j = 0; j < i; j++)
//		{
//
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				tip = 1;
//			}
//		}
//
//		if (tip == 0)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int n;//人数
//	scanf_s("%d", &n);
//	int arr[3000];
//	int i;
//	for (i = 0; i < n*3; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	msort(arr, 3 * n);
//	int len = 3 * n-2;
//	long long sum = 0;
//	while(n)
//	{
//		sum += arr[len];
//		len -= 2;
//		n--;
//	}
//	printf("%lld", sum);
//	return 0;
//}

//10 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000
//#include<assert.h>
//char* delnc(char* dst)
//{
//	assert(dst);
//	char* head = dst;
//	while (*dst)
//	{
//		*dst = *(dst + 1);
//		*dst++;
//	}
//	*dst = '\0';
//	return head;
//}
//char* delns(char* dst, const char* src )
//{
//	assert(dst && src);
//	char* head = dst;
//	char* p = src;
//	while (*dst)
//	{
//		while (*p)
//		{
//			if (*dst == *p)
//			{
//				delnc(dst);
//				break;
//			}
//				
//			p++;
//		}
//		p = src;
//		dst++;
//	}
//
//	return head;
//}
//
//int main()
//{
//	char str1[] = "They are students.";
//	char str2[] = "aeiou";
//	
//	delns(str1, str2);
//	printf("%s", str1);
//	return 0;
//}
//int main()
//{
//	while (1)
//	{
//	int total = 0;//总汽水数
//	int money ;
//	scanf_s("%d", &money);
//	int empty = 0;//空瓶
//	total = money;
//	empty = total;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty/2 + empty % 2;
//	}
//	printf("%d\n", total);
//	}
//	
//	return 0;
//}

typedef sturct Node{
	int data;
	Node* next;
}Node;
