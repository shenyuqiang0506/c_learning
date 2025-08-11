#include <string.h>
#include <stdio.h>

typedef struct Message {
    char phone[12];
    char mail[150];
} Message;

typedef struct Student {
    char name[50];
    int age;
    char gender;
    double height;
    Message message;
} Student;


int main() {
    /*
     结构体的嵌套
    定义一个结构体表示学生Student
            Student成员如下
                名字、年龄、性别、身高、联系方式
            联系方式Message也是一个结构体，
            成员如下，手机号、电子邮箱
     */
    Student student;
    strcpy(student.name, "John");
    student.age = 18;
    student.gender = 'F';
    student.height = 175.1;
    strcpy(student.message.phone, "15345578888");
    strcpy(student.message.mail, "2861476553@qq.com");
    printf("%s\n", student.name);
    printf("%d\n", student.age);
    printf("%c\n", student.gender);
    printf("%lf\n", student.height);
    printf("%s\n", student.message.phone);
    printf("%s\n", student.message.mail);
    printf("-------------------\n");
    //批量赋值
    Student student2 = {
        "lisu", 23, 'f', 165.3,
        {"123432123432", "123212343234"}
    };
    printf("%s\n", student2.name);
    printf("%d\n", student2.age);
    printf("%c\n", student2.gender);
    printf("%lf\n", student2.height);
    printf("%s\n", student2.message.phone);
    printf("%s\n", student2.message.mail);
}
