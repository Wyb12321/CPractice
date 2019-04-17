/*************************************************************************
	> File Name: 3.c
	> Author:wangyubo 
	> Mail:1226094671@qq.com 
	> Created Time: 2019年04月16日 星期二 20时09分22秒
 ************************************************************************/

#include <stdio.h>
int main(){
    char str[100] ="123 456 789";
    int a, b, c;
    sscanf(str, "%d", &a);
    sscanf(str + 4, "%d", &b);
    sscanf(str + 8, "%d", &c);
    printf("%d %d %d", a, b, c);
}/*
int main(){
    int n;
    char str[100];
    scanf("%[^\n]s ", str);
    n = printf("%s", str);
    printf("has digits %d", n); 

    return 0;
}*/
