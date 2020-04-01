#include <stdio.h>
#include <math.h>
int main(){
    double n;
    scanf("%lf",&n);
    if(n>=0){
        printf("f(%.2f) = %.2f",n,pow(n,0.5));
    }else{
        printf("f(%.2f) = %.2f",n,(n+1)*(n+1)+2*n+1/n);
    }
    return 0;
}