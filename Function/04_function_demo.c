#include <stdio.h>
//
// Created by shen on 25-8-7.
//
//具有返回值的函数
int sum(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}

int main() {
    /*
最终格式:
    返回值类型 函数名(形参，...)
        函数体;
        return 返回值;
调用方式:
    用变量去接收函数的结果
    printf("占位符”函数的调用);
     */
    int score1 = sum(93, 10);
    int score2 = sum(93, 9);
    if (score1 > score2) {
        printf("%d is greater than %d\n", score1, score2);
    } else if (score1 < score2) {
        printf("%d is less than %d\n", score1, score2);
    } else {
        printf("%d is equal to %d\n", score1, score2);
    }
}
