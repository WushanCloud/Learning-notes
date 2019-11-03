#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strncpy(char* strDest, const char* strSource, size_t count)
{
	assert(strDest&&strSource);

	char* strHead = strDest;

	for(; *strSource!='\0'&&count>0;count--)
	{
		*strDest++ = *strSource++;
	}
	if (*strSource == '\0')
	{
		*strDest++ = '\0';
	}
	while (count)
	{
		*strDest = '0';
		count--;
	}
	return strHead;
}

char* my_strncat(char* strDest, const char* strSource, size_t count)
{
	assert(strDest && strSource);

	char* strHead = strDest;

	while (*strDest)
	{
		strDest++;
	}
	
	for (; *strSource != '\0' && count > 0; count--)
	{
		*strDest++ = *strSource++;
	}
	*strDest = '\0';
	
	return strHead;
}

int my_strncmp(const char* string1, const char* string2, size_t count)
{
	assert(string1 && string2);
	for (;string1!='\0'&&string2!='\0'&&count>=0;count--)
	{
		if (count == 0)
		{
			return 0;
		}
		else if (*string1 > * string2)
		{
			return 1;
		}
		else if (*string1 < *string2)
		{
			return -1;
		}
		else
		{
			string1++;
			string2++;
		}
	}
	if (*string1 == '\0' && *string2 != '\0')
	{
		return -1;
	}
	else if (*string1 != '\0' && *string2 == '\0')
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
	//char str1[] = "To be or not to be";
	//char str2[40];
	//char str3[40];

	//my_strncpy(str2, str1, sizeof(str2));
	//my_strncpy(str3, str2, 5);
	//str3[5] = '\0';

	//puts(str1);
	//puts(str2);
	//puts(str3);

	//char str1[20];
	//char str2[20];
	//strcpy(str1, "To be ");
	//strcpy(str2, "or not to be");
	//my_strncat(str1, str2, 6);
	//puts(str1);

	/*
	char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
	int n;
	puts("Looking for R2 astromech droids...");
	for (n = 0; n < 3; n++)
		if (my_strncmp(str[n], "R2xx", 2) == 0)
		{
			printf("found %s\n", str[n]);
		}
	*/
	return 0;
}