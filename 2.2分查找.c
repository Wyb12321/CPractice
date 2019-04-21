/*************************************************************************
	> File Name: 2.2分查找.c
	> Author:wangyubo 
	> Mail:1226094671@qq.com 
	> Created Time: 2019年04月21日 星期日 15时16分21秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

int64_t pentagonal(int n){
    return n * (3 * n - 1) / 2; 
}
int64_t hexagonal(int n){
    return n * (2 * n - 1);
}

int f (int64_t (*num)(int), int n, int64_t val){
    int mid;
    int head = 0; int final = n - 1;

    while (head <= final){
        mid = (head + final) >> 1;
        if (num(mid) == val) return mid;
        if (num(mid) > val) final = mid - 1; 
        else head = mid + 1;
    }
    return -1;
}
int main() {
    int n = 166;
    while (f(hexagonal, n, pentagonal(n)) == -1) ++n;
    printf("%" PRId64 "\n", pentagonal(n));
    
    
    return 0;
}
