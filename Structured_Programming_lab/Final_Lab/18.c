#include <stdio.h>

int main()
{
    int N,sum = 0;

    scanf("%d",&N);

    for (int i = 1; i <= N; i++)
    {
        if(i%2 == 1){
            sum += i;
        }
    }

    //natural number
    printf("Natural Odd Numbers : ");
    for (int i = 1; i <= N; i++)
    {
        if(i%2 == 1){
            printf("%d ",i);
        }
    }

    printf("\nNatural Odd numbers Sum : %d\n",sum);
    
    
    return 0;
}