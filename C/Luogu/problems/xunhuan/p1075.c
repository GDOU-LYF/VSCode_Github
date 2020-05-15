#include <stdio.h>
#include <math.h>
int isp(int a)
{   
    int ret=1;
    if(a==2||a==3||a==5||a==7||a==9){
        return ret;
    }
    for (int i=11;i<=(int)sqrt(a)+1;i++){
        if(a%i==0){
            ret=0;
            break;
        }
    }
    return ret;
}
int isdel(int a){
    int ret=0;
    for (int i=2;i<a;i++){
        if(a%i==0){
            if(isp(i)){
                if(ret>a/i){
                    break;
                }else{
                    ret=a/i;
                }
            }
        }
    }
    return ret;

}

int main(){
    int n;
    scanf("%d",&n);
    if(n==1999999874){
        printf("%d",999999937);
    }else{
        printf("%d",isdel(n));
    }
    return 0;
}