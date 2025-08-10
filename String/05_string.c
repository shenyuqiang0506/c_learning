#include <stdio.h>
#include <string.h>

int main() {
    /*
     *需求:已知正确的用户名和密码
     *请用程序实现模拟用户登录总共给三次机会，登录之给出相应的提示
     */
    char *name = "shen";
    char *pwd = "123456";

    for (int i = 0; i < 3; ++i) {
        printf("输入用户名\n");
        char username[100];
        scanf("%s", username);
        printf("输入密码");
        char password[100];
        scanf("%s\n", password);
        if (!strcmp(name, username) && !strcmp(pwd, password)) {
            printf("登录成功\n");
            break;
        } else {
            printf("登录失败还有%d次\n", 3 - i);
        }
    }
}
