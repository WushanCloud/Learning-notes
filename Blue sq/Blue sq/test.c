#include<stdio.h>

//modify ͳ��һ���ַ����У�ÿ����ĸ���ֵĴ�����������������ĸ�������

char modify(char * str)
{
	int count[26];
	int i = 0;
	for (i = 0; i < 26; i++)
		count[i] = '0';
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			count[*str - 'a']++;
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			count[*str - 'A']++;
		}
		str++;
	}
	char max_num = 'a';
	int max_word = count[0];
	for (i = 1; i < 26; i++)
	{
		if (count[i] > max_word)
		{
			max_num = 'a' + i;
		}
	}
	return max_num;
}
//
//int main()
//{
//	char* str = "qweasdqqq";
//
//	printf("%c", modify(str));
//	return 0;
//}