#include <stdio.h>
#include <string.h>

struct Student {
    char name[10];
    int age;
};

int main() {
    /*
     *定义一个结构体表示学生学生的属性有:姓名、年龄
     *要求:把三个学生信息放入到数组当中，并遍历数组
     */
    struct Student student1 = {
        "zhangsan", 23
    };
    struct Student student2 = {
        "lisi", 20
    };
    struct Student student3 = {
        "wangwu", 18
    };
    struct Student stuArr[3] = {
        student1, student2, student3
    };
    for (int i = 0; i < 3; ++i) {
        struct Student temp = stuArr[i];
        printf("%s\n", temp.name);
    }
}
