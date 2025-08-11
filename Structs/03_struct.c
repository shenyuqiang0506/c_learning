#include <stdio.h>

typedef struct Ultraman {
    char name[10];
    int attack;
    int defense;
    int blood;
} M;

int main() {
    /*
     *起别名
    *定义一个结构体表示游戏人物
        属性有:姓名、攻击力、防御力、血量
            要求:把三个游戏人物放入到数组当中，并遍历数组
     */
    M t1 = {"泰罗", 100, 90, 500};
    M t2 = {"雷欧", 100, 55, 222};
    M t3 = {"迪迦", 100, 100, 999};
    M arr[3] = {t1, t2, t3};
    for (int i = 0; i < 3; ++i) {
        M temp = arr[i];
        printf("%s", temp.name);
    }
}
