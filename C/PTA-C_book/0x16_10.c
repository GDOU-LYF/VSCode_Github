#include <stdio.h>
int main(){
    int i,k;
    char hexad[80],str[80];
    long number;
    
    i=0;
    while((str[i]=getchar())!='\n'){
        i++;
    }
    str[i]='\0';

    k=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='0'&&str[i]<='9'||str[i]>='A'&&str[i]<='F'
        ||str[i]>='a'&&str[i]<='f'){
            hexad[k]=str[i];
            k++;
        }
    }
    hexad[k]='\0';
    printf("New String:");
    for(i=0;hexad[i]!='\0';i++){
        putchar(hexad[i]);
    }
    printf("\n");

//转换十进制
    number=0;
    for(i=0;hexad[i]!='\0';i++){
        if(hexad[i]>='0'&&hexad[i]<='9'){
            number=number*16+hexad[i]-'0';
        }else  if(hexad[i]>='A'&&hexad[i]<='F'){
            number=number*16+hexad[i]-'A'+10;
        }else if(hexad[i]>='a'&&hexad[i]<='f'){
            number=number*16+hexad[i]-'a'+10;
        }
    }
    printf("%ldd\n",number);

    return 0;
}