#include <stdio.h>
#include <math.h>
struct xy
{
    double x;
    double y;
};

int main(){
    struct xy p1,p2;
    scanf("%lf %lf",&p1.x,&p1.y);
    scanf("%lf %lf",&p2.x,&p2.y);
    struct xy sum;
    sum.x=p1.x+p2.x;
    sum.y=p1.y+p2.y;
    if(fabs(sum.x)<0.05){
        sum.x=fabs(sum.x);
    }
    if(fabs(sum.y)<0.05){
        sum.y=fabs(sum.y);
    }  
    printf("(%.1f, %.1f)",sum.x,sum.y);
    return 0;
}