#include <stdio.h>

int main()
{
    int n,sum=0;

    printf("Please input integer number : \n");
    scanf("%d",&n);

    printf("Factors number : ");

    for (int i = 1; i < n+1; i++)
    {
        if(n%i == 0){
            printf(" %d",i);
        }
    }

    return 0;
}