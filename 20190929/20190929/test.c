#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#if 0
//用宏定义来缩减代码示例

//#define same(A,B) printf("%d\n",A>B?A:B)
//#define same(a,b) a##b   //链接a和b

//求大小端问题
/*
大小端
低地址存放权重小的数据时，此计算机为小端机
低地址存放权重高的数据为大端机
*/
int main()
{
	int a = 0x123456;
	char *b = (char*)&a;
	printf("%x\n",*b);
	return 0;
}




union fun
{
	char num;
	int numb;

}func;
int main ()
{
	int test = 0x123456;
	func.numb = test;
	printf("%x",func.num);
	return 0;
}
#endif








#if 0
void Show(int (*arr)[4],int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <row; i++)
	{
		for (j = 0; j<col ; j++)
		{
			//printf("%d ",arr[i][j]);
			printf("%d ",*(*(arr+i)+j));
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	Show(arr,3,4);
	printf("\n");
	printf("%d\n",arr);
	printf("%d\n",&arr+1);
	printf("%d\n",arr+1);
	printf("%d\n",arr[1]);
	printf("%d\n",*(arr+1)+1);
	printf("%d\n",arr[1]+1);
	return 0;
	 
}



int main ()
{
	/*int name1 = 20;
	same(name1,1):
	goto name11;
	printf("%d",name1);*/

	int i = 0;
	int j = 1;
	same(i,j);
	
	return 0;
} 
int main ()
{
	/*int n = 2;
	char *str1 = "hello";
	char *str2 = "hello";
	
	char *str1 = "he";
	char *str2 = "hello";
	if (str1 == str2)
	{
		printf ("str1= str2\n ");
	}*/

	return 0;
} 
#endif