#include <stdio.h>

int main()
{
    char ch;
    int a,b;

    printf("Please input example : a + b :\n");
    scanf("%d %c %d",&a,&ch,&b);

    switch(ch){
        case '+':
            printf("the sum is %d\n",a+b);
            break;
        case '-':
            printf("the Substraction is %d\n",a-b);
            break;
        case '/':
            printf("the Division is %d\n",a/b);
            break;
        case '*':
            printf("Multiplication %d\n",a*b);
            break;
        case '%':
            printf("Mod is : %d\n",a%b);
            break;
        default:
            printf("Your Input operator is Invalid");
        
    }

    return 0;
}