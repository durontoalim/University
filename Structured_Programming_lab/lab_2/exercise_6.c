#include <stdio.h>
int main()
{
    int a,b,c;

    printf("Please Inpur three Angle of Triangle : ");
    scanf("%d %d %d",&a, &b, &c);

    int sum = a+b+c;

    if(sum <= 180){
        printf("%d A triangle is valid ",sum);
    }
    else printf("%d A triangle is invalid ",sum);


    return 0;
}