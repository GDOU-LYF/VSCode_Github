#include <stdio.h>
int main(){
    unsigned int n,s=1;
    unsigned int rn[51]={0,1};
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        rn[i]=rn[i-1]*i;
    }
    for (int i=2;i<=n;i++){
        s+=rn[i];
    }
    printf("%u",s);

    return 0;
}