#include <stdio.h>

int getRemainder(int num1, int num2, int *res);

int main() {
    /*
     *指针的作用
     1.操作其他函数中的变量
     2.函数返回多个值
     3.函数的结果和计算状态分开
     4.方便操作数组和函数
     */
    // 3.函数的结果和计算状态分开
    int a = 10;
    int b =6;
    int res = 0;
    int flag = getRemainder(a, b, &res);
    if (!flag) {
        printf("获得余数为:%d\n", res);
    }
}

//返回值: 表示计算状态 0正常 1不正常
int getRemainder(int num1, int num2, int *res) {
    if (num2 == 0) {
        return 1;
    }
    *res = num1 % num2;
    return 0;
}
