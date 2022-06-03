#include <stdio.h>


int main()
{
    int n= 5;
    int arr[n];

    printf("Please input number of array1 : \n");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    int len = sizeof(arr)/sizeof(arr[0]);

    printf("Reverse array :\n");

    for(int i=len-1; i >=0 ; i--){
        printf("%d ",arr[i]);
    }


    return 0;
}