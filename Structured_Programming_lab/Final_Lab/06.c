#include <stdio.h>

int main()
{
    int n = 5,temp;
    int arr[5] = {3,3,67,8,3};

    int len = sizeof(arr)/ sizeof(arr[0]);

    for (int i = 1; i < len; i++)
    {
        for (int j = 0; j < len-1; j++)
        {
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
    int i, t, j, k;
    for(i=0; i<len; i++)
    {
        t = 1;
 
        for(j=i+1; j<len; j++)
        {
 
            if(arr[i]==arr[j])
            {
                for(k=j; k<len-1; k++)
                {
                    arr[k] = arr[k+1];
                }
 
                len--;
                j--;
                t = 0;
            }
        }

        if( t == 0)
            {
                for(j=i; j< len -1; j++)
                {
                    arr[j] = arr[j+1];
                }
    
                len--;
                i--;
            }
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d ",arr[i]);
    }
    

    return 0;
    
}