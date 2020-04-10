#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

/* 你的代码将被嵌在这里 */
int CountDigit( int number, int digit ){
    int ret=0;
    if(number<0){
        number=-number;
    }
    if(number==0 &&digit==0){
        ret++;
    }
    while(number!=0){
        int tmp=number%10;
        if(tmp==digit){
            ret++;
        }
        number/=10;
    }
    return ret;
}