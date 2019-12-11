#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#if 0
//int cmp(int* a, int* b)
//{
//	return *a > * b;
//}
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//	int i = nums1Size;
//	int j = 0;
//	while (i < nums1Size + nums2Size)
//	{
//		nums1[i] = nums2[j];
//		i++;
//		j++;
//	}
//	qsort(nums1, nums1Size + nums2Size, 4, cmp);
//
//
//	return nums1;
//}
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	int i = m - 1;
	int j = n - 1;
	int end = m + n - 1;
	while (end > 0)
	{
		if (nums1[i] > nums2[j])
		{
			nums1[end] = nums1[i];
			i--;
		}
		else
		{
			nums1[end] = nums2[j];
			j--;
		}
		end--;
	}
}
int main()
{
	int arr1[6] = { 1,2,3 };
	int arr2[3] = { 2,3,4 };
	merge(arr1, 6, 3, arr2, 3, 3);
	int i = 0;
	while (i<6)
	{
		printf("%d ", arr1[i]);
		i++;
	}
	return 0;
}
#endif

#if 1
//void moveOneR(int* nums, int numsSize)
//{
//	int last = nums[numsSize - 1];//记录最后一个值
//	int cur = numsSize - 1;
//	while (cur)
//	{
//		nums[cur] = nums[cur - 1];
//		cur--;
//	}
//	nums[0] = last;
//}
//void rotate(int* nums, int numsSize, int k) {
//	while (k--)
//	{
//		moveOneR(nums, numsSize);
//	}
//}
//void reverse(int* left, int* right)//左右交换left--right的内容
//{
//	while (left < right)
//	{
//		int chip = *right;
//		*right = *left;
//		*left = chip;
//		left++;
//		right--;
//	}
//}
//void rotate(int* nums, int numsSize, int k) {
//	reverse(nums, nums + numsSize - k%numsSize-1);//0--k-1交换
//	reverse(nums + numsSize-k % numsSize, nums + numsSize - 1);//k-len-1交换
//	reverse(nums, nums + numsSize - 1);//0--len-1交换
//}
void rotate(int* nums, int numsSize, int k) {
	k = k % numsSize;
	int* nums1 = (int*)malloc(4 * numsSize * 2);
	assert(nums1);
	int i = 0;
	while (i < numsSize)
	{
		nums1[i] = nums[i];
		i++;
	}
	i = 0;
	while (i < numsSize)
	{
		nums1[i+ numsSize] = nums[i];
		i++;
	}
	int j = 0;
	i = numsSize - k;
	while (j < numsSize)
	{
		nums[j] = nums1[i];
		i++;
		j++;
	}
	free(nums1);
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int len = sizeof(arr)/sizeof(arr[0]);
	rotate(arr, len, 3);
	int i = 0;
	while (i < len)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
	return 0;
}
#endif
#if 0
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int digitOfSum(int k)
{
	if (k == 0)return 1;
	int sum = 0;
	while (k)
	{
		k /= 10;
		sum++;
	}
	return sum;
}
int* addToArrayForm(int* A, int ASize, int K, int* returnSize) {
	int KSize = digitOfSum(K);
	int* k = (int*)malloc(sizeof(int) * KSize);//把数转数组
	int j = KSize - 1;
	while (K)
	{
		k[j] = K % 10;
		K /= 10;
		j--;
	}
	j = KSize - 1;
	int i = ASize - 1;
	int* B = (int*)malloc(sizeof(int) * ASize + 1);
	int tmp = 0;//进位
	int sum = 0;//位数之和
	int right = ASize;
	*returnSize = 0;
	while (i >= 0 && j >= 0)
	{
		sum = A[i] + k[j] + tmp;
		if (sum > 9)
		{
			B[right] = sum % 10;
			tmp = 1;
		}
		else
		{
			B[right] = sum;
			tmp = 0;
		}
		i--; j--;
		right--;
		(*returnSize)++;
	}
	while (i >= 0)
	{
		sum = A[i] + tmp;
		if (sum > 9)
		{
			B[right] = sum % 10;
			tmp = 1;
		}
		else
		{
			B[right] = sum;
			tmp = 0;
		}
		i--;
		right--;
		(*returnSize)++;
	}
	while (j >= 0)
	{
		sum = k[j] + tmp;
		if (sum > 9)
		{
			B[right] = sum % 10;
			tmp = 1;
		}
		else
		{
			B[right] = sum;
			tmp = 0;
		}
		j--;
		right--;
		(*returnSize)++;
	}
	if (*returnSize = ASize)
	{
		return B + 1;
	}
	return B;
}
int main()
{
	int arr[] = { 1,2,0,0 };
	int K = 34;
	int len = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int* A = addToArrayForm(arr, len, K, &i);
	int j = 0;
	while (j<i)
	{
		printf("%d ", A[j]);
		j++;
	}
	return 0;
}
#endif
