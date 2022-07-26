/* Employee overtime */
#include<stdio.h>
int main(){
    int working_time;
    float overtime_salary;
    printf("please input working time of employee : ");
    scanf("%d", &working_time);

    if (working_time>40)
    {
        overtime_salary = (working_time - 40) * 12*10;
        printf("Overtime salary 10 employee  = %.2f ($)", overtime_salary);
    }else{
        printf("Employee has no overtime");
    }


    return 0;
}
