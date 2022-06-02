#include <stdio.h>
int main()
{

    long long n,sum=0,temp,count=0;
    printf("Please Input 10 integer number :");
    scanf("%lld",&n);

    while(n != 0){
        temp = n%10;
        sum += temp;
        n /= 10;

        count++;
    }

    printf("10 number sum = %lld\n",sum);

    float average = sum/count;

    printf("10 number average = %.2f",average);


    return 0;
}