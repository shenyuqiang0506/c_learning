#include <stdio.h>
// Created by shen on 25-8-8.
//冒泡排序
int main() {
    /*
    冒泡排序:
        1，相邻的元素两两比较，大的放右边，小的放左边。
        2，第一轮比较完毕之后，最大值就已经确定，第二轮可以少循环一次，后面以此类推。
        3，如果数组中有n个数据，总共我们只要执行n-1轮的代码就可以。
    需求:
            利用冒泡排序将下列数据按照从小到大的顺序进行排序
            3，5，2，1，4
     */
    int arr[] = {3, 5, 2, 1, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    //2.开始冒泡排序
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            //i i+1
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // //第二轮
    // for (int i = 0; i < len - 2; i++) {
    //     //i i+1
    //     if (arr[i] > arr[i + 1]) {
    //         int temp = arr[i];
    //         arr[i] = arr[i + 1];
    //         arr[i + 1] = temp;
    //     }
    // }
    // //第三轮
    // for (int i = 0; i < len - 3; i++) {
    //     //i i+1
    //     if (arr[i] > arr[i + 1]) {
    //         int temp = arr[i];
    //         arr[i] = arr[i + 1];
    //         arr[i + 1] = temp;
    //     }
    // }
    // //第四轮
    // for (int i = 0; i < len - 4; i++) {
    //     //i i+1
    //     if (arr[i] > arr[i + 1]) {
    //         int temp = arr[i];
    //         arr[i] = arr[i + 1];
    //         arr[i + 1] = temp;
    //     }
    // }
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
}
