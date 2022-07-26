#include<stdio.h>
int main()
{
    int num,d1,d2,d3,d4;
    printf("Input fore degit value= ");
    scanf("%d",&num);
    d1 = num % 10;
    num = num / 10;
    d2 = num % 10;
    num = num / 10;
    d3 = num % 10;
    num = num / 10;
    d4 = num % 10;

    sum = d1 + d4;

    printf("The addition is= %d",sum);

    return 0;




}
