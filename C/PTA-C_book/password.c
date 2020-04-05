#include <stdio.h>
int main(){
    // int x=5342;
    // int *p=NULL;
    // p=&x;
    // printf("x=%d,p=%X;*p=%d",x,p,*p);

    // int a=3,*p;
    // p=&a;
    // printf("a=%d,*p=%d\n",a,*p);
    // *p=10;
    // printf("a=%d,*p=%d\n",a,*p);
    // scanf("%d",&a);
    // printf("a=%d,*p=%d\n",a,*p);
    // (*p)++;
    // printf("a=%d,*p=%d\n",a,*p);
    int m,n=5;
    int *p=&m;
    *p=*&n;
    printf("%d,%d",m,n);

    return 0;
}