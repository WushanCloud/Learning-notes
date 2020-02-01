// eightQueen.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#define N 8
using namespace std;

int sum = 0;

int isTrue(int row, int col, int(*arr)[N])
{
	//判断列
	for (size_t i = 0; i < N; i++)
	{
		if (arr[i][col] == 1)
		{
			return 0;
		}
	}

	int min = __min(row, col);
	int m = row - min, n = col - min;
	//判断正对角
	while (m != N && n != N)
	{
		if (arr[m][n] == 1)
		{
			return 0;
		}
		m++, n++;
	}

	int k = N-1-col;
	m = row - k; n = col + k;
	//判断反对角
	while (m !=N && n>0 )
	{
		if (arr[m][n] == 1)
		{
			return 0;
		}
		m++, n--;
	}
	return 1;
}
void eightQueen(int row,int col,int (*arr)[N])
{
	int arr2[N][N];
	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < N; j++)
		{
			arr2[i][j] = arr[i][j];
		}
	}
	if (row == N)
	{
		sum++;
		cout << "第" <<sum <<"种方法"<< endl;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cout << arr2[i][j]<<" ";
			}
			cout << endl;
		}
		cout << endl;
	}
	else
	{
		for (col = 0; col < N; col++)
		{
			if (isTrue(row, col, arr))
			{
				for (size_t k = 0; k < N; k++)
				{
					arr2[row][k] = 0;
				}
				arr2[row][col] = 1;
				eightQueen(row+1,col,arr2);
			}
		}
	}
}

int main()
{
	int arr[N][N]{ 0 };

	eightQueen(0,0,arr);

	return 0;
}
