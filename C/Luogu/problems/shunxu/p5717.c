#include <stdio.h>
int main(){
    int a[3];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if(a[j]>a[i]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    
    if(a[0]+a[1]>a[2]){
        if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]){//直角三角形
            printf("Right triangle\n");
        }else if(a[0]*a[0]+a[1]*a[1]>a[2]*a[2]){//锐角三角形
            printf("Acute triangle\n");
        }else if(a[0]*a[0]+a[1]*a[1]<a[2]*a[2]){//钝角三角形
            printf("Obtuse triangle\n");
        }
        if(a[0]==a[1]||a[0]==a[2]||a[1]==a[2]){//等腰三角形
            printf("Isosceles triangle\n");
        }
        if(a[0]==a[1]&&a[1]==a[2]){//等边三角形
            printf("Equilateral triangle\n");
        }
    }else{
        printf("Not triangle\n");
    }


    return 0;
}