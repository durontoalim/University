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

    for (int i = 0; i < N ; i++)
    {
        for (int j = i+1; j < N; j++)
        {
           if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
           }
        }
    }

    //accending order output

    printf("Accending order : ");

    for (int i = 0; i < N; i++)
    {
        printf(" %d",arr[i]);
    }
    
    
    return 0;
}