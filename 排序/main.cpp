#include "sort.h"

int main()
{
    int arr[] = { 5,2,3,1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    //ð��
    //bubbleSort(arr, n);
    //ѡ��
    //selectionSort(arr, n);
    //����
    //insertSort(arr, n);
    //ϣ��
    //shellSort(arr, n);
    //����
    //quickSort(arr, n);
    //�鲢
    //merge( arr,0,1,3);
    mergeSort(arr, n);
    print(arr, n);
    return 0;
}
