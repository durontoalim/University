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

    int len = sizeof(arr)/sizeof(arr[0]);

    // accending order
    int temp ;

    for (int i = 0; i < len ; i++)
    {
        for (int j = i+1; j < len; j++)
        {
           if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
           }
        }
    }

    //accending order output

    printf("Second smallest Element : %d",arr[1]);
    
    
    return 0;
}