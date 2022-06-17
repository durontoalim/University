#include <stdio.h>

int main()
{
    int arr[3][3],temp;

    // scan matrix

    printf("Plese input 3x3 Matrix : \n");

    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           scanf("%d",&arr[i][j]);
        }
    }

    //output

    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    
    
    return 0;
}