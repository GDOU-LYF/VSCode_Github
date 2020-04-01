#include <stdio.h>
int main(){
    int year,ret=0;
    scanf("%d",&year);
    if( year%400==0 ||year%4==0 &&year%100!=0 ){
        ret=1;
    }
    printf("%d",ret);

    return 0;
}