/*************************************************************************
	> File Name: 4.c
	> Author:wangyubo 
	> Mail:1226094671@qq.com 
	> Created Time: 2019年04月18日 星期四 19时12分39秒
 ************************************************************************/
//请写一个程序，读入一个角度值，将角度值转为弧度值
#include <stdio.h>
#include <math.h>
#define PI acos(-1)
int main(){
    double n;
    scanf("%lf", &n);
    printf("%lf", PI / 180.0 * n);
    

    return 0;
}
