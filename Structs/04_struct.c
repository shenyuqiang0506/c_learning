#include <string.h>
#include <stdio.h>
/*结构体作为函数参数
定义一个结构体表示学生学生的属性:姓名、年龄要求:
定义一个函数，修改学生中的数据*/
typedef struct Student {
    char name[20];
    int age;
} Student;

void method(Student student);

void method2(Student *student);

int main() {
    Student student;
    strcpy(student.name, "John");
    student.age = 18;
    printf("初始数据：%s,%d\n", student.name, student.age);
    method(student);
    printf("现在数据：%s,%d\n", student.name, student.age);
    method2(&student);
    printf("现在数据：%s,%d\n", student.name, student.age);
}

void method(Student student) {
    printf("接受的初始数据：%s,%d\n", student.name, student.age);
    //
    printf("输入修改的姓名");
    scanf("%s", student.name);
    printf("输入修改的年龄");
    scanf("%d", &(student.age));
    printf("修改后数据：%s,%d\n", student.name, student.age);
}

//需要指针才可以修改

void method2(Student *student) {
    printf("接受的初始数据：%s,%d\n", student->name, student->age);
    //
    printf("输入修改的姓名");
    scanf("%s", student->name);
    printf("输入修改的年龄");
    scanf("%d", &(student->age));
    printf("修改后数据：%s,%d\n", student->name, student->age);
}
