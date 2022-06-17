#include <stdio.h>

int main()
{
    int N,reverse_num = 0, mod,sum = 0;

    printf("Please input six digit number :\n");

    scanf("%d",&N);

    while ( N != 0){
        mod = N%10;
        sum += mod;
        reverse_num = reverse_num * 10 + mod;

        N /= 10;
    }

    printf("Reverse number : %d\n",reverse_num);
    printf("Sum number : %d\n",sum);
    
    
    return 0;
}