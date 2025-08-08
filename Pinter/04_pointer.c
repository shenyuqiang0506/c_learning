#include <stdio.h>

void getMaxAndMin(int arr[], int len, int *max, int *min);

int main() {
    /*
     *指针的作用
     1.操作其他函数中的变量
     2.函数返回多个值
     3.函数的结果和计算状态分开
     4.方便操作数组和函数
     */
    // 2.函数返回多个值
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];
    getMaxAndMin(arr, len, &max, &min);
    printf("max = %d, min = %d\n", max, min);
}

void getMaxAndMin(int arr[], int len, int *max, int *min) {
    //最大值
    *max = arr[0];
    for (int i = 1; i < len; ++i) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
    //最小值
    *min = arr[0];
    for (int i = 1; i < len; ++i) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}
