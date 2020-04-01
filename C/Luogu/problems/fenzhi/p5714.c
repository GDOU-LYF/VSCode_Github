#include <stdio.h>
int main(){
    int m;
    double h,BMI;
    scanf("%d %lf",&m,&h);
    BMI=m/h/h;
    if(BMI<18.5){
        printf("Underweight");
    }else if(BMI>=18.5 &&BMI<24){
        printf("Normal");
    }else if(BMI>=24){
        printf("%.6g\nOverweight",BMI);
        //%.6g 6位有效数字,%.6f 6位小数
    }

    return 0;
}