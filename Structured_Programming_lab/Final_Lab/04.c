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
    printf("arr2 : ");
    for (int i = 0; i < count ; i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");
    return 0;
}