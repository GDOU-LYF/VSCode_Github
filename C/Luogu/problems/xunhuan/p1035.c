#include <stdio.h>
int main(){
    int k,n=0;
    double sn=0;
    scanf("%d",&k);
    int i=1;
    while(sn<=k){
        sn+=1.0/i;
        i++;
        n++;
    }
    printf("%d",n);


    return 0;
}