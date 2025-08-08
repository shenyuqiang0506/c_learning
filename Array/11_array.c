//
// Created by shen on 25-8-8.
//打乱数组
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    //2.遍历数组，得到元素，随机交换
    srand(time(NULL));
    for (int i = 0; i < len; ++i) {
        int index = rand() % len;
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    //遍历数组
    for (int i = 0; i < len; ++i) {
        printf("%d ", arr[i]);
    }
}
