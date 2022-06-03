#include <stdio.h>


int main()
{
    int n= 5,temp;
    int arr1[n];
    int arr2[n];
    int arr[2*n];

    printf("Please input number of array1 : \n");
    for(int i = 0; i < 5; i++){
        scanf("%d",&arr1[i]);
    }
    printf("Please input number of array2 : \n");
    for(int i = 0; i < 5; i++){
        scanf("%d",&arr2[i]);
    }

    int len1 = sizeof(arr1)/sizeof(arr1[0]);
    int len2 = sizeof(arr2)/sizeof(arr2[0]);

    int total_len = len1+len2;

    for(int i=0; i<len1; i++){
        arr[i] = arr1[i];
    }

    int t = 0;
    for(int i=len1; i< total_len ; i++){
        arr[i] = arr2[t++];
    }

    for(int i=0; i< total_len ; i++){
        printf("%d ",arr[i]);
    }

    


    return 0;
}