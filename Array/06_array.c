#include <stdio.h>
//
// Created by shen on 25-8-8.
//
void printArray(int arr[], int len);

int main() {
    /*
     1.数组作为函数的参数，需要注意什么？
        实际上传递的是数组的首地址，如果要在函数中对数组进行遍历，要把数组长度传入
        定义处：arr 表示的完整数组
        函数处：只是一个变量，用来记录首地址


     2.数组索引越界
     */
    int arr[] = {1, 2, 3, 4, 5};
    printf("%p\n", &arr);
    int len = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, len);
}

void printArray(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
}
