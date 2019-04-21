/*************************************************************************
	> File Name: 3.3辗转相除.c
	> Author:wangyubo 
	> Mail:1226094671@qq.com 
	> Created Time: 2019年04月21日 星期日 17时04分17秒
 ************************************************************************/
//辗转相除法 求a * x + b * y = 1;方程的解
#include <stdio.h>

int x, y;
int ex_gcd(int a, int b){
    if (b == 0) {
        x = 1, y = 0;
        return a;
    }
    int r = ex_gcd(b, a % b), t = x;
    x = y;
    y = t - y *(a / b);
    return r;
}
int main() {
    int n, m;
    while (~scanf("%d%d", &n, &m)){
        ex_gcd(n, m);
        printf("%d * %d + %d * %d = %d", n, x, m, y, n * x + m * y);

    }

    return 0;
}
