#include <stdio.h>
int serach(int x,int a[],int len);
int max(int a[],int len);
int swapA(int *a,int *b);
int main(){
    int a[]={732,1,5,7,9,99,1023,4};
    int len=sizeof(a)/sizeof(a[0]);
    for(int i=len-1;i>0;i--){
        int max_n=max(a,i+1);
            // int temp=a[max_n];
            // a[max_n]=a[i];
            // a[i]=temp;
            swapA(a+i,a+max_n);
    }
    printf("New:\n");
    for(int i=0;i<len;i++){
        printf("%d\t",a[i]);
    }
    int n;
    printf("\nserach number of:");
    scanf("%d",&n);
    printf("%d",serach(n,a,len));
    return 0;
}

int serach(int x,int a[],int len){ //寻找数组中的值 (有序)
    int right,left;
    int ret=-1;
    left=1;
    right=len-1;
    while(right>=left){ //右边大于左边进入
        int mid=(left+right)/2;
        if(a[mid]==x){
            ret=mid;
            break;
        }else if(a[mid]>x){  //中间数大于x
            right=mid-1; //将右边-1
        }else{
            left=mid+1; //左边+1
        }
    }
    return ret; //返回下标
}

int max(int a[],int len){
    int maxid=0;
    for(int i=1;i<len;i++){
        if(a[i]>a[maxid]){
            maxid=i;
        }
    }
    return maxid;
}

int swapA(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}