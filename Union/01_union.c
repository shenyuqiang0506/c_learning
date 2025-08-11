#include <stdio.h>

union MoneyType {
    int moneyi;
    double moneyd;
    char moneys[100];
};

int main() {
    /*
    *需求:
    金融项目中，钱有可能是整数，小数，字符串，请定义对应的共同体
     */
    union MoneyType money;
    //赋值
    //每次只能赋值一个
    money.moneyi = 1;
    printf("%d", money.moneyi);
}
