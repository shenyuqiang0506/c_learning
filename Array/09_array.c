#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//数组求和
int contains(int arr[], int len, int num);

int main() {
    int arr[10] = {0};
    int len = sizeof(arr) / sizeof(arr[0]);
    srand(time(NULL));
    for (int i = 0; i < len;) {
        int num = rand() % 100 + 1;
        int flag = contains(arr, len, num);
        if (!flag) {
            arr[i] = num;
            ++i;
        }
    }
    //求和
    int sum = 0;
    for (int i = 0; i < len; ++i) {
        sum += arr[i];
    }
    printf("sum = %d\n", sum);
    //平均数
    int avg = sum / len;
    printf("avg = %d\n", avg);
    //统计有多少数字比平均数小
    int count = 0;
    for (int i = 0; i < len; ++i) {
        if (arr[i] < avg) {
            count++;
        }
    }
    printf("count = %d\n", count);
}


int contains(int arr[], int len, int num) {
    for (int i = 0; i < len; ++i) {
        if (arr[i] == num) {
            return 1;
        }
    }
    return 0;
}
