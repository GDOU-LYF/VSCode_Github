#include <stdio.h>
int main(){
    int a[3];
    char b[3];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    scanf(" %c%c%c",&b[0],&b[1],&b[2]);
    for (int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            if(a[j]>a[i]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    // for(int i=0;i<3;i++){
    //     if(b[i]='B'){
    //         b[i]='0';
    //     }else if(b[i]='B'){
    //         b[i]='1';
    //     }else if(b[i]='C'){
    //         b[i]='2';
    //     }
    // }
    for(int i=0;i<3;i++){
        int ret=0;
        if(b[i]=='A'){
            ret=a[0];
        }else if(b[i]=='B'){
            ret=a[1];
        }else if(b[i]=='C'){
            ret=a[2];
        }

        if(i==2){
            printf("%d",ret);
        }else{
            printf("%d ",ret);
        }
    }
    return 0;
}