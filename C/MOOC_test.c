#include <stdio.h>
int main(){
   int zi,mu;
   scanf("%d/%d",&zi,&mu);
   int temp,a,b;
   a=zi,b=mu;
  while(b>0){
      temp=a%b;
      a=b;
      b=temp;
   }  //辗转相除法求最大公倍数
   printf("%d/%d",zi/a,mu/a);
}