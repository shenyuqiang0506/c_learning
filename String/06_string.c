#include <stdio.h>
#include <string.h>

int main() {
    /*
     *键盘录入一个字符串，统计该字符串中大写字母字符，小写字母字符，数字字符出现的次数(不考虑其他字符)
     */
    printf("请输入一个字符串");
    char str[100];
    scanf("%s", str);
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count1++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            count2++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            count3++;
        }
    }
    printf("%d\n", count1);
    printf("%d\n", count2);
    printf("%d\n", count3);
}
