#include <stdio.h>
int main(){
    int i;
    unsigned long f[100]={1,1,};
    for (i=2;i<100;i++){
        f[i]=f[i-1]+f[i-2];
    }
    for (i=0;i<100;i++){
        printf("%lu ",f[i]);
        if((i+1)%5==0){
            printf("\n");
        }
    }
    return 0;
}