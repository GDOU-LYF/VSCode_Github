#include <stdio.h>
int main(){
    int n[100]={0,};
    scanf("%d",&n[0]);
    int count=0;
    for(int i=1;n[i-1]!=0;i++,count++){
        scanf("%d",&n[i]);
    }
    count--;//减去最后一个0;
    for (int i=count;i>=0;i--){
        if(i==count){
            printf("%d",n[i]);
        }else{
            printf(" %d",n[i]);
        }
    }



    return 0;
}