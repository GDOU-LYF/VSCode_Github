#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ret=0;
    if(n%2==0){
        ret++;
    }
    if (n>=4 &&n<=12){
        ret++;
    }

    if(ret==0){
        printf("0 0 0 1");
    }else if(ret==1){
        printf("0 1 1 0");
    }else if(ret==2){
        printf("1 1 0 0");
    }
    return 0;
}