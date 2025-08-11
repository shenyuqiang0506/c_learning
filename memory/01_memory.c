#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
     malloc：申请空间（连续）
     calloc：申请空间+数据初始化
     realloc：修改空间大小
     free：释放空间
     */
    //1.malloc：申请空间（连续）
    int *p = malloc(100 * sizeof(int)); //100字节
    //calloc：申请空间+数据初始化
    // int *p = calloc(10, sizeof(int)); //100字节

    printf("%p\n", p);
    //赋值
    for (int i = 0; i < 100; ++i) {
        //第一种
        // *(p + i) = (i + 1) * 10;
        //第二种
        p[i] = (i + 1) * 10;
    }
    // realloc：修改空间大小
    realloc(p, 200 * sizeof(int));
    //遍历
    for (int i = 0; i < 100; ++i) {
        printf("%d\n", *(p + i));
    }
    free(p);
    return 0;
}
