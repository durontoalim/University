#include <stdio.h>

int main()
{
    int arr[] = {32,23,111,44,55};

    int len = sizeof(arr)/sizeof(arr[0]);

    // accending order
    int temp ;

    for (int i = 0; i < len ; i++)
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

    //accending order output

    printf("Second Leargest Element : %d",arr[len-2]);
    
    
    return 0;
}