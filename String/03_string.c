#include <stdio.h>

int main() {
    char strArr[5][100] = {
        {
            "zhangsan"
        },
        {
            "lisi"
        },
        {
            "wangwu"
        },
        {
            "zhaoliu"
        },
        {
            "qianqi"
        }
    };
    //遍历
    for (int i = 0; i < 5; i++) {
        char *str = strArr[i];
        printf("%s\n", str);
    }
    //第二种
    //指针数组
    char *strArr2[5] = {
        "zhangsan", "lisi", "wangwu", "zhaoliu", "qianqi"
    };
    for (int i = 0; i < 5; i++) {
        char *str = strArr2[i];
        printf("%s\n", str);
    }
}
