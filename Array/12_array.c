#include <stdio.h>
//数组的基本查找
//顺序查找
int order(int arr[], int len, int num);

int main() {
    int arr[] = {22, 343, 3423, 4, 43, 43, 42};
    int len = sizeof(arr) / sizeof(arr[0]);
    int num = 4;
    printf("%d\n", order(arr, len, num));
}

//作用：查找数据
//返回值：数组所在的索引
int order(int arr[], int len, int num) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == num) {
            return i;
        }
    }
    return -1;
}
