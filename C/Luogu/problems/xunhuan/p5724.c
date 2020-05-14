#include <stdio.h>
int main(){
    int n,a;
    int max,min;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
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
    }
    printf("%d",max-min);



    return 0;
}