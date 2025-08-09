#include <stdio.h>
//二维数组
int main() {
    /*
     二为数组定义格式二 + 索引遍历
     核心：
         时间先把所有的一维数组定完毕，再放到二维数组当中
     */
    //1.
    int arr1[3] = {1, 2, 3};
    int arr2[5] = {1, 2, 3, 4, 5};
    int arr3[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len1 = sizeof(arr1) / sizeof(int);
    int len2 = sizeof(arr2) / sizeof(int);
    int len3 = sizeof(arr3) / sizeof(int);
    int lenArr[3] = {len1, len2, len3};
    //2.
    int *arr[3] = {arr1, arr2, arr3};
    //3.遍历
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < lenArr[i]; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
