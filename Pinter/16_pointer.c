#include <stdio.h>
//二维数组
int main() {
    /*
     二维数组定义格式二 + 指针遍历
     核心：
         时间先把所有的一维数组定完毕，再放到二维数组当中
     */
    //1.
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 2, 3, 4, 4};
    int arr3[5] = {1, 2, 3, 4, 6};
    int *arr[3] = {arr1, arr2, arr3};
    //获取指针
    int **p = arr;
    //遍历
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%d ", *(*p+j));
        }
        printf("\n");
        p++;
    }
}
