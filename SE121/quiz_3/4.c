// Name: Md. Abdul Alim
// ID : 221-35-1043
// Section - E
#include <stdio.h>
void factorial(int n){

    int fact = 1;

    for(int i=1; i<= n ; i++){
        fact *= i;
    }

    printf("Factorial is %d",fact);
}

int main()
{
    int n;

    printf("Please input factorial number : \n");
    scanf("%d",&n);

    factorial(n);




    return 0;
}
