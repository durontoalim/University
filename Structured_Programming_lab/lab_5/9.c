#include <stdio.h>
#include <stdbool.h>


int main()
{
    int arr[50] = {1,2,3,5};

    int len = 4;

    // delete possition
    
    int del_posi = 3;

    for(int i= del_posi-1 ; i < len-1; i++){
        arr[i] = arr[i+1];
    }
    // arr[del_posi - 1] = 44;

    for(int i=0; i< len-1 ; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}