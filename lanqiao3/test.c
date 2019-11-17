//#include<stdio.h>
#if 0
int Func(char num[],int len)
{
	int sum = 0;
	int i = 0;
	while (len--)
	{
		if (num[i] >= '0' && num[i] <= '9')
		{
			sum = sum * 16 + num[i] - '0';
		}
		else if (num[i]>='A'&& num[i]<='F')
		{
			sum = sum * 16 + num[i]- 'A'+10;
		}
		i++;
	}
	return sum;
}
//十六进制转换十进制
int main()
{
	char arr[8] = { 0 };
	int i = 0;
	char ch;
	while ((ch = getchar()) != '\n')
	{
		arr[i] = ch;
		i++;
	}
	
	printf("%d",Func(arr,i));

	return 0;
}
#endif

#if 0
int main()
{
	char arr[9];
	scanf_s("%s", arr);
	int len = strlen(arr);
	unsigned int n = 1, s = 0;
	int i;
	for (i = len - 1; i >= 0; i--)
	{

		if (arr[i] >= 'A' && arr[i] <= 'F')
		{
			s = s + (arr[i] - 'A' + 10) * n;
		}
		else if (arr[i] <= '9')
		{
			s = s + (arr[i] - '0') * n;
		}
		n = n * 16;
	}printf("%u\n", s);
	return 0;
}
#endif

#if 0
#include<stdio.h>
#include<string.h>

int Func(char num[], int len)
{
	int sum = 0;
	int i = 0;
	while (len--)
	{
		if (num[i] >= '0' && num[i] <= '9')
		{
			sum = sum * 16 + num[i];
		}
		else if (num[i] >= 'A' && num[i] <= 'F')
		{
			sum = sum * 16 + num[i] - 'A' + 10;
		}
		i++;
	}
	return sum;
}
//十六进制转换十进制
int main()
{
	char arr[9] ;
	//int i = 0;
	//char ch;
	//while ((ch = getchar()) != '\n')
	//{
	//	arr[i] = ch;
	//	i++;
	//}
	scanf_s("%s", arr);
	int len = strlen(arr);
	printf("%u", Func(arr, len));

	return 0;
}

#endif

#if 0

//给定一个长度为n的数列，将这个数列按从小到大的顺序排列。1 <= n <= 200
#include<stdio.h>
#include<stdlib.h>
int cmp(const int* a, const int* b)
{
	return *a - *b;
}
int main()
{
	int arr[200];
	int n = 0;
	int i = 0;
	scanf_s("%d", &n);
	while (n--)
	{
		scanf_s("%d", &arr[i]);
		i++;
	}
	int len = i;
	qsort(arr, i, sizeof(arr[0]), cmp);

	for ( n = 0; n < len; n++)
	{
		printf("%d ", arr[n]);
	}
	return 0;
}
#endif

#if 0

#include<stdio.h>
#include<string.h>
int Func(char num[], int len)
{
	int sum = 0;
	int i = 0;
	while (len--)
	{
		if (num[i] >= '0' && num[i] <= '9')
		{
			sum = sum * 16 + num[i] - '0';
		}
		else if (num[i] >= 'A' && num[i] <= 'F')
		{
			sum = sum * 16 + num[i] - 'A' + 10;
		}
		i++;
	}
	return sum;
}
int main()
{
	char arr[10][7];
	int n = 0;
	scanf_s("%d", &n);
	int i;
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", arr[n]);
	}
	for (i = 0; i < n; i++)
	{
		int len = strlen(arr[i]);
		printf("%d", Func(arr[i], len));
	}
	

	return 0;
}


#endif
#if 0
#define _CRT_NONSTDC_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
char Func(char * str)
{
	int i = 0;//原字符位置；
	while (*(str+i) != '\0')
	{
		if (*(str + i) == 'a')
		{
			return 'a';
		}
		else if (*(str + i) == 'e')
		{
			return 'e';
		}
		else if (*(str + i) == 'i')
		{
			return 'i';
		}
		else if (*(str + i) == 'o')
		{
			return 'o';
		}
		else if (*(str + i) == 'u')
		{
			return 'u';
		}
		else
		{
			i++;
		}
	}
	if (*(str + i) == '\0')
		return 'n';
}
int main()
{
	char *word;
	scanf_s("%s", word);
	printf("%c",Func(word));
		return 0;
}

#endif
#if 0

#include<stdio.h>

int Func2(int num)
{
	while (num!= 0)
	{
		if (num % 10 == 2)
			return 1;
		num /= 10;
	}
	return 0;
}
int Func(int num)
{
	int i = 1;
	int sum = 0;//结净数个数；
	while (i <= num)
	{
		if (Func2(i) == 0)
			sum++;
		i++;
	}
	return sum;
}
int main()
{
	int num;
	scanf_s("%d", &num);
	printf("%d", Func(num));
	return 0;
}
#endif
#if 0
#include<stdio.h>

