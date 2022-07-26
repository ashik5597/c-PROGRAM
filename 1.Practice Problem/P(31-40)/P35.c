/*3. Any year is input through the keyboard. Write a program to determine whether the year is a
leap year or not.*/
#include<stdio.h>
int main(){
    int year;
    printf("Please Enter Your Year:");
    scanf("%d",&year);

    if ((year%4==0)&&(year%400==0)||(year%100!=0)){
        printf("The Year Is Leap Year");
    }
    else {
        printf("The Year Is Not Leap Year");
    }


  return 0;



}
