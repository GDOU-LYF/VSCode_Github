#include <stdio.h>
#include <string.h>
#define NAME_LONG 11
#define PHONE_LONG 18
#define B_LONG 9
struct people{
    char name[NAME_LONG];
    char telepohone[PHONE_LONG];
    char birth[B_LONG];
};

int main(){
    struct people p[10];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        //getchar();
        //gets()
        scanf("%s %s %s",&p[i].name,&p[i].birth,&p[i].telepohone);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(strcmp(p[i].birth,p[j].birth)<0){
                struct people temp;
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%s %s %s\n",p[i].name,p[i].birth,p[i].telepohone);
    }

    return 0;
}