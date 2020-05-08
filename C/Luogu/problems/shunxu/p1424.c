#include <stdio.h>
#define Day 250
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=0;
    // for(int j=a;j<=7;j++){
    //     if(j<6){
    //         sum+=1;
    //     }
    // }
    // b=b-a;  
    // for (int i=b;i>0;i=i-7){
    //     for(int j=1;j<=7;j++){
    //         if(j<6){
    //             sum+=1;
    //         }
    //     } 
    // }
    for(int i=1;i<=b;i++){
        if(a<6){
            sum++;
        }
        if(a==7){
            a=1;
        }else{
            a++;
        }
    }
    printf("%d",sum*Day );

    return 0;
}