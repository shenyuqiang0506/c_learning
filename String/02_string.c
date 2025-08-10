#include <stdio.h>

int main() {
    /*
    遍历字符串
    */
    char str[100];
    printf("请录入：");
    scanf("%s", str);
    //2.遍历
    char *p = str;
    while (1) {
        char c = *p;
        if (c == '\0') {
            break;
        }
        printf("%c", c);
        p++;
    }
}
