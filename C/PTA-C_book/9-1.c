#include <stdio.h>
struct time{
    int h;
    int m;
    int s;
};

int main(){
    struct time day;
    int after=0;
    scanf("%d:%d:%d",&day.h,&day.m,&day.s);
    scanf("%d",&after);
    if(day.s+after>=60){
        day.m+=(day.s+after)/60;
        day.s=(day.s+after)%60;
        if(day.m>=60){
            day.h+=day.m/60;
            day.m%=60;
        }
    }else{
        day.s+=after;
    }
    if(day.h>=24){
        day.h%=24;
    }
    printf("%02d:%02d:%02d",day.h,day.m,day.s);
    return 0;
}