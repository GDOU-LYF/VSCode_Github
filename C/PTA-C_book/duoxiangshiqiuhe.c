//多项式求和
#include <stdio.h>
/*多项式表示*/
typedef struct PolyNode *Polynomial;
struct PolyNode
{
    int coef;
    int expon;
    Polynomial link;
};
/*多项式表示*/

int compare(int a,int b){
    int ret=-1;
    if(a>b){
        ret=1;
    }else if(a<b){
        ret=-1;
    }else{
        ret=0;
    }
    return ret;
}
void Attach(int coef,int expon,Polynomial *ptrrear){
    Polynomial P;

}

int main(){
    int n1[100]={0},e1[100]={0};
    int n2[100]={0},e2[100]={0};
    int n3[100]={0},e3[100]={0},n=0;
    //read
    int j;
    j=-1;
    do{
        j++;
        scanf("%d %d",&e1[j],&n1[j]);
        /*
        第一个表示幂次，第二个表示该幂次的系数
        所有的系数都是整数。第一行一定是最高幂，最后一行一定是0次幂。
        */
    }while(e1[j]!=0);
    j=-1;
    do{
        j++;
        scanf("%d %d",&e2[j],&n2[j]);
    }while(e2[j]!=0);

    //处理
    int sum;
    int zero;
    for(int i=0;e1[i]!=0&&e2[i]!=0;i++){
        //int t=compare(e1[i],e2[i]);//先合并相同的给e1;
        if(e1[i]==e2[i]){
            n1[i]=n1[i]+n2[i];
        }
        if(i<99&&e1[i+1]==0){
            zero=zero+n1[i+1];
        }
    }
    for(int i=0;e1[i]!=0||e2[i]!=0;i++){
        int t;//=compare(e1[i],e2[i]);//先合并相同的给e1;
        if(e1[i]>e2[i]){
            t=1;
        }else if(e1[i]<e2[i]){
            t=-1;
        }else{
            t=0;
        }

        switch (t)
        {
        case 1://e1大
            e3[n]=e1[i];
            n3[n]=n1[i];
            n++;
            if(e1[i]>e2[i-1]){
                break;  
            }
        case -1://e2大
            e3[n]=e2[i];
            n3[n]=n2[i];
            n++;
            break;
        case 0://一样大
            e3[n]=e1[i];
            n3[n]=n1[i];
            if(i<99&&e2[i+1]==0){
            zero=zero+n2[i+1];
            n++;
            e3[n]=0;
            n3[n]=zero;
            }
            n++;
            break;
        default:
            break;
        }
    }
    //输出
    printf("%dx%d",n3[0],e3[0]);
    for(int i=1;i<n;i++){
        if(n3[i]!=0){
            if(e3[i]>1){
                printf("+%dx%d",n3[i],e3[i]);
            }else if(e3[i]==1){
                printf("+%dx",n3[i]);
            }else if(e3[i]==0){
                printf("+%d",n3[i]);
            }
        }

    }
    return 0;
}