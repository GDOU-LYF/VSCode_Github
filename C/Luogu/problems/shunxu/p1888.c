#include <stdio.h>
int main(){
    int a[3];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    for (int i=0;i<3;i++){

        for (int j=0;j<3;j++){
            if(a[i]<a[j]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    int b,c,d;
    b=a[0];
    c=a[2];
    while(c>0){
        d=b%c;
        b=c;
        c=d;
    }
    printf("%d/%d",a[0]/b,a[2]/b);
    // int a,b,c;
    // scanf("%d %d %d",&a,&b,&c);
    // int sin1,sin2;
    // if(a*1.0/b<a*1.0/c){
    //     if(a*1.0/b<b*1.0/c){
    //         sin1=a,sin2=b;
    //     }else{
    //         sin1=b,sin2=c;
    //     }
    // }else{
    //     if(a*1.0/c<b*1.0/c){
    //         sin1=a,sin2=c;
    //     }else{
    //         sin1=b,sin2=c;
    //     }
    // }
    // //辗转相除
    // int temp,a1,b1;
    // a1=sin1,b1=sin2;
    // while(b1>0){
    //     temp=a1%b1;
    //     a1=b1;
    //     b1=temp;
    // }

    // printf("%d/%d",sin1/a1,sin2/a1);
    return 0;
}