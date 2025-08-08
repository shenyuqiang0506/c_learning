#include <stdio.h>
//选择排序
int main() {
    /*
    *选择排序:
            1，从0索引开始，跟后面的元素--比较。
            2，小的放前面，大的放后面
            3.第一轮循环从0索引开始比较，结束后最小的数据已经确定。
            4.第二轮循环从1索引开始，后面以此类推，
            5.第三轮循环从2系引开始，后面以此类推，
            6.第四轮循环从3索引开始，后面以此类推。
需求:
            利用选择排序将下列数据按照从小到大的顺序进行排序
            3，5，2，1，4
     */
    int arr[] = {3, 5, 2, 1, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    //使用选择排序
    for (int i = 0; i < len - 1; ++i) {
        //i:以次表示数组中的每一个索引
        for (int j = i + 1; j < len; ++j) {
            //j：表示 i 后面的索引
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < len; ++i) {
        printf("%d ", arr[i]);
    }
}
