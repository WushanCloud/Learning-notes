//.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值是value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
//




//2.不使用（a + b） / 2这种方式，求两个数的平均值。
//
//
//#include<stdio.h>
//int Func(int a, int b)
//{
//	/*int a1 = a & b;
//	 a1 = a | b;
//	 a1 = a1 >>*/
//	return ((a & b) + ((a | b) >> 1));
//	/*
//	0100
//	0010
//	0000
//
//	0110 6
//	0011 3
//
//	*/
//
//}
//
//int main()
//{
//	int a = 4;
//	int b = 2;
//
//	int c = a - (a - b) / 2;
//	printf("%d, %d",c,Func(a,b));
//	return 0;
//}
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//
//
//#include<stdio.h>
//int  Func(int *array, int len)
//{
//	int i;
//	int arr = 0;
//	for (i = 0; i < len; i++)
//	{
//		arr ^= array[i];
//	}
//	return arr;
//}
//int main()
//{
//	int arr[] = {1,1,2,2,3};
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	printf("%d", Func(arr, len));
//}

//4.
//有一个字符数组的内容为:"student a am i",
//请你将数组的内容改为"i am a student".
//要求：
//不能使用库函数。
//只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//student a am i
//i ma a tneduts
//i am a student

#include<stdio.h>
#include<string.h>
void Fun2(char* str, int len)
{
	char* head = str;
	char* end = str + len-1;
	while (head < end)
	{
		int temp = *head;
		*head = *end;
		*end = temp;
		head++;
		end--;
	}
}
void Fun1(char* str, int len)
{
	Fun2(str, len);
	int i = 0;
	len++;
	while (len--)
	{
		if (*str == ' ' || *str == '\0')
		{
			Fun2(str - i, i);
			i = 0;
			str++;
		}
		else {
			str++;
			i++;
		}
	}
}
int main()
{
	char str[100];
	char c;
	int i = 0;
	int len;
	while ((c = getchar()) != '\n')
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	len = strlen(str);
	Fun1(str, len);
	printf("%s", str);
	return 0;
}
