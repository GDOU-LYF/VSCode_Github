#include <stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    switch(i){
        case 1:
            printf("I love Luogu!");
            break;
        case 2:
        {
            int a,u,b;
            a=2;u=4;
            printf("%d %d",a+u,10-(a+u));
            break;
        }
        case 3:
        {
            int n=14;
            int get=n/4;
            printf("%d\n%d\n%d",get,n-n%4,n%4);
            break;
        }
    }

    return 0;
}