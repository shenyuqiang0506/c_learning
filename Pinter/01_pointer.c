#include <stdio.h>

int main() {
    //利用指针去获取变量中的数据 / 存储数据

    int a = 10;
    //1.定义指针
    int *p = &a;
    //2.利用指针获取变量的数据
    printf("%d\n", *p);
    //3.利用指针修改数据
    *p = 100;
    printf("%d\n", *p);
    printf("%d\n", a);


    char c = 'a';
    char *p1 = &c;
    long long n = 100;
    long long *p2 = &n;
    printf("%zu\n", sizeof(p1));
    printf("%zu\n", sizeof(p2));
}
