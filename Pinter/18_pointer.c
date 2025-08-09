#include <stdio.h>
/* 函数指针的练习
// 定义加、减、乘、除、四个函数用户键盘录入三个数字前两个表示参与计算的数字第三个数字表示调用的函数
 1:加法
 2:减法
 3:乘法
 4:除法*/
// 细节:只有形参完全相同而且返回值也要一样的函数，才能放到同一个函数指针数组当中
int add(int num1, int num2);

int subtract(int num1, int num2);

int multiply(int num1, int num2);

int div(int num1, int num2);

int main() {
    //定义数组装四个函数指针
    int (*arr[4])(int, int) = {
        add, subtract, multiply, div
    };
    //2.键盘录入
    printf("输入两个数字");
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d,%d", num1, num2);
    int choose;
    printf("选择");
    scanf("%d", &choose);
    //调函数
    int res = (arr[choose - 1])(num1, num2);
    printf("%d", res);
}

int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

int div(int num1, int num2) {
    return num1 / num2;
}
