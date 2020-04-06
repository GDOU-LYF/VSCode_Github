//6-8
#include <stdio.h>
#include <string.h>
int main(){
    char word[1000];
    int n=0;
    gets(word);
    char *p=word;
    //p=word;
    int f=1; //默认开头是单词
    while(1){
        if(*p=='\0'){
            break;
        }
        if(*p==' '){ //为空格 设置下一个判断为真
            f=1;
        }
        if(*p!=' '&&f==1){
            n++;
            f=0;
        }
        p++;
    }
    // int temp=t;//前面的空格数
    // for(;word[t]!='\0';t++){
    //     if((word[t]==' '||word[t]==',')&&length!=0){
    //         n++;
    //         length=0;
    //     }else{
    //         length++;//可求每个单词长度
    //     }
    // }
    // int len=(int)strlen(word);
    // if(len!=0&&temp!=len&&word[len-1]!=' '){
    //     n++;
    // }
    printf("%d",n);
    return 0;
}