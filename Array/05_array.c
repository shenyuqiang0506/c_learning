#include <stdio.h>
//
// Created by shen on 25-8-7.
//内存和内存地址
int main() {
    //获取变量的内存地址
    int a = 10;
    printf("%p\n", &a);
    printf("------------------\n");
    //获取数组内存
    int arr[] = {1, 2, 3};
    printf("%p\n", &arr); //数组的首地址
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]);
    printf("%p\n", &arr[2]);
}
