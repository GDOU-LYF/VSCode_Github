#include <stdio.h>
int main(){
    char a[60],i,k;

    k=0;
    while((a[k]=getchar())!='\n'){
        k++;
    }
    a[k]='\0';

    i=0,k=k-1;//除去字符串结尾'/0'
    while(i<k){
        if(a[i]!=a[k]){
            break;
        }
        i++;
        k--;
    }
    if(i==k){
        printf("回文");
    }else{
        printf("不回文");
    }
    return 0;
}