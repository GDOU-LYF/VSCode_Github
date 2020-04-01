#include <stdio.h>
int main(){
    int n,a[10],max,max_i,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i==0 ||a[i]>max){
            max=a[i];
            max_i=i;
        }
    }
    printf("%d %d",max,max_i);
    return 0;
}