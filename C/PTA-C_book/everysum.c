#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,sum,max;
    int *p;
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int)); //malloc 只申请一个,calloc申请一个数组
    if(p==NULL){
        printf("ERRO!");
        exit(1);        
    }
    for(int i=0;i<n;i++){
        scanf("%d",p+i);
    }
    sum=max=0;
    for(int i=0;i<n;i++){
        if(i==0||max<*(p+i)){
            max=*(p+i);
        }
        sum+=*(p+i);
    }
    printf("sum=%d,max=%d",sum,max);
    free(p);

    return 0;
}