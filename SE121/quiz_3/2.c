#include <stdio.h>

int main()
{
    int n,sum=0;

    printf("Please input any digit num : \n");
    scanf("%d",&n);

    printf("Natural odd number : ");

    for (int i = 1; i < n+1; i++)
    {
        if(i%2 == 1){
            sum += i;
            printf(" %d",i);
        }
    }

    printf("\nOdd natural number sum : %d\n",sum);


    return 0;
}