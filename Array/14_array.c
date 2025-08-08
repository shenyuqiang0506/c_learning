#include <stdio.h>
// Created by shen on 25-8-8.
//二分查找改进
//插值查找
// 要求:数据要有序，且数据分布尽可能的均匀一点
// 优势:满足要求，效率比二分查找快，否则反而会更慢
int binarySearch(int arr[], int len, int num);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int len = sizeof(arr) / sizeof(arr[0]);
    //2.定义查找数据
    int num = 8;
    int result = binarySearch(arr, len, num);
    printf("%d\n", result);
}

//binarySearch
//作用：二分查找法 查数据
//返回值：数组所在的索引
int binarySearch(int arr[], int len, int num) {
    int min = 0;
    int max = len - 1;
    while (min <= max) {
        int mid = min + (num - arr[min]) * (max - min) / (arr[max] - arr[min]);
        if (arr[mid] < num) {
            min = mid + 1;
        } else if (arr[mid] > num) {
            max = mid - 1;
        } else {
            return mid;
        }
    }
    //3.如果 min 大于 max
    return -1;
}
