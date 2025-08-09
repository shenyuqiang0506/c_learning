#include <stdio.h>

void swap(void *p1, void *p2, int len);

//没有类型的指针
//特点：无法获取数据，无法计算。但是可以接受任意地址
int main() {
    /*
     *void 类型
     *
     */
    int a = 10;
    short b = 10;

    int *p1 = &a;
    short *p2 = &b;

    printf("%d\n", *p1);
    printf("%d\n", *p2);
    //不同类型的指针之间是不能互相复制的
    //void类型的指针打破上面的观念
    //void没有任何类型好处，可以接受任意类型指针记录的内存地址
    void *p3 = p1;
    void *p4 = p2;
    //缺点：无法获取数据
    // printf("%p\n", *p3);

    //调用函数
    int c = 100;
    int d = 400;
    swap(&c, &d, sizeof(c));
    printf("%d,%d\n", c, d);
}

void swap(void *p1, void *p2, int len) {
    char *pc1 = p1;
    char *pc2 = p2;
    int temp = 0;
    for (int i = 0; i < len; ++i) {
        temp = *pc1;
        *pc1 = *pc2;
        *pc2 = temp;
        ++pc1;
        ++pc2;
    }
}
