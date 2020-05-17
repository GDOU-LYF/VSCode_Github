#include <stdio.h>
#include <stdlib.h>
int main(){
    //核心句:。
    //所有的鱼头都朝向左边，所以每只鱼只能看见在它左边的鱼的可爱程度
    int n;
    scanf("%d",&n);
    int *a=calloc(n,sizeof(int));
    int *b=calloc(n,sizeof(int));
    for (int i=0;i<n;i++){
        scanf("%d",(a+i));
        int sum=0;
        for(int j=0;j<i;j++){
            if(*(a+i)>*(a+j)){
                sum+=1;
            }
        }
        *(b+i)=sum;
    }
    for (int i=0;i<n;i++){
        if(i==0){
            printf("%d",*(b+i));
        }else{
            printf(" %d",*(b+i));
        }
    }
    free(a);
    free(b);

    return 0;
}