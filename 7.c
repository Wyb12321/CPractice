/*************************************************************************
	> File Name: 7.c
	> Author:wangyubo 
	> Mail:1226094671@qq.com 
	> Created Time: 2019年04月20日 星期六 15时43分17秒
 ************************************************************************/
//请使用switch结构
#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;
    while(scanf("%d", &n) != EOF){
        switch (n){
            case 0: exit(0);
            case 1: printf("one "); ;
            case 2: printf("two "); ;
            case 3: printf("three\n");break ;
            default: printf("error\n");
        }
    }
    return 0;
}
