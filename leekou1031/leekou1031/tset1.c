#include"main.h"

/*宝石与石头*/
int numJewelsInStones(char* J, char* S) {
	int sum = 0;
	char* tip = S;
	while (*S != '\0')
	{
		if (*S == *J)
			sum++;
		if (*(S + 1) == '\0')
			if (*(J + 1) != '\0')
			{
				S = tip;
				J++;
				continue;
			}
			else
				break;
		S++;
	}
	return sum;
}

char* defangIPaddr(char* address) {
	char *unuse;//在函数中使用的数组在栈上开辟，返回时被释放，必须在堆上开辟内存，才能返回
	unuse = (char*)malloc(22);
	int i = 0;
	while (*address)
	{
		if (*address == '.')
		{
			unuse[i++] = '[';
			unuse[i++] = '.';
			unuse[i++] = ']';
			address++;
		}
		unuse[i++] = *address;
		address++;
	}
	unuse[i] = '\0';
	
	return unuse;
}