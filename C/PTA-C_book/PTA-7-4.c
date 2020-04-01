#include <stdio.h>
int main(){
    int a[20]={0,},b[20]={0,},c[20]={0,};
    int n1,n2;
    scanf("%d",&n1);
    int i,j,k;
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&n2);
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    int tl;
    for(i=0;i<n1;i++){
        tl=1;
        for(j=0;j<n2;j++){
            if(a[i]==b[j]){
                tl=0;
                break;
            }
        }
        if(tl==1){
            c[k++]=a[i];
        }
    }

    for(i=0;i<n2;i++){
        tl=1;
        for(j=0;j<n1;j++){
            if(b[i]==a[j]){
                tl=0;
                break;
            }
        }
        if(tl==1){
            c[k++]=b[i];
        }
    }

    printf("%d",c[0]);
    for(i=1;i<k;i++){
        for(j=0;j<i;j++){
            if(c[i]==c[j]){
                break;
            }
        }
        if(i==j){
            printf(" %d",c[i]);
        }
    }
    return 0;
}