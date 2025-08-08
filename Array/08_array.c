#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//数组求和
int main() {
    int arr[10] = {0};
    int len = sizeof(arr) / sizeof(arr[0]);
    srand(time(NULL));
    for (int i = 0; i < len; ++i) {
        int num = rand() % 100 + 1;
        arr[i] = num;
    }
    int sum = 0;
    for (int i = 0; i < len; ++i) {
        sum += arr[i];
    }
    printf("sum = %d\n", sum);
}
