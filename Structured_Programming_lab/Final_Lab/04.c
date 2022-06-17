#include <stdio.h>

int main()
{
    int N;

    printf("Please input N number: \n");
    scanf("%d",&N);

    int count = N;

    int arr[N];
    int arr2[N];
    
    printf("Please input element num array 1: \n");

    for (int i = 0; i < count; i++)
    {
        scanf("%d",&arr[i]);
        arr2[i] = arr[i];
    }

    for (int i = 0; i < count ; i++)
    {
        printf("%d\n",arr2[i]);
    }
    
    return 0;
}