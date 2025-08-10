#include <stdio.h>
#include <string.h>

int main() {
    /*常用函数
    strlen:获取字符串的长度
    strcat:拼接两个字符串
    strcpy:复制字符串
    strcmp:比较两个字符串
    strlwr:将字符串变成小写
    strupr:将字符串变成大写
     */
    char *str1 = "Hello World";
    char str2[100] = "Hello World";
    char str3[5] = {'H', 'e', 'l', 'l', '\0'};
    printf("-------------长度strlen--------------\n");
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int len3 = strlen(str3);

    printf("len1 = %d\nlen2 = %d\nlen3 = %d\n", len1, len2, len3);

    printf("-------------拼接strcat--------------\n");
    strcat(str2, str3);
    printf("str2 = %s\nstr3 = %s\n", str2, str3);


    printf("-------------strcpy:复制字符串--------------\n");
    strcpy(str2, str3);
    printf("str3 = %s\n str1 = %s\n", str2, str3);
    printf("-------------strcmp:比较两个字符串--------------\n");
    int res = strcmp(str1, str2);
    printf("%d\n", res);
    printf("-------------strlwr:将字符串变成小写--------------\n");
    // _strlwr(str2);
    printf("-------------strupr:将字符串变成大写--------------\n");
}
