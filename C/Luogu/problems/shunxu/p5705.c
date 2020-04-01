#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    scanf("%s",s+1);
    int i,d=strlen(s+1);
    for(i=d;i>=0;i--){
        printf("%c",s[i]);
    }
    return 0;
}
