#include <stdio.h>
//
// Created by shen on 25-8-7.
//
//数组的元素访问
//获取与修改
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //获取
    int a = arr[0];
    int b = arr[2];
    int c = arr[4];
    int sum = a + b + c;
    printf("sum = %d\n", sum);
    //修改
    printf("arr[9] = %d\n", arr[9]);
    arr[9] = 11;
    printf("arr[9] = %d\n", arr[9]);
}
