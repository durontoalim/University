#include <stdio.h>

int main()
{
    int arr[5] = {32,23,111,44,55};

    // accending order
    int temp , t = 0, t2 = 0,odd[5],even[5];

    for (int i = 0; i < 5 ; i++)
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