#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <windows.h >

#define YES 1
#define NO 0

int htoi(char s[]);//输入任意进制转化为10进制
void freearr(char arr[], int len);//重置数组，（默认值为‘ ’）

int main()
{
	int c,i,len;
	char arr[100];

	i = 0;
	while (1)
	{
		while ((c = getchar()) != '\n')
		{
			arr[i] = c;
			++i;
		}
		printf("%d\n",htoi(arr));
		i=0;
		len = sizeof(arr)/sizeof(arr[0]);
		freearr(arr,len);
	}
	return 0;
}

int htoi(char s[])
{
	int hexdigit,i,inhex,n;

	i = 0;
	if (s[i] == '0')
	{
		++i;
		if (s[i] == 'x' || s[i] == 'X')//16进制
		{
			++i;
		}
		else if (s[i] == 'b' || s[i] == 'B')//2进制
		{
			++i;
		}
	}
	n = 0;
	inhex = YES;
	if (i == 0)//10进制
	{
		for (;inhex == YES;i++)
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				n = 10 * n + (s[i]-'0');
			}
			else
			{
				inhex = NO;
			}
		}
	}
	else if (i == 1)//8进制
	{
		for (;inhex == YES;i++)
		{
			if (s[i] >= '0' && s[i] <= '7')
			{
				n = 8 * n + (s[i]-'0');
			}
			else
			{
				inhex = NO;
			}
		}
	}
	else
	{
		if (s[1] == 'x' || s[1] == 'X')//16进制
		{
			for (; inhex == YES; ++i)
			{
				if (s[i] >= '0' && s[i] <= '9')
				{
					hexdigit = s[i] - '0';
				}
				else if (s[i] >= 'a' && s[i] <= 'f')
				{
					hexdigit = s[i] - 'a' + 10;
				}
				else if (s[i] >= 'A' && s[i] <= 'F')
				{
					hexdigit = s[i] - 'A' + 10;
				}
				else
				{
					inhex = NO;
				}
				if (inhex == YES)
				{
					n = 16 * n + hexdigit;
				}
			}
		}
		else//2进制
		{
			for (;inhex == YES;i++)
			{
				if (s[i] >= '0' && s[i] <= '1')
				{
					n = 2 * n + (s[i]-'0');
				}
				else
				{
					inhex = NO;
				}
			}
		}
	}
	
	return n;
}
void freearr(char arr[], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		arr[i] = ' ';
	}
}