#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==0 ||n==1){
        printf("Today, I ate %d apple.",n);
    }else if(n>1){
        printf("Today, I ate %d apples.",n);
    }
    return 0;
}