#include <stdio.h>
#include <math.h>
int Isp(int a){
    int m=(int)sqrt(a)+1,ret=1;
    for (int i=2;i<m;i++){
        if(a%i==0){
            ret=0;
            break;
        }
    }
    return ret;
} 

int Nnumber(int a){
    int ret=0;
    while(a>0){
        a/=10;
        ret++;
    }
    return ret;
}

int For(int n,int a){
    int ret=0;
    if(a/(int)pow(10,n-1)==a%10){
        if(n==0||n==1){
            ret=1;
        }else{
            int temp=a%(int)pow(10,n-1);
            temp/=10;
            ret=For(n-2,temp);
        }
    }
    return ret;
}
int Palindromes(int a){
    int ret=0;
    int n=Nnumber(a);
    if(n==1){
        ret=1;
    }else if(n==2){
        if(a/10==a%10){
            ret=1;
        }
    }else{
        ret=For(n,a);
    }
    return ret;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%2==0){
        a+=1;
    }
    for(int i=a;i<=b;i+=2){
        if(Isp(i)&&Palindromes(i)){
            printf("%d\n",i);
        }
    }
    return 0;
}