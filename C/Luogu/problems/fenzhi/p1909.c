#include <stdio.h>
int main(){
    int n,a,b;
    scanf("%d",&n);
    int i;
    int MIN=0,need;
    for (i=0;i<3;i++){
        scanf("%d %d",&a,&b);
        need=n/a;
        int pay;
        if(n%a!=0){
            need++; //确认要买的个数
        }
        pay=need*b;
        if(MIN>pay ||i==0){
            MIN=pay;
        }
    }
    printf("%d",MIN);

    return 0;
}