#include <stdio.h>
//找鞍点 行最大,列最小, y=max,x=min
int main(){ 
    int n;
    int max,min,xd,yd;
    max=min=0;
    scanf("%d",&n);
    int a[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]); //read
        }
    }

    for(int i=0;i<n;i++){ //serach
        max=a[i][0];
        for(int j=0;j<n;j++){
            if(max<a[i][j]){
                max=a[i][j];
                yd=j;
            }
        }
        min=a[0][yd];
        for(int j=0;j<n;j++){
            if(min>a[j][yd]){
                min=a[j][yd];
                xd=j;
            }
        }
        
        if(min==max){
            break;
        }
    }
    if(min==max){
        printf("%d %d",xd,yd);
    }else{
        printf("NO");
    }
    
    return 0;
}