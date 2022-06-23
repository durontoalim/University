#include <stdio.h>


int main()
{
    char ch;
    scanf("%c",&ch);

    if(ch >= 65 && ch <= 90){
        printf("Uppercase latter\n");
    }
    else if(ch >= 97 && ch <= 122){
        printf("Lower case Letter\n");
    }
    else if(ch >= 48 && ch <= 57){
        printf("Number\n");
    }
    else{
        printf("Special Carecter\n");
    }


    return 0;
}