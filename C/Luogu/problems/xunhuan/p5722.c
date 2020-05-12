#include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     printf("%d",sum);
//     return 0;
// }

int main(){//高斯来做题
    int n;
    scanf("%d",&n);
    int sn=n+n*(n-1)*0.5;
    printf("%d",sn);
}