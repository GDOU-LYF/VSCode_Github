#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ret=1;
    for(int i=n;i>=0;i--){
        for(int j=i;j>0;j--){
            printf("%02d",ret++);
        }
        printf("\n");
    }
    return 0;
}