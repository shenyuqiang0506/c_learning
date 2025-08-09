#include <stdio.h>
//二维数组
int main() {
    /* 数据类型 arr[m][n] = {
        {
            1, 2, 3, 4, 5
        },
        {
            1, 2, 3, 4, 5
        }
    };

    //遍历：
    索引
    指针
     */
    int arr[2][5] = {
        {
            1, 2, 3, 4, 5
        },
        {
            6, 7, 8, 9, 10
        }
    };
    //利用索引遍历
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }
}
