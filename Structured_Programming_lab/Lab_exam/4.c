#include <stdio.h>
#include <string.h>

int main()
{
    int a,sum = 0,reverse=0,mod;

    scanf("%d",&a);
    int num = a;
    while(num != 0 ){

        mod = num%10;

        sum += mod;

        reverse = reverse * 10 + mod;

        num /= 10;
    }

    printf("Your sum : %d\n",sum);

    printf("reverse : %d\n",reverse);

    


    return 0;
    
}