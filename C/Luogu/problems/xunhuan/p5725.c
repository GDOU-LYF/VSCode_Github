#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=1;
    for (int i=0;i<n;i++ ){
        for(int j=1;j<=n;j++){
            printf("%02d",count++);
        }
        printf("\n");
    }
    printf("\n");
    count=1;
    for (int i=1;i<=n;i++ ){
        for(int k=n-i;k>0;k--){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            printf("%02d",count++);
        }
        printf("\n");
    }


    return 0;
}