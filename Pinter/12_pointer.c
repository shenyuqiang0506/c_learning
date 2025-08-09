#include <stdio.h>

int main() {
    /*
     数组的细节：
        arr参与计算的时候会退化为第一个元素指针
        特殊情况：
            sizeof运算的时候，不会退化，arr还是整体
            &arr 获取地址也不会退化
     */
    int arr[] = {1, 2, 3, 4, 5};
    // sizeof运算的时候，不会退化，arr还是整体
    printf("%zu\n", sizeof(arr)); //20
    // &arr 获取地址也不会退化 步长：数据类型*数组长度
    // arr参与计算的时候会退化为第一个元素指针 步长：数据类型
    printf("%p\n", arr);
    printf("%p\n", &arr);

    printf("%p\n", arr+1);
    printf("%p\n", &arr+1);
}
