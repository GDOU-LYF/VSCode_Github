#include <stdio.h>
int main(){
    int a[90],*p;
    for(int i=0;i<90;i++){
        a[i]=i; //赋值
    }
    int max;
    for(p=a;p<=&a[90];p++){
        if(p==&a[0]||max<*p){
            max=*p;
        }
    }
    printf("max=%d",max);

    return 0;
}