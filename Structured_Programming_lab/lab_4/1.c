#include <stdio.h>
#include <math.h>

void factorial(int n){

    printf("Please input factorial Number : ");
    scanf("%d",&n);

    int fact=1;

    for(int i=1; i<= n; i++){
        fact *= i;
    }

    printf("This number Factorial is %d\n",fact);

};


void prime(int n){

    printf("Please input check prime Number : ");

    scanf("%d",&n);

    int count = 0;
    int sq = sqrt(n);

    for(int i = 2; i<= sq ; i++){
        if(n%i == 0){
            count++;
        }
    }

    if(count == 0 ){
        printf("Prime Number\n");
    }
    else{
        printf("Not Prime Number\n");
    }

}

void odd_even(int n){
    printf("Please input Number & check odd or even : ");
    scanf("%d",&n);

    if(n%2 == 0){
        printf("Number is even\n");
    }
    else{
        printf("Number is odd\n");
    }
}


int main()
{
    int n;
    printf("Please input case number : ");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        factorial(n);
        break;
    case 2:
        prime(n);
        break;

    case 3:
        odd_even(n);
        break;
    
    default:
        break;
    }

    return 0;
}