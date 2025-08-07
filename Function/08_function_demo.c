#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//
// Created by shen on 25-8-7.
//
//随机数
/*
 *1-100
 绝招：
 1.把这个范围变成包头不包尾，包左不包右 1-101
 2.拿着尾巴-开头 101-1 = 99
 3.修改代码
}

 */
int main() {
    srand(time(NULL));
    int number = rand() % 99 + 1;
    printf("%d\n", number);
}
