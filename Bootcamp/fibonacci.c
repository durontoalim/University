#include <stdio.h>


int main()
{
    int N,a,b,fibo;
    scanf("%d",&N);

    a = 0;
    b = 1;

    printf("%d %d ",a,b);

    for (int i = 2; i <= N; i++)
    {
        fibo = a+b;
        a = b;
        b = fibo;

        printf("%d ",fibo);
    }
    


    return 0;
}