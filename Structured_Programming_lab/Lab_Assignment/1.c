#include <stdio.h>
int main()
{

    int n,sum=0;
    printf("Please Input a some number : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        sum += i;
    }

    printf("Natural number sum = %d",sum);


    return 0;
}