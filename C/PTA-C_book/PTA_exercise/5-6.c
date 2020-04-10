#include <stdio.h>
int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int narcissistic( int number ){
    int ret=0;
    int sum;
    int tmp=number;
    int count=0;
    while(tmp){
        count++;
        tmp/=10;
    }
    tmp=number;
    while(tmp!=0){
        int t=tmp%10;
        sum=1;
        for(int i=0;i<count;i++){
            sum*=t;
        }
        ret+=sum;
        tmp/=10;
    }
    if(ret==number){
        return 1;
    }else{
        return 0;
    }
}
void PrintN( int m, int n ){
    for(int i=m+1;i<n;i++){
        if(narcissistic(i)){
            printf("%d\n",i);
        }
    }
}