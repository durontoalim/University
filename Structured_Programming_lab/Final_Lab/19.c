#include <stdio.h>

int main()
{
    int N;
    double sum = 0.0 , i;

    scanf("%d",&N);

    for ( i = 1; i <= N; i++)
    {
        sum += (1.0/i);
    }

    //natural number
    printf("Harmonic series : 1");
    for (int j = 2; j <= N; j++)
    {
        printf(" + 1/%d",j);
    }

    printf("\nHarmonic numbers Sum : %.2lf\n",sum);
    
    
    return 0;
}