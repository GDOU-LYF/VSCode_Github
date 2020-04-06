#include <stdio.h>
int main(){
    struct student{
        double average;
        double max;
        double min;
    };
    struct student user;
    user.max=user.min=0;
    int n;
    scanf("%d",&n);
    int pint;
    for(int i=0;i<n;i++){
        scanf("%d",&pint);
        if(i==0){
            user.max=user.min=pint;
        }
        if(user.max<pint){
            user.max=pint;
        }else if(user.min>pint){
            user.min=pint;
        }
        user.average+=pint;
    }
    user.average/=n;
    printf("average = %.2f\nmax = %.2f\nmin = %.2f",
    user.average,user.max,user.min);
    return 0;
}