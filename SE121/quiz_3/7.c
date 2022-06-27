// Name: Md. Abdul Alim
// ID : 221-35-1043
// Section - E
#include <stdio.h>

int main()
{
    int n,mod,reverse=0;

    printf("Please input any digit num : \n");
    scanf("%d",&n);

    int num = n;

    while(num != 0){

        mod = num%10;

        reverse =  reverse * 10 + mod;

        num /= 10;
    }

    printf("Reverse Number : %d\n",reverse);


    return 0;
}
