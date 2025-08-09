#include <stdio.h>
//指针的运算
int main() {
    /*
   指针的运算
   步长：指针移动一次，走了多少字节；
       char:1
       short:2
       int:4
       long:4
       long long :8
       加法：指针向后移动
     */
    int a = 10;
    int *p = &a;
    printf("p = %p\n", p);
    printf("p = %p\n", p+1);
    printf("p = %p\n", p+2);
}
