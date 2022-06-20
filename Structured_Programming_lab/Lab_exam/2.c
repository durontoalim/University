#include <stdio.h>
#include <string.h>

int main()
{
    int a,b;
    double sum,subs,mul,divi;

    scanf("%d %d",&a,&b);

    sum = a+b;
    subs = a-b;
    mul = a*b;
    divi = a/2;

    printf("Addition : %.2lf\n",sum);
    printf("Substraction : %.2lf\n",subs);
    printf("Multiplication  : %.2lf\n",mul);
    printf("Division : %.2lf\n",divi);


    return 0;
    
}