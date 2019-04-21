/*************************************************************************
	> File Name: 10.c
	> Author:wangyubo 
	> Mail:1226094671@qq.com 
	> Created Time: 2019年04月20日 星期六 18时40分34秒
 ************************************************************************/
// 请实现一个程序，先读入两个整数，k，b输出y = k * x + b直线方程中x = 1 - 100的值
#include <stdio.h>

int l(int k, int x, int b){
    
    return k * x + b;
}

int main() {
    int k, b;
    scanf("%d %d", &k, &b);
    for (int i = 1; i <= 100; i++){
        printf("f(%d) = %d\n",i, l(k, i, b));
    }


    return 0;
}
