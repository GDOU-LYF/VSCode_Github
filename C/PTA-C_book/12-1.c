#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    long num;
    char strname[10];
    int i,score;
    int avg_score=0;
    fp=fopen("C:\\Vscode\\Github\\C\\PTA-C_book\\f12-1.txt","r");
    if(fp==NULL){
        printf("erro!\n");
        exit(0);
    }

    for(i=0;i<5;i++){
        fscanf(fp,"%ld %s %ld",&num,strname,&score);
        avg_score+=score;

        printf("%ld %s %ld\n",num,strname,score);
    }
    printf("Avgscore:%4.1f\n",avg_score/5.0);
    if(fclose(fp)){
        printf("Cann't close the file!\n");
        exit(0);
    }
    return 0;


}