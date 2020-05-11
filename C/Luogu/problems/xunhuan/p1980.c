#include <stdio.h>
int main(){
    int n,x;
    int sum=0;
    scanf("%d %d",&n,&x);
    for (int i=1;i<=n;i++){
        int wi=i;
        do{
            int temp=wi%10;
            if(temp==x){
                sum++;
            }
            wi/=10;
        }while(wi>0);
    }
    printf("%d",sum);
    return 0;
}