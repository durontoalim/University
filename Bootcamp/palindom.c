#include <stdio.h>
#include <stdbool.h>


int main()
{
    int n;
    scanf("%d",&n);

    int reverse=0, mod;

    while(n != 0){
        mod = n%10;

        reverse = reverse * 10 + mod;

        n /= 10;
    }

    printf("%d",reverse);
    


    return 0;
}