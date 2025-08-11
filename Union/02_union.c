#include <stdio.h>

typedef union MoneyType {
    int moneyi;
    double moneyd;
    char moneys[100];
} MoneyType;

int main() {
    /*
    *共用体的特点
    共用体，也叫联合体，共同体
    所有的变量都使用同一个内存空间
    所占的内存大小=最大成员的长度(也受内存对齐影响)
    细节：以最大成员的长度为准
    总大小为最大成员的整数倍
    每次只能给一个变量进行赋值，因为第二次赋值时会覆盖原有的数据
     */
    //1.定义
    MoneyType money;
    money.moneyi = 1;

    //获取内存地址
    printf("%p\n", &money.moneyi);
    printf("%p\n", &money.moneyd);
    printf("%p\n", &money.moneys);

    //获取大小
    printf("%zu\n", sizeof(money.moneyi));
    printf("%zu\n", sizeof(money.moneyd));
    printf("%zu\n", sizeof(money.moneys));
    printf("%zu\n", sizeof(money));
    return 0;
}
