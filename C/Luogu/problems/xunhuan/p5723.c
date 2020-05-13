#include <stdio.h>
#include <math.h>
int Isp(int a){
    int m=(int)sqrt(a)+1,ret=1;
    for (int i=2;i<m;i++){
        if(a%i==0){
            ret=0;
            break;
        }
    }
    return ret;
} 

int main(){
    int n,sum=0,count=0;
    scanf("%d",&n);
    for (int i=2;i<n;i++){
            if(Isp(i)){
                sum+=i;
                if(sum>n){
                    break;
                }
                count++;
                printf("%d\n",i);
            }
    }
    printf("%d",count);


    return 0;
}