#include <stdio.h>

int main()
{
    int n,del_posi,len;

    // Length of array
    printf("Please input array length : \n");
    scanf("%d",&len);

    int arr[len];

    //input array element
    printf("Please input array element : \n");
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&arr[i]);
    }
    // array delete position
    del_posi = 3;

    // Deleting array position
    for (int i = del_posi-1; i < len; i++)
    {
        arr[i] = arr[i+1];
    }
    len--;

    //print new array
    for (int i = 0; i < len; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;

}