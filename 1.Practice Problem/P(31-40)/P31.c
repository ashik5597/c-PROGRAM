#include<stdio.h>
int main()
{
    double total_amount, profit_amount, price;
    printf("Total amount of 15 items= ");
    scanf("%lf",&total_amount);
    printf("Profit of 15 items= ");
    scanf("%lf", & profit_amount);

    price = (total_amount - profit_amount)  / 15;
    printf("Price per item = %.2lf",price);
    return 0;




}
