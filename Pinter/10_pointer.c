#include <stdio.h>
//二级指针和多级指针
int main() {
    /*
     *指针数据类型:跟指向空间中，数据的类型是保持一致的
     *二级指针
     数据类型 ** 指针名
     */
    int a = 10;
    int b = 20;
    //一级
    int *p = &a;
    //二级
    int **pp = &p;
    //作用一：利用二级指针修改一级指针里面记录的内存地址
    *pp = &b;
    //作用二：利用化指针获得变量中记录的数据
    printf("a = %p, b = %p\n", &a, &b);
    printf("p = %p\n", p);
    printf("p = %d\n", *p);
    printf("%d\n",**pp);
}
