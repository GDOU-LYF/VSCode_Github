#include <stdio.h>
int main(){
    double n;
    scanf("%lf",&n);
    if(n!=0){
        printf("f(%.1f) = %.1f",n,1.0/n);
    }else{
        printf("f(%.1f) = %.1f",n,n);
    }
    return 0;
}