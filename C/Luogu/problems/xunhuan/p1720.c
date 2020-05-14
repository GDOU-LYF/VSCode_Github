#include <stdio.h>
//这是斐波那契数列
double fa(int n){
    double f=1,g=0;
    while(0<n--){
        g+=f;
        f=g-f;
    }
    return g;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%.2f",fa(n));
    return 0;
}