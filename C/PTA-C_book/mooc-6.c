#include <stdio.h>
int main(){
    int a,b;
    scanf("%d/%d",&a,&b);
    printf("0.");
    int i;
    do{
        int temp;
        temp=a*10/b;
        a=a*10%b;
        printf("%d",temp);
        i++;
        if(a==0){
            break;
        }
    }while(i!=200);
    return 0;
}