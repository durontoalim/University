#include <stdio.h>

int main()
{
    int N;

    printf("Please input N number: \n");
    scanf("%d",&N);

    int count = N;

    int arr[N];
    
    printf("Please input element num : \n");

    for (int i = 0; i < count; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = count-1; i >= 0 ; i--)
    {
        printf("%d\n",arr[i]);
    }
    
    return 0;
}