#include<stdio.h>
#include<stdlib.h>

#if 0
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
	int* same = (int*)malloc(sizeof(int) * nums1Size);
	*returnSize = 0;
	int i = 0, j = 0, k = 0;//分别指向nums1和nums2
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
//给定两个数组，编写一个函数来计算它们的交集。
//
//示例 1:
//
//输入: nums1 = [1, 2, 2, 1], nums2 = [2, 2] 输出 : [2, 2] 示例 2 :
//
//	输入 : nums1 = [4, 9, 5], nums2 = [9, 4, 9, 8, 4] 输出 : [4, 9] 说明：
//
//	输出结果中每个元素出现的次数，应与元素在两个数组中出现的次数一致。 我们可以不考虑输出结果的顺序。 进阶 :
//
//如果给定的数组已经排好序呢？你将如何优化你的算法？ 如果 nums1 的大小比 nums2 小很多，哪种方法更优？ 如果 nums2 的元素存储在磁盘上，磁盘内存是有限的，并且你不能一次加载所有的元素到内存中，你该怎么办？
//
//来源：力扣（LeetCode） 链接：https ://leetcode-cn.com/problems/intersection-of-two-arrays-ii 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

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