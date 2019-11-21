#include<stdio.h>
#include<stdlib.h>

#if 0
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
	int* same = (int*)malloc(sizeof(int) * nums1Size);
	*returnSize = 0;
	int i = 0, j = 0, k = 0;//�ֱ�ָ��nums1��nums2
	for (i = 0; i < nums1Size; i++)
	{
		for (j = 0; j < nums2Size; j++)
		{
			if (nums1[i] == nums2[j])
			{
				for (k = 0; k < *returnSize; k++)
				{
					if (nums1[i] == same[k])
						break;
				}
				if (k == *returnSize)
				{
					same[*returnSize] = nums1[i];
					(*returnSize)++;
					break;
				}
			}
		}
	}

	return same;
}
int main()
{
	int arr1[] = { 1,2 ,3,4};
	int arr2[] = { 2,2 };
	int len;
	int *arr3 = intersection(arr1, 2, arr2, 2, &len);
	
	for (int i = 0; i < len; i++)
	{
		printf("%d", arr3[i]);
	}

	return 0;
}
#endif
//�����������飬��дһ���������������ǵĽ�����
//
//ʾ�� 1:
//
//����: nums1 = [1, 2, 2, 1], nums2 = [2, 2] ��� : [2, 2] ʾ�� 2 :
//
//	���� : nums1 = [4, 9, 5], nums2 = [9, 4, 9, 8, 4] ��� : [4, 9] ˵����
//
//	��������ÿ��Ԫ�س��ֵĴ�����Ӧ��Ԫ�������������г��ֵĴ���һ�¡� ���ǿ��Բ�������������˳�� ���� :
//
//��������������Ѿ��ź����أ��㽫����Ż�����㷨�� ��� nums1 �Ĵ�С�� nums2 С�ܶ࣬���ַ������ţ� ��� nums2 ��Ԫ�ش洢�ڴ����ϣ������ڴ������޵ģ������㲻��һ�μ������е�Ԫ�ص��ڴ��У������ô�죿
//
//��Դ�����ۣ�LeetCode�� ���ӣ�https ://leetcode-cn.com/problems/intersection-of-two-arrays-ii ����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void* val1, const void* val2)
{
	return *(int*)val1 > * (int*)val2;
}
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
	qsort(nums1, nums1Size, sizeof(int), cmp);
	qsort(nums2, nums2Size, sizeof(int), cmp);
	*returnSize = 0;
	int i = 0, j = 0;
	int size = nums1Size < nums2Size ? nums1Size : nums2Size;
	int* arr = (int*)malloc(sizeof(int) * size);
	while (i < nums1Size && j < nums2Size)
	{
		if (nums1[i] == nums2[j])
		{
			arr[*returnSize] = nums1[i];
			i++;
			j++;
			(*returnSize)++;
		}
		else if (nums1[i] < nums2[j])
		{
			i++;
		}
		else if (nums1[i] > nums2[j])
		{
			j++;
		}
	}
	return arr;

}