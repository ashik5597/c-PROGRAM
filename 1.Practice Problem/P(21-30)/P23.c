#include<stdio.h>
int main()
{
    float marks1, marks2, marks3, marks4, marks5,sum,percentage_of_marks;
    printf("Marks of subject 1:");
    scanf("%f",&marks1);

     printf("Marks of subject 2:");
     scanf("%f",&marks2);

      printf("Marks of subject 3:");
      scanf("%f",&marks3);

       printf("Marks of subject 4:");
       scanf("%f",&marks4);

        printf("Marks of subject 5:");
        scanf("%f",&marks5);

        sum = marks1 + marks2 + marks3 + marks4 + marks5;
        percentage_of_marks = (sum * 100)/500;

        printf("Aggregate marks obtained by student:%.2f \n, Percentage of marks:%.2f,sum,percentage_of_marks");
        return 0;



}
