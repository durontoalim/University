#include <stdio.h>
int main()
{

    int N;

    printf("Please input any year : ");
    scanf("%d",&N);

    if( (N%400 == 0 || N%100 != 0) && N%4 == 0){
        printf("%d is leap Year",N);
    }
    else printf("%d is not a leap year", N);

    return 0;
}