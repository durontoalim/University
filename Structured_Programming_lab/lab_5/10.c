#include <stdio.h>


int main()
{
    int n= 5;
    int arr[n];

    printf("Please input number of array1 : \n");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);

    }

    int len = sizeof(arr)/ sizeof(arr[0]);

    printf("Odd number : \n");

    for(int i= 0 ; i <= len ; i++){
        if(arr[i]%2 == 1){

            printf("%d ",arr[i]);

        }
    }

    return 0;
}