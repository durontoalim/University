#include <stdio.h>

int main()
{
    char ch;
    int a,b,mod;

    printf("Please input operator (+,-,*,/,%) : ");

    scanf("%c",&ch);

    printf("Please input two number : ");
    scanf("%d %d",&a, &b);
    

    switch (ch)
    {
    case '+':
        printf("%d + %d = %d",a,b,a+b);
        break;
    case '-':
        printf("%d - %d = %d",a,b,a-b);
        break;

    case '*':
        printf("%d * %d = %d",a,b,a*b);
        break;
    case '/':
        printf("%d / %d = %d",a,b,a/b);
        break;
    
    case '%':
        mod = a%b;
        printf("%d",mod);
        break;
    
    default:
        break;
    }

    return 0;
}