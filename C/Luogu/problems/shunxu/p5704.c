#include <stdio.h>
int main(){
    char s;
    s=getchar();
    if(s>='a' && s<='z'){
        s=s-32;
    }
    printf("%c",s);
    return 0;
}