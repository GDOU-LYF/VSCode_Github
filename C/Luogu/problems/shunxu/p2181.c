#include <stdio.h>
int main(){
    unsigned long long n;
    scanf("%ld",&n);
    printf("%ld",n*(n-1)/2*(n-2)/3*(n-3)/4);
    return 0;
}


/*
n (n-1) (n-2) * (n-3) / 24；
由于当N过大时会爆longlong

可以把式子转化为：n (n-1) / 2 (n-2) / 3 * (n-3) / 4
ld 长整数
llu 无负数的长整数

*/
