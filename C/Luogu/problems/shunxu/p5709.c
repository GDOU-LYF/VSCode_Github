#include <stdio.h>
int main(){
    int m,t,s;
    scanf("%d %d %d",&m,&t,&s);
    int eat;
    if(t==0){
        printf("%d",0);
        return 0;
    }
    if(s%t==0){
        eat=s/t;
    }else{
        eat=s/t+1;
    }
    if(eat>m){
        eat=m;
    }
    printf("%d",m-eat);
    return 0;
}