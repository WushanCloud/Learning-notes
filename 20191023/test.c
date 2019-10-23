//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//
/*
#include <stdio.h>
#include <string.h>
char * leftRunN (char *str, int k, int len)
{
	char *start = str;

	while (k)
	{
		char head_1 = *str;
		int i = 0;
		for (i = 0; i < len-1; i++)
		{
			str[i] = str[i+1];
		}
		str[len - 1] = head_1;
		k--;
	}
	return start;
}

int main()
{
	char str[] = "ABCD";
	int len = strlen(str);

	printf("%s",leftRunN(str,3,len));
	return 0;
}

*/
//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 =AABCD和s2 = BCDAA，返回1
//给定s1=abcd和s2=ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC

#include <stdio.h>
#include <string.h>

char * leftRunN (char *str, int k, int len)//左旋
{
	char *start = str;

	while (k)
	{
		char head_1 = *str;
		int i = 0;
		for (i = 0; i < len-1; i++)
		{
			str[i] = str[i+1];
		}
		str[len - 1] = head_1;
		k--;
	}
	return start;
}

//char * rightRunN (char *str, int k, int len)//右旋
//{
//	char *start = str;
//
//	while (k)
//	{
//		char head_1 = str[len-1];
//		int i = 0;
//		for (i = len-1; i >= 0 ; i--)
//		{
//			str[i] = str[i-1];
//		}
//		str[0] = head_1;
//		k--;
//	}
//	return start;
//}

int runCmp(char *str1, char *str2,int len1,int len2)
{
	if (len1 != len2)
	{
		return 0;
	}
	else if (strcmp(str1,str2) == 0)
	{
		return 1;
	}
	else if (strcmp(str1,str2)!= 0)
	{
	
		int i = 0;
		for (i = 0; i < len2-1; i++)
		{
			leftRunN(str2,1,len2);
			if (strcmp(str1,str2))
			{
				return 1;
			}
			else
			{
				continue;
			}
		}
		//leftRunN(str2,1,len2);
		//for (i = 0; i < len2-1; i++)
		//{
		//	rightRunN(str2,1,len2);
		//	if (strcmp(str1,str2))
		//	{
		//		return 1;
		//	}
		//	else
		//	{
		//		continue;
		//	}
		//}
		
	}
	return 0;
}
int main()
{
	char str1[] = "ABCD";
	char str2[] = "DABC";
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	printf("%d",runCmp(str1,str2,len1,len2));
	return 0;
}
