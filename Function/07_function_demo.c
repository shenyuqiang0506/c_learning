//
// Created by shen on 25-8-7.
//
//常见函数

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    /*
    math.h:
            pow()幂
            sqrt()平方根
            ceil()向上取整
            floor()向下取整
            abs()绝对值
time.h:
        获取当前时间time()
     */
    double res1 = pow(2, 4);
    printf("%lf\n", res1);
    double sqrt1 = sqrt(8);
    printf("%lf\n", sqrt1);
    double ceil1 = ceil(12.2);
    printf("%lf\n", ceil1);
    double floor1 = floor(12.2);
    printf("%lf\n", floor1);
    int abs1 = abs(-12);
    printf("%d\n", abs1);
    //time
    long long time1 = time(NULL);
    printf("%lld\n", time1); //时间戳

}
