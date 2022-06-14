#include <stdio.h>

int main()
{
    int arr[5],count,temp;

    int len = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i< len; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i< len ; i++){
        for(int j = i+1; j< len ; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Accending order : ");

    for(int i = 0; i< len; i++){
        printf("%d ",arr[i]);
    }

    printf("\nMin value : %d\n\n",arr[0]);

    for(int i=0; i< len ; i++){
        for(int j = i+1; j< len ; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Decending order : ");

    for(int i = 0; i< len; i++){
        printf("%d ",arr[i]);
    }

    printf("\nMax value : %d",arr[0]);




    return 0;
}