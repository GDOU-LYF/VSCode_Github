#include <stdio.h>
#define MAX 1000
int main(){
    int n;
    scanf("%d",&n);
    int count[MAX];
    int i=0;
    count[i++]=n;
    while(n>1){
        if(n%2==0){
            n=n/2;
            count[i++]=n;
        }else{
            n=n*3+1;
            count[i++]=n;
        }
    }
    i--;
    for(;i>0;i--){
         printf("%d ",count[i]);
    }
    printf("%d",count[i]);

    return 0;
}