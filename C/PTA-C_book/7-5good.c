#include <stdio.h>
int main(){
    int i,index,k,n,temp;
    int a[10];
    scanf("%d",&n);
    if(n>10){
        printf("越界!");
        exit(0);
    }
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(k=0;k<n-1;k++){
        index=k;
        for(i=k+1;i<n;i++){
            if(a[i]<a[index]){
                index=i;//比较一轮以后,使a[index]最小
            }
        }
        temp=a[index];
        a[index]=a[k];
        a[k]=temp;
        //令当前项与最小项互换
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);

    }
    return 0;
}