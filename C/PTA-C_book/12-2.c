#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct sysuser{
    char username[20];
    char password[8];
};
typedef struct sysuser sysuser;
void encrypt(char *pwd);
int main(){
    FILE *fp;
    int i;
    sysuser su;
    fp=fopen("C:\\Vscode\\Github\\C\\PTA-C_book\\f12-2.txt","w");
    if(fp==NULL){
        printf("error!\n");
        exit(0);
    }

    for(i=1;i<=5;i++){
        printf("input:name password\n");
        scanf("%s %s",su.username,su.password);
        encrypt(su.password);
        fprintf(fp,"%s %s\n",su.username,su.password);
    }
    if(fclose(fp)){
        printf("Cann't close the file!\n");
        exit(0);
    }
    return 0;
}

void encrypt(char *pwd){
    for(int i=0;i<strlen(pwd);i++){
        pwd[i]=pwd[i]^15;
    }
}