#include <stdio.h>

int main()
{
    int arr[5] = {3,2,1,4,5};
    int arr2[5] = {6,9,8,7,10};

    int arr3[10];

    //merge array

    for (int i = 0; i < 5 ; i++)
    {
        arr3[i] = arr[i];
    }

    int t = 5;
    for (int i = 0; i < 5 ; i++)
    {
        arr3[t++] = arr2[i];
    }

    // deccending order
    int temp ;

    for (int i = 0; i < 10 ; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
           if(arr3[i] < arr3[j]){
                temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
           }
        }
    }

    // output arr
    for (int i = 0; i < 10 ; i++)
    {
        printf("%d ",arr3[i]);
    }
    
    return 0;
}