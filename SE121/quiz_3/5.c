#include <stdio.h>
#include <math.h>

void armstrong(int n){

    int mod,arms=0;
    int num = n;

    while(n != 0){

        mod = n%10;
        arms += pow(mod,3);
        n /= 10;

    }

    if(arms == num){
        printf("This is armstrong number.\n");
    }
    else{
        printf("This is Not armstrong number.\n");
    }
}


int main()
{
    int n;

    printf("Please input armstrong number : \n");
    scanf("%d",&n);

    armstrong(n);

    return 0;
}