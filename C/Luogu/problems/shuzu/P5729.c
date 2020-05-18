#include <stdio.h>
int main(){
    int w,x,h;
    int q;
    int q1[101][6];
    scanf("%d %d %d",&w,&x,&h);
    int ret=w*x*h;
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%d %d %d %d %d %d %d",&q1[i][0],&q1[i][1],
        &q1[i][2],&q1[i][3],&q1[i][4],&q1[i][5]);
    }
    return 0;
}