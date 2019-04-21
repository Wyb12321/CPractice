/*************************************************************************
	> File Name: 6.c
	> Author:wangyubo 
	> Mail:1226094671@qq.com 
	> Created Time: 2019年04月20日 星期六 15时12分52秒
 ************************************************************************/
// 程序 读入一个正整数n， 代表学生的成绩， 根据分数输出分数档位
#include <stdio.h>
/*
int main() {
    int n;
    scanf("%d", &n);
    if(n == 0) printf("FOOLISH\n");
    else if(n < 60) printf("FAIL\n");
    else if(n < 75) printf("MEDIUM\n");
    else printf("GOOD\n");


    return 0;
}
*/
int main() {
    int n;
    scanf("%d", &n);
    if(n == 0){
        printf("FOOLISH\n");
    } else if(n < 60){
        printf("FAIL\n");
    } else if(n < 75){
        printf("MEDIUM\n");
    } else {
        printf("GOOD\n");
    }
    return 0;
}
