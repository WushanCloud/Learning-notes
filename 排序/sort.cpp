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
void quickSort_digui(int *arr,int start,int end)
{
	//判断当前区域是否需要排序

	if (start >= end) return;
	//如果当前两值相差为1，且顺序则退出
	if (start + 1 == end)
	{
		if (arr[start] > arr[end])
		{
			swap(arr[start], arr[end]);
		}
		return;
	}
	//进行分割排序
	else
	{
		//设置基准值下标为最后一位
		int mid = end;
		//起始位
		int left = start;
		//最后位
		int right = end - 1;
		//把大于基准值的放在左侧，小于的放在右侧
		while (left < right)
		{
			while (arr[left] < arr[mid] && left < right)
			{
				left++;
			}
			while (arr[right] >= arr[mid] && right > left)
			{
				right--;
			}
			swap(arr[left], arr[right]);
		}
		if (arr[right] > arr[mid])
		{
			swap(arr[right], arr[mid]);
		}
		quickSort_digui(arr, start, right);
		quickSort_digui(arr, right+1, end);
	}
}//快速排序
void quickSort(int* arr, int n)
{
	quickSort_digui(arr, 0, n - 1);
}
//归并----有序合并左右数组
void merge(int* arr, int left, int mid, int right)
{
	//左侧数组长度
	int leftSize = mid-left+1;
	//右侧数组长度
	int rightSize = right - mid;
	//左侧数组
	int* leftarr = (int*)malloc(sizeof(int) * leftSize);
	//右侧数组
	int* rightarr = (int*)malloc(sizeof(int) * rightSize);
	//给左侧数组赋值
	for (int i = 0,j = left; i < leftSize; i++,j++)
	{
		leftarr[i] = arr[j];
	}
	//给右侧数组赋值
	for (int i = 0,j = mid+1; i < leftSize; i++,j++)
	{
		rightarr[i] = arr[j];
	}
	//有序合并两数组
	//i：左侧数组下标，j：右侧数组下标，k：原数组下标
	int i = 0, j = 0, k = left;
	while (i < leftSize && j < rightSize)
	{
		if (leftarr[i] < rightarr[j])
		{
			arr[k] = leftarr[i];
			i++;
			k++;
		}
		else
		{
			arr[k] = rightarr[j];
			j++;
			k++;
		}
	}
	while (i < leftSize)
	{
		arr[k] = leftarr[i];
		i++;
		k++;
	}
	while (j < rightSize)
	{
		arr[k] = rightarr[j];
		j++;
		k++;
	}
	//释放
	free(leftarr);
	free(rightarr);
}
void mergeSort_digui(int *arr,int left,int right)
{
	//结束条件
	if (left == right)	return;
	//分治法，mid在属于前半部分
	int mid = (left + right) / 2;
	mergeSort_digui(arr, left, mid);
	mergeSort_digui(arr, mid+1, right);
	//归并
	merge(arr, left, mid, right);
}
//归并排序
void mergeSort(int* arr, int n)
{
	mergeSort_digui(arr, 0, n - 1);
}
void print(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}cout << endl;
}
