//.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
//




//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
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
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
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
//��һ���ַ����������Ϊ:"student a am i",
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ��
//����ʹ�ÿ⺯����
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
//
//student a am i
//i ma a tneduts
//i am a student

#include<stdio.h>
#include<string.h>

void my_remove(char* str, int len)
{
	char* head = str;
	char* end = str + len-1;
	char temp;

	while (end>head)
	{
		temp = *head;
		*head = *end;
		*end = temp;
		head++;
		end--;
	}
}

char* Func(char* str, int len)
{
	char* arr = str;
	char* head = str;
	char* end = str;
	my_remove(str, len);
	for(;*end != '\0';end++)
	{
		if (*end == ' ')
		{
			
			my_remove(head,end-head);
			head = end+1;
		}
		
	}
	return arr;
}

int main()
{
	char arr[] = "student a am i";
	int len = strlen(arr);

	printf("%s", Func(arr,len));
	return 0;
}
