#include <stdio.h>
int main(){
    int i;
    double average;
    int n[10];
    for(i=0;i<10;i++){
        scanf("%d",&n[i]);
        average+=n[i];
    }
    average/=10;
    printf("%.2f\n",average);
    for(i=0;i<10;i++){
        if(n[i]>=average)
        printf("%d ",n[i]);
    }
    return 0;
}