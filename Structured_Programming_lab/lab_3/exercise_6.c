#include <stdio.h>
int main()
{

    long long n,sum=0;

    scanf("%d",&n);
    long long arr[n];

    arr[0] = 0;
    arr[1] = 1;

    printf("%lld",arr[0]);
    printf(" %lld",arr[1]);

    for(int i = 2; i<= n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    for(int i = 2; i<= n; i++){
        printf(" %lld",arr[i]);
    }

    return 0;
}