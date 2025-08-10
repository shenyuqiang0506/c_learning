#include <stdio.h>

int main() {
    /*
     *两种定义字符串的方式
     */

    //1.利用字符数组+双引号方式定义字符串
    char str[] = "Hello World";
    printf("%s\n", str);
    //细节：
    //1.在底层用字符数组的方式存储
    //2.数组长度可以不写 ，如果要写 要预留结束标记
    //3.利用字符数组+双引号方式定义字符串  内容可以改变
    str[0] = 'q';
    printf("%s\n", str);

    //2.利用指针+双引号方式定义字符串
    char *str2 = "Hello World";
    char *str3 = "Hello World";
    //细节
    //1.在底层用字符数组的方式存储
    //2. 利用指针+双引号方式定义字符串 会把数组放在只读常量区
    //只读常量区：
    // 内容不可修改
    //  里面定义的字符串可以复用
    printf("%p\n", str2);
    printf("%p\n", str3);
    return 0;
}
