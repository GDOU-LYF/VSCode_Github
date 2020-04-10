#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

/* 你的代码将被嵌在这里 */
double funcos( double e, double x ){
    double cos1=1;
    int sign=-1;
    double item=1,zi=1,mu=1;

    for(int i=2;item>e;i+=2,sign=-sign,mu=1){
        for(int j=1;j<=i;j++){
            mu*=j;
        }
        zi=pow(x,i);
        item=zi/mu;
        cos1+=sign*item;
    }

    return cos1;
}