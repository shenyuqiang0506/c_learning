#include <stdio.h>
#include <string.h>

struct GrilFriend {
    char name[20];
    int age;
    char gender;
    double weight;
};

int main() {
    /*
     *结构体可以理解为自定义的数据类型
     *他是由一批数据组合而成的结构型数据
     *里面的每一个数据都是结构体的“成员”
     */
    struct GrilFriend grilFriend;
    strcpy(grilFriend.name, "John");
    grilFriend.age = 18;
    grilFriend.gender = 'F';
    grilFriend.weight = 99;
    printf("%s\n", grilFriend.name);
}
