#include <stdio.h>


int main()
{
    int n,mod,series= 0;
    long long int result=0;

    // print n number of sum
    printf("Please print n number of sum in series : \n");
    scanf("%d",&n);

    //print series
    printf("The series : 1");
    while (n--)
    {
        mod = 1;
        series = series * 10 + mod;

        printf(" %d",series);

        result += series;
    }

    printf("\nThe series sum is : %d\n",result);

    return 0;
    
}