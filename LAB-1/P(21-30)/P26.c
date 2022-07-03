#include<stdio.h>
int main()
{
     int temp, num1, num2;
     printf("Input number 1 = ");
    scanf("%d", &num1);
    printf("Input number 2 = ");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("Number 1 =%d \nNumber 2= %d ", num1, num2);

   return 0;



}
