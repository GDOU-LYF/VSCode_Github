#include <stdio.h>
#define long 31
#define bookmax 10
struct book{
    char name[long];
    double money;
};

int main(){
    int n;
    scanf("%d",&n);

    int max,min;
    max=min=0;
    struct book book[bookmax];
    for(int i=0; i<n;i++){
        getchar();
        gets(book[i].name);
        scanf("%lf",&book[i].money);
        if(book[max].money<book[i].money){
            max=i;
        }
        if(book[min].money>book[i].money){
            min=i;
        }
        //scanf("%",&book[i].money);
    }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(book[i].money<book[j].money){
    //             // char temp[30];
    //             // strcpy(temp,book[i].name);
    //             // strcpy(book[i].name,book[j].name);
    //             // strcpy(book[j].name,temp);
    //             struct book temp;
    //             temp=book[i];
    //             book[i]=book[j];
    //             book[j]=temp;
    //         }
    //     }
    // }
    printf("%.2f, %s\n",book[max].money,book[max].name);
    printf("%.2f, %s\n",book[min].money,book[min].name);
    // for(int i=0; i<n;i++){
    //     printf("%.2f, %s\n",book[i].money,book[i].name);
    // }
    return 0;
}