#include <stdio.h>

int main()
{
    int N;
    // length
    printf("Please input array size : \n");
    scanf("%d",&N);
    int arr[N];
    
    // input array element
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    return 0;
}