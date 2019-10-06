#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

	
/* squeeze函数，将字符串S1中与s2中相同的字符删除掉 */
void squeeze (char s1[], char s2[])
{
	int i,j,k;

	for ( i = 0,j = 0; s1[i] != '\0'; i++)
	{
		for (k = 0; s2[k] != '\0' && s2[k] != s1[i]; k++)
			;
			if (s2[k] == '\0')
			{
				s1[j++] = s1[i];
			}
	}
	s1[j] = '\0';
}

int main ()
{
	int i = 0;
	char arr1[10] = "012345678";
	char arr2[3] = "14";
	while (arr1[i] != '\0')
	{
		printf("%c ",arr1[i++]);
	}
		printf("\n");
		i = 0;
	while (arr2[i] != '\0')
	{
		printf("%c ",arr2[i++]);
	}
		printf("\n");
	squeeze(arr1,arr2);
	i = 0;
	while (arr1[i] != '\0')
	{
		printf("%c ",arr1[i++]);
	}
	printf("\n");
	return 0;
}