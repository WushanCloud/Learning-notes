#include "sort.h"

int main()
{
    int arr[] = { 2,4,6,8,0,9,7,5,3,1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);
    //ð��
    //bubbleSort(arr, n);
    //ѡ��
    //selectionSort(arr, n);
    //����
    insertSort(arr, n);
    //ϣ��
    //shellSort(arr, n);
    //����
    //quickSort(arr, n);
    //�鲢
    //merge( arr,0,1,3);
    //mergeSort(arr, n);
    //int arr1[6] = {0};
    //MergeSort(arr,0 ,n,arr1);
    //��
    //heapSort(arr, n);
    //print(arr, n);
    return 0;
}
