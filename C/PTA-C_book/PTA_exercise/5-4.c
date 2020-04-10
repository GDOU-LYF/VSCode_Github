#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));
    return 0;
}

/* 你的代码将被嵌在这里 */
int prime( int p ){
    int ret=1;
    if(p<=0||p==1||(p%2==0&&p!=2)){
        ret=0;
    }
    for(int i=3;i<=sqrt(p);i+=2){
        if(p%i==0){
            ret=0;
            break;
        }
    }
    return ret;
}
int PrimeSum( int m, int n ){
    int ret=0;
    for(int i=m;i<=n;i++){
        if(prime(i)){
            ret+=i;
        }
    }
    return ret;
}