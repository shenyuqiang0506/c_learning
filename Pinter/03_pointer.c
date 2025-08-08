#include <stdio.h>

int *method();

int main() {
    int *p = method();
    printf("%d\n", *p); //不能打印 函数结束之后 会被销毁
}

int *method() {
    static int a = 10;
    return &a;
}
