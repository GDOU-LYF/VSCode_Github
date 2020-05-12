#include <stdio.h>
int main(){
    int k,s=0;6;
    scanf("%d",&k);
    int n=1,count=0;
    for(int i=1;count<k;i++,n++){
        for(int j=n;j>0&&count<k;j--){
            s+=n;
            count++;
        }

    }
    printf("%d",s);

    return 0;
}