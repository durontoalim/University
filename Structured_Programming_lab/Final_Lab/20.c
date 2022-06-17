#include <stdio.h>
#include <math.h>

int main()
{
    int N,count = 0;

    scanf("%d",&N);

    if(N == 1 || N == 0){
        count = 1;
    }

    for(int i=2; i <=sqrt(N) ; i++){
        if(N%i == 0){
            count = 1;
        }
    }

    if(count == 0){
        printf("%d is a Prime Number \n",N);
    }
    else{
        printf("%d is a Not Prime Number\n",N);
    }
    
    
    return 0;
}