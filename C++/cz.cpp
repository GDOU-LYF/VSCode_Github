#include <iostream>

int sum(int a,int b){
    return a+b;
}
double sum (double a,double b){
    return a+b;
}

int main(){


    std::cout<<sum(1,1)<<std::endl;
    std::cout<<sum(1.0,1.2)<<std::endl;
    return 0;
}