#include <stdio.h>


void fun(int arr[],int count){
    int sum = 0;
    for(int i = 0; i < count ; i++)
    {
        sum += arr[i];
    }

    printf("Elements Sum : %d",sum);

}


int main()
{
    int N;

    printf("Please input N number: \n");
    scanf("%d",&N);

    int count = N;

    int arr[N];
    
    printf("Please input element num array 1: \n");

    for (int i = 0; i < count; i++)
    {
        scanf("%d",&arr[i]);
    }

    fun(arr, count);
    
    return 0;
}