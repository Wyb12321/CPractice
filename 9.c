/*************************************************************************
	> File Name: 9.c
	> Author:wangyubo 
	> Mail:1226094671@qq.com 
	> Created Time: 2019年04月20日 星期六 16时59分01秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n;
    int b = 0;
    scanf("%d", &n);
    do {
        n /= 10;
        b++;
    } while (n != 0);   
    printf("%d\n", b);
    return 0;
}
