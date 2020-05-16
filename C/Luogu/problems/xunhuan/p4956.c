#include <stdio.h>
int main(){
    int x,k;//0<=x<=100,k>0
    int n;//1450<=n<=145600
    int ret[2]={0,};
    scanf("%d",&n);
    //一周的钱为 7x+21K=7(x+3k);
    //一共为52周  7(x+3k)*52=n
    n/=7*52;
    for (int x=1;x<=100;x++){
        for (int k=100;k>0;k--){
            if(x+3*k==n){
                if(ret[0]<x){
                    ret[0]=x;
                    ret[1]=k;
                }
            }
        }
    }
    printf("%d\n%d",ret[0],ret[1]);
    return 0;
}