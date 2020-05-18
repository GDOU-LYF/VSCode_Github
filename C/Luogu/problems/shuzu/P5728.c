#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int a[2000][4];
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
        a[i][3]=a[i][0]+a[i][1]+a[i][2];
    }
    int ret=0;
    for (int i=1;i<=n;i++){
        for (int j=i+1;j<=n;j++){
            if(abs(a[i][0]-a[j][0])<=5
            &&abs(a[i][1]-a[j][1])<=5
            &&abs(a[i][2]-a[j][2])<=5
            &&abs(a[i][3]-a[j][3])<=10){
                ret++;
            }
        }
    }
    printf("%d",ret);


    return 0;
}