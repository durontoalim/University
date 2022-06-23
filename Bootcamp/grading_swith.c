#include <stdio.h>

int main()
{
    int a;

    printf("Please input Your number :\n");
    scanf("%d",&a);
    
    int num = a/10;

    switch(num){
        case 10:
            printf("Your marks %d : A+\n",a);
            break;
        case 9:
            printf("Your marks %d : A+\n",a);
            break;
        case 8:
            printf("Your marks %d : A+\n",a);
            break;
        case 7:
            printf("Your marks %d : A\n",a);
            break;
        case 6:
            printf("Your marks %d : B\n",a);
            break;
        case 5:
            printf("Your marks %d : C\n",a);
            break;
        case 4:
            printf("Your marks %d : D\n",a);
            break;
        case 3:
            printf("Your marks %d : F\n",a);
            break;
        default:
            printf("Your Input operator is Invalid");
        
    }

    return 0;
}