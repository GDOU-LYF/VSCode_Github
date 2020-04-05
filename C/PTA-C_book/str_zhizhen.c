#include <stdio.h>
#include <string.h>
int main(){
    char sa[]="this";
    char *p="this";
    strcpy(sa,"5his");
    p="6his";
    // for(int i=0;sa[i]!='\0';i++){
    //     putchar(sa[i]);
    // }
    printf("%s",sa);
    return 0;
}