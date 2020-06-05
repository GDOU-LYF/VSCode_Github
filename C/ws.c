#include <stdio.h>
void ws(int n){
    int a[1001];
    int count=0;
    for (int i=1;i<n;i++){
        if(n%i==0){
            a[count++]=i;//记录值和数组大小
        }
    }
    int sum=0;
    for (int i=0;i<count;i++){
        sum+=a[i];//将完数因子放入数组先的数加和起来
    }
    if(sum==n){//说明是完数
        printf("%d(",n);//先输出完数
        for (int i=0;i<count;i++){//输出完数因子
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