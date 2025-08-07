#include <stdio.h>
//
// Created by shen on 25-8-7.
//
/*
*定义函数的终极绝招
三个问题:
1.我定义函数，是为了干什么事情? 函数体
2.我干这件事情，需要什么才能完成? 形参
3.我干完了，调用处是否需要继续使用?返回值类型
                        需要继续使用 必须写
                        不需要返回  void
 */
double GerArea(double len, double width) {
    double area = len * width;
    return area;
}

int main() {
    double area1 = GerArea(10, 20.1);
    double area2 = GerArea(12.1, 22.1);
    if (area1 > area2) {
        printf("Area is smaller than area2\n");
    } else if (area1 < area2) {
        printf("Area is smaller than area1\n");
    } else {
        printf("Area is smaller than area2\n");
    }
}
