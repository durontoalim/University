#include <stdio.h>

int main()
{
    int arr[3][3];
    int arr2[3][3];
    int arr3[3][3];

    // scan matrix

    printf("Plese input 3x3 first Matrix : \n");

    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           scanf("%d",&arr[i][j]);
        }
    }

    printf("Plese input 3x3 second Matrix : \n");

    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           scanf("%d",&arr2[i][j]);
        }
    }

    //additional matrix

    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           arr3[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    //output
    printf("\n\n");

    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }

    
    
    return 0;
}