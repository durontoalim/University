#include <stdio.h>
#include <stdbool.h>


int main()
{
    int n= 5;
    int arr[n];
    bool count;

    int find = 5,index;
    count = false;

    printf("Please input number of array1 : \n");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);

        if(arr[i] == find){
            index = i;
            count = true;
        }

    }

    int len = sizeof(arr)/sizeof(arr[0]);

    if(count == 1){
        printf("Find your value: %d and value index position: %d",arr[index],index);
    }


    return 0;
}