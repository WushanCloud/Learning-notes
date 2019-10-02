#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#if 0
//文本复制
int main ()
{
	int c = 0;
	c = getchar();
	while (c != EOF)
	{
		putchar(c);
		c = getchar();
	} 
	return 0;
}

//统计输入的字符个数
int main ()
{
	int nc = 0;
	while(getchar() != EOF )
	{++nc;}
	printf("%d\n",nc);
	return 0;
}

//统计行的个数
int  main()
{
	int c = 0;
	int nl = 0;
	while ((c = getchar()) != EOF)
	{
		if(c == '\n')
		++nl;
	}
	printf("%d\n",nl);
	return 0;
}

//统计单词的个数
int main()
{
	int c = 0;
	int nw = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{
			++nw;
		}
	}
	printf("%d\n",nw);
	return 0;
}
#endif
//将以上三分部合起来，也是UNIX中wc程序的主干部分
#define IN 1
#define OUT 0

main()
{
	int c,nl,nw,nc,state;

	state = OUT;
	nc = nl = nw = 0;
	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
		{
			++nl;
		}
		if (c == ' ' || c == '\t' || c == '\n')
		{
			state = OUT;
		}
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}

	printf("%d %d %d\n",nl,nw,nc);
}