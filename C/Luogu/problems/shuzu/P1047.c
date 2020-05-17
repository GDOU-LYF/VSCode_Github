#include <stdio.h>
int main(){
    int l,m;
    int u,v;
    int l1[10001]={0,};
    scanf("%d %d",&l,&m);
    for (int i=0;i<m;i++){
        scanf("%d %d",&u,&v);
        for(int j=u;j<=v;j++){
            l1[j]=1;
        }
    }

    //处理
    int sum=0;
    for (int i=0;i<=l;i++){
            if(l1[i]==0){
                sum++;
            }
    }
    // sum++;
    printf("%d",sum);


    return 0;
}