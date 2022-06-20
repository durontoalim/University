#include <stdio.h>
#include <string.h>

int main()
{
    float a,b;
    double sum,subs,mul,divi;

    scanf("%f %f",&a,&b);

    sum = a+b;
    subs = a-b;
    mul = a*b;
    divi = a/2;

    printf("Addition : %.2lf\n",sum);
    printf("Substraction : %.2lf\n",subs);


    return 0;
    
}