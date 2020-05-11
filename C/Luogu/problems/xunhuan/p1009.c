#include <stdio.h>
int main(){
    unsigned int n,s=0;
    scanf("%d",&n);
    unsigned int rn=1;
    for (int i=1;i<=n;i++,rn=1){
        for(int j=2;j<=i;j++){
            rn*=j;
        }
        s+=rn;
    }
    printf("%u",s);

    return 0;
}