#include "sort.h"

int main()
{
    int arr[] = { 2,4,6,8,0,9,7,5,3,1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);
    //冒泡
    //bubbleSort(arr, n);
    //选择
    //selectionSort(arr, n);
    //插入
    insertSort(arr, n);
    //希尔
    //shellSort(arr, n);
    //快速
    //quickSort(arr, n);
    //归并
    //merge( arr,0,1,3);
    //mergeSort(arr, n);
    //int arr1[6] = {0};
    //MergeSort(arr,0 ,n,arr1);
    //堆
    //heapSort(arr, n);
    //print(arr, n);
    return 0;
}
