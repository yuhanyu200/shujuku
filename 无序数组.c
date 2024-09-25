#include <stdio.h>  
  
int main() {  
    // 定义一个无序的整型数组  
    int unorderedArray[] = {5, 3, 8, 4, 2, 7, 1, 6};  
  
    // 计算数组中的元素数量  
    int size = sizeof(unorderedArray) / sizeof(unorderedArray[0]);  
  
    // 遍历并打印数组中的每个元素  
    printf("无序数组的元素为：\n");  
    for (int i = 0; i < size; i++) {  
        printf("%d ", unorderedArray[i]);  
    }  
    printf("\n");  
  
    // 程序正常结束  
    return 0;  
}