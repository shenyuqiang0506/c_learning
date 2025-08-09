#include <stdio.h>

int method2(int num1, int num2);

void method1();

int main() {
    /*
     *函数指针
     */
    //1.定义指针指向函数
    void (*p1)() = method1;
    int (*p2)(int, int) = method2;
    //利用函数指针调用函数
    p1();
    int num = p2(1, 2);
    printf("%d\n", num);
}

void method1() {
    printf("method1\n");
}

int method2(int num1, int num2) {
    printf("method2\n");
    return num1 + num2;
}
