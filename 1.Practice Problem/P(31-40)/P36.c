/*4. A five-digit number is entered through the keyboard. Write a program to obtain the reversed
number and to determine whether the original and reversed numbers are equal or not.*/
#include<stdio.h>
int main(){
    int number,reverse_number=0,rem;
    printf("Please input your 5 digit number : ");
    scanf("%d", &number);

    for (int i = 0; i < 5;i++)
    {
        rem = number % 10;
        reverse_number = reverse_number * 10 + rem;
        number = number / 10;
    }
    printf("%d", reverse_number);

    if (reverse_number==number){
        printf("Numbers Are Equal");
    }
     else {
        printf("Numbers Are Not equal");
    }


    return 0;
}
