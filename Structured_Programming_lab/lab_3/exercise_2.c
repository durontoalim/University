#include <stdio.h>

int main()
{
    
    int N,fib=1;
    scanf("%d",&N);

    for(int i=1; i<= N ; i++){
        fib *= i;
    }
    printf("%d",fib);

    return 0;
}