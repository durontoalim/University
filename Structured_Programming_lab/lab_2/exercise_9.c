#include <stdio.h>
int main()
{

    char ch;

    printf("Input a charecter : ")
    scanf("%c",&ch);

    if(ch>= 65 && ch<=90){
        printf("Uppercase Letter\n");
    }
    else if(ch>= 97 && ch <= 122){
        printf("Lowercase Letter\n");
    }
    else if(ch>= 48 && ch <=57){
        printf("The Case Is Number\n");
    }
    else if(ch >= 0 && ch<=47 || ch>=58 && ch <=64 || ch>= 91 && ch<= 96 || ch>= 123 && ch <=127){
        printf("Special Symbols\n");
    }



    return 0;
}