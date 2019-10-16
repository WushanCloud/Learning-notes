#include<stdio.h>
#include<assert.h>

/*
int my_strlen(const char *p)
{
	assert(p);

	const char* end = p;

	while (*end)
	{
		++end;
	}
	return end - p;
}

int main()
{
	char* p = "qwer";
	char s[10];
	printf("%d",my_strlen(p));
	return 0;
}
*/
/*
char* my_strcpy(char *a, const char *p)
{
	assert(a);
	assert(p);
	char* ret = a;
	while (*a++ =*p++)
	{
	}
	return ret;
}

int main()
{
	char* p = "qwer";
	char s[10];
	printf("%s", my_strcpy(s,p));
	return 0;
}
*/
/*
char* my_strcat(char *str1, const char *str2)
{
	assert(str1);
	assert(str2);

	char* ret = str1;
	while (*str1)
	{
		str1++;
	}
	while ((*str1 = *str2) !='\0')
	{
		str1++;
		str2++;
	}
	return ret;
}


int main()
{
	char* p1 = "qwer";
	char* p2 = "qwer";
	
	printf("%s", my_strcat(p1, p2));

	return 0;
}
*/
int my_strcmp(const char* str1, const char* str2)
{
	while (*str1 && *str2)
	{
		if (*str1 > *str2)
		{
			return 1;
		}
		else if (*str1 < * str2)
		{
			return -1;
		}
		else
		{
			++str1;
			++str2;
		}
	}
	if (*str1 == '\0' && *str2 != '\0')
	{
		return -1;
	}
	else if (*str1 != '\0' && *str2 == '\0')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	char* p1 = "qwer";
	char* p2 = "qwer";

	printf("%d", my_strcmp(p1, p2));

	return 0;
}