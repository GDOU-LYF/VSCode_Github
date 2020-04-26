#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
	
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int fib( int n ){
    if (n<=2){
        return 1;
    }else{
        return fib(n-1)+fib(n-2);
    }
}
void PrintFN( int m, int n ){
    int ret=1,count=0;
    for (int i=1;ret<=n;i++){
        ret=fib(i);
        if(ret>=m&&ret<=n){
            if(count==0){
                printf("%d",ret);
                count++;
            }else{
                printf(" %d",ret);
            }
        }
    }
    if(count==0){
        printf("No Fibonacci number\n");
    }
}