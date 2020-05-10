#include <stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int a=0,b=0,n1=0,n2=0;
    for(int i=1;i<=n;i++){
        if(i%k==0){
            a+=i;
            n1++;
        }else{
            b+=i;
            n2++;
        }
    }
    printf("%.1f %.1f",a*1.0/n1,b*1.0/n2);

    return 0;
}