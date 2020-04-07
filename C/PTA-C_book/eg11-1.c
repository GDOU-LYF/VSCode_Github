//奥运五环
#include <stdio.h>
#include <string.h>
int main(){
    int i;
    char *color[5]={"red","blue","yellow","green","black"};
    char str[20];
    scanf("%s",&str);
    for(i=0;i<5;i++){
        if(strcmp(str,color[i])==0){
            break;
        }
    }
    if(i<5){
        printf("%d",i+1);
    }
    return 0;
}