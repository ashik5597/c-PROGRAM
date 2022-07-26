/*6. Write a program to check whether a triangle is valid or not, when the three angles of the
triangle are entered through the keyboard. A triangle is valid if the sum of all the three angles is
equal to 180 degrees.*/
#include<stdio.h>
int main(){

    int angel1, angel2, angel3;
    printf("input angel1 angel2 angel3 : ");
    scanf("%d %d %d", &angel1, &angel2, &angel3);

    if (angel1+angel2+angel3==180)
    {
        printf("Triangle is valid");
    }else{
        printf("Triangle is not valid");
    }


    return 0;
}
