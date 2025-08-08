#include <stdio.h>

void swap(int *a, int *b);

int main() {
    /*
     *指针的作用
     1.操作其他函数中的变量
     2.函数返回多个值
     3.函数的结果和计算状态分开
     4.方便操作数组和函数
     */
    // 1.操作其他函数中的变量
    int a = 10;
    int b = 20;
    printf("%d,%d\n", a, b);
    swap(&a, &b);
    printf("%d,%d", a, b);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
