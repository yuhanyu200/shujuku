#include <stdio.h>  
  
// 冒泡排序函数  
void bubbleSort(int arr[], int n) {  
    int i, j, temp;  
    for (i = 0; i < n-1; i++) {  
        for (j = 0; j < n-i-1; j++) {  
            if (arr[j] > arr[j+1]) {  
                // 交换 arr[j] 和 arr[j+1] 
                temp = arr[j];  
                arr[j] = arr[j+1];  
                arr[j+1] = temp;  
            }  
        }  
    }  
}  
  
int main() {  
    // 定义一个有序数组并打印  
    int sortedArray[] = {1, 3, 5, 7, 9};  
    int nSorted = sizeof(sortedArray) / sizeof(sortedArray[0]);  
    printf("初始有序数组: ");  
    for(int i = 0; i < nSorted; i++) {  
        printf("%d ", sortedArray[i]);  
    }  
    printf("\n");  
  
    // 定义一个未排序的数组  
    int unsortedArray[] = {64, 34, 25, 12, 22, 11, 90};  
    int nUnsorted = sizeof(unsortedArray) / sizeof(unsortedArray[0]);  
  
    // 调用冒泡排序函数对未排序数组进行排序  
    bubbleSort(unsortedArray, nUnsorted);  
  
    // 打印排序后的数组  
    printf("排序后的数组: ");  
    for (int i = 0; i < nUnsorted; i++) {  
        printf("%d ", unsortedArray[i]);  
    }  
    printf("\n");  
  
    return 0;  
}