#include <stdio.h>
#include <stdbool.h>


int main()
{
    int arr[50] = {1,2,3,5};

    int len = 4;

    // insert possition
    int insert_posi = 4;

    for(int i=len-1 ; i>= insert_posi-1; i--){
        arr[i+1] = arr[i];
    }
    arr[insert_posi - 1] = 44;

    for(int i=0; i<= len ; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}