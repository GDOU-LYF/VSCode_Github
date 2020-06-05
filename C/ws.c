#include <stdio.h>
void ws(int n){
    int a[1001];
    int count=0;
    for (int i=1;i<n;i++){
        if(n%i==0){
            a[count++]=i;
        }
    }
    int sum=0;
    for (int i=0;i<count;i++){
        sum+=a[i];
    }
    if(sum==n){
        printf("%d(",n);
        for (int i=0;i<count;i++){
            if(i==count-1){
                printf("%d);",a[i]);
            }else{
                printf("%d,",a[i]);
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    if(n<=1){
        return 0;
    }else{
        int k=6;
        while(k<=n){
            ws(k++);
        }
    }
    return 0;
}