#include <stdio.h>

int main()
{
    int N;

    printf("Please input N number: \n");
    scanf("%d",&N);
    int arr[N];
    
    printf("Please input element : \n");

    for (int i = 0; i < N; i++)
    {
        scanf("%d",&arr[i]);
    }

    // accending order
    int temp ;

    for (int i = 0; i < 5 ; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
           if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
           }
        }
    }

    // output arr
    printf("Minimum Num of Elements : %d\n",arr[0]);
    printf("Maximum Num of Elements : %d\n",arr[4]);
    
    return 0;
}