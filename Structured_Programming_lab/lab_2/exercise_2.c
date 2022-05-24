#include <stdio.h>
int main()
{
    int N;

    printf("Please Input Integer Number : ");
    scanf("%d", &N);

    if(N%2 == 0){
        printf("The Number Is Even");
    }
    else{
        printf("The Number Is Odd");
    }
    return 0;
}