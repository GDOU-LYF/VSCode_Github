#include <stdio.h>
int main(){
    int a[6][6]={0,};
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=i*n+j+1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j){  //i<=j 上半角, i>=j 下   i==j 对角线 i+j=n-1 反
                int temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
         printf("\n");
    }

    return 0;
}