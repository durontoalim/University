#include <stdio.h>

int main()
{
    int a;

    printf("Please input Your number :\n");
    scanf("%d",&a);

    switch(a){
        case 80 ... 100 :
            printf("Your marks %d : A+\n",a);
            break;
        case 75 ... 79 :
            printf("Your marks %d : A\n",a);
            break;
        case 70 ... 74 :
            printf("Your marks %d : A-\n",a);
            break;
        case 65 ... 69 :
            printf("Your marks %d : B\n",a);
            break;
        case 60 ... 64 :
            printf("Your marks %d : B-\n",a);
            break;
        case 50 ... 59 :
            printf("Your marks %d : C\n",a);
            break;
        case 40 ... 49 :
            printf("Your marks %d : D\n",a);
            break;
        case 0 ... 39 :
            printf("Your marks %d : F\n",a);
            break;
        default:
            printf("Your Input operator is Invalid");
        
    }

    return 0;
}