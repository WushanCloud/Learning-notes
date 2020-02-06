#include "sort.h"

int main()
{
    int arr[] = { 9,7,5,3,1,8,6,4,2,0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    //Ã°ÅÝ
    //bubbleSort(arr, n);
    //Ñ¡Ôñ
    //selectionSort(arr, n);
    //²åÈë
    //insertSort(arr, n);
    //Ï£¶û
    shellSort(arr, n);
    print(arr, n);
    return 0;
}
