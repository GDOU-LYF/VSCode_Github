#include <stdio.h>
int main(){
    int n;
    int a,count=0,max;
    int Mcount=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&a);
        
        if(max+1==a||i==0){
            count++;
            max=a;
        }else{
            if(Mcount<count){
                Mcount=count;
            }
            count=0;
        }
        if(count==0){
            max=a;
            count++;
        }
    }
    printf("%d",Mcount);

    return 0;
}