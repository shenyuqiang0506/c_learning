#include <stdio.h>

int main() {
    /*
        打开文件:fopen
        写出数据:
               fputc一次写一个字符，返回写出的字符
               fputs 一次写一个字符串，写出成功返回非负数，一般忽略返回值
               fwrite 一次读多个，返回写出的个数

    关闭文件:fclose
     */

    //1.打卡文件
    FILE *file = fopen("b.txt", "w");
    //2. fputc一次写一个字符，返回写出的字符
    int c = fputc(97, file);
    printf("%c", c);
    // fputs 一次写一个字符串，写出成功返回非负数，一般忽略返回值
    int n = fputs("shen", file);
    printf("%d", n);
    //   fwrite 一次读多个，返回写出的个数
    char arr[] = {1, 2, 3, 4};
    int n2 = fwrite(arr,1,5, file);
    printf("%d", n2);
    //关闭
    fclose(file);
}
