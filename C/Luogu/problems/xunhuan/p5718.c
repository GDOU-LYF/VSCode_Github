#include <stdio.h>
int main(){
    int n,a,min;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(i==0||min>a){
            min=a;
        }
    }
    printf("%d",min);


    return 0;
}