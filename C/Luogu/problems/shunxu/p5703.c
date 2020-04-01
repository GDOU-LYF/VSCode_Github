#include <stdio.h>
#define max 1e9
int main(){
    int x,y;
    int ret=-1;
    scanf("%d %d",&x,&y);
    if(x<max &&y<max){
        ret=x*y;
    }
    printf("%d",ret);
    return 0;
}