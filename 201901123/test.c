
#if 0
#include<stdio.h>

//ö��
enum Num
{
	one = 1, two, three = 10, four = 20, five
}num;
int main()
{
	num = one; printf("%d\n", num);
	num = two; printf("%d\n", num);
	num = three; printf("%d\n", num);
	num = four; printf("%d\n", num);
	num = five; printf("%d\n", num);
	return 0;
}
#endif

#include <stdio.h>

struct Age
{
	unsigned int age : 3;
}Age;
int main()
{
	Age.age = 4;
	printf("Sizeof( Age ) : %d\n", sizeof(Age));
	printf("Age.age : %d\n", Age.age);

	Age.age = 7;
	printf("Age.age : %d\n", Age.age);

	Age.age = 8; // �����Ʊ�ʾΪ 1000 ����λ������
	printf("Age.age : %d\n", Age.age);

	return 0;
}