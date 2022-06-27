// Name: Md. Abdul Alim
// ID : 221-35-1043
// Section - E
#include <stdio.h>

int main()
{
    int n,sum=0,mod;

    printf("Please input any digit num : \n");
    scanf("%d",&n);

    int num = n;

    while(num != 0){

        mod = num%10;
        sum += mod;

        num /= 10;
    }

    printf("your digit numbers sum : %d\n",sum);


    return 0;
}
