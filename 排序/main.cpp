#include "sort.h"

int main()
{
    int arr[] = { 9,7,5,3,1,8,6,4,2,0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    //ð��
    //bubbleSort(arr, n);
    //ѡ��
    //selectionSort(arr, n);
    //����
    //insertSort(arr, n);
    //ϣ��
    shellSort(arr, n);
    print(arr, n);
    return 0;
}
