#include <stdio.h>
int main(){
    double l;
    scanf("%lf",&l);
    double s=2.0,sum=2;
    int count=1;
    while(sum<l){
        s*=0.98;
        sum+=s;
        count++;
    }
    printf("%d",count);
    return 0;
}