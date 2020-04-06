#include <stdio.h>
#include <string.h>
#define N 5
#define len 80
int main(){
    char word[N][len]={0};
    for(int i=0;i<N;i++){
        scanf("%s",&word[i]);
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(strcmp(word[i],word[j])<0){
                char temp[80];
                strcpy(temp,word[i]);
                strcpy(word[i],word[j]);
                strcpy(word[j],temp);
            }
        }
    }
    printf("After sorted:\n");
    for(int i=0;i<N;i++){
        printf("%s\n",word[i]);
    }

    return 0;
}