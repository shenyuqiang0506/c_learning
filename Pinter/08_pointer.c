#include <stdio.h>

int *method();

int main() {
    /*
     *野指针：指针指向的空间未分配
     *悬空指针：指针指向的空间已分配，但被释放了
     */

    //野指针：指针指向的空间未分配
    int a = 10;
    int *p1 = &a;
    printf("p = %p\n", p1);
    printf("p = %d\n", *p1);

    int *p2 = p1 + 10;
    printf("p2 = %p\n", p2);
    printf("p2 = %d\n", *p2);

    // 悬空指针：指针指向的空间已分配，但被释放了
    int *p3 = method();
    printf("tuosjss\n");
    printf("p3 = %p\n", p3);
    printf("p3 = %d\n", *p3);
}

int *method() {
    int num = 10;
    int *p = &num;
    return p;
}
