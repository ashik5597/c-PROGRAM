#include<stdio.h>
int main ()
{
    int num,sum,d1,d2,d3,d4,d5;
    printf("5 digit value= ");
    scanf("%d",num);

    d1 = num % 10;
    num = num / 10;
    d2 = num % 10;
    num = num / 10;
    d3 = num % 10;
    num = num / 10;
    d4 = num % 10;
    num = num / 10;
    d5 = num % 10;

    sum = d1 + d2 + d3 + d4 + d5;

    printf("The sum of 5 digit is= %d", sum);
    return 0;
}