int Func(int num,int a,int b,int c)
{
	int sum = 0;//记录反倍数
	int i = 1;
	while (i <= num)
	{
		if (i % a != 0 && i % b != 0 && i % c != 0)
		{
			printf("%d  ", i);
			sum++;		
		}
			
		i++;
	}
	return sum;
}

int main()
{
	int num;
	scanf_s("%d", &num);
	int a, b, c;
	scanf_s("%d%d%d", &a,&b,&c);
	printf("%d", Func(num,a,b,c));
	return 0;
}

#endif
#if 0
//char* arr[1002][1002];
//int n, m;//行列
//scanf_s("%d%d", &n, &m);
//int i, j;
//for (i = 0; i < n; i++)
//{
//	for (j = 0; j < m; j++)
//	{
//		arr[n][m] = (char*)malloc(sizeof(char));
//	}
//}
#include<stdio.h>
void Func()
{
	int arr[50][50];
	int m = 0, n = 0;
	scanf_s("%d%d", &m, &n);
	int x; //横坐标
	int y; //竖坐标
	int z = 1; //给数组元素赋的值
	int c = 0;
	int i,j;
	scanf_s("%d%d", &i, &j);
	while (1) {
		if (z >= m* n)
			break;
		// 打印第（c）行
		for (x = c, y = c; y < n - c; y++) {
			arr[x][y] = z;
			z++;
		}
		// 打印第（n-c）列
		for (x = c + 1, y = n - 1 - c; x < m - c; x++) {
			arr[x][y] = z;
			z++;
		}
		// 打印第（m-1-c）行
		for (x = m - 1 - c, y = n - 2 - c; y >= c; y--) {
			arr[x][y] = z;
			z++;
		}
		// 打印第（c）列
		for (x = m - 2 - c, y = c; x > c; x--) {
			arr[x][y] = z;
			z++;
		}
		c++;
	}
	printf("%d", arr[i-1][j-1]);
	
}
int main()
{
	Func();
}

#endif
#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char arr[52][52];
	int n, m;//行列
	scanf_s("%d%d", &n, &m);
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for ( j = 1; j <= m; j++)
		{
			char ch;
			scanf_s("%c", &ch);
			arr[i][j] = ch;
		}
	}
	int k;
	scanf_s("%d", &k);
	while (k--)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= m; j++)
			{
				if (arr[i][j] == 'g')
				{
					if (arr[i - 1][j] != 'g')
						arr[i - 1][j] = 'h';
					if (arr[i + 1][j] != 'g')
						arr[i + 1][j] = 'h';
					if (arr[i][j - 1] != 'g')
						arr[i][j - 1] = 'h';
					if (arr[i][j + 1] != 'g')
						arr[i][j + 1] = 'h';
				}
			}
		}
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= m; j++)
			{
				if (arr[i][j] == 'h')
				{
					arr[i][j] = 'g';
				}
			}
		}
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			printf("%c", arr[n][m]);
		}
		printf("\n");
	}

	return 0;
}

#endif

#if 1
#include<stdio.h>

int main()
{
	int m = 0, n = 0; int k = 0;

	scanf_s("%d%d", &m, &n);
	m++;
	n++;
	char ch;
	ch = getchar();
	char arr[50][50] = {0};
	int i, j;
	for (i = 1; i < m; i++)
	{
		for (j = 1; j < n; j++)
		{
			scanf_s("%c", &arr[i][j]);
		}
		ch = getchar();
	}
	scanf_s("%d", &k);
	while (k--)
	{
		for (i = 1; i < n; i++)
		{
			for (j = 1; j < m; j++)
			{
				if (arr[i][j] == 'g')
				{
					if (arr[i - 1][j] != 'g')
						arr[i - 1][j] = 'h';
					if (arr[i + 1][j] != 'g')
						arr[i + 1][j] = 'h';
					if (arr[i][j - 1] != 'g')
						arr[i][j - 1] = 'h';
					if (arr[i][j + 1] != 'g')
						arr[i][j + 1] = 'h';
				}
			}
		}
		for (i = 1; i < n; i++)
		{
			for (j = 1; j < m; j++)
			{
				if (arr[i][j] == 'h')
				{
					arr[i][j] = 'g';
				}
			}
		}
	}
	for (i = 1; i < m; i++)
	{
		for (j = 1; j < n; j++)
			printf("%c", arr[i][j]);
		printf("\n");
	}
	return 0;
}
#endif