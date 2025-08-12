#include <stdio.h>

int main() {
    /*
        打开文件:fopen
        写出数据:
            fgetc 一次读一个字符，读不到返回-1
            fgets一次读一行，读不到返回nu11
            fread一次读多个

    关闭文件:fclose
     */

    //1.打卡文件
    FILE *file = fopen("a.txt", "r");
    //2.读取
    //  fgets一次读一行，读不到返回null
    //细节： 读取一行 以换行符为基准
    char arr[1024];
    char *str = fgets(arr, 1024, file);
    printf("%s", str);
    //关闭
    fclose(file);
}
