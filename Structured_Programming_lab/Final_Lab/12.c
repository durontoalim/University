#include <stdio.h>

int main()
{

    int arr[] = {32,23,111,44,55};

    int len = sizeof(arr)/sizeof(arr[0]);

    //Insert elements
    printf("Please input insert array element : \n");
    scanf("%d",&arr[len]);


    // output

    for (int i = 0; i < len+1; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}