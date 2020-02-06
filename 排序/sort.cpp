// 排序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "sort.h"

//冒泡排序
void bubbleSort(int* arr, int n)
{
	//从小到大排，每次找出最大的
	//外层循环是排序总趟数，每次排一个，总共排n-1次
	for (int i = 0; i < n-1; i++)
	{
		//内层循环写一趟比较次数
		for (int j = 0; j < n-1-i; j++)
		{
			//如果前面的比后面的大则交换
			if (arr[j] > arr[j+1])
			{
				swap(arr[j + 1], arr[j]);
			}
		}
	}
}
//选择排序
void selectionSort(int* arr, int n)
{
	//每次找到最大的和最后一位做交换
	//首先对最后一个数做标记
	int end = n - 1;
	//max是单趟中最大数的下标
	int max = 0;
	//外层循环控制趟数,每次排一个最大值
	for (int i = 0; i < n-1; i++)
	{
		//设第一个是最大的数
		max = 0;
		//内层循环控制比较的次数，找到最大值的下标
		for (int j = 0; j < n-1-i; j++)
		{
			//如果下一个数比当前数大则重置最大的数的下标
			if (arr[j+1] > arr[max])
			{
				max = j+1;
			}
		}
		//交换
		swap(arr[max], arr[end--]);
	}
}
//插入排序
void insertSort(int* arr, int n)
{
	//从下一个开始，判断该数字是否有序，无序则把该数字向前找到合适的位置插入
	//从前往后排
	//外层循环控制判断总次数
	for (int i = 0; i < n-1; i++)
	{
		//如果下一个数字无序，则进行插入排序
		if (arr[i + 1] < arr[i])
		{
			//从后向前插入
			for (int j = i+1; j > 0; j--)
			{
				//如果当前值比前面的小，则交换
				if (arr[j]<arr[j-1])
				{
					swap(arr[j], arr[j - 1]);
				}
				else
				{
					break;
				}
			}
		}
	}
}
//希尔排序
void shellSort(int* arr, int n)
{
	//间距型插入法排序
	//设置间距
	int temp = n / 2;
	//外层循环控制间距
	for (; temp > 0; temp /= 2)
	{
		//排序起始位
		for (int i = 0; i < temp; i++)
		{
			//间距型插入排序
			for (int j = i; j < n-temp; j += temp)
			{
				//如果当前值比前面的小，则交换
				if (arr[j] > arr[j + temp])
				{
					swap(arr[j], arr[j + temp]);
					//向前交换
					for (int k = j; k >= temp; k-=temp)
					{
						//如果当前值比前面的小，则交换
						if (arr[k] < arr[k-temp])
						{
							swap(arr[k], arr[k- temp]);
						}
						else
						{
							break;
						}
					}
				}
			}
		}
		//print(arr, n);
	}
}
void print(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}cout << endl;
}
