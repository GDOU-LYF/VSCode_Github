#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n<11/2.0){
        printf("Local");
    }else{
        printf("Luogu");
    }
    return 0;
}