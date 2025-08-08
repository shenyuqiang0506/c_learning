#include <stdio.h>
//
// Created by shen on 25-8-8.
//
//反转数组
/*
 *遍历数组
 *反转数组
 *再次遍历
 */
void printArr(int arr[], int len);

int main() {
    int arr[5] = {0};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++) {
        printf("请录入第%d个元素：", i + 1);
        scanf("%d", &arr[i]);
    }
    printArr(arr, len);

    //反转数组
    int i = 0;
    int j = len - 1;
    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        ++i;
        --j;
    }
    printArr(arr, len);
}

void printArr(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
}
