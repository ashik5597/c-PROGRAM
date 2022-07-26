#include<stdio.h>
int main()
{
    double salary,dea_allow,house_rent,gross_salary;
    printf("The salary is:");
    scanf("%lf",&salary);
    dea_allow = 0.4*salary;
    house_rent = 0.2*salary;
    gross_salary = salary - (dea_allow + house_rent);
    printf("Gross Salary = %.2lf",gross_salary);
    return 0;
}
