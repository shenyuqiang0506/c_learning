#include <stdio.h>
//数组和指针
//指向数组的指针叫做数组指针
int main() {
    /*
     *利用指针遍历数组
     */
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    //2.获取数组指针
    int *p1 = arr;
    // int *p2 = &arr[0];
    // printf("%p\n", p1);
    // printf("%p\n", p2);
    for (int i = 0; i < len; i++) {
        printf("%d\n", *(p1+i));
    }
}
