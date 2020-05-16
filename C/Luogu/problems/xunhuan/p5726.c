#include <stdio.h>
int main(){
    int n,a;
    int max,min,sum=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&a);
        if(i==0){
            max=min=a;
        }
        if(max<a){
            max=a;
        }
        if(min>a){
            min=a;
        }
        sum+=a;
    }
    double ave;
    ave=(sum-max-min)*1.0/(n-2);
    printf("%.2f",ave);
    



    return 0;
}