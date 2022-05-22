#include <stdio.h>


void main()
{
    int number,first,second,count=1,fibo;

    scanf("%d",&number);
    fibo = 1;
    first = 1;
    second = 1;
    do{
        count++;
        printf("%d ",fibo);
        first = second;
        second = fibo;
        fibo = first + second;
    }
    while(count<=number);

    return 0;
}