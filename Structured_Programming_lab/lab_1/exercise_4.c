#include <stdio.h>


int main()
{
    double F,f_to_c;

    printf("Please input Fahrenheit : ");
    scanf("%lf",&F);

    f_to_c = (F-32)/9 * 5;

    printf("%.2lf",f_to_c);
    
    return 0;
}