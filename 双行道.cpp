双行道
时间限制：C/C++语言 1000MS；其他语言 3000MS
内存限制：C/C++语言 65536KB；其他语言 589824KB
题目描述：
有一个2*n的网格，有一个人位于(1,1)的位置，即左上角，他希望从左上角走到右下角，即(2,n)的位置。在每一次，他可以进行三种操作中的一种：
1． 向右走一格，即从(x,y)到(x,y+1);
2． 向上右方走一格，即，如果他在(2,y)的位置可以走到(1,y+1);
3． 向下右方走一格，即，如果他在(1,y)的位置可以走到(2,y+1);
 
问题当然不会这么简单，在这2*n的格子中，有一部分格子上有障碍物，他不能停在障碍物上，当然也不能走出网格，请问他有多少种不同的路线可以到达(2,n)。
输入
输入第一行仅包含一个正整数n，表示网格的长度。(1<=n<=50)
接下来有2行,每行有n个字符，“X”代表障碍物，“.”代表可以停留。
输出
如果没有可以到达的路线则输出-1，否则输出方案数量。

样例输入
5
..X.X
XX...
样例输出
2




#include <iostream>
using namespace std;

int num = 0;

bool isOk(char** arr, int n, int i, int j)
{
	//该位置为最后一例时
	if (n == j)
	{
		if (i == 1)
			return true;
		else
			return false;
	}
	//走的下一个位置
	if (arr[i][j] == '.')
		return true;
	else
		return false;
}
//i: 行 j : 列
void run(char** arr, int n, int i,int j)
{
	if (j == n)//到达最后一个位置
	{
		num++;
	}
	else
	{
		j++;
		for (i = 0; i < 2; i++)
		{
			if (isOk(arr, n, i, j))
			{
				run(arr, n, i, j);
			}
		}
	}
}



int main()
{
	
	int n = 0;
	cin >> n;

	char **arr = new char*[2];

	arr[0] = new char[n+1];
	arr[1] = new char[n+1];
	//赋值
	for (int i = 0; i < 2; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> arr[i][j];
		}
	}

	run(arr, n, 0, 1);

	cout << num;
	return 0;
}
