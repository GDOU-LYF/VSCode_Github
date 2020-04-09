#include <stdio.h>

void pyramid( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    pyramid(n);

    return 0;
}

/* 你的代码将被嵌在这里 */
void pyramid( int n ){
    char a[10]=" 123456789";
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            printf("%c",a[0]);
        }
        for(int k=1;k<=i;k++){
            printf("%c ",a[i]);
            // if(k!=i){
            //     printf(" ");
            // }
        }
        printf("\n");
    }
}

