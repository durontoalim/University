#include <stdio.h>
int main()
{

    int n, sum=0;
    printf("Please Input a some number : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            sum += i;
        }
    }

    printf("Even number their sum = %d\n",sum);


    return 0;
}