#include <stdio.h>

int main(void) {
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
    // fgetc 一次读一个字符，读不到返回-1
    int c;
    while ((c = fgetc(file)) != -1) {
        printf("%c ", c);
    }
    //关闭
    fclose(file);
}
