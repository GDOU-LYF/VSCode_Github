#include <stdio.h>
int main(){
    int a[3];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    // int a,b,c;
    // if(d[0]>d[1]&& d[0]>d[2]){
    //     a=d[0];
    // }
    int i,j;
    for (i=0;i<3;i++){
        for(j=1;j<3;j++){
            if(a[j-1]>a[j]){
                int temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
        }
    }
    for (i=0;i<3;i++){
        printf("%d",a[i]);
        if(i!=2){
            printf(" ");
        }
    }
    return 0;
}