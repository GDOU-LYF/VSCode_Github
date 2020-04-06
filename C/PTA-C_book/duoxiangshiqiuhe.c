// //多项式求和
// #include <stdio.h>
// /*多项式表示*/
// typedef struct PolyNode *Polynomial;
// struct PolyNode
// {
//     int coef;
//     int expon;
//     Polynomial link;
// };
// /*多项式表示*/

// int compare(int a,int b){
//     int ret=-1;
//     if(a>b){
//         ret=1;
//     }else if(a<b){
//         ret=-1;
//     }else{
//         ret=0;
//     }
//     return ret;
// }
// void Attach(int coef,int expon,Polynomial *ptrrear){
//     Polynomial P;

// }

// int main(){
//     int n1[100]={0},e1[100]={0};
//     int n2[100]={0},e2[100]={0};
//     int n3[100]={0},e3[100]={0},n=0;
//     //read
//     int j;
//     j=-1;
//     do{
//         j++;
//         scanf("%d %d",&e1[j],&n1[j]);
//         /*
//         第一个表示幂次，第二个表示该幂次的系数
//         所有的系数都是整数。第一行一定是最高幂，最后一行一定是0次幂。
//         */
//     }while(e1[j]!=0);
//     j=-1;
//     do{
//         j++;
//         scanf("%d %d",&e2[j],&n2[j]);
//     }while(e2[j]!=0);

//     //处理
//     int sum;
//     int zero;
//     for(int i=0;e1[i]!=0&&e2[i]!=0;i++){
//         //int t=compare(e1[i],e2[i]);//先合并相同的给e1;
//         if(e1[i]==e2[i]){
//             n1[i]=n1[i]+n2[i];
//         }
//         if(i<99&&e1[i+1]==0){
//             zero=zero+n1[i+1];
//         }
//     }
//     for(int i=0;e1[i]!=0||e2[i]!=0;i++){
//         int t;//=compare(e1[i],e2[i]);//先合并相同的给e1;
//         if(e1[i]>e2[i]){
//             t=1;
//         }else if(e1[i]<e2[i]){
//             t=-1;
//         }else{
//             t=0;
//         }

//         switch (t)
//         {
//         case 1://e1大
//             e3[n]=e1[i];
//             n3[n]=n1[i];
//             n++;
//             if(e1[i]>e2[i-1]){
//                 break;  
//             }
//         case -1://e2大
//             e3[n]=e2[i];
//             n3[n]=n2[i];
//             n++;
//             break;
//         case 0://一样大
//             e3[n]=e1[i];
//             n3[n]=n1[i];
//             if(i<99&&e2[i+1]==0){
//             zero=zero+n2[i+1];
//             n++;
//             e3[n]=0;
//             n3[n]=zero;
//             }
//             n++;
//             break;
//         default:
//             break;
//         }
//     }
//     //输出
//     printf("%dx%d",n3[0],e3[0]);
//     for(int i=1;i<n;i++){
//         if(n3[i]!=0){
//             if(e3[i]>1){
//                 printf("+%dx%d",n3[i],e3[i]);
//             }else if(e3[i]==1){
//                 printf("+%dx",n3[i]);
//             }else if(e3[i]==0){
//                 printf("+%d",n3[i]);
//             }
//         }

//     }
//     return 0;
// }

#include <stdio.h>
#define MaxDegree 100
#define NUM 100
/*定义多项式结构*/
typedef struct
{
  int CoeffArray[MaxDegree + 1]; /*系数*/
  int HighPower; /*最高位*/
} Polynomial;
/*多项式初始化为零*/
void ZeroPolynomial(Polynomial *Poly)
{
  int i;
  for (i = 0; i <= MaxDegree; i++){
   Poly->CoeffArray[i] = 0;
   Poly->HighPower = 0;
  }
}


/*多项式输入*/
void InputPolynomial(Polynomial *Poly)
{
  int Coeff = 0, Power = 0;
  ZeroPolynomial(Poly); /*多项式初始化为0*/
  while (scanf("%d %d", &Power,&Coeff) && Power >=0)
  {
    Poly->CoeffArray[Power] = Coeff;
    if (Poly->HighPower < Power){
      Poly->HighPower = Power;  
    }
    if(Power==0){
      break;
    }
  }
}


/*打印多项式*/
void PrintPolynomial(Polynomial Poly)
{
  int i;
    // if(Poly.CoeffArray[Poly.HighPower] != 0){
    //   if(Poly.HighPower>1){
    //     printf("%dx%d", Poly.CoeffArray[Poly.HighPower], Poly.HighPower);
    //   }else if(Poly.HighPower==1){
    //     printf("%dx", Poly.CoeffArray[Poly.HighPower], Poly.HighPower);
    //   }else if(Poly.HighPower==0){
    //     printf("%d", Poly.CoeffArray[Poly.HighPower], Poly.HighPower);
    //   }
    // }
    i=Poly.HighPower;
    int n;
    if(Poly.HighPower== 0){
      printf("%d", Poly.CoeffArray[Poly.HighPower], Poly.HighPower);
      }else{
      for(i = Poly.HighPower; i >= 0; i--,n++){
        if(Poly.CoeffArray[i] != 0){
          if(i==0){
            printf("%d", Poly.CoeffArray[i], i);
          }else if(i==1){
            printf("%dx", Poly.CoeffArray[i]);
          }else{
            printf("%dx%d", Poly.CoeffArray[i], i);
          }
          break;
        }
      }
      for(i = Poly.HighPower-n; i >= 0; i--){
        if(Poly.CoeffArray[i] != 0){
          if(i==0){
            printf("%d+", Poly.CoeffArray[i], i);
          }else if(i==1){
            printf("+%dx", Poly.CoeffArray[i]);
          }else{
            printf("+%dx%d", Poly.CoeffArray[i], i);
          }
          // if(i!=0){
          //   printf("+");
          // }
        }
      }
    } 
    printf("\n");
}


/*多项式相加*/
void AddPolynomial(const Polynomial *Poly1, const Polynomial *Poly2, Polynomial *PolySum)
{
  int i;
  ZeroPolynomial(PolySum);
  if (Poly1->HighPower < Poly2->HighPower) /*确定最高位*/
    PolySum->HighPower = Poly2->HighPower;
  else
    PolySum->HighPower = Poly1->HighPower;

  for (i = PolySum->HighPower; i >= 0; i--){
    PolySum->CoeffArray[i] = Poly1->CoeffArray[i] + Poly2->CoeffArray[i];
  }
}


int main()
{
  Polynomial Poly[2 * NUM]; /*待比较的多项式*/
  Polynomial PolySum[NUM]; /*和式*/

  int i;
  /*给N个多项式赋值*/
  InputPolynomial(&Poly[0]);
  InputPolynomial(&Poly[1]);

/*多项式相加，结果存入PolySum中*/
/*然后打印*/
    AddPolynomial(&Poly[0], &Poly[1], &PolySum[0]);
    PrintPolynomial(PolySum[0]);
  return 0;
}