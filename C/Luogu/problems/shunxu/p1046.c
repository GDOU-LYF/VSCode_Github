#include <stdio.h>
#define Desk 30 
int main(){
    int a[11];
    for(int i=0;i<11;i++){
        scanf("%d",&a[i]);
    }
    int x=a[10],sum=0;
    for(int i=0;i<10;i++){
        if(x+Desk>=a[i]){
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}