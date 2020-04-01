#include <stdio.h>
int main(){
    int a,b;
    scanf("%d.%d",&a,&b);
    int i;
    int ret1,ret2;
    ret1=ret2=0;
    while(a!=0){
        ret1=ret1*10+a%10;
        a/=10;
    }
    while(b!=0){
        ret2=ret2*10+b%10;
        b/=10;
    }
    printf("%d.%d",ret2,ret1);
    return 0;
}
