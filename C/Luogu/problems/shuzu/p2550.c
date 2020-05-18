#include <stdio.h>
int main(){
    int n,m;
    int b[8]={0,};
    int f[33]={0,};
    scanf("%d",&n);
    for(int j=0;j<7;j++){
        scanf("%d",&m);
        f[m]=1;
    }
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<7;j++){
            scanf("%d",&m);
            if(f[m]==1){
                sum++;
            }
        }
        b[sum]++;
    }
    for(int k=7;k>=1;k--){
        printf("%d ",b[k]);
    }
    return 0;
}