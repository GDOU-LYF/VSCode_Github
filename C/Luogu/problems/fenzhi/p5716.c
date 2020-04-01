#include <stdio.h>
int main(){
    int y,m;
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int ret;
    scanf("%d %d",&y,&m);
    ret=a[m];
    if(m==2){
        if(y%400==0||(y%4==0 &&y%100!=0)){
            ret=ret+1;
        }
    }
    printf("%d",ret);
    return 0;
}