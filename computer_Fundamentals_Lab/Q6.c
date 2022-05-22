#include <stdio.h>

int main()

{
    int n,mod,result;
    scanf("%d",&n);

    while(n != 0){
        mod = n%10;
        result = result * 10 + mod;

        n /= 10;

    }
    printf("%d",result);
    return 0;
}
