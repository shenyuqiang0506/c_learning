#include <stdio.h>
//
// Created by shen on 25-8-7.
//
//带参的函数
void sum(int num1, int num2) {
    int sum = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, sum);
}

int main() {
    sum(1, 2);
    sum(2, 3);
    return 0;
}
