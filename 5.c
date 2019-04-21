/*************************************************************************
	> File Name: 5.c
	> Author:wangyubo 
	> Mail:1226094671@qq.com 
	> Created Time: 2019年04月18日 星期四 19时38分15秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

int main(){
    int a ,b = 2,c,d;
    
    c = (++b) + (++b);
    d = (++b) + (++b) + (++b);
    printf(" %d %d", c,d);
    return 0;
}
