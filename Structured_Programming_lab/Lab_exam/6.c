#include <stdio.h>
#include <string.h>

int main()
{
    int a;

    printf("Plese input any year : \n");

    scanf("%d",&a);

    if( a%4 == 0 && (a%400 == 0 || a != 100) ){
        printf("%d is a leap Year\n",a);
    }
    else{
        printf("%d is not a leap Year\n",a);
    }

    return 0;
    
}