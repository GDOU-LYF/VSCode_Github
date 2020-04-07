#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int n=0;
    char *color[20],str[15];
    scanf("%s",str);
    while(str[0]!='#'){
        color[n]=(char*)malloc(sizeof(char)*strlen(str)+1);
        //动态申请一块空白地址给color[n]
        strcpy(color[n],str);
        n++;
        scanf("%s",str);
    }
    for(int i=n-1;i>=0;i--){
        printf("%s\t",color[i]);
        free(color[i]);
    }
    return 0;
}