#include <stdio.h>
/*
 *内存对齐
 */
typedef struct Num {
    double a;
    char b;
    int c;
    char d;

} num;

int main() {
    /*
     *确定变量位置:只能放在自己类型整数倍的内存地址上
     *最后一个补位:结构体的总大小，是最大类型的整数倍
     */
    int a = 10;
    int b = 10;
    printf("%zu\n", sizeof(a));
    printf("%zu\n", sizeof(b));

    num num;
    printf("%zu\n", sizeof(num));
}
