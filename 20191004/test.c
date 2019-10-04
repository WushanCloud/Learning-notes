#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#define MAXLINE 1000/* 允许输入行的最大长度*/
#define TABINC 8/*制表符所占字节默认大小*/

int getline(char line[], int maxline);
void copy(char to[], char from[]);
int remove(char line[]);
int main ()
{
	int len;//当前行的长度
	int max;//目前为止发现最长行的长度
	char line[MAXLINE];//当前的输入行
	char longest[MAXLINE];//用于保存最大的行

	max = 0;
	while ((len = getline(line,MAXLINE)) > 0)
	{
		//len = remove(line);//sh
		if (len > max)//保存最大的行
		{
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)//存在这样的行
	{
		printf("%s",longest);
	}
	return 0;
}

int getline(char line[], int maxline)/*将一行读入并返回其长度*/
{
	int c,i;

	for (i = 0; i < maxline && (c = getchar()) != EOF && c != '\n'; i++)
	{
		line[i] = c;
	}
	if (c == '\n')
	{
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

void copy(char to[], char form[])
{
	int i;
	
	i = 0;
	while ((to[i] = form[i]) != '\0')
	{
		++i;
	}
}

int remove(char line[])//删去每句最后的空格和制表符
{
	int i;

	i = 0;
	while (line[i] != '\n')//读完输入
	{
		++i;
	}
	--i;//返回到回车符的前一个位置
	while(i > 0 && (line[i] == ' ' || line[i] == '\t'))
	{
		--i;
	}
	if (i >= 0)
	{
		line[++i] = '\n';
		line[++i] = '\0';
	}
	return i;
}

void detab(char line[])
{
	int i, nb, pos;

	i = 0; //字符下标
	nb = 0;//所需空格大小
	pos = 1; //字符在行中的位置
	while (line[i] != EOF)
	{
		if (line[i] == '\t')
		{
			nb = TABINC - ( pos - 1 ) % TABINC;
			while (nb > 0)//打印空格
			{
				putchar(' ');
				++pos;
				--nb;
			}
		}
		else if (line[i] == '\n')
		{
			pos = 1;
		}
		else
		{
			++pos;
		}
		++i;
	}
}