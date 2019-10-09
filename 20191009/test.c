#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


/* 每次颠倒一个输入行中的字符串 */
void reverse(char s[])
{
	int i,j;
	char temp;

	i = 0;
	while (s[i] != '\0')
	{
		++i;
	}
	--i;
	if (s[i] == '\n')
	{
		--i;
	}
	j = 0;
	while (j <i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		--i;
		++j;

	}
}

/* 将整数转化为以b为底的数，并将结果以字符的形式保存到字符串s中 */
void itob(int n, char s[], int b)
{
	int i,j,sign;
	void reverse(char s[]);

	if ((sign = n) < 0)
	{
		n = -n;
	}
	i = 0;
	do
	{
		j = n%b;
		s[i++] = (j <= 9)? j+'0': j+'a'-10;
	} while ((n /= b) > 0);
	if (sign <0)
	{
		s[i++] = '-';
		s[i] = '\0';
		reverse(s);
	}
}



int main ()
{
	return 0;
}