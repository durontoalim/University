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
    int temp , t = 0, t2 = 0,odd[5],even[5];

    for (int i = 0; i < N ; i++)
    {
        if(arr[i] % 2 == 0){
            even[t++] = arr[i];
        }
        else{
            odd[t2++] = arr[i];
        }    
    }

    // output arr

    for (int i = 0; i < t ; i++)
    {
        printf("Even Num of Elements : %d \n",even[i]);
    }
    
    for (int i = 0; i < t2 ; i++)
    {
        printf("Odd Num of Elements : %d \n",odd[i]);
    }
    
    
    
    return 0;
}