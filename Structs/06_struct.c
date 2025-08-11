#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
*某班级组织野外郊游，想要在ABCD四个最点选择其中一个现在班上有80名同学进行投票，找出投票数最多的景点
Ps:
1，学生投票，用随机数模拟
2，如果多个景点投票一样的话，A优先B，B优先于C，C优先于D
 */
typedef struct Spot {
    char name[100];
    int count;
} Spot;

int main() {
    Spot arr[4] = {
        {'A', 0},
        {'B', 0},
        {'C', 0},
        {'D', 0}
    };

    //进行投票
    srand(time(NULL));
    for (int i = 0; i < 80; i++) {
        // choose 变量有两个含义
        // 含义1:表示用户的投票 0 A 1 B 2 C 3 D
        // 含义二:表示arr中的索引，通过这个索引就可以获取到景点的名字和投票数量
        //
        int choose = rand() % 4;
        //choose:表示同学的投票，同时也表示数组中的索引
        // arr[choose]:表示获取景点的信息(名字，数量)
        // arr[choose].count:表示这个最点已经投了多少票
        // arr[choose].count++:给这个景点再投一票
        arr[choose].count++;
    }
    //找到最大值
    int max = arr[0].count;
    for (int i = 0; i < 4; ++i) {
        Spot temp = arr[i];
        if (temp.count > max) {
            max = temp.count;
        }
    }
    printf("%d\n", max);

    for (int i = 0; i < 4; ++i) {
        Spot temp = arr[i];
        if (temp.count == max) {
            printf("%s, %d\n", temp.name, temp.count);
            break;
        }
    }

    //遍历
    for (int i = 0; i < 4; ++i) {
        Spot temp = arr[i];
        printf("%s %d\n", temp.name, temp.count);
    }
}
