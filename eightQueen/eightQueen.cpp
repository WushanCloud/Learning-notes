// eightQueen.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#define N 8
using namespace std;

int sum = 0;

int isTrue(int row, int col, int(*arr)[N])
{
<<<<<<< HEAD
	//判断列
	for (size_t i = 0; i < N; i++)
	{
		if (arr[i][col] == 1)
		{
			return 0;
=======
	////判断行
	//for (size_t i = 0; i < N; i++)
	//{
	//	if (i == col)continue;
	//	else
	//	{
	//		if (arr[row][i] == 1)
	//		{
	//			return 0;
	//		}
	//	}
	//}
	//判断列
	for (size_t i = 0; i < N; i++)
	{
		if (i == col)continue;
		else
		{
			if (arr[i][col] == 1)
			{
				return 0;
			}
>>>>>>> cb147a9b4e81a0102309c628e6bd0e06d8d6bd20
		}
	}

	int min = __min(row, col);
	int m = row - min, n = col - min;
	//判断正对角
	while (m != N && n != N)
	{
<<<<<<< HEAD
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
=======
		if (m == row && n == col)
		{
			m++, n++;
			continue;
		}
		else
		{
			if (arr[m][n] == 1)
			{
				return 0;
			}
			m++, n++;
		}
	}
	int k = N-1-col;
	m = row - k; n = col + k;
	//判断反对角
	while (m != N && n != N)
	{
		if (m == row && n == col)
		{
			m--, n++;
			continue;
		}
		else
		{
			if (arr[m][n] == 1)
			{
				return 0;
			}
			m--, n++;
		}
>>>>>>> cb147a9b4e81a0102309c628e6bd0e06d8d6bd20
	}
	return 1;
}
void eightQueen(int row,int col,int (*arr)[N])
{
<<<<<<< HEAD
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
=======
	if (row == N)
	{
		sum++;
>>>>>>> cb147a9b4e81a0102309c628e6bd0e06d8d6bd20
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
<<<<<<< HEAD
				cout << arr2[i][j]<<" ";
=======
				cout << arr[i][j]<<" ";
>>>>>>> cb147a9b4e81a0102309c628e6bd0e06d8d6bd20
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
<<<<<<< HEAD
					arr2[row][k] = 0;
				}
				arr2[row][col] = 1;
				eightQueen(row+1,col,arr2);
=======
					arr[row][k] = 0;
				}
				arr[row][col] = 1;
				eightQueen(row+1,col,arr);
>>>>>>> cb147a9b4e81a0102309c628e6bd0e06d8d6bd20
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
