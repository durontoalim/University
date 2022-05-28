#include <stdio.h>
int main()
{
    double basic_salary,dearness_allowance, house_rent,gross_sallary;

    scanf("%lf",&basic_salary);

    dearness_allowance = basic_salary* .4;
    house_rent = basic_salary * .2;

    gross_sallary = basic_salary - dearness_allowance - house_rent;

    printf("%.2lf",gross_sallary);

    return 0;
}