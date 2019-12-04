#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<malloc.h>
#include<math.h>


//void replaceSpace(char* str, int length) {
//	char arr[1000];
//	int i = 0;
//	while (str[i])
//	{
//		arr[i] = str[i];
//		i++;
//	}
//	arr[i] = '\0';
//	printf("%s", arr);
//	while (arr[i])
//	{
//		char a = 0;
//		char b = '0';
//	}
//	/*char* newstr = (char*)malloc(1000000);
//	int i = 0;
//	int j = 0;
//	while (str[i])
//	{
//		if (str[i] != ' ')
//		{
//			newstr[j] = str[i];
//			i++;
//			j++;
//		}
//		else
//		{
//			newstr[j++] = '%';
//			newstr[j++] = '2';
//			newstr[j++] = '0';
//			i++;
//		}
//	}
//	newstr[j] = '\0';
//	i = j = 0;
//	while (newstr[i])
//	{
//		str[i] = newstr[j];
//		i++;
//		j++;
//	}
//	str[j] = '\0';*/
//}

int main()
{
	/*char* p = "we are ds";
	int len = strlen(p);
	replaceSpace(p, len);
	printf("%s", p);*/

	unsigned char i = 7;
	int j = 0;
	for (; i > 0; i -= 3)
	{
		++j;
		printf("%d ", i);
	}
	printf("%d\n", j);
	return 0;
	
}