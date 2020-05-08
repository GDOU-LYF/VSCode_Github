#include <stdio.h>
int main(){
    char a[14];
    scanf("%s",a);
    int Number=0,sum=0;
    for (int i=0;Number<9;i++){
        if(a[i]>='0'&&a[i]<='9'){
            sum+=(a[i]-'0')*++Number;
        }
    }
    int ret=sum%11;
    if(ret==a[12]-'0'||ret==10&&a[12]=='X'){
        printf("Right");
    }else{
        if(ret==10){
            a[12]='X';
        }else{
            a[12]=ret+'0';
        }
        printf("%s",a);
    }
    return 0;  
}