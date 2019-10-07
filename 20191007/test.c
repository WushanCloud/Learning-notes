#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);
int setbits(unsigned int x, int p,int  n, unsigned int y);
int main()
{
	//int numb = 2;
	//0000 0000 0000 0000 0000 0000 0000 0010
	//printf("%d ",getbits((unsigned)numb,1,2));
	printf("%d ",setbits((unsigned)2,0,1,1));
	//printf("%d",6&-8);
	return 0;
}
/* 返回x中从p位开始的n位 */
/* 从权重最小开始按0~31数 */
/*unsigned getbits(unsigned x, int p, unsigned int n)
{
	return (x >> (p+1-n)) & ~(~0 << n);
	//(p+1-n)	1
	//(x>>)		0000 0000 0000 0000 0000 0000 0000 0001 
	//~0		1111 1111 1111 1111 1111 1111 1111 1111
	//(~0 << n)	1111 1111 1111 1111 1111 1111 1111 1100
	//~(~0 << n)0000 0000 0000 0000 0000 0000 0000 0011
	//&			0000 0000 0000 0000 0000 0000 0000 0001
}*/

/* 将x中从p位开始的n个位设置成y中最右边的n个位 */
int setbits(unsigned int x, int p,int  n,unsigned int y)
{
	return x&~( ~(~0<<n) << (p+1-n) ) | (y & ~(~0 << n)) << (p+1-n);
}