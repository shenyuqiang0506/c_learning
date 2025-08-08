#include <stdio.h>
//
// Created by shen on 25-8-8.
//
//求最值
int main() {
    int arr[] = {33, 5, 22, 44, 55};
    int max = arr[0];
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("max = %d\n", max);
}
