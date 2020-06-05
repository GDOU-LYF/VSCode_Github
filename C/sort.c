#include <stdio.h>
int main(){
    int a[10]={25,17,14,13,25,16,23,24,33,34} ;
    int b[10]={0,};//考试忘记定义了
    int count=0;
    for(int i=0;i<10;i++){
        printf("%d\t",a[i]);//先输出原数组a
        if(a[i]%2!=0){//如果是奇数,放到数组b中
            b[count++]=a[i];//记录数组大小
        }
    }
    if(count!=0){//数组b不为空
        printf("\n");
        for(int i=0;i<count;i++){
            for (int j=i;j<count;j++){
                if(b[i]>b[j]){//排序,交换逆序对,使其消除
                    int temp =b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
        for (int i=0;i<count;i++){//输出数组b
            printf("%d\t",b[i]);
        }
        printf("\n");
    }
    return 0;
}