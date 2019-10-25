#include<stdio.h>
#include<string.h>
#include<assert.h>


int my_strlen(const char *p)
{
	/*assert(p);*/
	const char* end = p;
	while (*end)
	{
		++end;
	}
	return end - p;
}

char* my_strcpy(char *a, const char *p)
{
	/*assert(a);
	assert(p);*/
	char* ret = a;
	while (*a++ =*p++)
	{
	}
	return ret;
}

char* my_strcat(char *str1, const char *str2)
{
	/*assert(str1);
	assert(str2);*/
	char *ret = str1;
	while (*str1)
	{
		str1++;
	}
	while (*str1++ = *str2++)
	;
	return ret;
}

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

//int main()
//{
//
//	char* p1 = "hello";
//	char p2[20];
//	strcpy(p2, "wor\0ld");
//
//	my_strcat(p2, p1);
//
//	printf("%s\n", p2);
//	return 0;
//}

const char* my_strstr(const char* str1,const char* str2)//str1是原文档str2是要找的字符
{
	const char* start = str1;
	const char* sup = str2;
	while(*start)
	{
		while (*str1 == *sup && *sup != '\0')
		{
			str1++;
			sup++;
		}
		if(*sup == '\0')
		{
			return start;
		}
		else
		{
			str1 = start +1;
			sup = str2;
			start++;
		}
	}
	return NULL;
}

/*
int main()
{
	char *p1 = "qwerwt";
	char *p2 = "wt";
	
	printf("%s\n",my_strstr(p1,p2));
	return 0;
}
*/
/* 复制任意类型 */
void * my_memcpy ( void * dst, const void * src, size_t count)
{
	char *p1 = (char*)dst;
	const char *p2 = (const char*)src;

	while (count--)
	{
		p1[count] = p2[count];
	}

}
/*
int main()
{
	char p1[] = "qrt";
	char p2[] = "wqrt";
	my_memcpy(p2,p2+1,2);
	printf("%s\n",p2);
	return 0;
}*/
void * my_memmove ( void * dst, const void * src, size_t count)
{
	char *p1 = (char *)dst;
	const char *p2 = (const char *)src;
	size_t i = 0;
	if (p1>p2 && p2+count>p1)
	{
		while (count--)
		{
			p1[count] = p2[count];
		}
	}
	else
	{
		for ( i = 0;i<count;i++)
		{
			p1[i] = p2[i];
		}
	}
}
/*
int main()
{
	char p1[10] = "12345";
	char p2[10] = "123456";
	//my_memmove(p2,p2+2,3);
	my_memmove(p2,p2+2,3);
	printf("%s\n",p2);
	return 0;
}
*/
//-------------------------------------------------------------------------------------------------


enum DAY
{
      MON=1, TUE, WED, THU, FRI, SAT, SUN
};
 
int main()
{
    enum DAY day;
    day = WED;
    printf("%d",day);
    return 0;
}