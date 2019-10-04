#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#define MAXLINE 1000/* ���������е���󳤶�*/
#define TABINC 8/*�Ʊ����ռ�ֽ�Ĭ�ϴ�С*/

int getline(char line[], int maxline);
void copy(char to[], char from[]);
int remove(char line[]);
int main ()
{
	int len;//��ǰ�еĳ���
	int max;//ĿǰΪֹ������еĳ���
	char line[MAXLINE];//��ǰ��������
	char longest[MAXLINE];//���ڱ���������

	max = 0;
	while ((len = getline(line,MAXLINE)) > 0)
	{
		//len = remove(line);//sh
		if (len > max)//����������
		{
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)//������������
	{
		printf("%s",longest);
	}
	return 0;
}

int getline(char line[], int maxline)/*��һ�ж��벢�����䳤��*/
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

int remove(char line[])//ɾȥÿ�����Ŀո���Ʊ��
{
	int i;

	i = 0;
	while (line[i] != '\n')//��������
	{
		++i;
	}
	--i;//���ص��س�����ǰһ��λ��
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

	i = 0; //�ַ��±�
	nb = 0;//����ո��С
	pos = 1; //�ַ������е�λ��
	while (line[i] != EOF)
	{
		if (line[i] == '\t')
		{
			nb = TABINC - ( pos - 1 ) % TABINC;
			while (nb > 0)//��ӡ�ո�
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